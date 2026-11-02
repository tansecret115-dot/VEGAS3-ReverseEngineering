/* Module: vegas30.exe
   Function: FUN_005b3cc0
   Address: 005b3cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b3cc0(undefined4 param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = (LPCVOID)FUN_005b8630(param_1);
  if (pMem != (LPCVOID)0x0) {
    FUN_005b5180();
    FUN_005b5180();
    FUN_005b7bf0();
    FUN_005b7bf0();
    FUN_005b4800();
    FUN_005b40e0();
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    FUN_005b8640(param_1,0);
    return 0;
  }
  return 0;
}


