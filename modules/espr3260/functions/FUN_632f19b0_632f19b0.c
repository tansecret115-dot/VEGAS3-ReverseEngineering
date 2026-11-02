/* Module: espr3260.dll
   Function: FUN_632f19b0
   Address: 632f19b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f19b0(float *param_1,float param_2,float *param_3,int param_4,int param_5,int param_6)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  
  iVar13 = param_4;
  pfVar12 = (float *)((int)param_3 * 0x40 + param_5);
  param_5 = (int)param_3 + 9;
  param_4 = 4;
  pfVar14 = (float *)(iVar13 + 0x18 + (int)param_3 * 4);
  pfVar15 = (float *)(param_6 + 8);
  param_3 = (float *)((int)param_2 + (int)param_3 * 4);
  do {
    param_2 = _DAT_632fa220;
    iVar13 = 3;
    pfVar10 = param_3;
    pfVar11 = param_1;
    fVar9 = _DAT_632fa220;
    do {
      fVar3 = *pfVar10;
      fVar4 = *pfVar11;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
      iVar13 = iVar13 + -1;
      fVar9 = fVar3 * fVar4 + fVar9;
    } while (iVar13 != 0);
    iVar13 = 3;
    fVar3 = _DAT_632fa220;
    do {
      pfVar1 = pfVar11 + -3;
      fVar4 = *pfVar10;
      fVar9 = *pfVar10 * *pfVar11 + fVar9;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
      iVar13 = iVar13 + -1;
      fVar3 = *pfVar1 * fVar4 + fVar3;
    } while (iVar13 != 0);
    iVar13 = 3;
    fVar4 = _DAT_632fa220;
    do {
      pfVar1 = pfVar11 + -3;
      fVar5 = *pfVar10;
      fVar4 = pfVar11[-6] * *pfVar10 + fVar4;
      fVar9 = *pfVar10 * *pfVar11 + fVar9;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
      iVar13 = iVar13 + -1;
      fVar3 = *pfVar1 * fVar5 + fVar3;
    } while (iVar13 != 0);
    if (param_5 < 0x30) {
      iVar13 = 0x30 - param_5;
      do {
        pfVar1 = pfVar11 + -6;
        pfVar2 = pfVar11 + -3;
        fVar5 = *pfVar10;
        fVar6 = *pfVar11;
        fVar7 = *pfVar10;
        fVar8 = *pfVar10;
        param_2 = pfVar11[-9] * *pfVar10 + param_2;
        pfVar10 = pfVar10 + 1;
        pfVar11 = pfVar11 + 1;
        iVar13 = iVar13 + -1;
        fVar4 = *pfVar1 * fVar7 + fVar4;
        fVar3 = *pfVar2 * fVar8 + fVar3;
        fVar9 = fVar5 * fVar6 + fVar9;
      } while (iVar13 != 0);
    }
    param_5 = param_5 + 0xc;
    param_3 = param_3 + 0xc;
    param_4 = param_4 + -1;
    pfVar15[-2] = pfVar14[-6] * fVar9 + *pfVar12;
    pfVar15[-1] = pfVar14[-3] * fVar3 + pfVar12[1];
    *pfVar15 = fVar4 * *pfVar14 + pfVar12[2];
    pfVar15[1] = pfVar14[3] * param_2 + pfVar12[3];
    pfVar12 = pfVar12 + 4;
    pfVar14 = pfVar14 + 0xc;
    pfVar15 = pfVar15 + 4;
  } while (param_4 != 0);
  return;
}


