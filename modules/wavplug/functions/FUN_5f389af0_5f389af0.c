/* Module: wavplug.dll
   Function: FUN_5f389af0
   Address: 5f389af0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f389af0(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


