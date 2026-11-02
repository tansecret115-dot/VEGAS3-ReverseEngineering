/* Module: sfmarket2.dll
   Function: FUN_0041fd30
   Address: 0041fd30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041fd30(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


