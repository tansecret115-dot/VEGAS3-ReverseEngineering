/* Module: espr3260.dll
   Function: FUN_632f1640
   Address: 632f1640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_632f1640(float param_1,float *param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar3 = (float10)param_1 + (float10)param_1;
  fVar4 = (float10)*param_2;
  fVar5 = fVar3 * fVar4 + (float10)param_2[1];
  if (2 < param_3) {
    iVar2 = param_3 + -2;
    pfVar1 = param_2 + 2;
    fVar6 = fVar4;
    do {
      fVar4 = fVar5;
      iVar2 = iVar2 + -1;
      fVar5 = ((float10)(float)fVar3 * fVar4 - fVar6) + (float10)*pfVar1;
      pfVar1 = pfVar1 + 1;
      fVar6 = fVar4;
    } while (iVar2 != 0);
  }
  return (fVar5 * (float10)param_1 - fVar4) - (float10)param_2[param_3] * (float10)_DAT_632fa1d4;
}


