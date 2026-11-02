/* Module: vegas30.exe
   Function: FUN_005a6060
   Address: 005a6060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a6060(float *param_1,double param_2,double param_3)

{
  float fVar1;
  
  fVar1 = *param_1;
  *param_1 = fVar1 * (float)param_3 - param_1[1] * (float)param_2;
  param_1[1] = param_1[1] * (float)param_3 + fVar1 * (float)param_2;
  return;
}


