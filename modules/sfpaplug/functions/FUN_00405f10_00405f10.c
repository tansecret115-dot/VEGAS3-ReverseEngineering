/* Module: sfpaplug.dll
   Function: FUN_00405f10
   Address: 00405f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00405f10(int *param_1)

{
  HGLOBAL pvVar1;
  int *local_4;
  
  *param_1 = (int)&PTR_LAB_0044e774;
  local_4 = param_1;
  FUN_00406170(param_1);
  if (param_1[0x9c] != 0) {
    FUN_00406880(param_1,&local_4);
    if ((0 < (int)local_4) && (*(int **)(param_1[0x9c] + 0x20) != (int *)0x0)) {
      (**(code **)(**(int **)(param_1[0x9c] + 0x20) + 0x48))(1);
    }
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x9c]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x9c]);
    GlobalFree(pvVar1);
  }
  if ((LPCVOID)param_1[0x88] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x88]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x88]);
    GlobalFree(pvVar1);
    param_1[0x88] = 0;
  }
  if ((int *)param_1[0x9d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x9d] + 0x20))(1);
  }
  return;
}


