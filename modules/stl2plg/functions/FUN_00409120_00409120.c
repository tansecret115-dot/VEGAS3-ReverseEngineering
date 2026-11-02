/* Module: stl2plg.dll
   Function: FUN_00409120
   Address: 00409120
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00409120(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4));
  InterlockedIncrement((LONG *)(param_1 + 8));
  return *(LONG *)(param_1 + 8);
}


