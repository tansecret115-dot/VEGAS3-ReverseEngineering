/* Module: qt4plug.dll
   Function: FUN_5f51ee70
   Address: 5f51ee70
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f51ee70(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x20) + 4))(*(int **)(param_1 + 0x20));
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


