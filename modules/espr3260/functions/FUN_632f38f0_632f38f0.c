/* Module: espr3260.dll
   Function: FUN_632f38f0
   Address: 632f38f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f38f0(float *param_1,int param_2,float *param_3,int param_4,float *param_5,
                 float *param_6,int param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int local_c;
  int local_8;
  
  pfVar7 = param_3;
  if (param_4 <= (int)param_3) {
    iVar12 = (int)param_3 - param_4;
    iVar5 = param_2 - (int)param_5;
    pfVar7 = param_5 + (int)param_3;
    pfVar6 = param_5 + param_4;
    iVar4 = param_7 - (int)param_8;
    iVar11 = param_4 - (int)param_3;
    local_8 = 0x10;
    pfVar10 = param_3;
    pfVar8 = param_8;
    param_3 = param_6 + (int)param_3 * 0x10;
    param_5 = pfVar7;
    param_6 = param_6 + param_4 * 0x10;
    param_8 = pfVar6;
    do {
      iVar9 = iVar11 + (int)pfVar10;
      pfVar7 = (float *)((int)param_8 + iVar5);
      pfVar6 = param_1;
      fVar3 = _DAT_632fa31c;
      if (iVar9 < (int)pfVar10) {
        iVar9 = (int)pfVar10 - iVar9;
        do {
          fVar1 = *pfVar7;
          fVar2 = *pfVar6;
          pfVar7 = pfVar7 + 1;
          pfVar6 = pfVar6 + 1;
          iVar9 = iVar9 + -1;
          fVar3 = fVar1 * fVar2 + fVar3;
        } while (iVar9 != 0);
      }
      fVar1 = _DAT_632fa31c;
      if ((int)pfVar10 < 0x50) {
        iVar9 = 0x50 - (int)pfVar10;
        do {
          iVar9 = iVar9 + -1;
          fVar3 = *pfVar7 * *pfVar6 + fVar3;
          fVar1 = pfVar6[-iVar12] * *pfVar7 + fVar1;
          pfVar7 = pfVar7 + 1;
          pfVar6 = pfVar6 + 1;
        } while (iVar9 != 0);
      }
      if (*param_5 < (float)_DAT_632fa320) {
        fVar1 = -fVar1;
      }
      if (*param_8 < (float)_DAT_632fa320) {
        fVar3 = -fVar3;
      }
      fVar2 = *param_3;
      param_3 = param_3 + 1;
      pfVar10 = (float *)((int)pfVar10 + 5);
      *(float *)((int)pfVar8 + iVar4) = fVar2 + fVar1;
      param_5 = param_5 + 5;
      param_8 = param_8 + 5;
      *pfVar8 = *param_6 + fVar3;
      local_8 = local_8 + -1;
      pfVar8 = pfVar8 + 1;
      param_6 = param_6 + 1;
    } while (local_8 != 0);
    return;
  }
  iVar4 = param_4 - (int)param_3;
  iVar11 = param_2 - (int)param_5;
  pfVar6 = param_5 + (int)param_3;
  iVar5 = param_7 - (int)param_8;
  local_c = 0x10;
  iVar12 = param_4;
  pfVar10 = param_8;
  param_3 = param_6 + (int)param_3 * 0x10;
  param_5 = param_5 + param_4;
  param_6 = param_6 + param_4 * 0x10;
  param_8 = pfVar6;
  do {
    iVar9 = (int)pfVar7 + (iVar12 - param_4);
    pfVar6 = (float *)((int)param_8 + iVar11);
    pfVar8 = param_1;
    fVar3 = _DAT_632fa31c;
    if (iVar9 < iVar12) {
      iVar9 = iVar12 - iVar9;
      do {
        fVar1 = *pfVar6;
        fVar2 = *pfVar8;
        pfVar6 = pfVar6 + 1;
        pfVar8 = pfVar8 + 1;
        iVar9 = iVar9 + -1;
        fVar3 = fVar1 * fVar2 + fVar3;
      } while (iVar9 != 0);
    }
    fVar1 = _DAT_632fa31c;
    if (iVar12 < 0x50) {
      iVar9 = 0x50 - iVar12;
      do {
        iVar9 = iVar9 + -1;
        fVar3 = *pfVar6 * *pfVar8 + fVar3;
        fVar1 = pfVar8[-iVar4] * *pfVar6 + fVar1;
        pfVar6 = pfVar6 + 1;
        pfVar8 = pfVar8 + 1;
      } while (iVar9 != 0);
    }
    if (*param_8 < (float)_DAT_632fa320) {
      fVar3 = -fVar3;
    }
    if (*param_5 < (float)_DAT_632fa320) {
      fVar1 = -fVar1;
    }
    fVar2 = *param_3;
    param_3 = param_3 + 1;
    iVar12 = iVar12 + 5;
    *(float *)(iVar5 + -4 + (int)(pfVar10 + 1)) = fVar2 + fVar3;
    param_8 = param_8 + 5;
    param_5 = param_5 + 5;
    *pfVar10 = *param_6 + fVar1;
    local_c = local_c + -1;
    pfVar10 = pfVar10 + 1;
    param_6 = param_6 + 1;
  } while (local_c != 0);
  return;
}


