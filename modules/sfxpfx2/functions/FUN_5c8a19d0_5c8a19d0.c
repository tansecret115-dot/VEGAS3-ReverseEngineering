/* Module: sfxpfx2.dll
   Function: FUN_5c8a19d0
   Address: 5c8a19d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5c8a19d0(undefined4 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  dVar2 = param_2[2];
  dVar1 = param_2[2];
  fVar3 = (float10)*param_2 * (float10)_DAT_5c8dd7e8;
  if ((float10)_DAT_5c8dd7c8 <= fVar3) {
    if ((float10)_DAT_5c8dd7c0 < fVar3) {
      fVar3 = (float10)_DAT_5c8dd7c0;
    }
  }
  else {
    fVar3 = (float10)_DAT_5c8dd7c8;
  }
  fVar6 = (float10)_DAT_5c8dd7b8;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[0xc] = 0;
  param_1[3] = 0;
  fVar4 = (float10)_DAT_5c8dd7b0;
  param_1[1] = 0;
  param_1[0xd] = 0x3ff00000;
  fVar5 = (float10)1.4426950408889634 * ((fVar3 * fVar4) / (float10)dVar1);
  fVar4 = ROUND(fVar5);
  fVar5 = (float10)f2xm1(fVar5 - fVar4);
  fVar4 = (float10)fscale((float10)1 + fVar5,fVar4);
  fVar5 = (float10)fcos((float10)(double)(fVar3 * fVar6));
  fVar4 = fVar5 * fVar4 + fVar5 * fVar4;
  *(double *)(param_1 + 4) = (double)fVar4;
  fVar6 = (float10)1.4426950408889634 * -((float10)(double)(fVar3 * fVar6) / (float10)dVar2);
  fVar3 = ROUND(fVar6);
  fVar6 = (float10)f2xm1(fVar6 - fVar3);
  fVar3 = (float10)fscale((float10)1 + fVar6,fVar3);
  *(double *)(param_1 + 6) = (double)fVar3;
  *(double *)(param_1 + 8) = (double)(((float10)_DAT_5c8dc920 - fVar4) + fVar3);
  fVar3 = (float10)_CIpow();
  *(double *)(param_1 + 0xe) = (double)(fVar3 - (float10)_DAT_5c8dc920);
  return;
}


