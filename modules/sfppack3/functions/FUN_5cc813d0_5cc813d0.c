/* Module: sfppack3.dll
   Function: FUN_5cc813d0
   Address: 5cc813d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_5cc813d0(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_5cc9011c)[param_1];
}


