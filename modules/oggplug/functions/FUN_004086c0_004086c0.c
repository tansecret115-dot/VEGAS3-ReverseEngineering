/* Module: oggplug.dll
   Function: FUN_004086c0
   Address: 004086c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_004086c0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 4))(*(int **)(param_1 + 0xc));
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


