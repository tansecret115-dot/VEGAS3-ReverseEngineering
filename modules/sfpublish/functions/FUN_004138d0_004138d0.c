/* Module: sfpublish.dll
   Function: FUN_004138d0
   Address: 004138d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004138d0(undefined4 *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = (LPCVOID)param_1[8];
  *param_1 = &PTR_LAB_004362f0;
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    param_1[8] = 0;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0;
  return;
}


