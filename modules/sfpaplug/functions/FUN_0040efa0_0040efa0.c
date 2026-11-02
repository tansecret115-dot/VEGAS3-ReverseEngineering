/* Module: sfpaplug.dll
   Function: FUN_0040efa0
   Address: 0040efa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040efa0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_0040ef80(param_1,*(int **)(param_1 + 0xc));
    FUN_0042b9d0(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    FUN_0040ef80(param_1,*(int **)(param_1 + 0x10));
    FUN_0042b9d0(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_0040ef80(param_1,*(int **)(param_1 + 0x14));
    FUN_0042b9d0(*(int **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}


