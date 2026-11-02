/* Module: sfnetmedia.dll
   Function: FUN_00412f10
   Address: 00412f10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00412f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FARPROC pFVar1;
  int iVar2;
  
  if ((DAT_00441ad8 == (HMODULE)0x0) &&
     (DAT_00441ad8 = LoadLibraryA("HHCTRL.OCX"), DAT_00441ad8 == (HMODULE)0x0)) {
    return 0;
  }
  pFVar1 = GetProcAddress(DAT_00441ad8,"HtmlHelpA");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(DAT_00441ad8);
    return 0;
  }
  iVar2 = (*pFVar1)(param_1,param_2,param_3,param_4);
  return iVar2;
}


