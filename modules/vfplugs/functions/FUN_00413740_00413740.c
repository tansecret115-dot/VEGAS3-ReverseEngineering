/* Module: vfplugs.dll
   Function: FUN_00413740
   Address: 00413740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00413740(int param_1)

{
  return param_1 + 0x10 + (uint)(*(ushort *)(param_1 + 6) >> 1) * 4;
}


