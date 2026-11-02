/* Module: sfppack2.dll
   Function: FUN_5ccd4130
   Address: 5ccd4130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccd4130(int param_1)

{
  if (*(int *)(param_1 + 0x34) < -0x1e0) {
    *(undefined4 *)(param_1 + 0x34) = 0xfffffe20;
    return 0;
  }
  if (0xf0 < *(int *)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x34) = 0xf0;
    return 0;
  }
  return 1;
}


