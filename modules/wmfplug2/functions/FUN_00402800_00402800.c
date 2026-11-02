/* Module: wmfplug2.dll
   Function: FUN_00402800
   Address: 00402800
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00402800(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x23c));
  return *(LONG *)(param_1 + 0x23c);
}


