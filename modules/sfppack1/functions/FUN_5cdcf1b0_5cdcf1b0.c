/* Module: sfppack1.dll
   Function: FUN_5cdcf1b0
   Address: 5cdcf1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdcf1b0(int param_1)

{
  if (*(int *)(param_1 + 0x20) < -800) {
    *(undefined4 *)(param_1 + 0x20) = 0xfffffce0;
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    return 0;
  }
  return 1;
}


