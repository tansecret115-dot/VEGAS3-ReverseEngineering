/* Module: sfxpfx2.dll
   Function: FUN_5c8d9da0
   Address: 5c8d9da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8d9da0(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


