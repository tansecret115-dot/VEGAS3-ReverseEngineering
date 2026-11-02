/* Module: vegas30k.dll
   Function: FUN_01027df0
   Address: 01027df0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_01027df0(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


