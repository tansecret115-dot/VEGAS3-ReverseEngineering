/* Module: sfpagepeel.dll
   Function: FUN_0042af40
   Address: 0042af40
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_0042af40(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x90));
  return *(LONG *)(param_1 + 0x90);
}


