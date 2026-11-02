/* Module: sctplug.dll
   Function: FUN_0040c080
   Address: 0040c080
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040c080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FARPROC pFVar1;
  int iVar2;
  
  if ((DAT_0043cab4 == (HMODULE)0x0) &&
     (DAT_0043cab4 = LoadLibraryA("HHCTRL.OCX"), DAT_0043cab4 == (HMODULE)0x0)) {
    return 0;
  }
  pFVar1 = GetProcAddress(DAT_0043cab4,"HtmlHelpA");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(DAT_0043cab4);
    return 0;
  }
  iVar2 = (*pFVar1)(param_1,param_2,param_3,param_4);
  return iVar2;
}


