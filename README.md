# SymStore

This repository contains header files with structures, unions, enums, global variables and functions names from the symbol files for the core Windows operating system components, and tools to help get and compare the files.

*Note: Because there is no correct way to get information about nested unnamed structures and unions, some structures and unions are not the exact copy of the original.*

## How to install tools

### Symbols Explorer

1. Download [Symbols Explorer](http://www.andreybazhan.com/symexp.html).
2. Copy SymExp.exe to a Debugging Tools for Windows folder. For example: C:\Program Files (x86)\Windows Kits\10\Debuggers\x64.

### Tools

1. Copy SymStore folder from the Tools folder to "C:\Users\\**%UserName%**\Documents\WindowsPowerShell\Modules".
2. Copy Diff.bat from the Tools folder to "C:\Users\\**%UserName%**\AppData\Roaming\Microsoft\Windows\SendTo".
3. Install Visual Studio Editor.

```powershell
Copy-Item -Path SymStore -Destination "C:\Users\$env:UserName\Documents\WindowsPowerShell\Modules" -Recurse
Copy-Item -Path Diff.bat -Destination "C:\Users\$env:UserName\AppData\Roaming\Microsoft\Windows\SendTo"
```

## How to compare header files

1. Select two header files.
2. Right click on the first file and then select "Send To->Diff" from the context menu.

## How to download symbol and image files

```powershell
Get-Symbols -FilePath "C:\SymStore\Manifest.txt" -Destination "C:\SymStore\Symbols"
```
*Note: Unfortunately, some symbol and image files are missing from the Microsoft symbol server and some image files are stored with original name and
SymChk from Debugging Tools for Windows is not able to download those image files.*

## How to store image files by version

```powershell
Add-ImageFile -FilePath "C:\SymStore\Symbols\ntoskrnl.exe\a45bf00aa6f000\ntoskrnl.exe" -Destination "C:\SymStore\Binaries"
Add-ImageFiles -Path "C:\SymStore\Symbols" -Destination "C:\SymStore\Binaries" -Recurse
Add-ImageFiles -Path "C:\SymStore\Symbols" -Destination "C:\SymStore\Binaries" -Include *.exe -Recurse
Add-ImageFiles -Path "C:\SymStore\Symbols" -Destination "C:\SymStore\Binaries" -Include hal*.dll -Recurse
```

## How to get header files

```powershell
New-HeaderFile -FilePath "C:\SymStore\Binaries\ntoskrnl.exe\10.0.17763.316\x64\ntoskrnl.exe" -Destination "C:\SymStore\Include\ntoskrnl.exe"
New-HeaderFiles -Path "C:\SymStore\Binaries" -Destination "C:\SymStore\Include\ntoskrnl.exe" -Include nt*.exe -Recurse
New-HeaderFiles -Path "C:\SymStore\Binaries" -Destination "C:\SymStore\Include\ntdll.dll" -Include ntdll.dll -Recurse
New-HeaderFiles -Path "C:\SymStore\Binaries" -Destination "C:\SymStore\Include\hal.dll" -Include hal*.dll -Recurse
```

## How to update SymStore

```powershell
$StorePath = "C:\SymStore"
$Files = "C:\ImageFiles\19042.508.200927-1902.20h2_release_svc_refresh_CLIENTENTERPRISEEVAL_OEMRET_x64FRE_en-us.iso",
         "C:\ImageFiles\19042.508.200927-1902.20h2_release_svc_refresh_CLIENTENTERPRISEEVAL_OEMRET_x86FRE_en-us.iso"
$RelativePath = "Windows\System32"
$Include = "ntoskrnl.exe", "ntdll.dll"

$Files | % { Update-SymStore -StorePath $StorePath -ImagePath $_ -RelativePath $RelativePath -Include $Include }
```

```powershell
$StorePath = "C:\SymStore"
$Files =
@{
ImagePath = "C:\ImageFiles\19042.508.200927-1902.20h2_release_svc_refresh_CLIENTENTERPRISEEVAL_OEMRET_x64FRE_en-us.iso"
PackagePath = "C:\Packages\windows10.0-kb4586853-x64_9c181d397b4b5d320af7e6f385ebc4bba693a95c.msu",
              "C:\Packages\windows10.0-kb4592438-x64_b6914251264f8f973c3f82f99b894935f33c38e6.msu"
},
@{
ImagePath = "C:\ImageFiles\19042.508.200927-1902.20h2_release_svc_refresh_CLIENTENTERPRISEEVAL_OEMRET_x86FRE_en-us.iso"
PackagePath = "C:\Packages\windows10.0-kb4586853-x86_0468c67fa7cdd1262da75bd97a9f8daac3a4f7c2.msu",
              "C:\Packages\windows10.0-kb4592438-x86_95758bd6e2c3a4a98a19efaa4056213531f84f5c.msu"
}
$RelativePath = "Windows\System32"
$Include = "ntoskrnl.exe", "ntdll.dll"

$Files | % { Update-SymStore -StorePath $StorePath -ImagePath $_.ImagePath -PackagePath $_.PackagePath -RelativePath $RelativePath -Include $Include }
```

## How to update manifest file

```powershell
$SymStore = "C:\SymStore"
Remove-Item -Path "$SymStore\Manifest.txt"
symchk.exe "$SymStore\Binaries" /r /om "$SymStore\Manifest.txt" /ob /od /os
```

## Windows Version Information

Version          | Name
---------------- |------------------------
5.0.2195.7376    | Windows 2000 SP4
5.1.2600.0       | Windows XP
5.1.2600.1106    | Windows XP SP1<sup>1</sup>
5.1.2600.2180    | Windows XP SP2
5.1.2600.6419    | Windows XP SP3
5.2.3790.0       | Windows Server 2003<sup>1</sup>
5.2.3790.1830    | Windows Server 2003 SP1
5.2.3790.3959    | Windows Server 2003 SP2
6.0.6000.16386   | Windows Vista
6.0.6001.18000   | Windows Vista SP1
6.0.6002.18005   | Windows Vista SP2
6.1.7600.16385   | Windows 7
6.1.7601.17514   | Windows 7 SP1
6.2.9200.16384   | Windows 8
6.3.9600.16384   | Windows 8.1
6.3.9600.17031   | Windows 8.1 Update
10.0.10240.16384 | Windows 10 1507
10.0.10586.0     | Windows 10 1511
10.0.14393.0     | Windows 10 1607
10.0.15063.0     | Windows 10 1703
10.0.16299.15    | Windows 10 1709
10.0.17134.1     | Windows 10 1803
10.0.17763.1     | Windows 10 1809
10.0.18362.1     | Windows 10 1903
10.0.18362.418   | Windows 10 1909<sup>2</sup>
10.0.19041.264   | Windows 10 2004<sup>3</sup>
10.0.19041.508   | Windows 10 20H2
10.0.19041.928   | Windows 10 21H1

<sup>1</sup> Header files are not present because there are no symbol files on the Microsoft symbol server.  
<sup>2</sup> Windows 10, versions 1903 and 1909 share a common core operating system and an identical set of system files.  
<sup>3</sup> 64-bit version of ntoskrnl.exe contains implementation of hal.dll.
