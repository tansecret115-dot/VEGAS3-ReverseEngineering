/* Module: sftrkfx1.dll
   Function: FUN_5cba8ea0
   Address: 5cba8ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba8ea0(int param_1)

{
  if (*(int *)(param_1 + 0x5c) < 0x14) {
    *(undefined4 *)(param_1 + 0x5c) = 0x14;
    return 0;
  }
  if (20000 < *(int *)(param_1 + 0x5c)) {
    *(undefined4 *)(param_1 + 0x5c) = 20000;
    return 0;
  }
  return 1;
}


