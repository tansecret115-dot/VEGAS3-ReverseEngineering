/* Module: aviplug.dll
   Function: FUN_5f944a80
   Address: 5f944a80
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f944a80(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x1a0));
  (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4));
  return *(LONG *)(param_1 + 0x1a0);
}


