/* Module: sfppack2.dll
   Function: FUN_5cd34bf0
   Address: 5cd34bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cd34bf0(int param_1,uint param_2,float param_3,float param_4,float param_5,float param_6,
                 float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  
  uVar15 = param_2 >> 2;
  if (uVar15 != 0) {
    fVar9 = param_5 + _DAT_5cd5344c;
    fVar10 = param_3 + _DAT_5cd5344c;
    pfVar11 = (float *)(param_1 + 4);
    pfVar14 = (float *)(uVar15 * 0x20 + 4 + param_1);
    pfVar12 = (float *)(uVar15 * 0x30 + 4 + param_1);
    pfVar13 = (float *)(uVar15 * 0x10 + 4 + param_1);
    fVar2 = _DAT_5cd5344c;
    fVar3 = _DAT_5cd53450;
    fVar7 = _DAT_5cd5344c;
    fVar8 = _DAT_5cd53450;
    do {
      fVar6 = fVar2 * pfVar13[-1] - fVar3 * pfVar13[1];
      fVar5 = fVar2 * pfVar13[1] + fVar3 * pfVar13[-1];
      fVar4 = fVar2 * *pfVar13 - fVar3 * pfVar13[2];
      fVar1 = fVar2 * pfVar13[2] + fVar3 * *pfVar13;
      pfVar13[-1] = pfVar11[-1] - fVar6;
      pfVar13[1] = pfVar11[1] - fVar5;
      *pfVar13 = *pfVar11 - fVar4;
      pfVar13[2] = pfVar11[2] - fVar1;
      pfVar11[-1] = fVar6 + pfVar11[-1];
      pfVar11[1] = fVar5 + pfVar11[1];
      *pfVar11 = fVar4 + *pfVar11;
      pfVar11[2] = fVar1 + pfVar11[2];
      fVar6 = fVar2 * pfVar12[-1] - fVar3 * pfVar12[1];
      fVar5 = fVar2 * pfVar12[1] + fVar3 * pfVar12[-1];
      fVar4 = fVar2 * *pfVar12 - fVar3 * pfVar12[2];
      fVar1 = fVar2 * pfVar12[2] + fVar3 * *pfVar12;
      pfVar12[-1] = pfVar14[-1] - fVar6;
      pfVar12[1] = pfVar14[1] - fVar5;
      *pfVar12 = *pfVar14 - fVar4;
      pfVar12[2] = pfVar14[2] - fVar1;
      pfVar14[-1] = fVar6 + pfVar14[-1];
      pfVar14[1] = fVar5 + pfVar14[1];
      *pfVar14 = fVar4 + *pfVar14;
      fVar1 = fVar1 + pfVar14[2];
      pfVar14[2] = fVar1;
      fVar6 = fVar7 * pfVar14[-1] - fVar8 * pfVar14[1];
      fVar5 = fVar7 * pfVar14[1] + fVar8 * pfVar14[-1];
      fVar4 = fVar7 * *pfVar14 - fVar1 * fVar8;
      fVar1 = fVar8 * *pfVar14 + fVar1 * fVar7;
      pfVar14[-1] = (pfVar11[-1] - fVar6) * param_7;
      pfVar14[1] = (pfVar11[1] - fVar5) * param_7;
      pfVar11[-1] = (fVar6 + pfVar11[-1]) * param_7;
      pfVar11[1] = (fVar5 + pfVar11[1]) * param_7;
      *pfVar14 = (*pfVar11 - fVar4) * param_7;
      pfVar14[2] = (pfVar11[2] - fVar1) * param_7;
      *pfVar11 = (fVar4 + *pfVar11) * param_7;
      pfVar11[2] = (fVar1 + pfVar11[2]) * param_7;
      fVar6 = fVar7 * pfVar12[1] + fVar8 * pfVar12[-1];
      pfVar14 = pfVar14 + 4;
      pfVar11 = pfVar11 + 4;
      fVar5 = fVar8 * pfVar12[1] - fVar7 * pfVar12[-1];
      fVar4 = fVar7 * pfVar12[2] + fVar8 * *pfVar12;
      fVar1 = fVar8 * pfVar12[2] - fVar7 * *pfVar12;
      pfVar12[-1] = (pfVar13[-1] - fVar6) * param_7;
      pfVar12[1] = (pfVar13[1] - fVar5) * param_7;
      pfVar13[-1] = (fVar6 + pfVar13[-1]) * param_7;
      pfVar13[1] = (fVar5 + pfVar13[1]) * param_7;
      *pfVar12 = (*pfVar13 - fVar4) * param_7;
      pfVar12[2] = (pfVar13[2] - fVar1) * param_7;
      *pfVar13 = (fVar4 + *pfVar13) * param_7;
      pfVar13[2] = (fVar1 + pfVar13[2]) * param_7;
      fVar4 = fVar8 * param_6;
      fVar8 = fVar7 * param_6 + fVar9 * fVar8;
      fVar1 = fVar3 * param_4;
      fVar3 = fVar2 * param_4 + fVar10 * fVar3;
      uVar15 = uVar15 - 1;
      pfVar12 = pfVar12 + 4;
      pfVar13 = pfVar13 + 4;
      fVar2 = (fVar2 * param_3 - fVar1) + fVar2;
      fVar7 = (fVar7 * param_5 - fVar4) + fVar7;
    } while (uVar15 != 0);
  }
  return;
}


