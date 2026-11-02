/* Module: qt4plug.dll
   Function: FUN_5f51d430
   Address: 5f51d430
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f51d430(int param_1)

{
  (**(code **)(**(int **)(param_1 + 8) + 4))(*(int **)(param_1 + 8));
  InterlockedIncrement((LONG *)(param_1 + 0xc));
  return *(LONG *)(param_1 + 0xc);
}


