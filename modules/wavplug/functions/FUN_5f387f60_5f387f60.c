/* Module: wavplug.dll
   Function: FUN_5f387f60
   Address: 5f387f60
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f387f60(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4));
  InterlockedIncrement((LONG *)(param_1 + 8));
  return *(LONG *)(param_1 + 8);
}


