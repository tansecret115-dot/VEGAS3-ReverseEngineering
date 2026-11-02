/* Module: sfppack2.dll
   Function: FUN_5ccec550
   Address: 5ccec550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec550(int param_1)

{
  if (*(int *)(param_1 + 0x44) < 10) {
    *(undefined4 *)(param_1 + 0x44) = 10;
    return 0;
  }
  if (500 < *(int *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x44) = 500;
    return 0;
  }
  return 1;
}


