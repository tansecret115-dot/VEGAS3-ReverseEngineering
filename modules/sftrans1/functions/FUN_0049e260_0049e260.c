/* Module: sftrans1.dll
   Function: FUN_0049e260
   Address: 0049e260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0049e260(double *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)param_4;
  fVar3 = (float10)_DAT_00555910;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
    if ((float10)_DAT_00555908 < fVar2) {
      fVar3 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar3 = (float10)_DAT_00555910;
  }
  *(float *)((int)param_1 + 0x14) =
       (float)(((float10)*(float *)((int)param_3 + 0x14) - (float10)*(float *)((int)param_2 + 0x14))
               * fVar3 + (float10)*(float *)((int)param_2 + 0x14));
  if ((float10)_DAT_00555910 <= fVar2) {
    fVar3 = fVar2;
    if ((float10)_DAT_00555908 < fVar2) {
      fVar3 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar3 = (float10)_DAT_00555910;
  }
  *(float *)(param_1 + 2) =
       (float)(((float10)*(float *)(param_3 + 2) - (float10)*(float *)(param_2 + 2)) * fVar3 +
              (float10)*(float *)(param_2 + 2));
  if ((float10)_DAT_00555910 <= fVar2) {
    fVar3 = fVar2;
    if ((float10)_DAT_00555908 < fVar2) {
      fVar3 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar3 = (float10)_DAT_00555910;
  }
  *(float *)((int)param_1 + 0xc) =
       (float)(((float10)*(float *)((int)param_3 + 0xc) - (float10)*(float *)((int)param_2 + 0xc)) *
               fVar3 + (float10)*(float *)((int)param_2 + 0xc));
  if ((float10)_DAT_00555910 <= fVar2) {
    fVar3 = fVar2;
    if ((float10)_DAT_00555908 < fVar2) {
      fVar3 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar3 = (float10)_DAT_00555910;
  }
  *(float *)(param_1 + 3) =
       (float)(((float10)*(float *)(param_3 + 3) - (float10)*(float *)(param_2 + 3)) * fVar3 +
              (float10)*(float *)(param_2 + 3));
  if ((float10)_DAT_00555910 <= fVar2) {
    fVar3 = fVar2;
    if ((float10)_DAT_00555908 < fVar2) {
      fVar3 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar3 = (float10)_DAT_00555910;
  }
  *param_1 = (double)(((float10)*param_3 - (float10)*param_2) * fVar3 + (float10)*param_2);
  if ((float10)_DAT_00555910 <= fVar2) {
    fVar3 = fVar2;
    if ((float10)_DAT_00555908 < fVar2) {
      fVar3 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar3 = (float10)_DAT_00555910;
  }
  param_1[0xc] = (double)(((float10)param_3[0xc] - (float10)param_2[0xc]) * fVar3 +
                         (float10)param_2[0xc]);
  if ((float10)_DAT_00555910 <= fVar2) {
    fVar3 = fVar2;
    if ((float10)_DAT_00555908 < fVar2) {
      fVar3 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar3 = (float10)_DAT_00555910;
  }
  param_1[0xd] = (double)(((float10)param_3[0xd] - (float10)param_2[0xd]) * fVar3 +
                         (float10)param_2[0xd]);
  if ((float10)_DAT_00555910 <= fVar2) {
    fVar3 = fVar2;
    if ((float10)_DAT_00555908 < fVar2) {
      fVar3 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar3 = (float10)_DAT_00555910;
  }
  param_1[10] = (double)(((float10)param_3[10] - (float10)param_2[10]) * fVar3 +
                        (float10)param_2[10]);
  if ((float10)_DAT_00555910 <= fVar2) {
    fVar3 = fVar2;
    if ((float10)_DAT_00555908 < fVar2) {
      fVar3 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar3 = (float10)_DAT_00555910;
  }
  param_1[0xb] = (double)(((float10)param_3[0xb] - (float10)param_2[0xb]) * fVar3 +
                         (float10)param_2[0xb]);
  if ((float10)_DAT_00555910 <= fVar2) {
    fVar3 = fVar2;
    if ((float10)_DAT_00555908 < fVar2) {
      fVar3 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar3 = (float10)_DAT_00555910;
  }
  param_1[8] = (double)(((float10)param_3[8] - (float10)param_2[8]) * fVar3 + (float10)param_2[8]);
  if ((float10)_DAT_00555910 <= fVar2) {
    fVar3 = fVar2;
    if ((float10)_DAT_00555908 < fVar2) {
      fVar3 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar3 = (float10)_DAT_00555910;
  }
  param_1[9] = (double)(((float10)param_3[9] - (float10)param_2[9]) * fVar3 + (float10)param_2[9]);
  if ((float10)_DAT_00555910 <= fVar2) {
    fVar3 = fVar2;
    if ((float10)_DAT_00555908 < fVar2) {
      fVar3 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar3 = (float10)_DAT_00555910;
  }
  param_1[6] = (double)(((float10)param_3[6] - (float10)param_2[6]) * fVar3 + (float10)param_2[6]);
  if ((float10)_DAT_00555910 <= fVar2) {
    fVar3 = fVar2;
    if ((float10)_DAT_00555908 < fVar2) {
      fVar3 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar3 = (float10)_DAT_00555910;
  }
  param_1[7] = (double)(((float10)param_3[7] - (float10)param_2[7]) * fVar3 + (float10)param_2[7]);
  if ((float10)_DAT_00555910 <= fVar2) {
    fVar3 = fVar2;
    if ((float10)_DAT_00555908 < fVar2) {
      fVar3 = (float10)_DAT_00555908;
    }
  }
  else {
    fVar3 = (float10)_DAT_00555910;
  }
  param_1[4] = (double)(((float10)param_3[4] - (float10)param_2[4]) * fVar3 + (float10)param_2[4]);
  dVar1 = _DAT_00555910;
  if (((float10)_DAT_00555910 <= fVar2) && (dVar1 = param_4, (float10)_DAT_00555908 < fVar2)) {
    dVar1 = _DAT_00555908;
  }
  param_1[5] = (param_3[5] - param_2[5]) * dVar1 + param_2[5];
  return 0;
}


