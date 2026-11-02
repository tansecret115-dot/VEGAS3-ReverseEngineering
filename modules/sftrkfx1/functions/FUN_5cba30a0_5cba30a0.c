/* Module: sftrkfx1.dll
   Function: FUN_5cba30a0
   Address: 5cba30a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba30a0(int param_1)

{
  if (*(int *)(param_1 + 0x50) < 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x50)) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    return 0;
  }
  return 1;
}


