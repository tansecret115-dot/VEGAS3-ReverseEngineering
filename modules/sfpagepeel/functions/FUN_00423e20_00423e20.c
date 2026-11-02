/* Module: sfpagepeel.dll
   Function: FUN_00423e20
   Address: 00423e20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00423e20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FARPROC pFVar1;
  int iVar2;
  
  if ((DAT_0047dcb4 == (HMODULE)0x0) &&
     (DAT_0047dcb4 = LoadLibraryA("HHCTRL.OCX"), DAT_0047dcb4 == (HMODULE)0x0)) {
    return 0;
  }
  pFVar1 = GetProcAddress(DAT_0047dcb4,"HtmlHelpA");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(DAT_0047dcb4);
    return 0;
  }
  iVar2 = (*pFVar1)(param_1,param_2,param_3,param_4);
  return iVar2;
}


