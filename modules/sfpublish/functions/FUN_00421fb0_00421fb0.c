/* Module: sfpublish.dll
   Function: FUN_00421fb0
   Address: 00421fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421fb0(int param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = *(LPCVOID *)(param_1 + 4);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


