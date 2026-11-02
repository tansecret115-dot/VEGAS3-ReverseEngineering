/* Module: oggplug.dll
   Function: FUN_004038c0
   Address: 004038c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_004038c0(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


