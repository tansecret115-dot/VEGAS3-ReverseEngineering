/* Module: sfppack1.dll
   Function: FUN_5ce0ba40
   Address: 5ce0ba40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_5ce0ba40(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_5ce1bc8c)[param_1];
}


