/* Module: sfppack2.dll
   Function: FUN_5ccec7c0
   Address: 5ccec7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec7c0(int param_1)

{
  if (*(int *)(param_1 + 0x78) < -0xfa) {
    *(undefined4 *)(param_1 + 0x78) = 0xffffff06;
    return 0;
  }
  if (0xfa < *(int *)(param_1 + 0x78)) {
    *(undefined4 *)(param_1 + 0x78) = 0xfa;
    return 0;
  }
  return 1;
}


