/* Module: sftrans1.dll
   Function: FUN_00537f10
   Address: 00537f10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_00537f10(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_0056ea6c)[param_1];
}


