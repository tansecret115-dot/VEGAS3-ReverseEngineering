/* Module: encn3260.dll
   Function: FUN_6648b1d0
   Address: 6648b1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6648b1ff) */

void __fastcall FUN_6648b1d0(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_c = param_1 + 0x10;
  *param_1 = &PTR_FUN_664de190;
  param_1[1] = &PTR_LAB_664de180;
  local_10 = param_1[0x11];
  local_8 = local_c;
  while (local_10 != 0) {
    puVar3 = (undefined4 *)FUN_664bab80(local_10);
    pvVar1 = (void *)*puVar3;
    if (pvVar1 != (void *)0x0) {
      thunk_FUN_664bbcb0((undefined4 *)((int)pvVar1 + 0x18));
      FUN_664ba950((int *)((int)pvVar1 + 4));
      operator_delete(pvVar1);
    }
    FUN_664bab40(&local_10);
  }
  if ((int *)param_1[0x17] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x17] + 4))(1);
  }
  piVar2 = (int *)param_1[0x18];
  if (piVar2 != (int *)0x0) {
    FUN_664bebe0(piVar2);
    operator_delete(piVar2);
  }
  if (*(void **)((int)param_1 + 0x16) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x16));
    *(undefined4 *)((int)param_1 + 0x16) = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
    param_1[3] = 0;
  }
  piVar2 = (int *)param_1[0xe];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0xe] = 0;
  }
  piVar2 = (int *)param_1[0xf];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0xf] = 0;
  }
  piVar2 = (int *)param_1[8];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[8] = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x6e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x6e))(1);
    *(undefined4 *)((int)param_1 + 0x6e) = 0;
  }
  if ((void *)param_1[0xc] != (void *)0x0) {
    operator_delete((void *)param_1[0xc]);
    param_1[0xc] = 0;
  }
  FUN_664ba950(local_8);
  return;
}


