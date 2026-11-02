/* Module: espr3260.dll
   Function: FUN_632f5f60
   Address: 632f5f60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f5f60(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = param_4 + -1;
  if (-1 < iVar6) {
    iVar5 = param_3 - (int)param_1;
    do {
      fVar3 = _DAT_632fa394;
      if (-1 < iVar6) {
        iVar7 = iVar6 + 1;
        pfVar4 = param_1;
        do {
          pfVar1 = (float *)((int)pfVar4 + iVar5);
          fVar2 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          iVar7 = iVar7 + -1;
          fVar3 = *pfVar1 * fVar2 + fVar3;
        } while (iVar7 != 0);
      }
      *param_2 = fVar3;
      param_2 = param_2 + 1;
      iVar6 = iVar6 + -1;
      param_1 = param_1 + 1;
      iVar5 = iVar5 + -4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


