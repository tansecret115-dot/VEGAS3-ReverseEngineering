/* Module: mp3plug.dll
   Function: FUN_5f724ec0
   Address: 5f724ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_5f724ec0(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_5f737c14)[param_1];
}


