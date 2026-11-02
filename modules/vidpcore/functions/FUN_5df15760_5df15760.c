/* Module: vidpcore.dll
   Function: FUN_5df15760
   Address: 5df15760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df15760(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


