/* Module: sfppack2.dll
   Function: FUN_5ccd43d0
   Address: 5ccd43d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccd43d0(int param_1)

{
  if (*(int *)(param_1 + 0x6c) < -0x1e0) {
    *(undefined4 *)(param_1 + 0x6c) = 0xfffffe20;
    return 0;
  }
  if (0xf0 < *(int *)(param_1 + 0x6c)) {
    *(undefined4 *)(param_1 + 0x6c) = 0xf0;
    return 0;
  }
  return 1;
}


