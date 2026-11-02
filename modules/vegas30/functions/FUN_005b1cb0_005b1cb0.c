/* Module: vegas30.exe
   Function: FUN_005b1cb0
   Address: 005b1cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b1cb0(float *param_1,float *param_2,float param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = param_4[2] * param_2[2] + param_2[1] * param_4[1] + param_3 * param_4[3] +
          *param_2 * *param_4;
  *param_1 = fVar1 - *param_2 * *param_4;
  param_1[1] = -(param_2[1] * *param_4);
  param_1[2] = -(*param_4 * param_2[2]);
  param_1[3] = -(param_3 * *param_4);
  param_1[4] = -(*param_2 * param_4[1]);
  param_1[5] = fVar1 - param_2[1] * param_4[1];
  param_1[6] = -(param_2[2] * param_4[1]);
  param_1[7] = -(param_3 * param_4[1]);
  param_1[8] = -(*param_2 * param_4[2]);
  param_1[9] = -(param_2[1] * param_4[2]);
  param_1[10] = fVar1 - param_4[2] * param_2[2];
  param_1[0xb] = -(param_3 * param_4[2]);
  param_1[0xc] = -(param_4[3] * *param_2);
  param_1[0xd] = -(param_2[1] * param_4[3]);
  param_1[0xe] = -(param_4[3] * param_2[2]);
  param_1[0xf] = fVar1 - param_3 * param_4[3];
  return;
}


