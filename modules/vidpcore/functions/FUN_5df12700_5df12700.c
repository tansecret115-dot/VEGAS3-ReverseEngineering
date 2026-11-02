/* Module: vidpcore.dll
   Function: FUN_5df12700
   Address: 5df12700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_5df12700(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_5df383b0)[param_1];
}


