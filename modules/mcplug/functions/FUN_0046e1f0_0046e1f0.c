/* Module: mcplug.dll
   Function: FUN_0046e1f0
   Address: 0046e1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_0046e1f0(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_00481e20)[param_1];
}


