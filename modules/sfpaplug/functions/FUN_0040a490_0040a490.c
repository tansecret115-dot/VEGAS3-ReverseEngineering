/* Module: sfpaplug.dll
   Function: FUN_0040a490
   Address: 0040a490
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_0040a490(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


