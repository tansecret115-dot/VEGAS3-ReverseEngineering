/* Module: mp3plug.dll
   Function: FUN_5f6938c0
   Address: 5f6938c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f6938c0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x24) + 4))(*(int **)(param_1 + 0x24));
  InterlockedIncrement((LONG *)(param_1 + 0x20));
  return *(LONG *)(param_1 + 0x20);
}


