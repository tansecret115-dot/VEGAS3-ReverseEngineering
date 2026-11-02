/* Module: sfppack2.dll
   Function: FUN_5ccecaa0
   Address: 5ccecaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccecaa0(int param_1)

{
  if (*(int *)(param_1 + 0xa0) < 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0xa0)) {
    *(undefined4 *)(param_1 + 0xa0) = 1;
    return 0;
  }
  return 1;
}


