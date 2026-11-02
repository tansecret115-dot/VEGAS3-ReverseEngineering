/* Module: wavplug.dll
   Function: FUN_5f388fa0
   Address: 5f388fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f388fa0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 4))(*(int **)(param_1 + 0x18));
  InterlockedIncrement((LONG *)(param_1 + 8));
  return *(LONG *)(param_1 + 8);
}


