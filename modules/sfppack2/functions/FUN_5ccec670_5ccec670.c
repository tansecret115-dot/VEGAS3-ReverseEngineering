/* Module: sfppack2.dll
   Function: FUN_5ccec670
   Address: 5ccec670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec670(int param_1)

{
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    return 0;
  }
  if (5000 < *(int *)(param_1 + 0x5c)) {
    *(undefined4 *)(param_1 + 0x5c) = 5000;
    return 0;
  }
  return 1;
}


