/* Module: Setup.exe
   Function: FUN_0042ef20
   Address: 0042ef20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_0042ef20(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_0043d380)[param_1];
}


