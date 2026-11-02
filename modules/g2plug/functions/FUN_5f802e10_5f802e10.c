/* Module: g2plug.dll
   Function: FUN_5f802e10
   Address: 5f802e10
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f802e10(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


