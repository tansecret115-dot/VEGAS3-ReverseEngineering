/* Module: encn3260.dll
   Function: FUN_6648bcf0
   Address: 6648bcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_6648bcf0(int param_1)

{
  if (param_1 != -0x40) {
    return *(int *)(param_1 + 0x50) == 0;
  }
  return true;
}


