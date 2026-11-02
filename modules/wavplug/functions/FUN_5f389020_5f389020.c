/* Module: wavplug.dll
   Function: FUN_5f389020
   Address: 5f389020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f389020(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_5f389000(param_1,*(int **)(param_1 + 0xc));
    FUN_5f3a2ac0(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    FUN_5f389000(param_1,*(int **)(param_1 + 0x10));
    FUN_5f3a2ac0(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_5f389000(param_1,*(int **)(param_1 + 0x14));
    FUN_5f3a2ac0(*(int **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    piVar1 = *(int **)(param_1 + 0x24);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    FUN_5f389000(param_1,*(int **)(param_1 + 0x28));
    FUN_5f3a2ac0(*(int **)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  puVar3 = (undefined4 *)(param_1 + 0x2c);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x4c);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  return;
}


