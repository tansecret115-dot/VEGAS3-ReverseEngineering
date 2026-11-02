/* Module: qt4plug.dll
   Function: FUN_5f51eef0
   Address: 5f51eef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f51eef0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = *(int **)(param_1 + 0x14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    FUN_5f51eed0(param_1,*(int **)(param_1 + 8));
    FUN_5f52b4c0(*(int **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_5f51eed0(param_1,*(int **)(param_1 + 0xc));
    FUN_5f52b4c0(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_5f51eed0(param_1,*(int **)(param_1 + 0x10));
    FUN_5f52b4c0(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 0;
}


