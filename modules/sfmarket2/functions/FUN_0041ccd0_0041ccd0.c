/* Module: sfmarket2.dll
   Function: FUN_0041ccd0
   Address: 0041ccd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_0041ccd0(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_00497934)[param_1];
}


