/* Module: sfppack2.dll
   Function: FUN_5cceca10
   Address: 5cceca10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cceca10(int param_1)

{
  if (*(int *)(param_1 + 0xa8) < 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0xa8)) {
    *(undefined4 *)(param_1 + 0xa8) = 1;
    return 0;
  }
  return 1;
}


