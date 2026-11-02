/* Module: wmfplug2.dll
   Function: FUN_0040a570
   Address: 0040a570
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_0040a570(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 4))(*(int **)(param_1 + 0xc));
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


