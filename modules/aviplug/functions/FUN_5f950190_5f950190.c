/* Module: aviplug.dll
   Function: FUN_5f950190
   Address: 5f950190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f950190(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}


