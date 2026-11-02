/* Module: vidcap30.exe
   Function: FUN_004a35c0
   Address: 004a35c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004a35c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FARPROC pFVar1;
  int iVar2;
  
  if ((DAT_005c20bc == (HMODULE)0x0) &&
     (DAT_005c20bc = LoadLibraryA("HHCTRL.OCX"), DAT_005c20bc == (HMODULE)0x0)) {
    return 0;
  }
  pFVar1 = GetProcAddress(DAT_005c20bc,"HtmlHelpA");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(DAT_005c20bc);
    return 0;
  }
  iVar2 = (*pFVar1)(param_1,param_2,param_3,param_4);
  return iVar2;
}


