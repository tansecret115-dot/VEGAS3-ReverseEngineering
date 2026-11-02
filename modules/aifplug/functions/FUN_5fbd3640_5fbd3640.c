/* Module: aifplug.dll
   Function: FUN_5fbd3640
   Address: 5fbd3640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbd3640(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_5fbd3620(param_1,*(int **)(param_1 + 0xc));
    FUN_5fbe6330(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_5fbd3620(param_1,*(int **)(param_1 + 0x10));
    FUN_5fbe6330(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = *(int **)(param_1 + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    FUN_5fbd3620(param_1,*(int **)(param_1 + 0x14));
    FUN_5fbe6330(*(int **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_5fbd3620(param_1,*(int **)(param_1 + 0x2c));
    FUN_5fbe6330(*(int **)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return 0;
}


