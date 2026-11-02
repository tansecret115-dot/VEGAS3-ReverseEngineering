/* Module: vfplugs.dll
   Function: FUN_00413760
   Address: 00413760
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00413760(int param_1)

{
  return param_1 + 0x10 + (uint)(*(ushort *)(param_1 + 6) >> 1) * 6;
}


