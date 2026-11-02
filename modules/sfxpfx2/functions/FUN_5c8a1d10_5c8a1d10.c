/* Module: sfxpfx2.dll
   Function: FUN_5c8a1d10
   Address: 5c8a1d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5c8a1d10(undefined4 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar5 = (float10)*param_2;
  dVar3 = param_2[2];
  dVar2 = param_2[2];
  dVar4 = param_2[1];
  if ((float10)_DAT_5c8dd810 <= fVar5) {
    if (fVar5 <= (float10)_DAT_5c8dd7c0) {
      if (fVar5 < (float10)_DAT_5c8dd800) {
        fVar5 = fVar5 * (float10)_DAT_5c8dd808;
        goto LAB_5c8a1d84;
      }
    }
    else {
      fVar5 = (float10)_DAT_5c8dd7c0;
    }
    fVar5 = ((fVar5 - (float10)_DAT_5c8dd800) * (float10)_DAT_5c8dd7f8 + (float10)_DAT_5c8dd808) *
            fVar5;
  }
  else {
    fVar5 = (float10)_DAT_5c8dd810 * (float10)_DAT_5c8dd808;
  }
LAB_5c8a1d84:
  dVar1 = (double)fVar5;
  if (_DAT_5c8dd7c8 <= dVar1) {
    if (_DAT_5c8dd7c0 < dVar1) {
      fVar5 = (float10)_DAT_5c8dd7c0;
    }
  }
  else {
    fVar5 = (float10)_DAT_5c8dd7c8;
  }
  fVar8 = (float10)_DAT_5c8dd7b8;
  param_1[2] = 0;
  *param_1 = 0;
  fVar6 = (float10)_DAT_5c8dd7b0;
  param_1[3] = 0;
  param_1[1] = 0;
  fVar7 = (float10)1.4426950408889634 * ((fVar5 * fVar6) / (float10)dVar2);
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
  fVar5 = (float10)FUN_5c8a1ae0(dVar1);
  *(double *)(param_1 + 10) = (double)fVar5;
  dVar2 = _DAT_5c8dd7a8;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3ff00000;
  if (dVar4 <= dVar2) {
    param_1[0xe] = 0;
    param_1[0xf] = 0xbff00000;
    return;
  }
  fVar5 = (float10)_CIpow();
  *(double *)(param_1 + 0xe) = (double)(fVar5 - (float10)_DAT_5c8dc920);
  return;
}


