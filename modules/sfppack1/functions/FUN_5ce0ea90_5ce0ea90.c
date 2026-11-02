/* Module: sfppack1.dll
   Function: FUN_5ce0ea90
   Address: 5ce0ea90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ce0ea90(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


