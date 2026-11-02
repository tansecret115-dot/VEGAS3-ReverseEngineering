/* Module: oggplug.dll
   Function: FUN_00409dd0
   Address: 00409dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00409dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FARPROC pFVar1;
  int iVar2;
  
  if ((DAT_00510c1c == (HMODULE)0x0) &&
     (DAT_00510c1c = LoadLibraryA("HHCTRL.OCX"), DAT_00510c1c == (HMODULE)0x0)) {
    return 0;
  }
  pFVar1 = GetProcAddress(DAT_00510c1c,"HtmlHelpA");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(DAT_00510c1c);
    return 0;
  }
  iVar2 = (*pFVar1)(param_1,param_2,param_3,param_4);
  return iVar2;
}


