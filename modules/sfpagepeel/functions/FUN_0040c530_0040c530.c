/* Module: sfpagepeel.dll
   Function: FUN_0040c530
   Address: 0040c530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040c530(double *param_1,double *param_2,double *param_3,double param_4)

{
  float fVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = (float10)param_4;
  fVar6 = (float10)_DAT_0046fdc8;
  pdVar3 = param_2;
  pdVar4 = param_1;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pdVar4 = *(undefined4 *)pdVar3;
    pdVar3 = (double *)((int)pdVar3 + 4);
    pdVar4 = (double *)((int)pdVar4 + 4);
  }
  if (fVar6 <= fVar5) {
    fVar6 = fVar5;
    if ((float10)_DAT_0046fdc0 < fVar5) {
      fVar6 = (float10)_DAT_0046fdc0;
    }
  }
  else {
    fVar6 = (float10)_DAT_0046fdc8;
  }
  *param_1 = (double)(((float10)*param_3 - (float10)*param_2) * fVar6 + (float10)*param_2);
  if ((float10)_DAT_0046fdc8 <= fVar5) {
    fVar6 = fVar5;
    if ((float10)_DAT_0046fdc0 < fVar5) {
      fVar6 = (float10)_DAT_0046fdc0;
    }
  }
  else {
    fVar6 = (float10)_DAT_0046fdc8;
  }
  param_1[1] = (double)(((float10)param_3[1] - (float10)param_2[1]) * fVar6 + (float10)param_2[1]);
  if ((float10)_DAT_0046fdc8 <= fVar5) {
    fVar6 = fVar5;
    if ((float10)_DAT_0046fdc0 < fVar5) {
      fVar6 = (float10)_DAT_0046fdc0;
    }
  }
  else {
    fVar6 = (float10)_DAT_0046fdc8;
  }
  param_1[2] = (double)(((float10)param_3[2] - (float10)param_2[2]) * fVar6 + (float10)param_2[2]);
  if ((float10)_DAT_0046fdc8 <= fVar5) {
    fVar6 = fVar5;
    if ((float10)_DAT_0046fdc0 < fVar5) {
      fVar6 = (float10)_DAT_0046fdc0;
    }
  }
  else {
    fVar6 = (float10)_DAT_0046fdc8;
  }
  param_1[3] = (double)(((float10)param_3[3] - (float10)param_2[3]) * fVar6 + (float10)param_2[3]);
  if ((float10)_DAT_0046fdc8 <= fVar5) {
    fVar6 = fVar5;
    if ((float10)_DAT_0046fdc0 < fVar5) {
      fVar6 = (float10)_DAT_0046fdc0;
    }
  }
  else {
    fVar6 = (float10)_DAT_0046fdc8;
  }
  *(float *)(param_1 + 6) =
       (float)(((float10)*(float *)(param_3 + 6) - (float10)*(float *)(param_2 + 6)) * fVar6 +
              (float10)*(float *)(param_2 + 6));
  if ((float10)_DAT_0046fdc8 <= fVar5) {
    fVar6 = fVar5;
    if ((float10)_DAT_0046fdc0 <= fVar5) {
      fVar6 = (float10)_DAT_0046fdc0;
    }
  }
  else {
    fVar6 = (float10)_DAT_0046fdc8;
  }
  *(float *)((int)param_1 + 0x2c) =
       (float)(((float10)*(float *)((int)param_3 + 0x2c) - (float10)*(float *)((int)param_2 + 0x2c))
               * fVar6 + (float10)*(float *)((int)param_2 + 0x2c));
  if ((float10)_DAT_0046fdc8 <= fVar5) {
    if (fVar5 <= (float10)_DAT_0046fdc0) {
      fVar1 = (float)param_4;
    }
    else {
      fVar1 = (float)_DAT_0046fdc0;
    }
  }
  else {
    fVar1 = (float)_DAT_0046fdc8;
  }
  *(float *)(param_1 + 5) =
       (*(float *)(param_3 + 5) - *(float *)(param_2 + 5)) * fVar1 + *(float *)(param_2 + 5);
  return 0;
}


