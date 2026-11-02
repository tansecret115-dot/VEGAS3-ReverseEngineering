/* Module: sfcd.cdd
   Function: FUN_0041d7b0
   Address: 0041d7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041d7b0(HSFCD__ *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = *(LPCVOID *)(param_1 + 0x160);
  if (pMem != (LPCVOID)0x0) {
    FUN_0041c370(param_1);
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x160) = 0;
    return 0;
  }
  return 0;
}


