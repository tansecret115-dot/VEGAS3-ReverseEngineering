/* Module: sfppack2.dll
   Function: FUN_5ccd4310
   Address: 5ccd4310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccd4310(int param_1)

{
  if (*(int *)(param_1 + 0x5c) < -0x1e0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe20;
    return 0;
  }
  if (0xf0 < *(int *)(param_1 + 0x5c)) {
    *(undefined4 *)(param_1 + 0x5c) = 0xf0;
    return 0;
  }
  return 1;
}


