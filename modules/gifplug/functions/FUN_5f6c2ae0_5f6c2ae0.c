/* Module: gifplug.dll
   Function: FUN_5f6c2ae0
   Address: 5f6c2ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f6c2ae0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 4))(*(int **)(param_1 + 0x14));
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


