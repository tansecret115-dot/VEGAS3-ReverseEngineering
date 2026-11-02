/* Module: sftrans1.dll
   Function: FUN_00460c20
   Address: 00460c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00460c20(float *param_1,float *param_2,float *param_3,double param_4)

{
  float fVar1;
  
  fVar1 = (float)param_4;
  *param_1 = (*param_3 - *param_2) * fVar1 + *param_2;
  param_1[1] = (param_3[1] - param_2[1]) * fVar1 + param_2[1];
  param_1[2] = (param_3[2] - param_2[2]) * fVar1 + param_2[2];
  param_1[3] = (param_3[3] - param_2[3]) * fVar1 + param_2[3];
  param_1[4] = (param_3[4] - param_2[4]) * fVar1 + param_2[4];
  return 0;
}


