/* Module: vfplugs.dll
   Function: FUN_00413720
   Address: 00413720
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00413720(int param_1)

{
  return param_1 + 0x10 + (*(ushort *)(param_1 + 6) & 0xfffffffe);
}


