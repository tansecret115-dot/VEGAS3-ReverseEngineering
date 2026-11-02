/* Module: stl2plg.dll
   Function: FUN_00402440
   Address: 00402440
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00402440(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x10) + 4))(*(int **)(param_1 + 0x10));
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


