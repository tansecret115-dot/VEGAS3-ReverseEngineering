/* Module: qt4plug.dll
   Function: FUN_5f526a10
   Address: 5f526a10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f526a10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FARPROC pFVar1;
  int iVar2;
  
  if ((DAT_5f5a3edc == (HMODULE)0x0) &&
     (DAT_5f5a3edc = LoadLibraryA("HHCTRL.OCX"), DAT_5f5a3edc == (HMODULE)0x0)) {
    return 0;
  }
  pFVar1 = GetProcAddress(DAT_5f5a3edc,"HtmlHelpA");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(DAT_5f5a3edc);
    return 0;
  }
  iVar2 = (*pFVar1)(param_1,param_2,param_3,param_4);
  return iVar2;
}


