/* Module: vidpcore.dll
   Function: FUN_5df01460
   Address: 5df01460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5df01460(int param_1,uint param_2,uint param_3,float param_4,float param_5,float param_6,
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
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float *local_c;
  uint local_8;
  
  param_4 = param_4 + _DAT_5df205c8;
  local_c = (float *)(param_1 + 4);
  param_6 = param_6 + _DAT_5df205c8;
  pfVar18 = (float *)(param_3 * 0x10 + 4 + param_1);
  local_28 = 1.0;
  local_30 = 1.0;
  local_24 = 0.0;
  local_2c = 0.0;
  local_8 = 0;
  while( true ) {
    fVar1 = param_4 * local_30 - local_2c * param_5;
    fVar3 = local_30 * param_5 + param_4 * local_2c;
    fVar9 = param_6 * local_28 - local_24 * param_7;
    fVar10 = local_28 * param_7 + param_6 * local_24;
    if (local_8 < param_2) {
      pfVar16 = (float *)((local_8 + param_3 * 3) * 0x10 + 4 + param_1);
      pfVar15 = (float *)((local_8 + param_3 * 2) * 0x10 + 4 + param_1);
      pfVar14 = local_c;
      uVar17 = local_8;
      pfVar19 = pfVar18;
      do {
        fVar2 = local_30 * pfVar19[-1] - local_2c * pfVar19[1];
        fVar5 = local_30 * pfVar19[1] + local_2c * pfVar19[-1];
        fVar4 = fVar2 + pfVar14[-1];
        fVar6 = fVar5 + pfVar14[1];
        fVar2 = pfVar14[-1] - fVar2;
        fVar5 = pfVar14[1] - fVar5;
        fVar7 = local_30 * pfVar16[-1] - local_2c * pfVar16[1];
        fVar8 = local_2c * pfVar16[-1] + local_30 * pfVar16[1];
        fVar11 = fVar7 + pfVar15[-1];
        fVar12 = fVar8 + pfVar15[1];
        fVar7 = pfVar15[-1] - fVar7;
        fVar8 = pfVar15[1] - fVar8;
        fVar13 = fVar11 * local_28 - fVar12 * local_24;
        fVar11 = fVar12 * local_28 + fVar11 * local_24;
        pfVar14[-1] = fVar4 + fVar13;
        pfVar14[1] = fVar6 + fVar11;
        pfVar15[-1] = fVar4 - fVar13;
        pfVar15[1] = fVar6 - fVar11;
        fVar6 = fVar8 * local_28 + fVar7 * local_24;
        fVar4 = fVar8 * local_24 - fVar7 * local_28;
        pfVar16[-1] = fVar2 - fVar6;
        pfVar16[1] = fVar5 - fVar4;
        pfVar19[-1] = fVar2 + fVar6;
        pfVar19[1] = fVar5 + fVar4;
        fVar2 = local_30 * *pfVar19 - local_2c * pfVar19[2];
        fVar5 = local_30 * pfVar19[2] + local_2c * *pfVar19;
        fVar4 = fVar2 + *pfVar14;
        fVar6 = fVar5 + pfVar14[2];
        fVar2 = *pfVar14 - fVar2;
        fVar5 = pfVar14[2] - fVar5;
        fVar7 = local_30 * *pfVar16 - local_2c * pfVar16[2];
        fVar8 = local_2c * *pfVar16 + local_30 * pfVar16[2];
        fVar11 = fVar7 + *pfVar15;
        fVar12 = fVar8 + pfVar15[2];
        fVar7 = *pfVar15 - fVar7;
        fVar8 = pfVar15[2] - fVar8;
        fVar13 = fVar11 * local_28 - fVar12 * local_24;
        fVar11 = fVar12 * local_28 + fVar11 * local_24;
        *pfVar14 = fVar4 + fVar13;
        pfVar14[2] = fVar6 + fVar11;
        *pfVar15 = fVar4 - fVar13;
        pfVar15[2] = fVar6 - fVar11;
        fVar6 = fVar8 * local_28 + fVar7 * local_24;
        fVar4 = fVar8 * local_24 - fVar7 * local_28;
        *pfVar16 = fVar2 - fVar6;
        pfVar16[2] = fVar5 - fVar4;
        *pfVar19 = fVar2 + fVar6;
        pfVar19[2] = fVar5 + fVar4;
        fVar7 = fVar1 * pfVar19[3] - fVar3 * pfVar19[5];
        fVar6 = fVar3 * pfVar19[3] + fVar1 * pfVar19[5];
        fVar8 = fVar7 + pfVar14[3];
        fVar7 = pfVar14[3] - fVar7;
        fVar11 = fVar6 + pfVar14[5];
        fVar6 = pfVar14[5] - fVar6;
        fVar4 = fVar1 * pfVar16[3] - fVar3 * pfVar16[5];
        fVar2 = fVar1 * pfVar16[5] + fVar3 * pfVar16[3];
        fVar5 = fVar4 + pfVar15[3];
        fVar4 = pfVar15[3] - fVar4;
        fVar13 = fVar2 + pfVar15[5];
        fVar2 = pfVar15[5] - fVar2;
        fVar12 = fVar5 * fVar9 - fVar13 * fVar10;
        fVar5 = fVar13 * fVar9 + fVar5 * fVar10;
        pfVar14[3] = fVar8 + fVar12;
        pfVar15[3] = fVar8 - fVar12;
        pfVar14[5] = fVar11 + fVar5;
        pfVar15[5] = fVar11 - fVar5;
        fVar5 = fVar2 * fVar9 + fVar4 * fVar10;
        fVar2 = fVar2 * fVar10 - fVar4 * fVar9;
        pfVar16[3] = fVar7 - fVar5;
        pfVar19[3] = fVar7 + fVar5;
        pfVar16[5] = fVar6 - fVar2;
        pfVar19[5] = fVar6 + fVar2;
        fVar7 = fVar1 * pfVar19[4] - fVar3 * pfVar19[6];
        fVar6 = fVar1 * pfVar19[6] + fVar3 * pfVar19[4];
        fVar8 = fVar7 + pfVar14[4];
        fVar7 = pfVar14[4] - fVar7;
        fVar11 = fVar6 + pfVar14[6];
        fVar6 = pfVar14[6] - fVar6;
        fVar4 = fVar1 * pfVar16[4] - fVar3 * pfVar16[6];
        fVar2 = fVar3 * pfVar16[4] + fVar1 * pfVar16[6];
        fVar5 = fVar4 + pfVar15[4];
        fVar4 = pfVar15[4] - fVar4;
        uVar17 = uVar17 + param_3 * 4;
        fVar13 = fVar2 + pfVar15[6];
        fVar2 = pfVar15[6] - fVar2;
        fVar12 = fVar5 * fVar9 - fVar13 * fVar10;
        fVar5 = fVar13 * fVar9 + fVar5 * fVar10;
        pfVar14[4] = fVar8 + fVar12;
        pfVar15[4] = fVar8 - fVar12;
        pfVar14[6] = fVar11 + fVar5;
        pfVar14 = pfVar14 + param_3 * 0x10;
        pfVar15[6] = fVar11 - fVar5;
        pfVar15 = pfVar15 + param_3 * 0x10;
        fVar5 = fVar2 * fVar9 + fVar4 * fVar10;
        fVar2 = fVar2 * fVar10 - fVar4 * fVar9;
        pfVar16[4] = fVar7 - fVar5;
        pfVar19[4] = fVar7 + fVar5;
        pfVar16[6] = fVar6 - fVar2;
        pfVar16 = pfVar16 + param_3 * 0x10;
        pfVar19[6] = fVar6 + fVar2;
        pfVar19 = pfVar19 + param_3 * 0x10;
      } while (uVar17 < param_2);
    }
    local_8 = local_8 + 2;
    local_c = local_c + 8;
    pfVar18 = pfVar18 + 8;
    if (param_3 <= local_8) break;
    local_30 = param_4 * fVar1 - fVar3 * param_5;
    local_2c = fVar1 * param_5 + param_4 * fVar3;
    local_28 = param_6 * fVar9 - fVar10 * param_7;
    local_24 = fVar9 * param_7 + param_6 * fVar10;
  }
  return;
}


