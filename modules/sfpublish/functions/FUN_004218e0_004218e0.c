/* Module: sfpublish.dll
   Function: FUN_004218e0
   Address: 004218e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004218e0(undefined4 *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = (LPCVOID)param_1[0x1b];
  *param_1 = &PTR_FUN_0043b07c;
  param_1[0x1a] = 0;
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    param_1[0x1b] = 0;
  }
  FUN_00420420(param_1);
  return;
}


