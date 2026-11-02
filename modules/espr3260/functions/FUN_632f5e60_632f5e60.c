/* Module: espr3260.dll
   Function: FUN_632f5e60
   Address: 632f5e60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_632f5e60(float *param_1,float *param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float10 fVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = (float10)_DAT_632fa370;
  if (0 < param_4) {
    iVar4 = (int)param_2 - (int)param_1;
    iVar5 = param_4;
    do {
      pfVar1 = (float *)(iVar4 + (int)param_1);
      fVar2 = *param_1;
      param_1 = param_1 + 1;
      iVar5 = iVar5 + -1;
      fVar6 = (float10)*pfVar1 * (float10)fVar2 + fVar6;
    } while (iVar5 != 0);
  }
  fVar7 = (float10)_DAT_632fa378;
  if (0 < param_4) {
    do {
      fVar2 = *param_2;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
      fVar7 = (float10)fVar2 * (float10)fVar2 + fVar7;
    } while (param_4 != 0);
  }
  fVar3 = (float10)_DAT_632fa378;
  *param_3 = (float)fVar7;
  param_3[1] = (float)(fVar3 - (fVar6 + fVar6));
  return fVar6 / fVar7;
}


