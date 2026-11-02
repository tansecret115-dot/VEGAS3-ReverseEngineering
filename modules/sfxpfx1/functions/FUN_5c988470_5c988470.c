/* Module: sfxpfx1.dll
   Function: FUN_5c988470
   Address: 5c988470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c988470(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


