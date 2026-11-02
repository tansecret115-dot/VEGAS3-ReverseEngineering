/* Module: sfxpfx2.dll
   Function: FUN_5c8d6d50
   Address: 5c8d6d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_5c8d6d50(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_5c8e46dc)[param_1];
}


