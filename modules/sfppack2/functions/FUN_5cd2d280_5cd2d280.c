/* Module: sfppack2.dll
   Function: FUN_5cd2d280
   Address: 5cd2d280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd2d280(float *param_1,double *param_2,int param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  double *pdVar5;
  uint uVar6;
  
  *param_1 = *param_1 * (float)*param_2;
  param_1[1] = param_1[1] * (float)param_2[1];
  if (2 < param_3 - 1U) {
    uVar6 = param_3 - 2U >> 1;
    do {
      pdVar5 = param_2 + 2;
      pfVar4 = param_1 + 2;
      dVar2 = *pdVar5;
      fVar1 = *pfVar4;
      dVar3 = param_2[3];
      uVar6 = uVar6 - 1;
      *pfVar4 = *pfVar4 * (float)*pdVar5 - param_1[3] * (float)param_2[3];
      param_1[3] = fVar1 * (float)dVar3 + param_1[3] * (float)dVar2;
      param_1 = pfVar4;
      param_2 = pdVar5;
    } while (uVar6 != 0);
  }
  return;
}


