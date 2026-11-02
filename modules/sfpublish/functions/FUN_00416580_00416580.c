/* Module: sfpublish.dll
   Function: FUN_00416580
   Address: 00416580
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00416580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FARPROC pFVar1;
  int iVar2;
  
  if ((DAT_004419f0 == (HMODULE)0x0) &&
     (DAT_004419f0 = LoadLibraryA("HHCTRL.OCX"), DAT_004419f0 == (HMODULE)0x0)) {
    return 0;
  }
  pFVar1 = GetProcAddress(DAT_004419f0,"HtmlHelpA");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(DAT_004419f0);
    return 0;
  }
  iVar2 = (*pFVar1)(param_1,param_2,param_3,param_4);
  return iVar2;
}


