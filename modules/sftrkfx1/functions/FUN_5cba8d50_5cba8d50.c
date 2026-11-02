/* Module: sftrkfx1.dll
   Function: FUN_5cba8d50
   Address: 5cba8d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba8d50(int param_1)

{
  if (*(int *)(param_1 + 0x40) < -0x96) {
    *(undefined4 *)(param_1 + 0x40) = 0xffffff6a;
    return 0;
  }
  if (0x96 < *(int *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x40) = 0x96;
    return 0;
  }
  return 1;
}


