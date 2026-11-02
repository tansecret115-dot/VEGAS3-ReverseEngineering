/* Module: qt4plug.dll
   Function: FUN_5f51bb30
   Address: 5f51bb30
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f51bb30(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 4))(*(int **)(param_1 + 0xc));
  InterlockedIncrement((LONG *)(param_1 + 0x10));
  return *(LONG *)(param_1 + 0x10);
}


