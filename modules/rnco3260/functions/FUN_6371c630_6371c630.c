/* Module: rnco3260.dll
   Function: FUN_6371c630
   Address: 6371c630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6371c630(int *param_1,uint *param_2,undefined4 param_3,int param_4,byte *param_5,byte *param_6,
            byte *param_7,byte *param_8,uint param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint3 uVar7;
  uint3 uVar8;
  uint3 uVar9;
  uint3 uVar10;
  uint3 uVar11;
  uint3 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  uint uVar25;
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
    iVar17 = (&DAT_63790960)[*param_7];
    iVar20 = (&DAT_63792180)[*param_8];
    iVar26 = (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7];
    iVar3 = (&DAT_63791580)[*param_5];
    iVar4 = (&DAT_63791580)[*param_6];
    iVar5 = (&DAT_63791580)[param_5[1]];
    iVar6 = (&DAT_63791580)[param_6[1]];
    puVar23 = (uint *)(uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar17],
                                              (&DAT_637903e0)[iVar3 + iVar26]),
                                     (&DAT_637903e0)[iVar3 + iVar20]);
    local_8 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar17],
                                      (&DAT_637903e0)[iVar4 + iVar26]),
                             (&DAT_637903e0)[iVar4 + iVar20]);
    uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar5 + iVar17],(&DAT_637903e0)[iVar5 + iVar26]),
                     (&DAT_637903e0)[iVar5 + iVar20]);
    uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar17],(&DAT_637903e0)[iVar6 + iVar26]),
                     (&DAT_637903e0)[iVar6 + iVar20]);
    param_5 = param_5 + 2;
    param_6 = param_6 + 2;
    param_7 = param_7 + 1;
    iVar17 = param_4 - local_20;
    param_8 = param_8 + 1;
    uVar18 = local_8;
    if (0 < iVar17) {
      while( true ) {
        local_c = (uint *)(uint)uVar7;
        local_1c = (uint)uVar8;
        *param_1 = (int)puVar23;
        *param_2 = local_8;
        puVar22 = (uint *)param_1;
        iVar20 = iVar17;
        while( true ) {
          puVar27 = param_2 + 1;
          param_1 = (int *)(puVar22 + 1);
          iVar17 = 0;
          uVar18 = local_8;
          if (iVar20 + -1 == 0) goto LAB_6371ccd7;
          local_10 = local_10 + param_10 * -2;
          if (local_10 < 0) break;
          *param_1 = (int)puVar23;
          *puVar27 = local_8;
          puVar22 = (uint *)param_1;
          param_2 = puVar27;
          iVar20 = iVar20 + -1;
        }
        puVar22 = puVar22 + 2;
        local_10 = local_10 + param_4;
        puVar21 = param_2 + 2;
        param_2 = (uint *)((((uint)local_c ^ (uint)puVar23) >> 1 & 0x7f7f7f) +
                          ((uint)local_c & (uint)puVar23));
        local_8 = ((local_1c ^ local_8) >> 1 & 0x7f7f7f) + (local_1c & local_8);
        *param_1 = (int)param_2;
        *puVar27 = local_8;
        iVar20 = iVar20 + -2;
        iVar17 = 0;
        param_1 = (int *)puVar22;
        puVar27 = puVar21;
        uVar18 = local_1c;
        puVar23 = local_c;
        if (iVar20 == 0) goto LAB_6371ccd7;
        while (local_10 = local_10 + param_10 * -2, -1 < local_10) {
          puVar27 = puVar21 + 1;
          *puVar22 = (uint)param_2;
          *puVar21 = local_8;
          puVar22 = puVar22 + 1;
          iVar20 = iVar20 + -1;
          puVar21 = puVar27;
          if (iVar20 == 0) {
            iVar17 = 0;
            param_1 = (int *)puVar22;
            goto LAB_6371ccd7;
          }
        }
        local_10 = local_10 + param_4;
        iVar17 = iVar20;
        param_1 = (int *)puVar22;
LAB_6371c8af:
        *param_1 = (int)local_c;
        *puVar21 = local_1c;
        puVar22 = (uint *)param_1;
        while( true ) {
          puVar22 = puVar22 + 1;
          puVar21 = puVar21 + 1;
          pbVar13 = param_5;
          pbVar14 = param_6;
          pbVar15 = param_7;
          pbVar16 = param_8;
          if (iVar17 + -1 == 0) goto LAB_6371cb9a;
          local_10 = local_10 + param_10 * -2;
          if (local_10 < 0) break;
          *puVar22 = (uint)local_c;
          *puVar21 = local_1c;
          iVar17 = iVar17 + -1;
        }
        local_10 = local_10 + param_4;
        iVar20 = (&DAT_63790960)[*param_7];
        iVar28 = (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7];
        iVar3 = (&DAT_63792180)[*param_8];
        iVar4 = (&DAT_63791580)[*param_5];
        iVar5 = (&DAT_63791580)[*param_6];
        iVar6 = (&DAT_63791580)[param_5[1]];
        iVar26 = (&DAT_63791580)[param_6[1]];
        uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar20],(&DAT_637903e0)[iVar4 + iVar28]),
                         (&DAT_637903e0)[iVar4 + iVar3]);
        puVar24 = (uint *)(uint)uVar7;
        uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar5 + iVar20],(&DAT_637903e0)[iVar5 + iVar28]),
                         (&DAT_637903e0)[iVar5 + iVar3]);
        uVar19 = (uint)uVar8;
        uVar9 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar20],(&DAT_637903e0)[iVar6 + iVar28]),
                         (&DAT_637903e0)[iVar6 + iVar3]);
        local_18 = (uint *)(uint)uVar9;
        uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar26 + iVar20],(&DAT_637903e0)[iVar26 + iVar28]
                                  ),(&DAT_637903e0)[iVar26 + iVar3]);
        uVar25 = (uint)uVar10;
        param_1 = (int *)(puVar22 + 1);
        local_c = (uint *)((((uint)local_c ^ (uint)puVar24) >> 1 & 0x7f7f7f) +
                          ((uint)local_c & (uint)puVar24));
        *puVar22 = (uint)local_c;
        local_1c = (local_1c & uVar19) + ((local_1c ^ uVar19) >> 1 & 0x7f7f7f);
        *puVar21 = local_1c;
        puVar27 = puVar21 + 1;
        iVar20 = iVar17 + -2;
        iVar17 = 0;
        uVar18 = local_1c;
        puVar23 = local_c;
        if (iVar20 == 0) goto LAB_6371ccd7;
        while (local_10 = local_10 + param_10 * -2, -1 < local_10) {
          puVar21 = puVar27 + 1;
          *param_1 = (int)local_c;
          *puVar27 = local_1c;
          param_1 = param_1 + 1;
          iVar20 = iVar20 + -1;
          puVar27 = puVar21;
          if (iVar20 == 0) {
            iVar17 = 0;
            goto LAB_6371ccd7;
          }
        }
        *param_1 = (int)puVar24;
        local_10 = local_10 + param_4;
        *puVar27 = uVar19;
        param_1 = param_1 + 1;
        puVar27 = puVar27 + 1;
        iVar20 = iVar20 + -1;
        iVar17 = 0;
        puVar21 = (uint *)param_1;
        uVar18 = uVar19;
        puVar23 = puVar24;
        if (iVar20 == 0) goto LAB_6371ccd7;
        while (local_10 = local_10 + param_10 * -2, -1 < local_10) {
          *puVar21 = (uint)puVar24;
          *puVar27 = uVar19;
          param_1 = (int *)(puVar21 + 1);
          puVar27 = puVar27 + 1;
          iVar20 = iVar20 + -1;
          puVar21 = (uint *)param_1;
          if (iVar20 == 0) {
            iVar17 = 0;
            goto LAB_6371ccd7;
          }
        }
        param_1 = (int *)(puVar21 + 1);
        local_10 = local_10 + param_4;
        param_2 = puVar27 + 1;
        uVar19 = ((uint3)((uVar9 ^ uVar7) >> 1) & 0x7f7f7f) + (uint)(uVar9 & uVar7);
        uVar18 = ((uint3)((uVar10 ^ uVar8) >> 1) & 0x7f7f7f) + (uint)(uVar10 & uVar8);
        *puVar21 = uVar19;
        *puVar27 = uVar18;
        iVar20 = iVar20 + -1;
        if (iVar20 == 0) break;
        while (local_10 = local_10 + param_10 * -2, -1 < local_10) {
          puVar27 = param_2 + 1;
          *param_1 = uVar19;
          *param_2 = uVar18;
          param_1 = param_1 + 1;
          iVar20 = iVar20 + -1;
          param_2 = puVar27;
          if (iVar20 == 0) {
            iVar17 = 0;
            uVar18 = uVar25;
            puVar23 = local_18;
            goto LAB_6371ccd7;
          }
        }
        local_10 = local_10 + param_4;
        *param_1 = (int)local_18;
        *param_2 = uVar25;
        puVar22 = (uint *)param_1;
        puVar21 = param_2;
        while( true ) {
          puVar21 = puVar21 + 1;
          puVar22 = puVar22 + 1;
          param_2 = local_18;
          pbVar13 = param_5 + 2;
          pbVar14 = param_6 + 2;
          pbVar15 = param_7 + 1;
          pbVar16 = param_8 + 1;
          local_8 = uVar25;
          if (iVar20 + -1 == 0) goto LAB_6371cb9a;
          local_10 = local_10 + param_10 * -2;
          if (local_10 < 0) break;
          *puVar22 = (uint)local_18;
          *puVar21 = uVar25;
          iVar20 = iVar20 + -1;
        }
        local_10 = local_10 + param_4;
        bVar1 = param_7[1];
        iVar17 = (&DAT_63790960)[bVar1];
        bVar2 = param_8[1];
        iVar28 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
        iVar3 = (&DAT_63792180)[bVar2];
        iVar4 = (&DAT_63791580)[param_5[2]];
        iVar5 = (&DAT_63791580)[param_6[2]];
        iVar6 = (&DAT_63791580)[param_5[3]];
        iVar26 = (&DAT_63791580)[param_6[3]];
        uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar17],(&DAT_637903e0)[iVar4 + iVar28]),
                          (&DAT_637903e0)[iVar4 + iVar3]);
        puVar23 = (uint *)(uint)uVar11;
        uVar12 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar5 + iVar17],(&DAT_637903e0)[iVar5 + iVar28]),
                          (&DAT_637903e0)[iVar5 + iVar3]);
        local_8 = (uint)uVar12;
        uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar17],(&DAT_637903e0)[iVar6 + iVar28]),
                         (&DAT_637903e0)[iVar6 + iVar3]);
        uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar26 + iVar17],(&DAT_637903e0)[iVar26 + iVar28])
                         ,(&DAT_637903e0)[iVar26 + iVar3]);
        param_5 = param_5 + 4;
        param_6 = param_6 + 4;
        param_7 = param_7 + 2;
        param_8 = param_8 + 2;
        local_18 = (uint *)(((uint3)((uVar9 ^ uVar11) >> 1) & 0x7f7f7f) + (uint)(uVar9 & uVar11));
        *puVar22 = (uint)local_18;
        uVar25 = (uint)(uVar10 & uVar12) + ((uint3)((uVar10 ^ uVar12) >> 1) & 0x7f7f7f);
        *puVar21 = uVar25;
        iVar17 = iVar20 + -2;
        param_1 = (int *)puVar22;
        param_2 = puVar21;
        while( true ) {
          param_2 = param_2 + 1;
          param_1 = param_1 + 1;
          if (iVar17 == 0) goto LAB_6371cea6;
          local_10 = local_10 + param_10 * -2;
          if (local_10 < 0) break;
          *param_1 = (int)local_18;
          *param_2 = uVar25;
          iVar17 = iVar17 + -1;
        }
        local_10 = local_10 + param_4;
      }
LAB_6371cea6:
      iVar17 = 0;
      local_c = local_18;
      puVar27 = param_2;
      uVar18 = uVar25;
      puVar23 = local_c;
    }
  }
  else {
    iVar17 = (&DAT_63791580)[*param_5];
    iVar20 = (&DAT_63791580)[*param_6];
    local_c = (uint *)(uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar17 + (&DAT_63790960)[*param_7]],
                                              (&DAT_637903e0)
                                              [iVar17 + (&DAT_637929a0)[*param_8] +
                                                        (&DAT_63791d80)[*param_7]]),
                                     (&DAT_637903e0)[iVar17 + (&DAT_63792180)[*param_8]]);
    local_1c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar20 + (&DAT_63790960)[*param_7]],
                                       (&DAT_637903e0)
                                       [iVar20 + (&DAT_637929a0)[*param_8] +
                                                 (&DAT_63791d80)[*param_7]]),
                              (&DAT_637903e0)[iVar20 + (&DAT_63792180)[*param_8]]);
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    iVar17 = param_4 - local_20;
    puVar21 = param_2;
    uVar18 = local_1c;
    puVar23 = local_c;
    if (0 < iVar17) goto LAB_6371c8af;
  }
LAB_6371ccd7:
  local_c = puVar23;
  for (iVar17 = iVar17 + local_20; iVar17 != 0; iVar17 = iVar17 + -1) {
    *param_1 = (int)local_c;
    *puVar27 = uVar18;
    param_1 = param_1 + 1;
    puVar27 = puVar27 + 1;
  }
  return;
LAB_6371cb9a:
  param_8 = pbVar16;
  param_7 = pbVar15;
  param_6 = pbVar14;
  param_5 = pbVar13;
  iVar17 = 0;
  param_1 = (int *)puVar22;
  puVar27 = puVar21;
  uVar18 = local_1c;
  puVar23 = local_c;
  if ((param_10 + param_9 & 1) != 0) {
    iVar17 = local_20 >> 1;
    local_20 = local_20 - iVar17;
    if (0 < iVar17) {
      iVar20 = (&DAT_63791580)[*param_5];
      iVar3 = (&DAT_63791580)[*param_6];
      puVar23 = (uint *)(uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar20 + (&DAT_63790960)[*param_7]],
                                                (&DAT_637903e0)
                                                [iVar20 + (&DAT_637929a0)[*param_8] +
                                                          (&DAT_63791d80)[*param_7]]),
                                       (&DAT_637903e0)[iVar20 + (&DAT_63792180)[*param_8]]);
      uVar18 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + (&DAT_63790960)[*param_7]],
                                       (&DAT_637903e0)
                                       [iVar3 + (&DAT_637929a0)[*param_8] +
                                                (&DAT_63791d80)[*param_7]]),
                              (&DAT_637903e0)[iVar3 + (&DAT_63792180)[*param_8]]);
      uVar19 = (((uint)puVar23 ^ (uint)param_2) >> 1 & 0x7f7f7f) + ((uint)puVar23 & (uint)param_2);
      *puVar22 = uVar19;
      uVar25 = ((uVar18 ^ local_8) >> 1 & 0x7f7f7f) + (uVar18 & local_8);
      *puVar21 = uVar25;
      while( true ) {
        iVar17 = iVar17 + -1;
        puVar21 = puVar21 + 1;
        param_1 = param_1 + 1;
        puVar27 = puVar21;
        if ((iVar17 == 0) || (local_10 = local_10 + param_10 * -2, local_10 < 0)) break;
        *param_1 = uVar19;
        *puVar21 = uVar25;
      }
    }
  }
  goto LAB_6371ccd7;
}


