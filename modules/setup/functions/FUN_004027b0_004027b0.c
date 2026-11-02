/* Module: Setup.exe
   Function: FUN_004027b0
   Address: 004027b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004027b0(void)

{
  UINT UVar1;
  
  GetPrivateProfileStringA("InstallFlags","MsiOptions","",&DAT_00447d28,0x104,&DAT_004476dc);
  GetPrivateProfileStringA("InstallFlags","DefaultDest","",(LPSTR)&DAT_00447c1c,0x104,&DAT_004476dc)
  ;
  UVar1 = GetPrivateProfileIntA("InstallFlags","ForceUninstall",0,&DAT_004476dc);
  DAT_00447d20 = (uint)(UVar1 == 1);
  UVar1 = GetPrivateProfileIntA("InstallFlags","OnlyInstallNT_2K",0,&DAT_004476dc);
  DAT_00447d24 = (uint)(UVar1 == 1);
  UVar1 = GetPrivateProfileIntA("InstallFlags","UpgradeOnly",0,&DAT_004476dc);
  DAT_00448648 = (uint)(UVar1 == 1);
  return 0;
}


