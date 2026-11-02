/* Module: sftrans1.dll
   Function: FUN_004dad00
   Address: 004dad00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dad00(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 - *param_2;
  param_3[1] = param_1[1] - param_2[1];
  param_3[2] = param_1[2] - param_2[2];
  return;
}


