/* Module: stl2plg.dll
   Function: FUN_0040c4c0
   Address: 0040c4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_0040c4c0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x10) + 4))(*(int **)(param_1 + 0x10));
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


