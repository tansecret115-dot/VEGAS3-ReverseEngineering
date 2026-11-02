/* Module: rnco3260.dll
   Function: FUN_63749600
   Address: 63749600
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63749600(uint *param_1,int *param_2,uint *param_3,int *param_4,uint *param_5,undefined4 param_6,
            int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11,uint param_12,
            int param_13)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint3 uVar4;
  uint3 uVar5;
  uint3 uVar6;
  uint3 uVar7;
  uint3 uVar8;
  uint3 uVar9;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  int *piVar13;
  byte *pbVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  byte *pbVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint *puVar27;
  uint *puVar28;
  int iVar29;
  byte *pbVar30;
  uint *puVar31;
  int local_2c;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_14 = param_7 >> 1;
  local_2c = param_7 * 3 - local_14;
  if ((param_13 + param_12 & 1) != 0) {
    local_2c = local_2c + param_7 * 2;
  }
  local_2c = local_2c / (param_13 * 2);
  if (param_7 != 0) {
    if (((param_12 & 1) == 0) && (1 < param_13)) {
      bVar1 = *param_10;
      bVar2 = *param_11;
      iVar26 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
      iVar17 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
      iVar29 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
      iVar19 = (&DAT_63791580)[*param_8];
      iVar22 = (&DAT_63791580)[*param_9];
      iVar25 = (&DAT_63791580)[param_8[1]];
      iVar3 = (&DAT_63791580)[param_9[1]];
      uVar18 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar19 + iVar17],
                                       (&DAT_637903e0)[iVar19 + iVar29]),
                              (&DAT_637903e0)[iVar19 + iVar26]);
      local_c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar22 + iVar17],
                                        (&DAT_637903e0)[iVar22 + iVar29]),
                               (&DAT_637903e0)[iVar22 + iVar26]);
      uVar4 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar25 + iVar17],(&DAT_637903e0)[iVar25 + iVar29]),
                       (&DAT_637903e0)[iVar25 + iVar26]);
      uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar17],(&DAT_637903e0)[iVar3 + iVar29]),
                       (&DAT_637903e0)[iVar3 + iVar26]);
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      local_8 = param_7 - local_2c;
      if (local_8 < 1) {
LAB_6374a3a5:
        local_1c = local_c;
        local_18 = uVar18;
      }
      else {
LAB_6374a2f1:
        local_18 = (uint)uVar4;
        local_1c = (uint)uVar5;
        iVar22 = ((*param_1 ^ uVar18) >> 1 & 0x7f7f7f) + (*param_1 & uVar18);
        iVar25 = ((local_c ^ uVar18) >> 1 & 0x7f7f7f) + (local_c & uVar18);
        *param_2 = iVar22;
        *param_3 = uVar18;
        *param_4 = iVar25;
        *param_5 = local_c;
        piVar15 = param_2;
        puVar28 = param_3;
        piVar13 = param_4;
        puVar31 = param_5;
        puVar27 = param_1;
        iVar19 = local_8;
        while( true ) {
          local_8 = iVar19 + -1;
          param_1 = puVar27 + 1;
          puVar12 = puVar31 + 1;
          piVar11 = piVar13 + 1;
          puVar10 = puVar28 + 1;
          piVar16 = piVar15 + 1;
          param_4 = piVar11;
          param_2 = piVar16;
          param_3 = puVar10;
          param_5 = puVar12;
          if (local_8 == 0) goto LAB_6374a3a5;
          local_14 = local_14 + param_13 * -2;
          if (local_14 < 0) break;
          *piVar16 = iVar22;
          *puVar10 = uVar18;
          *piVar11 = iVar25;
          *puVar12 = local_c;
          piVar15 = piVar16;
          puVar28 = puVar10;
          piVar13 = piVar11;
          puVar31 = puVar12;
          puVar27 = param_1;
          iVar19 = local_8;
        }
        param_2 = piVar15 + 2;
        local_14 = local_14 + param_7;
        param_3 = puVar28 + 2;
        param_4 = piVar13 + 2;
        param_5 = puVar31 + 2;
        local_10 = ((local_18 ^ uVar18) >> 1 & 0x7f7f7f) + (local_18 & uVar18);
        iVar22 = ((*param_1 ^ local_10) >> 1 & 0x7f7f7f) + (*param_1 & local_10);
        local_c = ((local_1c ^ local_c) >> 1 & 0x7f7f7f) + (local_1c & local_c);
        iVar25 = ((local_c ^ local_10) >> 1 & 0x7f7f7f) + (local_c & local_10);
        param_1 = puVar27 + 2;
        *piVar16 = iVar22;
        *puVar10 = local_10;
        *piVar11 = iVar25;
        *puVar12 = local_c;
        local_8 = iVar19 + -2;
        piVar15 = param_2;
        puVar27 = param_3;
        if (local_8 == 0) goto LAB_6374a019;
        while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
          param_2 = piVar15 + 1;
          param_1 = param_1 + 1;
          param_3 = puVar27 + 1;
          *piVar15 = iVar22;
          *puVar27 = local_10;
          *param_4 = iVar25;
          *param_5 = local_c;
          param_4 = param_4 + 1;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          piVar15 = param_2;
          puVar27 = param_3;
          if (local_8 == 0) {
            local_8 = 0;
            goto LAB_6374a019;
          }
        }
        local_14 = local_14 + param_7;
        param_2 = piVar15;
        param_3 = puVar27;
LAB_6374988a:
        piVar15 = param_2 + 1;
        puVar27 = param_3 + 1;
        piVar13 = param_4 + 1;
        puVar28 = param_5 + 1;
        iVar19 = ((*param_1 ^ local_18) >> 1 & 0x7f7f7f) + (*param_1 & local_18);
        iVar22 = ((local_1c ^ local_18) >> 1 & 0x7f7f7f) + (local_1c & local_18);
        param_1 = param_1 + 1;
        *param_2 = iVar19;
        *param_3 = local_18;
        *param_4 = iVar22;
        *param_5 = local_1c;
        local_8 = local_8 + -1;
        param_2 = piVar15;
        param_3 = puVar27;
        param_4 = piVar13;
        param_5 = puVar28;
        pbVar23 = param_8;
        pbVar30 = param_9;
        pbVar20 = param_10;
        pbVar14 = param_11;
        if (local_8 == 0) {
LAB_63749e5d:
          param_11 = pbVar14;
          param_10 = pbVar20;
          param_9 = pbVar30;
          param_8 = pbVar23;
          if ((param_13 + param_12 & 1) != 0) {
            local_8 = local_8 + (local_2c >> 1);
            local_2c = local_2c - (local_2c >> 1);
            if (0 < local_8) {
              bVar1 = *param_10;
              bVar2 = *param_11;
              iVar19 = (&DAT_63791580)[*param_8];
              iVar22 = (&DAT_63791580)[*param_9];
              local_18 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                                 [iVar19 + (&DAT_63792180)[bVar2] +
                                                           (&DAT_63791980)[bVar1]],
                                                 (&DAT_637903e0)
                                                 [iVar19 + (&DAT_637929a0)[bVar2] +
                                                           (&DAT_63791d80)[bVar1]]),
                                        (&DAT_637903e0)
                                        [iVar19 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]]);
              local_1c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                                 [iVar22 + (&DAT_63792180)[bVar2] +
                                                           (&DAT_63791980)[bVar1]],
                                                 (&DAT_637903e0)
                                                 [iVar22 + (&DAT_637929a0)[bVar2] +
                                                           (&DAT_63791d80)[bVar1]]),
                                        (&DAT_637903e0)
                                        [iVar22 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]]);
              uVar18 = ((local_18 ^ local_10) >> 1 & 0x7f7f7f) + (local_18 & local_10);
              iVar19 = ((*param_1 ^ uVar18) >> 1 & 0x7f7f7f) + (*param_1 & uVar18);
              uVar24 = ((local_1c ^ local_c) >> 1 & 0x7f7f7f) + (local_1c & local_c);
              iVar22 = ((uVar24 ^ uVar18) >> 1 & 0x7f7f7f) + (uVar24 & uVar18);
              *param_2 = iVar19;
              *param_3 = uVar18;
              *param_4 = iVar22;
              *param_5 = uVar24;
              while( true ) {
                local_8 = local_8 + -1;
                param_5 = param_5 + 1;
                param_4 = param_4 + 1;
                param_3 = param_3 + 1;
                param_2 = param_2 + 1;
                param_1 = param_1 + 1;
                if ((local_8 == 0) || (local_14 = local_14 + param_13 * -2, local_14 < 0)) break;
                *param_2 = iVar19;
                *param_3 = uVar18;
                *param_4 = iVar22;
                *param_5 = uVar24;
              }
            }
          }
          goto LAB_6374a019;
        }
        while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
          param_2 = piVar15 + 1;
          param_1 = param_1 + 1;
          param_3 = puVar27 + 1;
          *piVar15 = iVar19;
          *puVar27 = local_18;
          *piVar13 = iVar22;
          *puVar28 = local_1c;
          piVar13 = piVar13 + 1;
          puVar28 = puVar28 + 1;
          local_8 = local_8 + -1;
          piVar15 = param_2;
          puVar27 = param_3;
          if (local_8 == 0) {
            local_8 = 0;
            param_4 = piVar13;
            param_5 = puVar28;
            goto LAB_63749e5d;
          }
        }
        local_14 = local_14 + param_7;
        bVar1 = *param_10;
        bVar2 = *param_11;
        iVar29 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
        iVar26 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
        iVar17 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
        iVar19 = (&DAT_63791580)[*param_8];
        iVar22 = (&DAT_63791580)[*param_9];
        iVar25 = (&DAT_63791580)[param_8[1]];
        iVar3 = (&DAT_63791580)[param_9[1]];
        uVar4 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar19 + iVar17],(&DAT_637903e0)[iVar19 + iVar26])
                         ,(&DAT_637903e0)[iVar19 + iVar29]);
        uVar18 = (uint)uVar4;
        uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar22 + iVar17],(&DAT_637903e0)[iVar22 + iVar26])
                         ,(&DAT_637903e0)[iVar22 + iVar29]);
        local_c = (uint)uVar5;
        uVar6 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar25 + iVar17],(&DAT_637903e0)[iVar25 + iVar26])
                         ,(&DAT_637903e0)[iVar25 + iVar29]);
        local_20 = (uint)uVar6;
        param_2 = piVar15 + 1;
        uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar17],(&DAT_637903e0)[iVar3 + iVar26]),
                         (&DAT_637903e0)[iVar3 + iVar29]);
        uVar24 = (uint)uVar7;
        param_3 = puVar27 + 1;
        pbVar30 = param_9 + 2;
        pbVar23 = param_8 + 2;
        pbVar20 = param_10 + 1;
        pbVar14 = param_11 + 1;
        local_18 = (local_18 & uVar18) + ((local_18 ^ uVar18) >> 1 & 0x7f7f7f);
        iVar19 = ((*param_1 ^ local_18) >> 1 & 0x7f7f7f) + (*param_1 & local_18);
        local_1c = ((local_1c ^ local_c) >> 1 & 0x7f7f7f) + (local_1c & local_c);
        iVar22 = ((local_1c ^ local_18) >> 1 & 0x7f7f7f) + (local_1c & local_18);
        param_1 = param_1 + 1;
        *piVar15 = iVar19;
        *puVar27 = local_18;
        *piVar13 = iVar22;
        param_4 = piVar13 + 1;
        *puVar28 = local_1c;
        param_5 = puVar28 + 1;
        local_8 = local_8 + -1;
        piVar15 = param_4;
        piVar13 = param_2;
        puVar27 = param_3;
        puVar28 = param_5;
        if (local_8 == 0) goto LAB_6374a019;
        while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
          param_1 = param_1 + 1;
          *piVar13 = iVar19;
          *puVar27 = local_18;
          *piVar15 = iVar22;
          *puVar28 = local_1c;
          param_2 = piVar13 + 1;
          param_3 = puVar27 + 1;
          param_4 = piVar15 + 1;
          param_5 = puVar28 + 1;
          local_8 = local_8 + -1;
          piVar15 = param_4;
          piVar13 = param_2;
          puVar27 = param_3;
          puVar28 = param_5;
          if (local_8 == 0) {
            local_8 = 0;
            goto LAB_6374a019;
          }
        }
        param_2 = piVar13 + 1;
        local_14 = local_14 + param_7;
        param_3 = puVar27 + 1;
        param_4 = piVar15 + 1;
        param_5 = puVar28 + 1;
        iVar19 = ((*param_1 ^ uVar18) >> 1 & 0x7f7f7f) + (*param_1 & uVar18);
        iVar22 = ((uint3)((uVar5 ^ uVar4) >> 1) & 0x7f7f7f) + (uint)(uVar5 & uVar4);
        param_1 = param_1 + 1;
        *piVar13 = iVar19;
        *puVar27 = uVar18;
        *piVar15 = iVar22;
        *puVar28 = local_c;
        local_8 = local_8 + -1;
        piVar15 = param_4;
        piVar13 = param_2;
        puVar27 = param_3;
        puVar28 = param_5;
        if (local_8 == 0) goto LAB_6374a3a5;
        while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
          param_1 = param_1 + 1;
          *piVar13 = iVar19;
          *puVar27 = uVar18;
          *piVar15 = iVar22;
          *puVar28 = local_c;
          param_2 = piVar13 + 1;
          param_3 = puVar27 + 1;
          param_4 = piVar15 + 1;
          param_5 = puVar28 + 1;
          local_8 = local_8 + -1;
          piVar15 = param_4;
          piVar13 = param_2;
          puVar27 = param_3;
          puVar28 = param_5;
          if (local_8 == 0) {
            local_8 = 0;
            local_1c = local_c;
            local_18 = uVar18;
            goto LAB_6374a019;
          }
        }
        param_2 = piVar13 + 1;
        local_14 = local_14 + param_7;
        param_3 = puVar27 + 1;
        param_4 = piVar15 + 1;
        param_5 = puVar28 + 1;
        uVar18 = ((uint3)((uVar6 ^ uVar4) >> 1) & 0x7f7f7f) + (uint)(uVar6 & uVar4);
        iVar19 = ((*param_1 ^ uVar18) >> 1 & 0x7f7f7f) + (*param_1 & uVar18);
        uVar21 = ((uint3)((uVar7 ^ uVar5) >> 1) & 0x7f7f7f) + (uint)(uVar7 & uVar5);
        iVar22 = ((uVar21 ^ uVar18) >> 1 & 0x7f7f7f) + (uVar21 & uVar18);
        param_1 = param_1 + 1;
        *piVar13 = iVar19;
        *puVar27 = uVar18;
        *piVar15 = iVar22;
        *puVar28 = uVar21;
        local_8 = local_8 + -1;
        piVar15 = param_2;
        puVar27 = param_3;
        if (local_8 != 0) {
          while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
            param_2 = piVar15 + 1;
            param_1 = param_1 + 1;
            param_3 = puVar27 + 1;
            *piVar15 = iVar19;
            *puVar27 = uVar18;
            *param_4 = iVar22;
            *param_5 = uVar21;
            param_4 = param_4 + 1;
            param_5 = param_5 + 1;
            local_8 = local_8 + -1;
            piVar15 = param_2;
            puVar27 = param_3;
            if (local_8 == 0) {
              local_8 = 0;
              local_1c = uVar24;
              local_18 = local_20;
              goto LAB_6374a019;
            }
          }
          piVar13 = piVar15 + 1;
          local_14 = local_14 + param_7;
          puVar28 = puVar27 + 1;
          piVar16 = param_4 + 1;
          puVar31 = param_5 + 1;
          iVar22 = ((*param_1 ^ local_20) >> 1 & 0x7f7f7f) + (*param_1 & local_20);
          iVar19 = ((uint3)((uVar7 ^ uVar6) >> 1) & 0x7f7f7f) + (uint)(uVar7 & uVar6);
          param_1 = param_1 + 1;
          *piVar15 = iVar22;
          *puVar27 = local_20;
          *param_4 = iVar19;
          *param_5 = uVar24;
          local_8 = local_8 + -1;
          param_2 = piVar13;
          param_3 = puVar28;
          param_4 = piVar16;
          param_5 = puVar31;
          local_10 = local_20;
          local_c = uVar24;
          if (local_8 == 0) goto LAB_63749e5d;
          while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
            param_2 = piVar13 + 1;
            param_1 = param_1 + 1;
            param_3 = puVar28 + 1;
            *piVar13 = iVar22;
            *puVar28 = local_20;
            *piVar16 = iVar19;
            *puVar31 = uVar24;
            piVar16 = piVar16 + 1;
            puVar31 = puVar31 + 1;
            local_8 = local_8 + -1;
            piVar13 = param_2;
            puVar28 = param_3;
            if (local_8 == 0) {
              local_8 = 0;
              param_4 = piVar16;
              param_5 = puVar31;
              goto LAB_63749e5d;
            }
          }
          local_14 = local_14 + param_7;
          bVar1 = *pbVar20;
          bVar2 = *pbVar14;
          iVar29 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
          iVar26 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
          iVar17 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
          iVar19 = (&DAT_63791580)[*pbVar23];
          iVar22 = (&DAT_63791580)[*pbVar30];
          iVar25 = (&DAT_63791580)[param_8[3]];
          iVar3 = (&DAT_63791580)[param_9[3]];
          uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar19 + iVar17],
                                    (&DAT_637903e0)[iVar19 + iVar26]),
                           (&DAT_637903e0)[iVar19 + iVar29]);
          uVar18 = (uint)uVar8;
          uVar9 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar22 + iVar17],
                                    (&DAT_637903e0)[iVar22 + iVar26]),
                           (&DAT_637903e0)[iVar22 + iVar29]);
          local_c = (uint)uVar9;
          uVar4 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar25 + iVar17],
                                    (&DAT_637903e0)[iVar25 + iVar26]),
                           (&DAT_637903e0)[iVar25 + iVar29]);
          param_2 = piVar13 + 1;
          uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar17],(&DAT_637903e0)[iVar3 + iVar26])
                           ,(&DAT_637903e0)[iVar3 + iVar29]);
          param_3 = puVar28 + 1;
          param_8 = param_8 + 4;
          param_9 = param_9 + 4;
          param_10 = param_10 + 2;
          param_11 = param_11 + 2;
          local_20 = ((uint3)((uVar6 ^ uVar8) >> 1) & 0x7f7f7f) + (uint)(uVar6 & uVar8);
          iVar19 = ((*param_1 ^ local_20) >> 1 & 0x7f7f7f) + (*param_1 & local_20);
          *piVar13 = iVar19;
          uVar24 = ((uint3)((uVar7 ^ uVar9) >> 1) & 0x7f7f7f) + (uint)(uVar7 & uVar9);
          *puVar28 = local_20;
          param_4 = piVar16 + 1;
          iVar22 = ((uVar24 ^ local_20) >> 1 & 0x7f7f7f) + (uVar24 & local_20);
          *piVar16 = iVar22;
          param_1 = param_1 + 1;
          *puVar31 = uVar24;
          param_5 = puVar31 + 1;
          local_8 = local_8 + -1;
          piVar15 = param_2;
          if (local_8 == 0) goto LAB_6374a2da;
          while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
            param_1 = param_1 + 1;
            param_2 = piVar15 + 1;
            *piVar15 = iVar19;
            *param_3 = local_20;
            *param_4 = iVar22;
            *param_5 = uVar24;
            param_3 = param_3 + 1;
            param_4 = param_4 + 1;
            param_5 = param_5 + 1;
            local_8 = local_8 + -1;
            piVar15 = param_2;
            if (local_8 == 0) {
              local_8 = 0;
              local_1c = uVar24;
              local_18 = local_20;
              goto LAB_6374a019;
            }
          }
          local_14 = local_14 + param_7;
          param_2 = piVar15;
          goto LAB_6374a2f1;
        }
        local_8 = 0;
LAB_6374a2da:
        local_18 = local_20;
        local_1c = uVar24;
      }
    }
    else {
      bVar1 = *param_10;
      bVar2 = *param_11;
      iVar19 = (&DAT_63791580)[*param_8];
      iVar22 = (&DAT_63791580)[*param_9];
      local_18 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                         [iVar19 + (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1]],
                                         (&DAT_637903e0)
                                         [iVar19 + (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1]])
                                ,(&DAT_637903e0)
                                 [iVar19 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]]);
      local_1c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                         [iVar22 + (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1]],
                                         (&DAT_637903e0)
                                         [iVar22 + (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1]])
                                ,(&DAT_637903e0)
                                 [iVar22 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]]);
      param_8 = param_8 + 1;
      param_9 = param_9 + 1;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      local_8 = param_7 - local_2c;
      if (0 < local_8) goto LAB_6374988a;
    }
LAB_6374a019:
    uVar18 = *param_1;
    for (local_8 = local_8 + local_2c; local_8 != 0; local_8 = local_8 + -1) {
      *param_2 = ((uVar18 ^ local_18) >> 1 & 0x7f7f7f) + (uVar18 & local_18);
      *param_3 = local_18;
      *param_4 = ((local_1c ^ local_18) >> 1 & 0x7f7f7f) + (local_1c & local_18);
      *param_5 = local_1c;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      param_5 = param_5 + 1;
      param_3 = param_3 + 1;
    }
  }
  return;
}


