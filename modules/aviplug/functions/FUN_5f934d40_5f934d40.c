/* Module: aviplug.dll
   Function: FUN_5f934d40
   Address: 5f934d40
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f934d40(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


