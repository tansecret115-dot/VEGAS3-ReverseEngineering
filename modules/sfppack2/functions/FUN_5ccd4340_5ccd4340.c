/* Module: sfppack2.dll
   Function: FUN_5ccd4340
   Address: 5ccd4340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccd4340(int param_1)

{
  if (*(int *)(param_1 + 0x60) < -0x1e0) {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe20;
    return 0;
  }
  if (0xf0 < *(int *)(param_1 + 0x60)) {
    *(undefined4 *)(param_1 + 0x60) = 0xf0;
    return 0;
  }
  return 1;
}


