/* Module: sfppack2.dll
   Function: FUN_5ccec730
   Address: 5ccec730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec730(int param_1)

{
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    return 0;
  }
  if (50000 < *(int *)(param_1 + 0x6c)) {
    *(undefined4 *)(param_1 + 0x6c) = 50000;
    return 0;
  }
  return 1;
}


