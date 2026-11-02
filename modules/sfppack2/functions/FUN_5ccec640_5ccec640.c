/* Module: sfppack2.dll
   Function: FUN_5ccec640
   Address: 5ccec640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec640(int param_1)

{
  if (*(int *)(param_1 + 0x58) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    return 0;
  }
  if (5000 < *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x58) = 5000;
    return 0;
  }
  return 1;
}


