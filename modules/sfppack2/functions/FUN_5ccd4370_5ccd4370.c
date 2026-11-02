/* Module: sfppack2.dll
   Function: FUN_5ccd4370
   Address: 5ccd4370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccd4370(int param_1)

{
  if (*(int *)(param_1 + 100) < -0x1e0) {
    *(undefined4 *)(param_1 + 100) = 0xfffffe20;
    return 0;
  }
  if (0xf0 < *(int *)(param_1 + 100)) {
    *(undefined4 *)(param_1 + 100) = 0xf0;
    return 0;
  }
  return 1;
}


