/* Module: sftrkfx1.dll
   Function: FUN_5cba90e0
   Address: 5cba90e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba90e0(int param_1)

{
  if (*(int *)(param_1 + 0x8c) < 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x8c)) {
    *(undefined4 *)(param_1 + 0x8c) = 1;
    return 0;
  }
  return 1;
}


