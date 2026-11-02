/* Module: sfppack3.dll
   Function: FUN_5cc65460
   Address: 5cc65460
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc65460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FARPROC pFVar1;
  int iVar2;
  
  if ((DAT_5cc98658 == (HMODULE)0x0) &&
     (DAT_5cc98658 = LoadLibraryA("HHCTRL.OCX"), DAT_5cc98658 == (HMODULE)0x0)) {
    return 0;
  }
  pFVar1 = GetProcAddress(DAT_5cc98658,"HtmlHelpA");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(DAT_5cc98658);
    return 0;
  }
  iVar2 = (*pFVar1)(param_1,param_2,param_3,param_4);
  return iVar2;
}


