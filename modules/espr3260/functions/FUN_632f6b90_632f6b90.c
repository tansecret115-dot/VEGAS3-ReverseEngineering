/* Module: espr3260.dll
   Function: FUN_632f6b90
   Address: 632f6b90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f6b90(float param_1,float param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (param_1 * _DAT_632fa3f8) / param_2;
  param_1 = 1.4013e-45;
  _DAT_632ffa88 = param_3;
  if (0 < param_4) {
    pfVar2 = (float *)&DAT_632ffa8c;
    do {
      fVar3 = (float10)(int)param_1;
      param_1 = (float)((int)param_1 + 1);
      fVar4 = (float10)1.4426950408889634 *
              (float10)(fVar1 * fVar1) * fVar3 * fVar3 * (float10)_DAT_632fa400;
      fVar3 = ROUND(fVar4);
      fVar4 = (float10)f2xm1(fVar4 - fVar3);
      fVar3 = (float10)fscale((float10)1 + fVar4,fVar3);
      *pfVar2 = (float)fVar3;
      pfVar2 = pfVar2 + 1;
    } while ((int)param_1 <= param_4);
  }
  return;
}


