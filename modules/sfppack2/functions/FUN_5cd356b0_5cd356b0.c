/* Module: sfppack2.dll
   Function: FUN_5cd356b0
   Address: 5cd356b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cd356b0(int param_1,uint param_2,uint param_3,float param_4,float param_5,float param_6,
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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  float *pfVar20;
  float *pfVar21;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float *local_c;
  uint local_8;
  
  fVar14 = param_4 + _DAT_5cd5344c;
  local_c = (float *)(param_1 + 4);
  fVar15 = param_6 + _DAT_5cd5344c;
  pfVar20 = (float *)(param_3 * 0x10 + 4 + param_1);
  local_28 = 1.0;
  local_30 = 1.0;
  local_24 = 0.0;
  local_2c = 0.0;
  local_8 = 0;
  while( true ) {
    fVar1 = fVar14 * local_30 - local_2c * param_5;
    fVar3 = local_30 * param_5 + fVar14 * local_2c;
    fVar9 = fVar15 * local_28 - local_24 * param_7;
    fVar10 = local_28 * param_7 + fVar15 * local_24;
    if (local_8 < param_2) {
      pfVar18 = (float *)((local_8 + param_3 * 3) * 0x10 + 4 + param_1);
      pfVar17 = (float *)((local_8 + param_3 * 2) * 0x10 + 4 + param_1);
      pfVar16 = local_c;
      uVar19 = local_8;
      pfVar21 = pfVar20;
      do {
        fVar2 = local_30 * pfVar21[-1] - local_2c * pfVar21[1];
        fVar5 = local_30 * pfVar21[1] + local_2c * pfVar21[-1];
        fVar4 = fVar2 + pfVar16[-1];
        fVar6 = fVar5 + pfVar16[1];
        fVar2 = pfVar16[-1] - fVar2;
        fVar5 = pfVar16[1] - fVar5;
        fVar7 = local_30 * pfVar18[-1] - local_2c * pfVar18[1];
        fVar8 = local_2c * pfVar18[-1] + local_30 * pfVar18[1];
        fVar11 = fVar7 + pfVar17[-1];
        fVar12 = fVar8 + pfVar17[1];
        fVar7 = pfVar17[-1] - fVar7;
        fVar8 = pfVar17[1] - fVar8;
        fVar13 = fVar11 * local_28 - fVar12 * local_24;
        fVar11 = fVar12 * local_28 + fVar11 * local_24;
        pfVar16[-1] = fVar4 + fVar13;
        pfVar16[1] = fVar6 + fVar11;
        pfVar17[-1] = fVar4 - fVar13;
        pfVar17[1] = fVar6 - fVar11;
        fVar6 = fVar8 * local_28 + fVar7 * local_24;
        fVar4 = fVar8 * local_24 - fVar7 * local_28;
        pfVar18[-1] = fVar2 - fVar6;
        pfVar18[1] = fVar5 - fVar4;
        pfVar21[-1] = fVar2 + fVar6;
        pfVar21[1] = fVar5 + fVar4;
        fVar2 = local_30 * *pfVar21 - local_2c * pfVar21[2];
        fVar5 = local_30 * pfVar21[2] + local_2c * *pfVar21;
        fVar4 = fVar2 + *pfVar16;
        fVar6 = fVar5 + pfVar16[2];
        fVar2 = *pfVar16 - fVar2;
        fVar5 = pfVar16[2] - fVar5;
        fVar7 = local_30 * *pfVar18 - local_2c * pfVar18[2];
        fVar8 = local_2c * *pfVar18 + local_30 * pfVar18[2];
        fVar11 = fVar7 + *pfVar17;
        fVar12 = fVar8 + pfVar17[2];
        fVar7 = *pfVar17 - fVar7;
        fVar8 = pfVar17[2] - fVar8;
        fVar13 = fVar11 * local_28 - fVar12 * local_24;
        fVar11 = fVar12 * local_28 + fVar11 * local_24;
        *pfVar16 = fVar4 + fVar13;
        pfVar16[2] = fVar6 + fVar11;
        *pfVar17 = fVar4 - fVar13;
        pfVar17[2] = fVar6 - fVar11;
        fVar6 = fVar8 * local_28 + fVar7 * local_24;
        fVar4 = fVar8 * local_24 - fVar7 * local_28;
        *pfVar18 = fVar2 - fVar6;
        pfVar18[2] = fVar5 - fVar4;
        *pfVar21 = fVar2 + fVar6;
        pfVar21[2] = fVar5 + fVar4;
        fVar7 = fVar1 * pfVar21[3] - fVar3 * pfVar21[5];
        fVar6 = fVar3 * pfVar21[3] + fVar1 * pfVar21[5];
        fVar8 = fVar7 + pfVar16[3];
        fVar7 = pfVar16[3] - fVar7;
        fVar11 = fVar6 + pfVar16[5];
        fVar6 = pfVar16[5] - fVar6;
        fVar4 = fVar1 * pfVar18[3] - fVar3 * pfVar18[5];
        fVar2 = fVar1 * pfVar18[5] + fVar3 * pfVar18[3];
        fVar5 = fVar4 + pfVar17[3];
        fVar4 = pfVar17[3] - fVar4;
        fVar13 = fVar2 + pfVar17[5];
        fVar2 = pfVar17[5] - fVar2;
        fVar12 = fVar5 * fVar9 - fVar13 * fVar10;
        fVar5 = fVar13 * fVar9 + fVar5 * fVar10;
        pfVar16[3] = fVar8 + fVar12;
        pfVar17[3] = fVar8 - fVar12;
        pfVar16[5] = fVar11 + fVar5;
        pfVar17[5] = fVar11 - fVar5;
        fVar5 = fVar2 * fVar9 + fVar4 * fVar10;
        fVar2 = fVar2 * fVar10 - fVar4 * fVar9;
        pfVar18[3] = fVar7 - fVar5;
        pfVar21[3] = fVar7 + fVar5;
        pfVar18[5] = fVar6 - fVar2;
        pfVar21[5] = fVar6 + fVar2;
        fVar7 = fVar1 * pfVar21[4] - fVar3 * pfVar21[6];
        fVar6 = fVar1 * pfVar21[6] + fVar3 * pfVar21[4];
        fVar8 = fVar7 + pfVar16[4];
        fVar7 = pfVar16[4] - fVar7;
        fVar11 = fVar6 + pfVar16[6];
        fVar6 = pfVar16[6] - fVar6;
        fVar4 = fVar1 * pfVar18[4] - fVar3 * pfVar18[6];
        fVar2 = fVar3 * pfVar18[4] + fVar1 * pfVar18[6];
        fVar5 = fVar4 + pfVar17[4];
        fVar4 = pfVar17[4] - fVar4;
        uVar19 = uVar19 + param_3 * 4;
        fVar13 = fVar2 + pfVar17[6];
        fVar2 = pfVar17[6] - fVar2;
        fVar12 = fVar5 * fVar9 - fVar13 * fVar10;
        fVar5 = fVar13 * fVar9 + fVar5 * fVar10;
        pfVar16[4] = fVar8 + fVar12;
        pfVar17[4] = fVar8 - fVar12;
        pfVar16[6] = fVar11 + fVar5;
        pfVar16 = pfVar16 + param_3 * 0x10;
        pfVar17[6] = fVar11 - fVar5;
        pfVar17 = pfVar17 + param_3 * 0x10;
        fVar5 = fVar2 * fVar9 + fVar4 * fVar10;
        fVar2 = fVar2 * fVar10 - fVar4 * fVar9;
        pfVar18[4] = fVar7 - fVar5;
        pfVar21[4] = fVar7 + fVar5;
        pfVar18[6] = fVar6 - fVar2;
        pfVar18 = pfVar18 + param_3 * 0x10;
        pfVar21[6] = fVar6 + fVar2;
        pfVar21 = pfVar21 + param_3 * 0x10;
      } while (uVar19 < param_2);
    }
    local_8 = local_8 + 2;
    local_c = local_c + 8;
    pfVar20 = pfVar20 + 8;
    if (param_3 <= local_8) break;
    local_30 = fVar14 * fVar1 - fVar3 * param_5;
    local_2c = fVar1 * param_5 + fVar14 * fVar3;
    local_28 = fVar15 * fVar9 - fVar10 * param_7;
    local_24 = fVar9 * param_7 + fVar15 * fVar10;
  }
  return;
}


