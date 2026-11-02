/* Module: vegas30.exe
   Function: FUN_006078f0
   Address: 006078f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_006078f0(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_00632d24)[param_1];
}


