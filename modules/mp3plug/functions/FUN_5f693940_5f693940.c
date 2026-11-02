/* Module: mp3plug.dll
   Function: FUN_5f693940
   Address: 5f693940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f693940(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = *(int **)(param_1 + 0x14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    FUN_5f693920(param_1,*(int **)(param_1 + 8));
    FUN_5f6b66f0(*(int **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_5f693920(param_1,*(int **)(param_1 + 0xc));
    FUN_5f6b66f0(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_5f693920(param_1,*(int **)(param_1 + 0x10));
    FUN_5f6b66f0(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    piVar1 = *(int **)(param_1 + 0x2c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    FUN_5f693920(param_1,*(int **)(param_1 + 0x30));
    FUN_5f6b66f0(*(int **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  puVar3 = (undefined4 *)(param_1 + 0x34);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x54);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}


