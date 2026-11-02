/* Module: aifplug.dll
   Function: FUN_5fbd4300
   Address: 5fbd4300
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5fbd4300(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


