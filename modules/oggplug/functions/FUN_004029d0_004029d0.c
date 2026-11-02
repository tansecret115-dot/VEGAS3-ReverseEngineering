/* Module: oggplug.dll
   Function: FUN_004029d0
   Address: 004029d0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_004029d0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x24) + 4))(*(int **)(param_1 + 0x24));
  InterlockedIncrement((LONG *)(param_1 + 0x20));
  return *(LONG *)(param_1 + 0x20);
}


