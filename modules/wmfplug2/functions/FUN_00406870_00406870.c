/* Module: wmfplug2.dll
   Function: FUN_00406870
   Address: 00406870
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00406870(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x24) + 4))(*(int **)(param_1 + 0x24));
  InterlockedIncrement((LONG *)(param_1 + 8));
  return *(LONG *)(param_1 + 8);
}


