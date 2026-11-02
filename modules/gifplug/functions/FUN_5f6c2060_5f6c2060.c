/* Module: gifplug.dll
   Function: FUN_5f6c2060
   Address: 5f6c2060
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f6c2060(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x60));
  return *(LONG *)(param_1 + 0x60);
}


