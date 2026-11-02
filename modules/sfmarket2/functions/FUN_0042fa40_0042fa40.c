/* Module: sfmarket2.dll
   Function: FUN_0042fa40
   Address: 0042fa40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0042fa40(undefined4 *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = (LPCVOID)param_1[0x1b];
  *param_1 = &PTR_FUN_0049cafc;
  param_1[0x1a] = 0;
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    param_1[0x1b] = 0;
  }
  FUN_0042e580(param_1);
  return;
}


