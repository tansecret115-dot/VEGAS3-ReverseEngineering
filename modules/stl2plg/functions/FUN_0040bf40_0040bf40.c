/* Module: stl2plg.dll
   Function: FUN_0040bf40
   Address: 0040bf40
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_0040bf40(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4));
  InterlockedIncrement((LONG *)(param_1 + 8));
  return *(LONG *)(param_1 + 8);
}


