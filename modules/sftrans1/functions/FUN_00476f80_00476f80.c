/* Module: sftrans1.dll
   Function: FUN_00476f80
   Address: 00476f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00476f80(double *param_1,double *param_2,double *param_3,double param_4)

{
  *param_1 = (*param_3 - *param_2) * param_4 + *param_2;
  param_1[1] = (param_3[1] - param_2[1]) * param_4 + param_2[1];
  param_1[2] = (param_3[2] - param_2[2]) * param_4 + param_2[2];
  param_1[3] = (param_3[3] - param_2[3]) * param_4 + param_2[3];
  param_1[4] = (param_3[4] - param_2[4]) * param_4 + param_2[4];
  param_1[5] = (param_3[5] - param_2[5]) * param_4 + param_2[5];
  param_1[6] = (param_3[6] - param_2[6]) * param_4 + param_2[6];
  return 0;
}


