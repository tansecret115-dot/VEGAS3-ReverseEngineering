/* Module: sfppack2.dll
   Function: FUN_5ccf5110
   Address: 5ccf5110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5ccf5110(int param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  dVar2 = param_2[2];
  dVar3 = param_2[1];
  dVar1 = _DAT_5cd528f0;
  if ((float10)*param_2 < (float10)_DAT_5cd52900) {
    dVar1 = _DAT_5cd528f8;
  }
  fVar4 = (float10)*param_2 * (float10)dVar1;
  if (_DAT_5cd528e8 <= (double)fVar4) {
    if (_DAT_5cd528e0 <= (double)fVar4) {
      fVar4 = (float10)_DAT_5cd528e0;
    }
  }
  else {
    fVar4 = (float10)_DAT_5cd528e8;
  }
  fVar7 = (float10)_DAT_5cd53ac8;
  fVar6 = (float10)1.4426950408889634 * ((fVar4 * (float10)_DAT_5cd53ae8) / (float10)param_2[2]);
  fVar5 = ROUND(fVar6);
  fVar6 = (float10)f2xm1(fVar6 - fVar5);
  fVar5 = (float10)fscale((float10)1 + fVar6,fVar5);
  fVar6 = (float10)fcos((float10)(double)(fVar4 * fVar7));
  fVar5 = fVar6 * fVar5 + fVar6 * fVar5;
  *(double *)(param_1 + 0x10) = (double)fVar5;
  fVar7 = (float10)1.4426950408889634 * -((float10)(double)(fVar4 * fVar7) / (float10)dVar2);
  fVar4 = ROUND(fVar7);
  fVar7 = (float10)f2xm1(fVar7 - fVar4);
  fVar4 = (float10)fscale((float10)1 + fVar7,fVar4);
  *(double *)(param_1 + 0x18) = (double)fVar4;
  *(double *)(param_1 + 0x20) = (double)(((float10)_DAT_5cd51510 - fVar5) + fVar4);
  dVar1 = _DAT_5cd51510;
  if (_DAT_5cd528d0 < dVar3) {
    fVar4 = (float10)_CIpow();
    *(double *)(param_1 + 0x30) = (double)fVar4;
    *(double *)(param_1 + 0x38) = _DAT_5cd51510 - *(double *)(param_1 + 0x30);
    return;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(double *)(param_1 + 0x38) = dVar1 - *(double *)(param_1 + 0x30);
  return;
}


