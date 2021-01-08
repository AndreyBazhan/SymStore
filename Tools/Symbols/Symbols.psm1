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

        if ((Test-Path $Directory) -eq $False) {

            $Null = New-Item -Path $Directory -ItemType Directory
        }

        $Uri = [String]::Format("https://msdl.microsoft.com/download/symbols/{0}/{1}/{2}", $Name, $Id, $Name)
        $OutFile = [System.IO.Path]::Combine($Destination, $Name, $Id, $Name)

        if ((Test-Path $OutFile) -eq $False) {

            Invoke-WebRequest -Uri $Uri -OutFile $OutFile
        }

        if ($Type -eq 1) {

            $Name2, $Id2, $Type2 = $Lines[$i + 1].Split(",")

            Write-Output "$Name2 $Id2"

            $Directory = [System.IO.Path]::Combine($Destination, $Name2, $Id2)

            if ((Test-Path $Directory) -eq $False) {

                $Null = New-Item -Path $Directory -ItemType Directory
            }

            $Uri = [String]::Format("https://msdl.microsoft.com/download/symbols/{0}/{1}/{2}", $Name2, $Id2, $Name2)
            $OutFile = [System.IO.Path]::Combine($Destination, $Name2, $Id2, $Name2)

            try {

                if ((Test-Path $OutFile) -eq $False) {

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

            if ((Test-Path $Destination) -eq $False) {

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

            if ((Test-Path $Destination) -eq $False) {

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
