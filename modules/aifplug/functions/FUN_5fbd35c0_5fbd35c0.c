/* Module: aifplug.dll
   Function: FUN_5fbd35c0
   Address: 5fbd35c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5fbd35c0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x24) + 4))(*(int **)(param_1 + 0x24));
  InterlockedIncrement((LONG *)(param_1 + 8));
  return *(LONG *)(param_1 + 8);
}


