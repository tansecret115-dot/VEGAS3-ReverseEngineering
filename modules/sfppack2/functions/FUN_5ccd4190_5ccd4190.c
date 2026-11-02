/* Module: sfppack2.dll
   Function: FUN_5ccd4190
   Address: 5ccd4190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccd4190(int param_1)

{
  if (*(int *)(param_1 + 0x3c) < -0x1e0) {
    *(undefined4 *)(param_1 + 0x3c) = 0xfffffe20;
    return 0;
  }
  if (0xf0 < *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x3c) = 0xf0;
    return 0;
  }
  return 1;
}


