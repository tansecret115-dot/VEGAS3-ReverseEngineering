/* Module: sfpagepeel.dll
   Function: FUN_0046a380
   Address: 0046a380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_0046a380(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_00478fb4)[param_1];
}


