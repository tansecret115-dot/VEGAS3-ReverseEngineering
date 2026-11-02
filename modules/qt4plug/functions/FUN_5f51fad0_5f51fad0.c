/* Module: qt4plug.dll
   Function: FUN_5f51fad0
   Address: 5f51fad0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f51fad0(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


