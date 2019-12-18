# SymStore

This repository contains header files with structures, unions, enums, global variables and functions names from the symbol files for the core Windows operating system components, and tools to help get and compare the files.

*Note: Because there is no correct way to get information about nested unnamed structures and unions, some structures and unions are not the exact copy of the original.*

## How to install tools

### Symbols Explorer

1. Download [Symbols Explorer](http://www.andreybazhan.com/symexp.html).
2. Copy SymExp.exe to a Debugging Tools for Windows folder. For example: C:\Program Files (x86)\Windows Kits\10\Debuggers\x64.

### Symbols Scripts

1. Copy Symbols folder from the Tools folder to "C:\Users\\**{UserName}**\Documents\WindowsPowerShell\Modules".

### Diff

1. Install Visual Studio Editor.
2. Copy Diff.bat from the Tools folder to "C:\Users\\**{UserName}**\AppData\Roaming\Microsoft\Windows\SendTo".

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
Add-ImageFiles -Path "C:\SymStore\Symbols" -Destination "C:\SymStore\Binaries"
Add-ImageFiles -Path "C:\SymStore\Symbols" -Destination "C:\SymStore\Binaries" -Include *.exe
Add-ImageFiles -Path "C:\SymStore\Symbols" -Destination "C:\SymStore\Binaries" -Include hal*.dll
```

## How to get header files

```powershell
New-HeaderFile -FilePath "C:\SymStore\Binaries\ntoskrnl.exe\10.0.17763.316\x64\ntoskrnl.exe" -Destination "C:\SymStore\Include\ntoskrnl.exe"
New-HeaderFiles -Path "C:\SymStore\Binaries" -Destination "C:\SymStore\Include\ntoskrnl.exe" -Include nt*.exe
New-HeaderFiles -Path "C:\SymStore\Binaries" -Destination "C:\SymStore\Include\ntdll.dll" -Include ntdll.dll
New-HeaderFiles -Path "C:\SymStore\Binaries" -Destination "C:\SymStore\Include\hal.dll" -Include hal*.dll
```

## Windows Version Information

Version          | Name
---------------- |------------------------
5.0.2195.7376    | Windows 2000 SP4
5.1.2600.0       | Windows XP
5.1.2600.1106    | Windows XP SP1*
5.1.2600.2180    | Windows XP SP2
5.1.2600.6419    | Windows XP SP3
5.2.3790.0       | Windows Server 2003*
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
10.0.18362.418   | Windows 10 1909**

&ast; Header files are not present because there are no symbol files on the Microsoft symbol server.  
&ast;&ast; Windows 10, versions 1903 and 1909 share a common core operating system and an identical set of system files.
