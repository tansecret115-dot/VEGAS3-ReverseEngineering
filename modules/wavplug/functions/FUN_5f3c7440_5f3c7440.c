/* Module: wavplug.dll
   Function: FUN_5f3c7440
   Address: 5f3c7440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3c7440(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


