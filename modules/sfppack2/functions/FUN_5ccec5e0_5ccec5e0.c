/* Module: sfppack2.dll
   Function: FUN_5ccec5e0
   Address: 5ccec5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec5e0(int param_1)

{
  if (*(int *)(param_1 + 0x50) < 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    return 0;
  }
  if (5000 < *(int *)(param_1 + 0x50)) {
    *(undefined4 *)(param_1 + 0x50) = 5000;
    return 0;
  }
  return 1;
}


