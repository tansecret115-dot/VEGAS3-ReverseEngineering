/* Module: sfppack2.dll
   Function: FUN_5ccfae30
   Address: 5ccfae30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccfae30(int param_1)

{
  if (*(int *)(param_1 + 0xb8) < 10) {
    *(undefined4 *)(param_1 + 0xb8) = 10;
    return 0;
  }
  if (500 < *(int *)(param_1 + 0xb8)) {
    *(undefined4 *)(param_1 + 0xb8) = 500;
    return 0;
  }
  return 1;
}


