/* Module: sfppack3.dll
   Function: FUN_5cc84420
   Address: 5cc84420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc84420(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


