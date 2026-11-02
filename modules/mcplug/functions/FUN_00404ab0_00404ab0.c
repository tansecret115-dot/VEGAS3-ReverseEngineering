/* Module: mcplug.dll
   Function: FUN_00404ab0
   Address: 00404ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00404ab0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 8) + 4))(*(int **)(param_1 + 8));
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


