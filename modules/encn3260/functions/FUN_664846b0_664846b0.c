/* Module: encn3260.dll
   Function: FUN_664846b0
   Address: 664846b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6648475b) */

undefined4 FUN_664846b0(int param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int local_c;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x122) = 1;
  if (*(int **)(param_1 + 0x170) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x170) + 4))();
  }
  iVar1 = *(int *)(param_1 + 0x14e);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) && (*(int *)(param_1 + 0x48) != 0)) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    (**(code **)(**(int **)(param_1 + 0x48) + 0x14))
              (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x14e) + 0x10));
  }
  piVar2 = *(int **)(param_1 + 0x14e);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0x14e) = 0;
  }
  piVar2 = *(int **)(param_1 + -0x2c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + -0x2c) = 0;
  }
  FUN_6648ae90(*(void **)(param_1 + 0x3c),param_1 + -0x30);
  piVar2 = *(int **)(param_1 + 0x3c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  local_c = *(int *)(param_1 + 0xde);
  local_8 = param_1 + 0xda;
  while (local_c != 0) {
    puVar4 = (undefined4 *)FUN_664bab80(local_c);
    pvVar3 = (void *)*puVar4;
    if (pvVar3 != (void *)0x0) {
      FUN_66483730((int)pvVar3);
      operator_delete(pvVar3);
    }
    FUN_664bab40(&local_c);
  }
  (**(code **)(*(int *)(param_1 + 0xda) + 8))();
  puVar4 = *(undefined4 **)(param_1 + 0x102);
  if (puVar4 != (undefined4 *)0x0) {
    thunk_FUN_664bbcb0(puVar4);
    operator_delete(puVar4);
    *(undefined4 *)(param_1 + 0x102) = 0;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x106);
  if (puVar4 != (undefined4 *)0x0) {
    thunk_FUN_664bbcb0(puVar4);
    operator_delete(puVar4);
    *(undefined4 *)(param_1 + 0x106) = 0;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x10a);
  if (puVar4 != (undefined4 *)0x0) {
    thunk_FUN_664bbcb0(puVar4);
    operator_delete(puVar4);
    *(undefined4 *)(param_1 + 0x10a) = 0;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x10e);
  if (puVar4 != (undefined4 *)0x0) {
    thunk_FUN_664bbcb0(puVar4);
    operator_delete(puVar4);
    *(undefined4 *)(param_1 + 0x10e) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x58);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x38);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_6648a0f0((undefined4 *)(param_1 + 0x112));
  FUN_6648a0f0((undefined4 *)(param_1 + 0x116));
  piVar2 = *(int **)(param_1 + 0x142);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0x142) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x14a);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 0x14a) = 0;
  }
  if (*(int *)(param_1 + 0x152) != 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x14))
              (*(int **)(param_1 + 0x48),*(int *)(param_1 + 0x152));
    *(undefined4 *)(param_1 + 0x152) = 0;
  }
  if (*(int **)(param_1 + 0x170) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x170) + 8))();
  }
  return 0;
}


