/* Module: espr3260.dll
   Function: FUN_632f7860
   Address: 632f7860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_632f7860(float *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  
  if (param_2 < 0) {
    param_2 = param_2 + 3;
    param_1 = param_1 + -1;
  }
  fVar8 = (float10)_DAT_632fa514;
  pfVar5 = (float *)(&DAT_632fb0c0 + param_2 * 4);
  iVar7 = 4;
  iVar4 = param_2 * -4 - (int)pfVar5;
  pfVar6 = param_1;
  do {
    pfVar6 = pfVar6 + 1;
    fVar2 = *pfVar5;
    pfVar1 = (float *)((int)pfVar5 + (int)(&DAT_632fb0cc + iVar4));
    fVar3 = *param_1;
    pfVar5 = pfVar5 + 3;
    param_1 = param_1 + -1;
    iVar7 = iVar7 + -1;
    fVar8 = (float10)fVar2 * (float10)fVar3 + (float10)*pfVar1 * (float10)*pfVar6 + fVar8;
  } while (iVar7 != 0);
  return fVar8;
}


