/* Module: sfcd.cdd
   Function: FUN_0041e1b0
   Address: 0041e1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041e1b0(undefined4 param_1,int param_2)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = *(LPCVOID *)(param_2 + 0x160);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)(param_2 + 0x160) = 0;
    return 0;
  }
  return 0;
}


