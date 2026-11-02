/* Module: sfppack2.dll
   Function: FUN_5cd4d910
   Address: 5cd4d910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd4d910(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


