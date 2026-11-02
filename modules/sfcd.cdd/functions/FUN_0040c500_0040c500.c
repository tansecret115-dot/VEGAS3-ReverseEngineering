/* Module: sfcd.cdd
   Function: FUN_0040c500
   Address: 0040c500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040c500(undefined4 param_1,int param_2)

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


