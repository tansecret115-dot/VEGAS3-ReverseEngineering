/* Module: sfppack2.dll
   Function: FUN_5ccec760
   Address: 5ccec760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec760(int param_1)

{
  if (*(int *)(param_1 + 0x70) < -0xfa) {
    *(undefined4 *)(param_1 + 0x70) = 0xffffff06;
    return 0;
  }
  if (0xfa < *(int *)(param_1 + 0x70)) {
    *(undefined4 *)(param_1 + 0x70) = 0xfa;
    return 0;
  }
  return 1;
}


