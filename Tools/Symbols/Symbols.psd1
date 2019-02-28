@{
    RootModule = 'Symbols.psm1'
    Author = 'Andrey Bazhan'
    CompanyName = 'www.andreybazhan.com'
    Copyright = '(C) 2019 Andrey Bazhan'
    GUID = '7AE8E587-C4B5-449F-884C-61C66107A7E8'
    ModuleVersion = '1.0'
    PowerShellVersion = '3.0'
    HelpInfoURI = 'https://github.com/AndreyBazhan/SymStore'
    FunctionsToExport = @('Get-Symbols',
                          'Add-ImageFile',
                          'Add-ImageFiles',
                          'New-HeaderFile',
                          'New-HeaderFiles')
}
