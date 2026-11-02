/* Module: sfppack2.dll
   Function: FUN_5ccec8b0
   Address: 5ccec8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec8b0(int param_1)

{
  if (*(int *)(param_1 + 0x8c) < 3) {
    *(undefined4 *)(param_1 + 0x8c) = 3;
    return 0;
  }
  if (0x1e < *(int *)(param_1 + 0x8c)) {
    *(undefined4 *)(param_1 + 0x8c) = 0x1e;
    return 0;
  }
  return 1;
}


