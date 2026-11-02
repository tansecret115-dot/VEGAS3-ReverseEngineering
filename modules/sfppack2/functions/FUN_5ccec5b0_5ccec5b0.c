/* Module: sfppack2.dll
   Function: FUN_5ccec5b0
   Address: 5ccec5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec5b0(int param_1)

{
  if (*(int *)(param_1 + 0x4c) < 10) {
    *(undefined4 *)(param_1 + 0x4c) = 10;
    return 0;
  }
  if (500 < *(int *)(param_1 + 0x4c)) {
    *(undefined4 *)(param_1 + 0x4c) = 500;
    return 0;
  }
  return 1;
}


