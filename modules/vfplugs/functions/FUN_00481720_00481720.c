/* Module: vfplugs.dll
   Function: FUN_00481720
   Address: 00481720
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481720(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


