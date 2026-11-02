/* Module: sfppack2.dll
   Function: FUN_5ccf7a80
   Address: 5ccf7a80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5ccf7a80(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (param_5 == 0) {
    return;
  }
  if (((*(double *)(param_2 + 0x180) != _DAT_5cd51520) &&
      (*(double *)(param_2 + 0x168) != _DAT_5cd51520)) &&
     (*(double *)(param_2 + 0x178) != _DAT_5cd51520)) {
    log2((float10)*(double *)(param_2 + 0x168) / (float10)*(double *)(param_2 + 0x180));
    fVar5 = (float10)_CIpow();
    fVar5 = (fVar5 * (float10)*(double *)(param_2 + 0x180)) / (float10)*(double *)(param_2 + 0x168);
    if (fVar5 < (float10)_DAT_5cd51520) {
      fVar5 = (float10)_DAT_5cd51520;
      goto LAB_5ccf7b28;
    }
    if (fVar5 <= (float10)_DAT_5cd51510) goto LAB_5ccf7b28;
  }
  fVar5 = (float10)_DAT_5cd51510;
LAB_5ccf7b28:
  if ((*(int *)(param_2 + 0x178) == 0) && (*(int *)(param_2 + 0x17c) == 0x3ff00000)) {
    fVar5 = (float10)_DAT_5cd51510;
  }
  if (_DAT_5cd51cb8 < *(double *)(param_2 + 0x178)) {
    fVar5 = fVar5 * fVar5;
  }
  if (_DAT_5cd53af0 < *(double *)(param_2 + 0x178)) {
    fVar5 = fVar5 * fVar5;
  }
  if (((*(int *)(param_2 + 0x178) == 0) && (*(int *)(param_2 + 0x17c) == 0x40490000)) &&
     (fVar5 < (float10)_DAT_5cd514e8)) {
    fVar5 = (float10)_DAT_5cd51520;
  }
  if (*(int *)(param_2 + 0x160) == 0) {
    iVar2 = *(int *)(param_2 + 0x1b8);
    fVar5 = fVar5 * (float10)*(double *)(param_2 + 0x1a8) +
            (float10)*(double *)(param_2 + 0x1b0) * (float10)*(double *)(param_2 + 0x170);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x198);
    fVar5 = fVar5 * (float10)*(double *)(param_2 + 0x188) +
            (float10)*(double *)(param_2 + 400) * (float10)*(double *)(param_2 + 0x170);
  }
  if (param_5 < iVar2) {
    fVar6 = (fVar5 - (float10)*(double *)(param_2 + 0x170)) / (float10)param_5;
  }
  else if (iVar2 == 0) {
    *(double *)(param_2 + 0x170) = (double)fVar5;
    fVar6 = (float10)_DAT_5cd51520;
  }
  else {
    fVar6 = (fVar5 - (float10)*(double *)(param_2 + 0x170)) / (float10)iVar2;
  }
  if (param_3 == 0) {
    pfVar1 = *(float **)(param_1 + 0x18);
    if (0 < param_5) {
      iVar2 = *(int *)(param_1 + 0x1c) - (int)pfVar1;
      do {
        *pfVar1 = (float)((float10)*pfVar1 -
                         ((float10)_DAT_5cd51510 - (float10)*(double *)(param_2 + 0x170)) *
                         (float10)*(float *)(iVar2 + (int)pfVar1));
        if ((((float10)_DAT_5cd51520 < fVar6) && ((float10)*(double *)(param_2 + 0x170) < fVar5)) ||
           ((fVar6 < (float10)_DAT_5cd51520 && (fVar5 < (float10)*(double *)(param_2 + 0x170))))) {
          *(double *)(param_2 + 0x170) = (double)(fVar6 + (float10)*(double *)(param_2 + 0x170));
        }
        pfVar1 = pfVar1 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      *(double *)(param_2 + 0x170) = (double)fVar5;
      return;
    }
  }
  else {
    pfVar1 = *(float **)(param_1 + 0x18);
    if (0 < param_5) {
      iVar4 = *(int *)(param_1 + 0x1c) - (int)pfVar1;
      iVar3 = *(int *)(param_3 + 0x1c) - (int)pfVar1;
      iVar2 = *(int *)(param_3 + 0x18) - (int)pfVar1;
      do {
        *pfVar1 = (float)((float10)*pfVar1 -
                         ((float10)_DAT_5cd51510 - (float10)*(double *)(param_2 + 0x170)) *
                         (float10)*(float *)(iVar4 + (int)pfVar1));
        *(float *)(iVar2 + (int)pfVar1) =
             (float)((float10)*(float *)(iVar2 + (int)pfVar1) -
                    ((float10)_DAT_5cd51510 - (float10)*(double *)(param_2 + 0x170)) *
                    (float10)*(float *)(iVar3 + (int)pfVar1));
        if ((((float10)_DAT_5cd51520 < fVar6) && ((float10)*(double *)(param_2 + 0x170) < fVar5)) ||
           ((fVar6 < (float10)_DAT_5cd51520 && (fVar5 < (float10)*(double *)(param_2 + 0x170))))) {
          *(double *)(param_2 + 0x170) = (double)(fVar6 + (float10)*(double *)(param_2 + 0x170));
        }
        pfVar1 = pfVar1 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  *(double *)(param_2 + 0x170) = (double)fVar5;
  return;
}


