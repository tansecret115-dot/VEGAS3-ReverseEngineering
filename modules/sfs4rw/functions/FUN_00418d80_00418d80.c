/* Module: sfs4rw.dll
   Function: FUN_00418d80
   Address: 00418d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_00418d80(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_00495f34)[param_1];
}


