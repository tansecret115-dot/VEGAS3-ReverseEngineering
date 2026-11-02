/* Module: sftrkfx1.dll
   Function: FUN_5cba8ed0
   Address: 5cba8ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba8ed0(int param_1)

{
  if (*(int *)(param_1 + 0x60) < 0x14) {
    *(undefined4 *)(param_1 + 0x60) = 0x14;
    return 0;
  }
  if (20000 < *(int *)(param_1 + 0x60)) {
    *(undefined4 *)(param_1 + 0x60) = 20000;
    return 0;
  }
  return 1;
}


