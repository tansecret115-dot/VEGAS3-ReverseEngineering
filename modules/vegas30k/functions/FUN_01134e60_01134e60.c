/* Module: vegas30k.dll
   Function: FUN_01134e60
   Address: 01134e60
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_01134e60(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x90));
  return *(LONG *)(param_1 + 0x90);
}


