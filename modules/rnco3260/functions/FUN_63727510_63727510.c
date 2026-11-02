/* Module: rnco3260.dll
   Function: FUN_63727510
   Address: 63727510
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63727510(uint *param_1,uint *param_2,undefined4 param_3,int param_4,byte *param_5,byte *param_6,
            byte *param_7,byte *param_8,uint param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint3 uVar5;
  uint3 uVar6;
  uint3 uVar7;
  uint3 uVar8;
  uint3 uVar9;
  uint3 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  uint *puVar27;
  int iVar28;
  int local_20;
  uint local_1c;
  uint *local_18;
  int local_10;
  uint *local_c;
  uint local_8;
  
  local_10 = param_4 >> 1;
  local_20 = param_4 * 3 - local_10;
  if ((param_10 + param_9 & 1) != 0) {
    local_20 = local_20 + param_4 * 2;
  }
  local_20 = local_20 / (param_10 * 2);
  if (param_4 == 0) {
    return;
  }
  puVar27 = param_2;
  if (((param_9 & 1) == 0) && (1 < param_10)) {
    bVar1 = *param_7;
    bVar2 = *param_8;
    iVar22 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
    iVar26 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
    iVar18 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
    iVar15 = (&DAT_63791580)[*param_5];
    iVar17 = (&DAT_63791580)[*param_6];
    iVar3 = (&DAT_63791580)[param_5[1]];
    iVar4 = (&DAT_63791580)[param_6[1]];
    puVar19 = (uint *)(uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar15 + iVar18],
                                              (&DAT_637903e0)[iVar15 + iVar26]),
                                     (&DAT_637903e0)[iVar15 + iVar22]);
    local_8 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar17 + iVar18],
                                      (&DAT_637903e0)[iVar17 + iVar26]),
                             (&DAT_637903e0)[iVar17 + iVar22]);
    uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar18],(&DAT_637903e0)[iVar3 + iVar26]),
                     (&DAT_637903e0)[iVar3 + iVar22]);
    uVar6 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar18],(&DAT_637903e0)[iVar4 + iVar26]),
                     (&DAT_637903e0)[iVar4 + iVar22]);
    param_5 = param_5 + 2;
    param_6 = param_6 + 2;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    iVar15 = param_4 - local_20;
    uVar23 = local_8;
    if (0 < iVar15) {
      while( true ) {
        local_c = (uint *)(uint)uVar5;
        local_1c = (uint)uVar6;
        *param_1 = (uint)puVar19;
        *param_2 = local_8;
        puVar21 = param_1;
        iVar17 = iVar15;
        while( true ) {
          puVar27 = param_2 + 1;
          param_1 = puVar21 + 1;
          iVar15 = 0;
          uVar23 = local_8;
          if (iVar17 + -1 == 0) goto LAB_63727bfb;
          local_10 = local_10 + param_10 * -2;
          if (local_10 < 0) break;
          *param_1 = (uint)puVar19;
          *puVar27 = local_8;
          puVar21 = param_1;
          param_2 = puVar27;
          iVar17 = iVar17 + -1;
        }
        puVar21 = puVar21 + 2;
        local_10 = local_10 + param_4;
        puVar20 = param_2 + 2;
        param_2 = (uint *)((((uint)local_c ^ (uint)puVar19) >> 1 & 0x7f7f7f) +
                          ((uint)local_c & (uint)puVar19));
        local_8 = ((local_1c ^ local_8) >> 1 & 0x7f7f7f) + (local_1c & local_8);
        *param_1 = (uint)param_2;
        *puVar27 = local_8;
        iVar17 = iVar17 + -2;
        iVar15 = 0;
        param_1 = puVar21;
        puVar27 = puVar20;
        uVar23 = local_1c;
        puVar19 = local_c;
        if (iVar17 == 0) goto LAB_63727bfb;
        while (local_10 = local_10 + param_10 * -2, -1 < local_10) {
          puVar27 = puVar20 + 1;
          *puVar21 = (uint)param_2;
          *puVar20 = local_8;
          puVar21 = puVar21 + 1;
          iVar17 = iVar17 + -1;
          puVar20 = puVar27;
          if (iVar17 == 0) {
            iVar15 = 0;
            param_1 = puVar21;
            goto LAB_63727bfb;
          }
        }
        local_10 = local_10 + param_4;
        iVar15 = iVar17;
        param_1 = puVar21;
LAB_637277b7:
        *param_1 = (uint)local_c;
        *puVar20 = local_1c;
        puVar21 = param_1;
        while( true ) {
          puVar21 = puVar21 + 1;
          puVar20 = puVar20 + 1;
          pbVar11 = param_5;
          pbVar12 = param_6;
          pbVar13 = param_7;
          pbVar14 = param_8;
          if (iVar15 + -1 == 0) goto LAB_63727ab3;
          local_10 = local_10 + param_10 * -2;
          if (local_10 < 0) break;
          *puVar21 = (uint)local_c;
          *puVar20 = local_1c;
          iVar15 = iVar15 + -1;
        }
        local_10 = local_10 + param_4;
        bVar1 = *param_7;
        bVar2 = *param_8;
        iVar28 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
        iVar26 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
        iVar22 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
        iVar17 = (&DAT_63791580)[*param_5];
        iVar3 = (&DAT_63791580)[*param_6];
        iVar4 = (&DAT_63791580)[param_5[1]];
        iVar18 = (&DAT_63791580)[param_6[1]];
        uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar17 + iVar22],(&DAT_637903e0)[iVar17 + iVar26])
                         ,(&DAT_637903e0)[iVar17 + iVar28]);
        puVar25 = (uint *)(uint)uVar5;
        uVar6 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar22],(&DAT_637903e0)[iVar3 + iVar26]),
                         (&DAT_637903e0)[iVar3 + iVar28]);
        uVar16 = (uint)uVar6;
        uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar22],(&DAT_637903e0)[iVar4 + iVar26]),
                         (&DAT_637903e0)[iVar4 + iVar28]);
        local_18 = (uint *)(uint)uVar7;
        param_1 = puVar21 + 1;
        uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar18 + iVar22],(&DAT_637903e0)[iVar18 + iVar26])
                         ,(&DAT_637903e0)[iVar18 + iVar28]);
        uVar24 = (uint)uVar8;
        local_c = (uint *)((((uint)local_c ^ (uint)puVar25) >> 1 & 0x7f7f7f) +
                          ((uint)local_c & (uint)puVar25));
        *puVar21 = (uint)local_c;
        local_1c = (local_1c & uVar16) + ((local_1c ^ uVar16) >> 1 & 0x7f7f7f);
        *puVar20 = local_1c;
        puVar27 = puVar20 + 1;
        iVar17 = iVar15 + -2;
        iVar15 = 0;
        uVar23 = local_1c;
        puVar19 = local_c;
        if (iVar17 == 0) goto LAB_63727bfb;
        while (local_10 = local_10 + param_10 * -2, -1 < local_10) {
          puVar20 = puVar27 + 1;
          *param_1 = (uint)local_c;
          *puVar27 = local_1c;
          param_1 = param_1 + 1;
          iVar17 = iVar17 + -1;
          puVar27 = puVar20;
          if (iVar17 == 0) {
            iVar15 = 0;
            goto LAB_63727bfb;
          }
        }
        *param_1 = (uint)puVar25;
        local_10 = local_10 + param_4;
        *puVar27 = uVar16;
        param_1 = param_1 + 1;
        puVar27 = puVar27 + 1;
        iVar17 = iVar17 + -1;
        iVar15 = 0;
        puVar20 = param_1;
        uVar23 = uVar16;
        puVar19 = puVar25;
        if (iVar17 == 0) goto LAB_63727bfb;
        while (local_10 = local_10 + param_10 * -2, -1 < local_10) {
          *puVar20 = (uint)puVar25;
          *puVar27 = uVar16;
          param_1 = puVar20 + 1;
          puVar27 = puVar27 + 1;
          iVar17 = iVar17 + -1;
          puVar20 = param_1;
          if (iVar17 == 0) {
            iVar15 = 0;
            goto LAB_63727bfb;
          }
        }
        param_1 = puVar20 + 1;
        local_10 = local_10 + param_4;
        param_2 = puVar27 + 1;
        uVar16 = ((uint3)((uVar7 ^ uVar5) >> 1) & 0x7f7f7f) + (uint)(uVar7 & uVar5);
        uVar23 = ((uint3)((uVar8 ^ uVar6) >> 1) & 0x7f7f7f) + (uint)(uVar8 & uVar6);
        *puVar20 = uVar16;
        *puVar27 = uVar23;
        iVar17 = iVar17 + -1;
        if (iVar17 == 0) break;
        while (local_10 = local_10 + param_10 * -2, -1 < local_10) {
          puVar27 = param_2 + 1;
          *param_1 = uVar16;
          *param_2 = uVar23;
          param_1 = param_1 + 1;
          iVar17 = iVar17 + -1;
          param_2 = puVar27;
          if (iVar17 == 0) {
            iVar15 = 0;
            uVar23 = uVar24;
            puVar19 = local_18;
            goto LAB_63727bfb;
          }
        }
        local_10 = local_10 + param_4;
        *param_1 = (uint)local_18;
        *param_2 = uVar24;
        puVar21 = param_1;
        puVar20 = param_2;
        while( true ) {
          puVar20 = puVar20 + 1;
          puVar21 = puVar21 + 1;
          param_2 = local_18;
          pbVar11 = param_5 + 2;
          pbVar12 = param_6 + 2;
          pbVar13 = param_7 + 1;
          pbVar14 = param_8 + 1;
          local_8 = uVar24;
          if (iVar17 + -1 == 0) goto LAB_63727ab3;
          local_10 = local_10 + param_10 * -2;
          if (local_10 < 0) break;
          *puVar21 = (uint)local_18;
          *puVar20 = uVar24;
          iVar17 = iVar17 + -1;
        }
        local_10 = local_10 + param_4;
        bVar1 = param_7[1];
        bVar2 = param_8[1];
        iVar28 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
        iVar26 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
        iVar22 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
        iVar15 = (&DAT_63791580)[param_5[2]];
        iVar3 = (&DAT_63791580)[param_6[2]];
        iVar4 = (&DAT_63791580)[param_5[3]];
        iVar18 = (&DAT_63791580)[param_6[3]];
        uVar9 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar15 + iVar22],(&DAT_637903e0)[iVar15 + iVar26])
                         ,(&DAT_637903e0)[iVar15 + iVar28]);
        puVar19 = (uint *)(uint)uVar9;
        uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar22],(&DAT_637903e0)[iVar3 + iVar26]),
                          (&DAT_637903e0)[iVar3 + iVar28]);
        local_8 = (uint)uVar10;
        uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar22],(&DAT_637903e0)[iVar4 + iVar26]),
                         (&DAT_637903e0)[iVar4 + iVar28]);
        uVar6 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar18 + iVar22],(&DAT_637903e0)[iVar18 + iVar26])
                         ,(&DAT_637903e0)[iVar18 + iVar28]);
        param_5 = param_5 + 4;
        param_6 = param_6 + 4;
        param_7 = param_7 + 2;
        param_8 = param_8 + 2;
        local_18 = (uint *)(((uint3)((uVar7 ^ uVar9) >> 1) & 0x7f7f7f) + (uint)(uVar7 & uVar9));
        *puVar21 = (uint)local_18;
        uVar24 = (uint)(uVar8 & uVar10) + ((uint3)((uVar8 ^ uVar10) >> 1) & 0x7f7f7f);
        *puVar20 = uVar24;
        iVar15 = iVar17 + -2;
        param_1 = puVar21;
        param_2 = puVar20;
        while( true ) {
          param_2 = param_2 + 1;
          param_1 = param_1 + 1;
          if (iVar15 == 0) goto LAB_63727ddb;
          local_10 = local_10 + param_10 * -2;
          if (local_10 < 0) break;
          *param_1 = (uint)local_18;
          *param_2 = uVar24;
          iVar15 = iVar15 + -1;
        }
        local_10 = local_10 + param_4;
      }
LAB_63727ddb:
      iVar15 = 0;
      local_c = local_18;
      puVar27 = param_2;
      uVar23 = uVar24;
      puVar19 = local_c;
    }
  }
  else {
    bVar1 = *param_7;
    bVar2 = *param_8;
    iVar15 = (&DAT_63791580)[*param_5];
    iVar17 = (&DAT_63791580)[*param_6];
    local_c = (uint *)(uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                              [iVar15 + (&DAT_63792180)[bVar2] +
                                                        (&DAT_63791980)[bVar1]],
                                              (&DAT_637903e0)
                                              [iVar15 + (&DAT_637929a0)[bVar2] +
                                                        (&DAT_63791d80)[bVar1]]),
                                     (&DAT_637903e0)
                                     [iVar15 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]]);
    local_1c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                       [iVar17 + (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1]],
                                       (&DAT_637903e0)
                                       [iVar17 + (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1]]),
                              (&DAT_637903e0)
                              [iVar17 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]]);
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    iVar15 = param_4 - local_20;
    puVar20 = param_2;
    uVar23 = local_1c;
    puVar19 = local_c;
    if (0 < iVar15) goto LAB_637277b7;
  }
LAB_63727bfb:
  local_c = puVar19;
  for (iVar15 = iVar15 + local_20; iVar15 != 0; iVar15 = iVar15 + -1) {
    *param_1 = (uint)local_c;
    *puVar27 = uVar23;
    param_1 = param_1 + 1;
    puVar27 = puVar27 + 1;
  }
  return;
LAB_63727ab3:
  param_8 = pbVar14;
  param_7 = pbVar13;
  param_6 = pbVar12;
  param_5 = pbVar11;
  iVar15 = 0;
  param_1 = puVar21;
  puVar27 = puVar20;
  uVar23 = local_1c;
  puVar19 = local_c;
  if ((param_10 + param_9 & 1) != 0) {
    iVar15 = local_20 >> 1;
    local_20 = local_20 - iVar15;
    if (0 < iVar15) {
      bVar1 = *param_7;
      bVar2 = *param_8;
      iVar17 = (&DAT_63791580)[*param_5];
      iVar3 = (&DAT_63791580)[*param_6];
      puVar19 = (uint *)(uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                                [iVar17 + (&DAT_63792180)[bVar2] +
                                                          (&DAT_63791980)[bVar1]],
                                                (&DAT_637903e0)
                                                [iVar17 + (&DAT_637929a0)[bVar2] +
                                                          (&DAT_63791d80)[bVar1]]),
                                       (&DAT_637903e0)
                                       [iVar17 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]]);
      uVar23 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                       [iVar3 + (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1]],
                                       (&DAT_637903e0)
                                       [iVar3 + (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1]]),
                              (&DAT_637903e0)
                              [iVar3 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]]);
      uVar16 = (((uint)puVar19 ^ (uint)param_2) >> 1 & 0x7f7f7f) + ((uint)puVar19 & (uint)param_2);
      *puVar21 = uVar16;
      uVar24 = ((uVar23 ^ local_8) >> 1 & 0x7f7f7f) + (uVar23 & local_8);
      *puVar20 = uVar24;
      while( true ) {
        iVar15 = iVar15 + -1;
        puVar20 = puVar20 + 1;
        param_1 = param_1 + 1;
        puVar27 = puVar20;
        if ((iVar15 == 0) || (local_10 = local_10 + param_10 * -2, local_10 < 0)) break;
        *param_1 = uVar16;
        *puVar20 = uVar24;
      }
    }
  }
  goto LAB_63727bfb;
}


