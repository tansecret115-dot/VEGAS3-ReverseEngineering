/* Module: encn3260.dll
   Function: FUN_66499160
   Address: 66499160
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66499160(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = (int)&PTR_FUN_664de980;
  param_1[1] = (int)&PTR_LAB_664de970;
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) | 1;
  param_1[2] = (int)&PTR_FUN_664de96c;
  (**(code **)(*(int *)param_1[0x1e] + 4))();
  if (*(void **)((int)param_1 + 0x61) != (void *)0x0) {
    FUN_66498c60(*(void **)((int)param_1 + 0x61),*(int **)((int)param_1 + 0x59));
  }
  if (*(void **)((int)param_1 + 0x65) != (void *)0x0) {
    FUN_66498c60(*(void **)((int)param_1 + 0x65),*(int **)((int)param_1 + 0x59));
  }
  if (*(void **)((int)param_1 + 0x69) != (void *)0x0) {
    FUN_66498c60(*(void **)((int)param_1 + 0x69),*(int **)((int)param_1 + 0x59));
  }
  if (*(int *)((int)param_1 + 0x5d) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x5d) + 4) = 0;
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 0xc))();
    (**(code **)(*(int *)param_1[6] + 0x20))();
    param_1[6] = 0;
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[5] = 0;
  }
  if (*(void **)((int)param_1 + 0x5d) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x5d));
    *(undefined4 *)((int)param_1 + 0x5d) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x59);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x59) = 0;
  }
  iVar2 = *(int *)((int)param_1 + 0x41);
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_664ba9f0((int *)((int)param_1 + 0x31));
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar3 = 0;
    }
    if (piVar3 != (int *)0x0) {
      operator_delete(piVar3);
    }
    iVar2 = *(int *)((int)param_1 + 0x41);
  }
  piVar1 = (int *)param_1[0x1c];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1c] = 0;
  }
  piVar1 = (int *)param_1[0x1d];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1d] = 0;
  }
  if (*(int *)((int)param_1 + 0x61) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x61) + 8) = 0;
    (**(code **)(**(int **)((int)param_1 + 0x61) + 8))(*(int **)((int)param_1 + 0x61));
    *(undefined4 *)((int)param_1 + 0x61) = 0;
  }
  if (*(int *)((int)param_1 + 0x65) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x65) + 8) = 0;
    (**(code **)(**(int **)((int)param_1 + 0x65) + 8))(*(int **)((int)param_1 + 0x65));
    *(undefined4 *)((int)param_1 + 0x65) = 0;
  }
  if (*(int *)((int)param_1 + 0x69) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x69) + 8) = 0;
    (**(code **)(**(int **)((int)param_1 + 0x69) + 8))(*(int **)((int)param_1 + 0x69));
    *(undefined4 *)((int)param_1 + 0x69) = 0;
  }
  (**(code **)(*(int *)param_1[0x1e] + 8))();
  if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1e])(1);
    param_1[0x1e] = 0;
  }
  FUN_664c7020(param_1);
  piVar1 = *(int **)((int)param_1 + 0x7d);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x7d) = 0;
  }
  FUN_664ba950((int *)((int)param_1 + 0x45));
  FUN_664ba950((int *)((int)param_1 + 0x31));
  return;
}


