/* Module: aifplug.dll
   Function: FUN_5fbd8ad0
   Address: 5fbd8ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd8ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FARPROC pFVar1;
  int iVar2;
  
  if ((DAT_5fc09694 == (HMODULE)0x0) &&
     (DAT_5fc09694 = LoadLibraryA("HHCTRL.OCX"), DAT_5fc09694 == (HMODULE)0x0)) {
    return 0;
  }
  pFVar1 = GetProcAddress(DAT_5fc09694,"HtmlHelpA");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(DAT_5fc09694);
    return 0;
  }
  iVar2 = (*pFVar1)(param_1,param_2,param_3,param_4);
  return iVar2;
}


