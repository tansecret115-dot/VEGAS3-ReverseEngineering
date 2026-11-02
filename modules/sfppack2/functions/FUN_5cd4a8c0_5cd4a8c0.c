/* Module: sfppack2.dll
   Function: FUN_5cd4a8c0
   Address: 5cd4a8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_5cd4a8c0(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_5cd5b9b0)[param_1];
}


