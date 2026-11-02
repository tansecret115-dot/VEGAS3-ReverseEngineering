/* Module: sfppack2.dll
   Function: FUN_5ccec610
   Address: 5ccec610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec610(int param_1)

{
  if (*(int *)(param_1 + 0x54) < 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    return 0;
  }
  if (5000 < *(int *)(param_1 + 0x54)) {
    *(undefined4 *)(param_1 + 0x54) = 5000;
    return 0;
  }
  return 1;
}


