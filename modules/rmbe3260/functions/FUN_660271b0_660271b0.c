/* Module: rmbe3260.dll
   Function: FUN_660271b0
   Address: 660271b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660271b0(int param_1,uint param_2)

{
  if (8 < param_2) {
    return 0x80070057;
  }
  *(undefined4 *)(param_1 + 8 + param_2 * 4) = 1;
  return 0;
}


