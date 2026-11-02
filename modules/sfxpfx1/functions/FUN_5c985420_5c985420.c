/* Module: sfxpfx1.dll
   Function: FUN_5c985420
   Address: 5c985420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_5c985420(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_5c9933f4)[param_1];
}


