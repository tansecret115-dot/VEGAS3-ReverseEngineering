/* Module: sctplug.dll
   Function: FUN_00404560
   Address: 00404560
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00404560(int *param_1)

{
  HGLOBAL pvVar1;
  int *local_4;
  
  *param_1 = (int)&PTR_LAB_0043257c;
  local_4 = param_1;
  FUN_00404790(param_1);
  if (param_1[0x96] != 0) {
    FUN_00404f30(param_1,&local_4);
    if ((0 < (int)local_4) && (*(int **)(param_1[0x96] + 0x20) != (int *)0x0)) {
      (**(code **)(**(int **)(param_1[0x96] + 0x20) + 0x48))(1);
    }
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x96]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x96]);
    GlobalFree(pvVar1);
  }
  if ((LPCVOID)param_1[0x8c] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x8c]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x8c]);
    GlobalFree(pvVar1);
  }
  if ((int *)param_1[0x97] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x97] + 0x20))(1);
  }
  return;
}


