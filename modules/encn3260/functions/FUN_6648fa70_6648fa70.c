/* Module: encn3260.dll
   Function: FUN_6648fa70
   Address: 6648fa70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648fa70(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_30 [2];
  void *local_28;
  int local_24;
  int local_20;
  int local_1c [2];
  void *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_8 = param_1;
  if (*(void **)(param_1 + 0x1e) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x1e));
  }
  if (*(void **)(param_1 + 0x26) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x26));
  }
  if (*(void **)(param_1 + 0x2a) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x2a));
  }
  if (*(void **)(param_1 + 0x2e) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x2e));
  }
  if (*(void **)(param_1 + 0x3a) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x3a));
  }
  local_30[0] = -(uint)(*(int *)(param_1 + 0x46) != 0);
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_14 = (void *)0x0;
  local_10 = (int *)0x0;
  local_c = 0;
  local_30[1] = local_30[0];
  local_28 = (void *)(param_1 + 0x3e);
  local_24 = 0;
  local_20 = 0;
  if (local_30[0] != 0) {
    FUN_664bbeb0((void *)(param_1 + 0x3e),local_30 + 1,&local_20,&local_24);
  }
  piVar3 = local_30;
  piVar4 = local_1c;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  while (piVar3 = local_10, local_1c[0] != 0) {
    piVar4 = local_10 + 4;
    iVar2 = local_10[4];
    while (iVar2 != 0) {
      pvVar1 = (void *)FUN_664ba9f0(piVar3);
      operator_delete(pvVar1);
      iVar2 = *piVar4;
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)*piVar3)(1);
    }
    local_1c[0] = local_1c[1];
    if (local_1c[1] != 0) {
      FUN_664bbeb0(local_14,local_1c + 1,&local_c,(int *)&local_10);
    }
  }
  if (*(void **)(local_8 + 0x56) != (void *)0x0) {
    operator_delete(*(void **)(local_8 + 0x56));
  }
  return;
}


