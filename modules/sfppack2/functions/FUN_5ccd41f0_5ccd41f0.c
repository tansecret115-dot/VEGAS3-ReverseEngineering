/* Module: sfppack2.dll
   Function: FUN_5ccd41f0
   Address: 5ccd41f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccd41f0(int param_1)

{
  if (*(int *)(param_1 + 0x44) < -0x1e0) {
    *(undefined4 *)(param_1 + 0x44) = 0xfffffe20;
    return 0;
  }
  if (0xf0 < *(int *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x44) = 0xf0;
    return 0;
  }
  return 1;
}


