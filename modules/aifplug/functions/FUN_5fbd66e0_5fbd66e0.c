/* Module: aifplug.dll
   Function: FUN_5fbd66e0
   Address: 5fbd66e0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5fbd66e0(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x10));
  return *(LONG *)(param_1 + 0x10);
}


