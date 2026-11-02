/* Module: vfplugs.dll
   Function: FUN_00482610
   Address: 00482610
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00482610(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x90));
  return *(LONG *)(param_1 + 0x90);
}


