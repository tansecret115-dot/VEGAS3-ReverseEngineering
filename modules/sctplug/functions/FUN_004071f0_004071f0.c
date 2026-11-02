/* Module: sctplug.dll
   Function: FUN_004071f0
   Address: 004071f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004071f0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x1c4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    FUN_004071d0(param_1,*(int **)(param_1 + 0xc));
    FUN_0041cad0(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    FUN_004071d0(param_1,*(int **)(param_1 + 0x10));
    FUN_0041cad0(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = *(int **)(param_1 + 0x1c8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    FUN_004071d0(param_1,*(int **)(param_1 + 0x14));
    FUN_0041cad0(*(int **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    piVar1 = *(int **)(param_1 + 0x1cc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    FUN_004071d0(param_1,*(int **)(param_1 + 0x1d0));
    FUN_0041cad0(*(int **)(param_1 + 0x1d0));
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  puVar3 = (undefined4 *)(param_1 + 0x1d4);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 500);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  return;
}


