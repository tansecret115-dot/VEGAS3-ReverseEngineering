/* Module: wavplug.dll
   Function: FUN_5f386cf0
   Address: 5f386cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f386cf0(int *param_1)

{
  undefined4 *puVar1;
  HGLOBAL pvVar2;
  int *local_4;
  
  *param_1 = (int)&PTR_LAB_5f3ca974;
  local_4 = param_1;
  FUN_5f386f90(param_1);
  if (param_1[0x96] != 0) {
    FUN_5f387750(param_1,&local_4);
    if (((0 < (int)local_4) && (*(int *)(param_1[0x96] + 0x20) != 0)) &&
       (puVar1 = (undefined4 *)(*(int *)(param_1[0x96] + 0x20) + -0xa8), puVar1 != (undefined4 *)0x0
       )) {
      (**(code **)*puVar1)(1);
    }
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x96]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x96]);
    GlobalFree(pvVar2);
  }
  if ((LPCVOID)param_1[0x8c] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x8c]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x8c]);
    GlobalFree(pvVar2);
  }
  if ((int *)param_1[0x97] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x97] + 0x20))(1);
  }
  return;
}


