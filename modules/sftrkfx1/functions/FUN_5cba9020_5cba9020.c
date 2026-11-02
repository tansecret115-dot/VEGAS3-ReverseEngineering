/* Module: sftrkfx1.dll
   Function: FUN_5cba9020
   Address: 5cba9020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba9020(int param_1)

{
  if (*(int *)(param_1 + 0x7c) < 1) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    return 0;
  }
  if (4 < *(int *)(param_1 + 0x7c)) {
    *(undefined4 *)(param_1 + 0x7c) = 4;
    return 0;
  }
  return 1;
}


