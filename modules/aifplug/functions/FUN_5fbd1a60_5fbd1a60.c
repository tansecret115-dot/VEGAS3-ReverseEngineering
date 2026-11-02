/* Module: aifplug.dll
   Function: FUN_5fbd1a60
   Address: 5fbd1a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5fbd1a60(int *param_1)

{
  undefined4 *pMem;
  HGLOBAL pvVar1;
  int *local_4;
  
  *param_1 = (int)&PTR_LAB_5fbff3b0;
  local_4 = param_1;
  FUN_5fbd1ca0(param_1);
  if (param_1[0x92] != 0) {
    FUN_5fbd22d0(param_1,&local_4);
    if ((0 < (int)local_4) && (*(int **)(param_1[0x92] + 0x20) != (int *)0x0)) {
      (**(code **)(**(int **)(param_1[0x92] + 0x20) + 0x48))(1);
    }
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x92]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x92]);
    GlobalFree(pvVar1);
  }
  if ((LPCVOID)param_1[0x88] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x88]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x88]);
    GlobalFree(pvVar1);
    param_1[0x88] = 0;
  }
  pMem = (undefined4 *)param_1[0x93];
  if (pMem != (undefined4 *)0x0) {
    FUN_5fbd35a0(pMem);
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  return;
}


