/* Module: vfplugs.dll
   Function: FUN_0046f0d0
   Address: 0046f0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0046f0d0(undefined4 *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = (LPCVOID)param_1[0x17];
  *param_1 = &PTR_LAB_0048f250;
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    param_1[0x17] = 0;
  }
  return;
}


