/* Module: espr3260.dll
   Function: FUN_632f65f0
   Address: 632f65f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_632f65f0(int param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = (float10)_DAT_632fa3b0;
  if (0 < param_3) {
    pfVar3 = param_2;
    iVar4 = param_3;
    do {
      pfVar1 = (float *)((param_1 - (int)param_2) + (int)pfVar3);
      fVar2 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      iVar4 = iVar4 + -1;
      fVar5 = (float10)*pfVar1 * (float10)fVar2 + fVar5;
    } while (iVar4 != 0);
  }
  fVar6 = (float10)_DAT_632fa3b4;
  if (0 < param_3) {
    do {
      fVar2 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      fVar6 = (float10)fVar2 * (float10)fVar2 + fVar6;
    } while (param_3 != 0);
  }
  return fVar5 / fVar6;
}


