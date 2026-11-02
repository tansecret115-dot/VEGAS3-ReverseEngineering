/* Module: extmondrv.dll
   Function: FUN_004143c0
   Address: 004143c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004143c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FARPROC pFVar1;
  int iVar2;
  
  if ((DAT_0045b438 == (HMODULE)0x0) &&
     (DAT_0045b438 = LoadLibraryA("HHCTRL.OCX"), DAT_0045b438 == (HMODULE)0x0)) {
    return 0;
  }
  pFVar1 = GetProcAddress(DAT_0045b438,"HtmlHelpA");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(DAT_0045b438);
    return 0;
  }
  iVar2 = (*pFVar1)(param_1,param_2,param_3,param_4);
  return iVar2;
}


