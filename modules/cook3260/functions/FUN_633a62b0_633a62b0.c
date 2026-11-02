/* Module: cook3260.dll
   Function: FUN_633a62b0
   Address: 633a62b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_633a62b0(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != 7) {
    fVar2 = *(float *)(&DAT_633a9630 + param_1 * 4);
    iVar3 = *(int *)(&DAT_633a9650 + param_1 * 4);
    iVar7 = 0x14;
    fVar5 = _DAT_633a95e8 /
            (*(float *)(&DAT_633a9610 + param_1 * 4) * *(float *)(param_4 + param_2 * 4));
    pfVar6 = (float *)(param_2 * 0x50 + param_3);
    iVar8 = param_6 - (int)param_5;
    do {
      fVar4 = *pfVar6;
      iVar1 = (int)ROUND(ABS(fVar4) * fVar5 + fVar2);
      *param_5 = iVar1;
      if (iVar3 < iVar1) {
        *param_5 = iVar3;
      }
      pfVar6 = pfVar6 + 1;
      *(uint *)(iVar8 + (int)param_5) = (uint)fVar4 >> 0x1f;
      param_5 = param_5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}


