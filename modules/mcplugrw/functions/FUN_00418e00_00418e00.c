/* Module: mcplugrw.dll
   Function: FUN_00418e00
   Address: 00418e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_00418e00(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_00495f34)[param_1];
}


