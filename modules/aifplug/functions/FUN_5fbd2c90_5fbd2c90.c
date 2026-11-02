/* Module: aifplug.dll
   Function: FUN_5fbd2c90
   Address: 5fbd2c90
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5fbd2c90(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4));
  InterlockedIncrement((LONG *)(param_1 + 8));
  return *(LONG *)(param_1 + 8);
}


