/* Module: sfxpfx1.dll
   Function: FUN_5c949670
   Address: 5c949670
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5c949670(undefined4 *param_1,double param_2,double param_3)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)param_2;
  if ((float10)_DAT_5c98bd78 <= fVar1) {
    if ((float10)_DAT_5c98bd70 < fVar1) {
      fVar1 = (float10)_DAT_5c98bd70;
    }
  }
  else {
    fVar1 = (float10)_DAT_5c98bd78;
  }
  fVar2 = (float10)_DAT_5c98bd68;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  fVar3 = (float10)1.4426950408889634 * ((fVar1 * fVar2) / (float10)param_3);
  fVar2 = ROUND(fVar3);
  fVar3 = (float10)f2xm1(fVar3 - fVar2);
  fVar2 = (float10)fscale((float10)1 + fVar3,fVar2);
  fVar3 = (float10)fcos(fVar1 * (float10)_DAT_5c98bd60);
  fVar2 = fVar3 * fVar2 + fVar3 * fVar2;
  *(double *)(param_1 + 4) = (double)fVar2;
  fVar3 = (float10)1.4426950408889634 * ((fVar1 * (float10)_DAT_5c98bd58) / (float10)param_3);
  fVar1 = ROUND(fVar3);
  fVar3 = (float10)f2xm1(fVar3 - fVar1);
  fVar1 = (float10)fscale((float10)1 + fVar3,fVar1);
  *(double *)(param_1 + 6) = (double)fVar1;
  *(double *)(param_1 + 8) = (double)(((float10)_DAT_5c98b988 - (float10)(double)fVar2) + fVar1);
  return;
}


