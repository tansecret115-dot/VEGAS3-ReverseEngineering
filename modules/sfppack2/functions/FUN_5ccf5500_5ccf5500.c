/* Module: sfppack2.dll
   Function: FUN_5ccf5500
   Address: 5ccf5500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5ccf5500(int param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  dVar1 = *param_2;
  fVar3 = (float10)dVar1;
  dVar2 = param_2[2];
  if (_DAT_5cd528e8 <= dVar1) {
    if (_DAT_5cd528e0 < dVar1) {
      fVar3 = (float10)_DAT_5cd528e0;
    }
  }
  else {
    fVar3 = (float10)_DAT_5cd528e8;
  }
  fVar6 = (float10)_DAT_5cd53ac8;
  fVar5 = (float10)1.4426950408889634 * ((fVar3 * (float10)_DAT_5cd53ae8) / (float10)param_2[2]);
  fVar4 = ROUND(fVar5);
  fVar5 = (float10)f2xm1(fVar5 - fVar4);
  fVar4 = (float10)fscale((float10)1 + fVar5,fVar4);
  fVar5 = (float10)fcos((float10)(double)(fVar3 * fVar6));
  fVar4 = fVar5 * fVar4 + fVar5 * fVar4;
  *(double *)(param_1 + 0x10) = (double)fVar4;
  fVar6 = (float10)1.4426950408889634 * -((float10)(double)(fVar3 * fVar6) / (float10)dVar2);
  fVar3 = ROUND(fVar6);
  fVar6 = (float10)f2xm1(fVar6 - fVar3);
  fVar3 = (float10)fscale((float10)1 + fVar6,fVar3);
  *(double *)(param_1 + 0x18) = (double)fVar3;
  *(double *)(param_1 + 0x20) = (double)(((float10)_DAT_5cd51510 - fVar4) + fVar3);
  fVar3 = (float10)FUN_5ccf5400(dVar1);
  *(double *)(param_1 + 0x28) = (double)fVar3;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x34) = 0x3ff00000;
  fVar3 = (float10)_CIpow();
  *(double *)(param_1 + 0x38) = (double)(fVar3 - (float10)_DAT_5cd51510);
  return;
}


