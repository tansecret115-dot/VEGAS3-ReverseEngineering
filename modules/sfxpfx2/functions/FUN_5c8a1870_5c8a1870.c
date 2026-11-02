/* Module: sfxpfx2.dll
   Function: FUN_5c8a1870
   Address: 5c8a1870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5c8a1870(undefined4 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  dVar3 = param_2[2];
  dVar2 = param_2[2];
  dVar4 = param_2[1];
  dVar1 = _DAT_5c8dd7d0;
  if ((float10)*param_2 < (float10)_DAT_5c8dd7e0) {
    dVar1 = _DAT_5c8dd7d8;
  }
  fVar5 = (float10)*param_2 * (float10)dVar1;
  if (_DAT_5c8dd7c8 <= (double)fVar5) {
    if (_DAT_5c8dd7c0 < (double)fVar5) {
      fVar5 = (float10)_DAT_5c8dd7c0;
    }
  }
  else {
    fVar5 = (float10)_DAT_5c8dd7c8;
  }
  fVar8 = (float10)_DAT_5c8dd7b8;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  fVar7 = (float10)1.4426950408889634 * ((fVar5 * (float10)_DAT_5c8dd7b0) / (float10)dVar2);
  fVar6 = ROUND(fVar7);
  fVar7 = (float10)f2xm1(fVar7 - fVar6);
  fVar6 = (float10)fscale((float10)1 + fVar7,fVar6);
  fVar7 = (float10)fcos((float10)(double)(fVar5 * fVar8));
  fVar6 = fVar7 * fVar6 + fVar7 * fVar6;
  *(double *)(param_1 + 4) = (double)fVar6;
  fVar8 = (float10)1.4426950408889634 * -((float10)(double)(fVar5 * fVar8) / (float10)dVar3);
  fVar5 = ROUND(fVar8);
  fVar8 = (float10)f2xm1(fVar8 - fVar5);
  fVar5 = (float10)fscale((float10)1 + fVar8,fVar5);
  *(double *)(param_1 + 6) = (double)fVar5;
  *(double *)(param_1 + 8) = (double)(((float10)_DAT_5c8dc920 - fVar6) + fVar5);
  dVar1 = _DAT_5c8dc920;
  if (_DAT_5c8dd7a8 < dVar4) {
    fVar5 = (float10)_CIpow();
    *(double *)(param_1 + 0xc) = (double)fVar5;
    *(double *)(param_1 + 0xe) = _DAT_5c8dc920 - *(double *)(param_1 + 0xc);
    return;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(double *)(param_1 + 0xe) = dVar1 - *(double *)(param_1 + 0xc);
  return;
}


