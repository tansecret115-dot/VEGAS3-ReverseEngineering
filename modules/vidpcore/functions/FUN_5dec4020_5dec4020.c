/* Module: vidpcore.dll
   Function: FUN_5dec4020
   Address: 5dec4020
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5dec4020(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x90));
  return *(LONG *)(param_1 + 0x90);
}


