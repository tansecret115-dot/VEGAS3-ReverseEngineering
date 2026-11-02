/* Module: aviplug.dll
   Function: FUN_5f959430
   Address: 5f959430
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f959430(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


