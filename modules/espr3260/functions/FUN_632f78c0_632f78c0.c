/* Module: espr3260.dll
   Function: FUN_632f78c0
   Address: 632f78c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f78c0(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  
  pfVar9 = param_1 + -(int)param_2;
  iVar6 = -param_3;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 3;
    pfVar9 = pfVar9 + -1;
  }
  if (0 < param_4) {
    param_2 = param_1;
    param_1 = (float *)param_4;
    do {
      pfVar11 = pfVar9 + 1;
      iVar10 = 10;
      pfVar7 = (float *)(&DAT_632fb0f8 + iVar6 * 4);
      pfVar8 = pfVar11;
      fVar5 = _DAT_632fa514;
      do {
        fVar2 = *pfVar7;
        pfVar1 = (float *)((int)pfVar7 +
                          (int)(&DAT_632fb104 + (iVar6 * -4 - (int)(&DAT_632fb0f8 + iVar6 * 4))));
        fVar3 = *pfVar8;
        fVar4 = *pfVar9;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar7 + 3;
        pfVar9 = pfVar9 + -1;
        iVar10 = iVar10 + -1;
        fVar5 = fVar2 * fVar4 + *pfVar1 * fVar3 + fVar5;
      } while (iVar10 != 0);
      *param_2 = fVar5;
      param_2 = param_2 + 1;
      param_1 = (float *)((int)param_1 + -1);
      pfVar9 = pfVar11;
    } while (param_1 != (float *)0x0);
  }
  return;
}


