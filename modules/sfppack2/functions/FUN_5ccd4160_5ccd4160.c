/* Module: sfppack2.dll
   Function: FUN_5ccd4160
   Address: 5ccd4160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccd4160(int param_1)

{
  if (*(int *)(param_1 + 0x38) < -0x1e0) {
    *(undefined4 *)(param_1 + 0x38) = 0xfffffe20;
    return 0;
  }
  if (0xf0 < *(int *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x38) = 0xf0;
    return 0;
  }
  return 1;
}


