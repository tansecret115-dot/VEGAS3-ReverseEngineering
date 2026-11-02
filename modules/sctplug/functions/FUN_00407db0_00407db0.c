/* Module: sctplug.dll
   Function: FUN_00407db0
   Address: 00407db0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00407db0(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return *(LONG *)(param_1 + 4);
}


