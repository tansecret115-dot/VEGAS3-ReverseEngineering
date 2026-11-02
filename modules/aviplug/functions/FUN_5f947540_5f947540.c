/* Module: aviplug.dll
   Function: FUN_5f947540
   Address: 5f947540
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f947540(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x19c));
  (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4));
  return *(LONG *)(param_1 + 0x19c);
}


