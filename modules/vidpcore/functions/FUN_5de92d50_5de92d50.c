/* Module: vidpcore.dll
   Function: FUN_5de92d50
   Address: 5de92d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5de92d50(float *param_1,float *param_2,float *param_3,double param_4)

{
  float fVar1;
  
  fVar1 = (float)param_4;
  *param_1 = (*param_3 - *param_2) * fVar1 + *param_2;
  param_1[1] = (param_3[1] - param_2[1]) * fVar1 + param_2[1];
  param_1[2] = (param_3[2] - param_2[2]) * fVar1 + param_2[2];
  param_1[3] = (param_3[3] - param_2[3]) * fVar1 + param_2[3];
  param_1[4] = (param_3[4] - param_2[4]) * fVar1 + param_2[4];
  param_1[5] = (param_3[5] - param_2[5]) * fVar1 + param_2[5];
  param_1[6] = (param_3[6] - param_2[6]) * fVar1 + param_2[6];
  param_1[7] = param_2[7];
  return 0;
}


