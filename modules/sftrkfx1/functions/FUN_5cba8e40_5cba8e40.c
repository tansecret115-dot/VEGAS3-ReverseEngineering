/* Module: sftrkfx1.dll
   Function: FUN_5cba8e40
   Address: 5cba8e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba8e40(int param_1)

{
  if (*(int *)(param_1 + 0x54) < 0x14) {
    *(undefined4 *)(param_1 + 0x54) = 0x14;
    return 0;
  }
  if (20000 < *(int *)(param_1 + 0x54)) {
    *(undefined4 *)(param_1 + 0x54) = 20000;
    return 0;
  }
  return 1;
}


