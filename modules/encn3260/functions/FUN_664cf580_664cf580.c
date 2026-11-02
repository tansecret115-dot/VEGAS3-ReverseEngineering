/* Module: encn3260.dll
   Function: FUN_664cf580
   Address: 664cf580
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664cf580(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_664c1ad0(*(int *)(param_1 + 0x1c));
  }
  InterlockedIncrement((LONG *)(param_1 + 0x26));
  return;
}


