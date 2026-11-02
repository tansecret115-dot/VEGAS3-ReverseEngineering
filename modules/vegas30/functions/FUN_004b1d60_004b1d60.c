/* Module: vegas30.exe
   Function: FUN_004b1d60
   Address: 004b1d60
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_004b1d60(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


