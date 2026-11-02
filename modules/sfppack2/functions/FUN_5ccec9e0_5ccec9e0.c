/* Module: sfppack2.dll
   Function: FUN_5ccec9e0
   Address: 5ccec9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec9e0(int param_1)

{
  if (*(int *)(param_1 + 0xa4) < 0) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0xa4)) {
    *(undefined4 *)(param_1 + 0xa4) = 1;
    return 0;
  }
  return 1;
}


