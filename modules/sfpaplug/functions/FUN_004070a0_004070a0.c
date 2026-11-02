/* Module: sfpaplug.dll
   Function: FUN_004070a0
   Address: 004070a0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_004070a0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4));
  InterlockedIncrement((LONG *)(param_1 + 8));
  return *(LONG *)(param_1 + 8);
}


