/* Module: sfcdi.dll
   Function: FUN_5bf18670
   Address: 5bf18670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5bf18670(int *param_1)

{
  int *pMem;
  HGLOBAL pvVar1;
  
  pMem = FUN_5bf38270(param_1,0);
  if (pMem == (int *)0x0) {
    param_1[9] = 0;
    return 0;
  }
  do {
    pvVar1 = GlobalHandle((LPCVOID)pMem[2]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)pMem[2]);
    GlobalFree(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    pMem = FUN_5bf38270(param_1,0);
  } while (pMem != (int *)0x0);
  param_1[9] = 0;
  return 0;
}


