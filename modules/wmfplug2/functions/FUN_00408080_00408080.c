/* Module: wmfplug2.dll
   Function: FUN_00408080
   Address: 00408080
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00408080(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 8));
  return *(LONG *)(param_1 + 8);
}


