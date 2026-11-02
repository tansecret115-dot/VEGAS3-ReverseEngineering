/* Module: rmbe3260.dll
   Function: FUN_6601c0e0
   Address: 6601c0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601c0e0(int param_1)

{
  if (*(int *)(param_1 + 0xc0) != 0) {
    return 0x80040258;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return 0;
}


