/* Module: vidpcore.dll
   Function: FUN_5de71120
   Address: 5de71120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5de71120(float *param_1,float *param_2,float *param_3,double param_4)

{
  float fVar1;
  float10 extraout_ST0;
  
  fVar1 = (float)param_4;
  *param_1 = (*param_3 - *param_2) * fVar1 + *param_2;
  param_1[1] = (param_3[1] - param_2[1]) * fVar1 + param_2[1];
  param_1[2] = (param_3[2] - param_2[2]) * fVar1 + param_2[2];
  param_1[3] = (param_3[3] - param_2[3]) * fVar1 + param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = (param_3[5] - param_2[5]) * fVar1 + param_2[5];
  param_1[6] = (param_3[6] - param_2[6]) * fVar1 + param_2[6];
  param_1[7] = (param_3[7] - param_2[7]) * fVar1 + param_2[7];
  param_1[8] = param_2[8];
  fVar1 = (float)ftol();
  param_1[9] = fVar1;
  fVar1 = (float)ftol();
  param_1[10] = fVar1;
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = (float)(((float10)param_3[0xc] - (float10)param_2[0xc]) * extraout_ST0 +
                        (float10)param_2[0xc]);
  param_1[0xd] = param_2[0xd];
  return 0;
}


