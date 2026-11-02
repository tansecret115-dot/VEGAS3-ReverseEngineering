/* Module: mp3plug.dll
   Function: FUN_5f694880
   Address: 5f694880
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f694880(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


