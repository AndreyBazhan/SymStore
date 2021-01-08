Function Get-Symbols(
    [Parameter(Mandatory = $True)] [String] $FilePath,
    [Parameter(Mandatory = $True)] [String] $Destination
    )
{
    $Lines = Get-Content -Path $FilePath

    for ($i = 0; $i -lt $Lines.Length; $i++) {

        $Name, $Id, $Type = $Lines[$i].Split(",")

        Write-Output "$Name $Id"

        $Directory = [System.IO.Path]::Combine($Destination, $Name, $Id)

        if (!(Test-Path $Directory)) {

            $Null = New-Item -Path $Directory -ItemType Directory
        }

        $Uri = [String]::Format("https://msdl.microsoft.com/download/symbols/{0}/{1}/{2}", $Name, $Id, $Name)
        $OutFile = [System.IO.Path]::Combine($Destination, $Name, $Id, $Name)

        if (!(Test-Path $OutFile)) {

            Invoke-WebRequest -Uri $Uri -OutFile $OutFile
        }

        if ($Type -eq 1) {

            $Name2, $Id2, $Type2 = $Lines[$i + 1].Split(",")

            Write-Output "$Name2 $Id2"

            $Directory = [System.IO.Path]::Combine($Destination, $Name2, $Id2)

            if (!(Test-Path $Directory)) {

                $Null = New-Item -Path $Directory -ItemType Directory
            }

            $Uri = [String]::Format("https://msdl.microsoft.com/download/symbols/{0}/{1}/{2}", $Name2, $Id2, $Name2)
            $OutFile = [System.IO.Path]::Combine($Destination, $Name2, $Id2, $Name2)

            try {

                if (!(Test-Path $OutFile)) {

                    Invoke-WebRequest -Uri $Uri -OutFile $OutFile
                }
            }
            catch [System.Net.WebException] {

                $FileName, $Extension = $Name.Split(".")
                $FileName2, $Extension2 = $Name2.Split(".")

                $Name2 = [String]::Format("{0}.{1}", $FileName, $Extension2)

                Write-Host "$Name2" -ForegroundColor Green

                $Uri = [String]::Format("https://msdl.microsoft.com/download/symbols/{0}/{1}/{2}", $Name2, $Id2, $Name2)

                Invoke-WebRequest -Uri $Uri -OutFile $OutFile
            }

            $i += 1
        }
    }
}

Function Add-ImageFile(
    [Parameter(Mandatory = $True)] [String] $FilePath,
    [Parameter(Mandatory = $True)] [String] $Destination
    )
{
    $BufferSize = 4096

    $Buffer = New-Object Byte[] $BufferSize

    $FileStream = [System.IO.File]::OpenRead($FilePath)

    if ($FileStream.Read($Buffer, 0, $BufferSize)) {

        $Signature = [System.BitConverter]::ToUInt16($Buffer, 0)

        if ($Signature -eq 0x5A4D) {

            $HeadersOffset = [System.BitConverter]::ToUInt32($Buffer, 0x3C)
            $Machine = [System.BitConverter]::ToUInt16($Buffer, $HeadersOffset + 0x4)

            switch ($Machine) {

            0x014C { $Architecture = "x86"; break }
            0x8664 { $Architecture = "x64"; break }
            0xAA64 { $Architecture = "arm64"; break }
            default { $Architecture = "Unknown"; break }
            }

            $VersionInfo = [System.Diagnostics.FileVersionInfo]::GetVersionInfo($FilePath)

            $FileVersion = [String]::Format("{0}.{1}.{2}.{3}", $VersionInfo.FileMajorPart, $VersionInfo.FileMinorPart, $VersionInfo.FileBuildPart, $VersionInfo.FilePrivatePart)

            $FileName = Split-Path -Path $FilePath -Leaf

            $Destination = [System.IO.Path]::Combine($Destination, $FileName, $FileVersion, $Architecture)

            if (!(Test-Path $Destination)) {

                $Null = New-Item -Path $Destination -ItemType Directory
            }

            Write-Output "Copying $FilePath to $Destination\$FileName"

            Copy-Item -Path $FilePath -Destination $Destination
        }
        else {

            Write-Error "$FilePath is not an image file."
        }
    }

    $FileStream.Close()
}

Function Add-ImageFiles(
    [Parameter(Mandatory = $True)] [String] $Path,
    [Parameter(Mandatory = $True)] [String] $Destination,
    [Parameter(Mandatory = $False)] [String[]] $Include = @("*.exe", "*.dll", "*.sys"),
    [Parameter(Mandatory = $False)] [Switch] $Recurse
    )
{
    if (!$Recurse) {

        $Path = [System.IO.Path]::Combine($Path, "*")
    }

    $Files = Get-ChildItem -Path $Path -Include $Include -File -Recurse:$Recurse

    foreach ($File in $Files) {

        Add-ImageFile -FilePath $File -Destination $Destination
    }
}

Function New-HeaderFile(
    [Parameter(Mandatory = $True)] [String] $FilePath,
    [Parameter(Mandatory = $True)] [String] $Destination
    )
{
    $BufferSize = 4096

    $Buffer = New-Object Byte[] $BufferSize

    $FileStream = [System.IO.File]::OpenRead($FilePath)

    if ($FileStream.Read($Buffer, 0, $BufferSize)) {

        $Signature = [System.BitConverter]::ToUInt16($Buffer, 0)

        if ($Signature -eq 0x5A4D) {

            $HeadersOffset = [System.BitConverter]::ToUInt32($Buffer, 0x3C)
            $Machine = [System.BitConverter]::ToUInt16($Buffer, $HeadersOffset + 0x4)

            switch ($Machine) {

            0x014C { $Architecture = "x86"; break }
            0x8664 { $Architecture = "x64"; break }
            0xAA64 { $Architecture = "arm64"; break }
            default { $Architecture = "Unknown"; break }
            }

            $VersionInfo = [System.Diagnostics.FileVersionInfo]::GetVersionInfo($FilePath)

            $FileVersion = [String]::Format("{0}.{1}.{2}.{3}", $VersionInfo.FileMajorPart, $VersionInfo.FileMinorPart, $VersionInfo.FileBuildPart, $VersionInfo.FilePrivatePart)

            $FileName = Split-Path -Path $FilePath -Leaf
            $FileName = "$FileName-$FileVersion-$Architecture.h"

            $HeaderFile = [System.IO.Path]::Combine($Destination, $FileName)

            if (!(Test-Path $Destination)) {

                $Null = New-Item -Path $Destination -ItemType Directory
            }

            Write-Output "Creating $HeaderFile from $FilePath"

            SymExp.exe $FilePath | Out-File -Encoding ASCII $HeaderFile
        }
        else {

            Write-Error "$FilePath is not an image file."
        }
    }

    $FileStream.Close()
}

Function New-HeaderFiles(
    [Parameter(Mandatory = $True)] [String] $Path,
    [Parameter(Mandatory = $True)] [String] $Destination,
    [Parameter(Mandatory = $False)] [String[]] $Include = @("*.exe", "*.dll", "*.sys"),
    [Parameter(Mandatory = $False)] [Switch] $Recurse
    )
{
    if (!$Recurse) {

        $Path = [System.IO.Path]::Combine($Path, "*")
    }

    $Files = Get-ChildItem -Path $Path -Include $Include -File -Recurse:$Recurse

    foreach ($File in $Files) {

        New-HeaderFile -FilePath $File -Destination $Destination
    }
}

Function Update-SymStore(
    [Parameter(Mandatory = $True)] [String] $StorePath,
    [Parameter(Mandatory = $True)] [String] $ImagePath,
    [Parameter(Mandatory = $False)] [String[]] $PackagePath,
    [Parameter(Mandatory = $False)] [String[]] $RelativePath,
    [Parameter(Mandatory = $False)] [String[]] $Include = @("*.exe", "*.dll", "*.sys"),
    [Parameter(Mandatory = $False)] [UInt32] $Index = 1,
    [Parameter(Mandatory = $False)] [Switch] $Recurse
    )
{
    if (!(Test-Path $StorePath)) {

        throw "Store directory '$StorePath' does not exist."
    }

    if (!(Test-Path $ImagePath)) {

        throw "Image file '$ImagePath' does not exist."
    }

    foreach ($Path in $PackagePath) {

        if (!(Test-Path $Path)) {

            throw "Package file '$Path' does not exist."
        }
    }

    if (!$Recurse) {

        for ($i = 0; $i -lt $RelativePath.Length; $i++) {

            $RelativePath[$i] = [System.IO.Path]::Combine($RelativePath[$i], "*")
        }
    }

    try {

        $MountDirectory = New-Item -Path "$env:SystemDrive\$(New-Guid)" -ItemType Directory -ErrorAction Stop

        $DiskImage = Mount-DiskImage -ImagePath $ImagePath -PassThru -ErrorAction Stop

        $DriveLetter = (Get-Volume -DiskImage $DiskImage).DriveLetter

        $WindowsImage = Mount-WindowsImage -ImagePath "${DriveLetter}:\sources\install.wim" -Path $MountDirectory -ReadOnly -Index:$Index -ErrorAction Stop

        $Location = Push-Location $MountDirectory -PassThru -ErrorAction Stop

        $Files = Get-ChildItem -Path $RelativePath -Include $Include -File -Recurse:$Recurse

        if ($Files) {

            if ($PackagePath) {

                foreach ($Path in $PackagePath) {

                    Add-WindowsPackage -Path $MountDirectory -PackagePath $Path -ErrorAction Stop

                    foreach ($File in $Files) {

                        Add-ImageFile -FilePath $File.FullName -Destination "$StorePath\Binaries"
                        New-HeaderFile -FilePath $File.FullName -Destination "$StorePath\Include\$($File.Name)"
                    }
                }
            }
            else {

                foreach ($File in $Files) {

                    Add-ImageFile -FilePath $File.FullName -Destination "$StorePath\Binaries"
                    New-HeaderFile -FilePath $File.FullName -Destination "$StorePath\Include\$($File.Name)"
                }
            }
        }
    }
    finally {

        if ($Location) {

            Pop-Location
        }

        if ($WindowsImage) {

            Dismount-WindowsImage -Path $MountDirectory -Discard
        }

        if ($DiskImage) {

            Dismount-DiskImage -ImagePath $ImagePath
        }

        if ($MountDirectory) {

            Remove-Item -Path $MountDirectory
        }
    }
}
