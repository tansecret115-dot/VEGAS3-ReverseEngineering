/* Module: vfplugs.dll
   Function: FUN_0047e6c0
   Address: 0047e6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_0047e6c0(byte param_1)

{
  if (0x1f < param_1) {
    return 0x55;
  }
  return (&DAT_00490390)[param_1];
}


