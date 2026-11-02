/* Module: sfxpfx2.dll
   Function: FUN_5c8a1be0
   Address: 5c8a1be0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5c8a1be0(undefined4 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  dVar1 = *param_2;
  fVar4 = (float10)dVar1;
  dVar3 = param_2[2];
  dVar2 = param_2[2];
  if (_DAT_5c8dd7c8 <= dVar1) {
    if (_DAT_5c8dd7c0 < dVar1) {
      fVar4 = (float10)_DAT_5c8dd7c0;
    }
  }
  else {
    fVar4 = (float10)_DAT_5c8dd7c8;
  }
  fVar7 = (float10)_DAT_5c8dd7b8;
  param_1[2] = 0;
  *param_1 = 0;
  fVar5 = (float10)_DAT_5c8dd7b0;
  param_1[3] = 0;
  param_1[1] = 0;
  fVar6 = (float10)1.4426950408889634 * ((fVar4 * fVar5) / (float10)dVar2);
  fVar5 = ROUND(fVar6);
  fVar6 = (float10)f2xm1(fVar6 - fVar5);
  fVar5 = (float10)fscale((float10)1 + fVar6,fVar5);
  fVar6 = (float10)fcos((float10)(double)(fVar4 * fVar7));
  fVar5 = fVar6 * fVar5 + fVar6 * fVar5;
  *(double *)(param_1 + 4) = (double)fVar5;
  fVar7 = (float10)1.4426950408889634 * -((float10)(double)(fVar4 * fVar7) / (float10)dVar3);
  fVar4 = ROUND(fVar7);
  fVar7 = (float10)f2xm1(fVar7 - fVar4);
  fVar4 = (float10)fscale((float10)1 + fVar7,fVar4);
  *(double *)(param_1 + 6) = (double)fVar4;
  *(double *)(param_1 + 8) = (double)(((float10)_DAT_5c8dc920 - fVar5) + fVar4);
  fVar4 = (float10)FUN_5c8a1ae0(dVar1);
  *(double *)(param_1 + 10) = (double)fVar4;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0x3ff00000;
  param_1[0xd] = 0x3ff00000;
  fVar4 = (float10)_CIpow();
  *(double *)(param_1 + 0xe) = (double)(fVar4 - (float10)_DAT_5c8dc920);
  return;
}


