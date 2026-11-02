/* Module: sftrans1.dll
   Function: FUN_0053af70
   Address: 0053af70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053af70(uint *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = *param_1 & 0x1ffffff;
  return;
}


