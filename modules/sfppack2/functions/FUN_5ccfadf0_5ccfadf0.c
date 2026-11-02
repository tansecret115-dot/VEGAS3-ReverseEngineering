/* Module: sfppack2.dll
   Function: FUN_5ccfadf0
   Address: 5ccfadf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccfadf0(int param_1)

{
  if (*(int *)(param_1 + 0xb4) < -800) {
    *(undefined4 *)(param_1 + 0xb4) = 0xfffffce0;
    return 0;
  }
  if (-1 < *(int *)(param_1 + 0xb4)) {
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    return 0;
  }
  return 1;
}


