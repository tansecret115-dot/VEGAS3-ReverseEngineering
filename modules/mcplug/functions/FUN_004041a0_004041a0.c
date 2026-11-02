/* Module: mcplug.dll
   Function: FUN_004041a0
   Address: 004041a0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_004041a0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4));
  InterlockedIncrement((LONG *)(param_1 + 8));
  return *(LONG *)(param_1 + 8);
}


