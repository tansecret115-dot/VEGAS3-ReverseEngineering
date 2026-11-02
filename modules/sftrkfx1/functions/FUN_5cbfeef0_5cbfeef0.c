/* Module: sftrkfx1.dll
   Function: FUN_5cbfeef0
   Address: 5cbfeef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_5cbfeef0(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_5cc0bf34)[param_1];
}


