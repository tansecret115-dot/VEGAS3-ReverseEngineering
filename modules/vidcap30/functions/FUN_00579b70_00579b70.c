/* Module: vidcap30.exe
   Function: FUN_00579b70
   Address: 00579b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00579b70(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


