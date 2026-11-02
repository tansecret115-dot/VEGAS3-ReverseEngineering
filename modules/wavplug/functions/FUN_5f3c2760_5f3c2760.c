/* Module: wavplug.dll
   Function: FUN_5f3c2760
   Address: 5f3c2760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_5f3c2760(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_5f3d16c4)[param_1];
}


