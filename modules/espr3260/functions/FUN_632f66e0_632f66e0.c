/* Module: espr3260.dll
   Function: FUN_632f66e0
   Address: 632f66e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_632f66e0(float *param_1,int param_2,int param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *local_8;
  
  pfVar5 = param_5;
  local_8 = (float *)param_6[1];
  fVar1 = *param_5;
  fVar2 = param_5[1];
  fVar3 = fVar2;
  param_5 = (float *)*param_6;
  if (0 < param_2) {
    do {
      fVar3 = fVar1;
      fVar1 = *param_1;
      fVar4 = (float)local_8 * *(float *)(param_3 + 8);
      local_8 = param_5;
      param_2 = param_2 + -1;
      param_5 = (float *)(fVar1 * *param_4 +
                         fVar4 + (float)param_5 * *(float *)(param_3 + 4) +
                                 fVar3 * param_4[1] + fVar2 * param_4[2]);
      *param_1 = (float)param_5;
      param_1 = param_1 + 1;
      fVar2 = fVar3;
    } while (param_2 != 0);
  }
  *pfVar5 = fVar1;
  pfVar5[1] = fVar3;
  *param_6 = (float)param_5;
  param_6[1] = (float)local_8;
  return;
}


