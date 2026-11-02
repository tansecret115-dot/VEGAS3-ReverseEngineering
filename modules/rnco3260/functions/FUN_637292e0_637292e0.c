/* Module: rnco3260.dll
   Function: FUN_637292e0
   Address: 637292e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637292e0(int *param_1,uint *param_2,undefined4 param_3,int param_4,byte *param_5,byte *param_6,
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
  int iVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  uint *puVar22;
  uint *puVar23;
  uint uVar24;
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
    bVar1 = *param_8;
    bVar2 = *param_7;
    iVar26 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
    iVar21 = (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2];
    iVar15 = (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2];
    iVar16 = (&DAT_63791580)[*param_5];
    iVar18 = (&DAT_63791580)[*param_6];
    iVar3 = (&DAT_63791580)[param_5[1]];
    iVar4 = (&DAT_63791580)[param_6[1]];
    puVar22 = (uint *)(uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar16 + iVar26],
                                              (&DAT_637903e0)[iVar16 + iVar21]),
                                     (&DAT_637903e0)[iVar16 + iVar15]);
    local_8 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar18 + iVar26],
                                      (&DAT_637903e0)[iVar18 + iVar21]),
                             (&DAT_637903e0)[iVar18 + iVar15]);
    uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar26],(&DAT_637903e0)[iVar3 + iVar21]),
                     (&DAT_637903e0)[iVar3 + iVar15]);
    uVar6 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar26],(&DAT_637903e0)[iVar4 + iVar21]),
                     (&DAT_637903e0)[iVar4 + iVar15]);
    param_5 = param_5 + 2;
    param_6 = param_6 + 2;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    iVar16 = param_4 - local_20;
    uVar24 = local_8;
    if (0 < iVar16) {
      while( true ) {
        local_c = (uint *)(uint)uVar5;
        local_1c = (uint)uVar6;
        *param_1 = (int)puVar22;
        *param_2 = local_8;
        puVar20 = (uint *)param_1;
        iVar18 = iVar16;
        while( true ) {
          puVar27 = param_2 + 1;
          param_1 = (int *)(puVar20 + 1);
          iVar16 = 0;
          uVar24 = local_8;
          if (iVar18 + -1 == 0) goto LAB_637299c9;
          local_10 = local_10 + param_10 * -2;
          if (local_10 < 0) break;
          *param_1 = (int)puVar22;
          *puVar27 = local_8;
          puVar20 = (uint *)param_1;
          param_2 = puVar27;
          iVar18 = iVar18 + -1;
        }
        puVar20 = puVar20 + 2;
        local_10 = local_10 + param_4;
        puVar19 = param_2 + 2;
        param_2 = (uint *)((((uint)local_c ^ (uint)puVar22) >> 1 & 0x7f7f7f) +
                          ((uint)local_c & (uint)puVar22));
        local_8 = ((local_1c ^ local_8) >> 1 & 0x7f7f7f) + (local_1c & local_8);
        *param_1 = (int)param_2;
        *puVar27 = local_8;
        iVar18 = iVar18 + -2;
        iVar16 = 0;
        param_1 = (int *)puVar20;
        puVar27 = puVar19;
        uVar24 = local_1c;
        puVar22 = local_c;
        if (iVar18 == 0) goto LAB_637299c9;
        while (local_10 = local_10 + param_10 * -2, -1 < local_10) {
          puVar27 = puVar19 + 1;
          *puVar20 = (uint)param_2;
          *puVar19 = local_8;
          puVar20 = puVar20 + 1;
          iVar18 = iVar18 + -1;
          puVar19 = puVar27;
          if (iVar18 == 0) {
            iVar16 = 0;
            param_1 = (int *)puVar20;
            goto LAB_637299c9;
          }
        }
        local_10 = local_10 + param_4;
        iVar16 = iVar18;
        param_1 = (int *)puVar20;
LAB_63729585:
        *param_1 = (int)local_c;
        *puVar19 = local_1c;
        puVar20 = (uint *)param_1;
        while( true ) {
          puVar20 = puVar20 + 1;
          puVar19 = puVar19 + 1;
          pbVar11 = param_5;
          pbVar12 = param_6;
          pbVar13 = param_7;
          pbVar14 = param_8;
          if (iVar16 + -1 == 0) goto LAB_63729881;
          local_10 = local_10 + param_10 * -2;
          if (local_10 < 0) break;
          *puVar20 = (uint)local_c;
          *puVar19 = local_1c;
          iVar16 = iVar16 + -1;
        }
        bVar1 = *param_8;
        local_10 = local_10 + param_4;
        bVar2 = *param_7;
        iVar21 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
        iVar26 = (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2];
        iVar28 = (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2];
        iVar18 = (&DAT_63791580)[*param_5];
        iVar3 = (&DAT_63791580)[*param_6];
        iVar4 = (&DAT_63791580)[param_5[1]];
        iVar15 = (&DAT_63791580)[param_6[1]];
        uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar18 + iVar21],(&DAT_637903e0)[iVar18 + iVar26])
                         ,(&DAT_637903e0)[iVar18 + iVar28]);
        puVar23 = (uint *)(uint)uVar5;
        uVar6 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar21],(&DAT_637903e0)[iVar3 + iVar26]),
                         (&DAT_637903e0)[iVar3 + iVar28]);
        uVar17 = (uint)uVar6;
        uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar21],(&DAT_637903e0)[iVar4 + iVar26]),
                         (&DAT_637903e0)[iVar4 + iVar28]);
        local_18 = (uint *)(uint)uVar7;
        param_1 = (int *)(puVar20 + 1);
        uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar15 + iVar21],(&DAT_637903e0)[iVar15 + iVar26])
                         ,(&DAT_637903e0)[iVar15 + iVar28]);
        uVar25 = (uint)uVar8;
        local_c = (uint *)((((uint)local_c ^ (uint)puVar23) >> 1 & 0x7f7f7f) +
                          ((uint)local_c & (uint)puVar23));
        *puVar20 = (uint)local_c;
        local_1c = (local_1c & uVar17) + ((local_1c ^ uVar17) >> 1 & 0x7f7f7f);
        *puVar19 = local_1c;
        puVar27 = puVar19 + 1;
        iVar18 = iVar16 + -2;
        iVar16 = 0;
        uVar24 = local_1c;
        puVar22 = local_c;
        if (iVar18 == 0) goto LAB_637299c9;
        while (local_10 = local_10 + param_10 * -2, -1 < local_10) {
          puVar19 = puVar27 + 1;
          *param_1 = (int)local_c;
          *puVar27 = local_1c;
          param_1 = param_1 + 1;
          iVar18 = iVar18 + -1;
          puVar27 = puVar19;
          if (iVar18 == 0) {
            iVar16 = 0;
            goto LAB_637299c9;
          }
        }
        *param_1 = (int)puVar23;
        local_10 = local_10 + param_4;
        *puVar27 = uVar17;
        param_1 = param_1 + 1;
        puVar27 = puVar27 + 1;
        iVar18 = iVar18 + -1;
        iVar16 = 0;
        puVar19 = (uint *)param_1;
        uVar24 = uVar17;
        puVar22 = puVar23;
        if (iVar18 == 0) goto LAB_637299c9;
        while (local_10 = local_10 + param_10 * -2, -1 < local_10) {
          *puVar19 = (uint)puVar23;
          *puVar27 = uVar17;
          param_1 = (int *)(puVar19 + 1);
          puVar27 = puVar27 + 1;
          iVar18 = iVar18 + -1;
          puVar19 = (uint *)param_1;
          if (iVar18 == 0) {
            iVar16 = 0;
            goto LAB_637299c9;
          }
        }
        param_1 = (int *)(puVar19 + 1);
        local_10 = local_10 + param_4;
        param_2 = puVar27 + 1;
        uVar17 = ((uint3)((uVar7 ^ uVar5) >> 1) & 0x7f7f7f) + (uint)(uVar7 & uVar5);
        uVar24 = ((uint3)((uVar8 ^ uVar6) >> 1) & 0x7f7f7f) + (uint)(uVar8 & uVar6);
        *puVar19 = uVar17;
        *puVar27 = uVar24;
        iVar18 = iVar18 + -1;
        if (iVar18 == 0) break;
        while (local_10 = local_10 + param_10 * -2, -1 < local_10) {
          puVar27 = param_2 + 1;
          *param_1 = uVar17;
          *param_2 = uVar24;
          param_1 = param_1 + 1;
          iVar18 = iVar18 + -1;
          param_2 = puVar27;
          if (iVar18 == 0) {
            iVar16 = 0;
            uVar24 = uVar25;
            puVar22 = local_18;
            goto LAB_637299c9;
          }
        }
        local_10 = local_10 + param_4;
        *param_1 = (int)local_18;
        *param_2 = uVar25;
        puVar20 = (uint *)param_1;
        puVar19 = param_2;
        while( true ) {
          puVar19 = puVar19 + 1;
          puVar20 = puVar20 + 1;
          param_2 = local_18;
          pbVar11 = param_5 + 2;
          pbVar12 = param_6 + 2;
          pbVar13 = param_7 + 1;
          pbVar14 = param_8 + 1;
          local_8 = uVar25;
          if (iVar18 + -1 == 0) goto LAB_63729881;
          local_10 = local_10 + param_10 * -2;
          if (local_10 < 0) break;
          *puVar20 = (uint)local_18;
          *puVar19 = uVar25;
          iVar18 = iVar18 + -1;
        }
        local_10 = local_10 + param_4;
        bVar1 = param_8[1];
        bVar2 = param_7[1];
        iVar21 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
        iVar26 = (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2];
        iVar28 = (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2];
        iVar16 = (&DAT_63791580)[param_5[2]];
        iVar3 = (&DAT_63791580)[param_6[2]];
        iVar4 = (&DAT_63791580)[param_5[3]];
        iVar15 = (&DAT_63791580)[param_6[3]];
        uVar9 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar16 + iVar21],(&DAT_637903e0)[iVar16 + iVar26])
                         ,(&DAT_637903e0)[iVar16 + iVar28]);
        puVar22 = (uint *)(uint)uVar9;
        uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar21],(&DAT_637903e0)[iVar3 + iVar26]),
                          (&DAT_637903e0)[iVar3 + iVar28]);
        local_8 = (uint)uVar10;
        uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar21],(&DAT_637903e0)[iVar4 + iVar26]),
                         (&DAT_637903e0)[iVar4 + iVar28]);
        uVar6 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar15 + iVar21],(&DAT_637903e0)[iVar15 + iVar26])
                         ,(&DAT_637903e0)[iVar15 + iVar28]);
        param_5 = param_5 + 4;
        param_6 = param_6 + 4;
        param_7 = param_7 + 2;
        param_8 = param_8 + 2;
        local_18 = (uint *)(((uint3)((uVar7 ^ uVar9) >> 1) & 0x7f7f7f) + (uint)(uVar7 & uVar9));
        *puVar20 = (uint)local_18;
        uVar25 = (uint)(uVar8 & uVar10) + ((uint3)((uVar8 ^ uVar10) >> 1) & 0x7f7f7f);
        *puVar19 = uVar25;
        iVar16 = iVar18 + -2;
        param_1 = (int *)puVar20;
        param_2 = puVar19;
        while( true ) {
          param_2 = param_2 + 1;
          param_1 = param_1 + 1;
          if (iVar16 == 0) goto LAB_63729ba9;
          local_10 = local_10 + param_10 * -2;
          if (local_10 < 0) break;
          *param_1 = (int)local_18;
          *param_2 = uVar25;
          iVar16 = iVar16 + -1;
        }
        local_10 = local_10 + param_4;
      }
LAB_63729ba9:
      iVar16 = 0;
      local_c = local_18;
      puVar27 = param_2;
      uVar24 = uVar25;
      puVar22 = local_c;
    }
  }
  else {
    bVar1 = *param_8;
    bVar2 = *param_7;
    iVar16 = (&DAT_63791580)[*param_5];
    iVar18 = (&DAT_63791580)[*param_6];
    local_c = (uint *)(uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                              [iVar16 + (&DAT_63790960)[bVar2] +
                                                        (&DAT_63790d60)[bVar1]],
                                              (&DAT_637903e0)
                                              [iVar16 + (&DAT_637929a0)[bVar1] +
                                                        (&DAT_63791d80)[bVar2]]),
                                     (&DAT_637903e0)
                                     [iVar16 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]]);
    local_1c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                       [iVar18 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]],
                                       (&DAT_637903e0)
                                       [iVar18 + (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2]]),
                              (&DAT_637903e0)
                              [iVar18 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]]);
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    iVar16 = param_4 - local_20;
    puVar19 = param_2;
    uVar24 = local_1c;
    puVar22 = local_c;
    if (0 < iVar16) goto LAB_63729585;
  }
LAB_637299c9:
  local_c = puVar22;
  for (iVar16 = iVar16 + local_20; iVar16 != 0; iVar16 = iVar16 + -1) {
    *param_1 = (int)local_c;
    *puVar27 = uVar24;
    param_1 = param_1 + 1;
    puVar27 = puVar27 + 1;
  }
  return;
LAB_63729881:
  param_8 = pbVar14;
  param_7 = pbVar13;
  param_6 = pbVar12;
  param_5 = pbVar11;
  iVar16 = 0;
  param_1 = (int *)puVar20;
  puVar27 = puVar19;
  uVar24 = local_1c;
  puVar22 = local_c;
  if ((param_10 + param_9 & 1) != 0) {
    iVar16 = local_20 >> 1;
    local_20 = local_20 - iVar16;
    if (0 < iVar16) {
      bVar1 = *param_8;
      bVar2 = *param_7;
      iVar18 = (&DAT_63791580)[*param_5];
      iVar3 = (&DAT_63791580)[*param_6];
      puVar22 = (uint *)(uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                                [iVar18 + (&DAT_63790960)[bVar2] +
                                                          (&DAT_63790d60)[bVar1]],
                                                (&DAT_637903e0)
                                                [iVar18 + (&DAT_637929a0)[bVar1] +
                                                          (&DAT_63791d80)[bVar2]]),
                                       (&DAT_637903e0)
                                       [iVar18 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]]);
      uVar24 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                       [iVar3 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]],
                                       (&DAT_637903e0)
                                       [iVar3 + (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2]]),
                              (&DAT_637903e0)
                              [iVar3 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]]);
      uVar17 = (((uint)puVar22 ^ (uint)param_2) >> 1 & 0x7f7f7f) + ((uint)puVar22 & (uint)param_2);
      *puVar20 = uVar17;
      uVar25 = ((uVar24 ^ local_8) >> 1 & 0x7f7f7f) + (uVar24 & local_8);
      *puVar19 = uVar25;
      while( true ) {
        iVar16 = iVar16 + -1;
        puVar19 = puVar19 + 1;
        param_1 = param_1 + 1;
        puVar27 = puVar19;
        if ((iVar16 == 0) || (local_10 = local_10 + param_10 * -2, local_10 < 0)) break;
        *param_1 = uVar17;
        *puVar19 = uVar25;
      }
    }
  }
  goto LAB_637299c9;
}


