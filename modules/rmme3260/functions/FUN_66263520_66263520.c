/* Module: rmme3260.dll
   Function: FUN_66263520
   Address: 66263520
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66263520(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_66263ea0(*(int *)(param_1 + 0x1c));
  }
  InterlockedIncrement((LONG *)(param_1 + 0x26));
  return;
}


