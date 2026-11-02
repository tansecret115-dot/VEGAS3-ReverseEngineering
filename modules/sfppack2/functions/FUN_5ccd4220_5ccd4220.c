/* Module: sfppack2.dll
   Function: FUN_5ccd4220
   Address: 5ccd4220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccd4220(int param_1)

{
  if (*(int *)(param_1 + 0x48) < -0x1e0) {
    *(undefined4 *)(param_1 + 0x48) = 0xfffffe20;
    return 0;
  }
  if (0xf0 < *(int *)(param_1 + 0x48)) {
    *(undefined4 *)(param_1 + 0x48) = 0xf0;
    return 0;
  }
  return 1;
}


