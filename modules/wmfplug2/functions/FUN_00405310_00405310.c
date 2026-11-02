/* Module: wmfplug2.dll
   Function: FUN_00405310
   Address: 00405310
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00405310(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4));
  InterlockedIncrement((LONG *)(param_1 + 8));
  return *(LONG *)(param_1 + 8);
}


