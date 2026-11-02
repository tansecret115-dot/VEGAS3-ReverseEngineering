/* Module: wmfplug2.dll
   Function: FUN_00408680
   Address: 00408680
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00408680(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


