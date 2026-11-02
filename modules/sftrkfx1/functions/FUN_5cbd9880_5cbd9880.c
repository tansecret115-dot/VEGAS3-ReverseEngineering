/* Module: sftrkfx1.dll
   Function: FUN_5cbd9880
   Address: 5cbd9880
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbd9880(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FARPROC pFVar1;
  int iVar2;
  
  if ((DAT_5cc11858 == (HMODULE)0x0) &&
     (DAT_5cc11858 = LoadLibraryA("HHCTRL.OCX"), DAT_5cc11858 == (HMODULE)0x0)) {
    return 0;
  }
  pFVar1 = GetProcAddress(DAT_5cc11858,"HtmlHelpA");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(DAT_5cc11858);
    return 0;
  }
  iVar2 = (*pFVar1)(param_1,param_2,param_3,param_4);
  return iVar2;
}


