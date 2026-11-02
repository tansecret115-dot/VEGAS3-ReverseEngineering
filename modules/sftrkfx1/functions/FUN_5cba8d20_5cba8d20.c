/* Module: sftrkfx1.dll
   Function: FUN_5cba8d20
   Address: 5cba8d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba8d20(int param_1)

{
  if (*(int *)(param_1 + 0x3c) < -0x96) {
    *(undefined4 *)(param_1 + 0x3c) = 0xffffff6a;
    return 0;
  }
  if (0x96 < *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x3c) = 0x96;
    return 0;
  }
  return 1;
}


