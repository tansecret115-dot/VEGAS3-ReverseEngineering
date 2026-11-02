/* Module: aviplug.dll
   Function: FUN_5f93e130
   Address: 5f93e130
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5f93e130(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x118));
  return *(LONG *)(param_1 + 0x118);
}


