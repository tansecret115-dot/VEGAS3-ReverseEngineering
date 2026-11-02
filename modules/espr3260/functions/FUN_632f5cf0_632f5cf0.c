/* Module: espr3260.dll
   Function: FUN_632f5cf0
   Address: 632f5cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f5cf0(float *param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  if (0 < param_4) {
    iVar7 = param_2 - (int)param_3;
    do {
      fVar3 = _DAT_632fa368;
      if (-1 < iVar8) {
        pfVar4 = (float *)(iVar7 + (int)param_3);
        iVar6 = iVar8 + 1;
        pfVar5 = param_1;
        do {
          fVar1 = *pfVar4;
          fVar2 = *pfVar5;
          pfVar4 = pfVar4 + -1;
          pfVar5 = pfVar5 + 1;
          iVar6 = iVar6 + -1;
          fVar3 = fVar1 * fVar2 + fVar3;
        } while (iVar6 != 0);
      }
      *param_3 = fVar3;
      iVar8 = iVar8 + 1;
      param_3 = param_3 + 1;
    } while (iVar8 < param_4);
  }
  return;
}


