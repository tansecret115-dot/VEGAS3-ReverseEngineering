/* Module: sftrans1.dll
   Function: FUN_004db410
   Address: 004db410
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_004db410(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x90));
  return *(LONG *)(param_1 + 0x90);
}


