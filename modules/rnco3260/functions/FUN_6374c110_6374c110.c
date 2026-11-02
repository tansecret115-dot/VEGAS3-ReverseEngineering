/* Module: rnco3260.dll
   Function: FUN_6374c110
   Address: 6374c110
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6374c110(uint *param_1,int *param_2,uint *param_3,int *param_4,uint *param_5,undefined4 param_6,
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
  uint uVar17;
  int iVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
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
      iVar22 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
      iVar29 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
      iVar18 = (&DAT_63791580)[*param_8];
      iVar21 = (&DAT_63791580)[*param_9];
      iVar25 = (&DAT_63791580)[param_8[1]];
      iVar3 = (&DAT_63791580)[param_9[1]];
      uVar17 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar18 + iVar26],
                                       (&DAT_637903e0)[iVar18 + iVar22]),
                              (&DAT_637903e0)[iVar18 + iVar29]);
      local_c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar21 + iVar26],
                                        (&DAT_637903e0)[iVar21 + iVar22]),
                               (&DAT_637903e0)[iVar21 + iVar29]);
      uVar4 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar25 + iVar26],(&DAT_637903e0)[iVar25 + iVar22]),
                       (&DAT_637903e0)[iVar25 + iVar29]);
      uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar26],(&DAT_637903e0)[iVar3 + iVar22]),
                       (&DAT_637903e0)[iVar3 + iVar29]);
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      local_8 = param_7 - local_2c;
      if (local_8 < 1) {
LAB_6374ceb8:
        local_1c = local_c;
        local_18 = uVar17;
      }
      else {
LAB_6374ce04:
        local_18 = (uint)uVar4;
        local_1c = (uint)uVar5;
        iVar21 = ((*param_1 ^ uVar17) >> 1 & 0x7f7f7f) + (*param_1 & uVar17);
        iVar25 = ((local_c ^ uVar17) >> 1 & 0x7f7f7f) + (local_c & uVar17);
        *param_2 = iVar21;
        *param_3 = uVar17;
        *param_4 = iVar25;
        *param_5 = local_c;
        piVar15 = param_2;
        puVar28 = param_3;
        piVar13 = param_4;
        puVar31 = param_5;
        puVar27 = param_1;
        iVar18 = local_8;
        while( true ) {
          local_8 = iVar18 + -1;
          param_1 = puVar27 + 1;
          puVar12 = puVar31 + 1;
          piVar11 = piVar13 + 1;
          puVar10 = puVar28 + 1;
          piVar16 = piVar15 + 1;
          param_4 = piVar11;
          param_2 = piVar16;
          param_3 = puVar10;
          param_5 = puVar12;
          if (local_8 == 0) goto LAB_6374ceb8;
          local_14 = local_14 + param_13 * -2;
          if (local_14 < 0) break;
          *piVar16 = iVar21;
          *puVar10 = uVar17;
          *piVar11 = iVar25;
          *puVar12 = local_c;
          piVar15 = piVar16;
          puVar28 = puVar10;
          piVar13 = piVar11;
          puVar31 = puVar12;
          puVar27 = param_1;
          iVar18 = local_8;
        }
        param_2 = piVar15 + 2;
        local_14 = local_14 + param_7;
        param_3 = puVar28 + 2;
        param_4 = piVar13 + 2;
        param_5 = puVar31 + 2;
        local_10 = ((local_18 ^ uVar17) >> 1 & 0x7f7f7f) + (local_18 & uVar17);
        iVar21 = ((*param_1 ^ local_10) >> 1 & 0x7f7f7f) + (*param_1 & local_10);
        local_c = ((local_1c ^ local_c) >> 1 & 0x7f7f7f) + (local_1c & local_c);
        iVar25 = ((local_c ^ local_10) >> 1 & 0x7f7f7f) + (local_c & local_10);
        param_1 = puVar27 + 2;
        *piVar16 = iVar21;
        *puVar10 = local_10;
        *piVar11 = iVar25;
        *puVar12 = local_c;
        local_8 = iVar18 + -2;
        piVar15 = param_2;
        puVar27 = param_3;
        if (local_8 == 0) goto LAB_6374cb2c;
        while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
          param_2 = piVar15 + 1;
          param_1 = param_1 + 1;
          param_3 = puVar27 + 1;
          *piVar15 = iVar21;
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
            goto LAB_6374cb2c;
          }
        }
        local_14 = local_14 + param_7;
        param_2 = piVar15;
        param_3 = puVar27;
LAB_6374c39d:
        piVar15 = param_2 + 1;
        puVar27 = param_3 + 1;
        piVar13 = param_4 + 1;
        puVar28 = param_5 + 1;
        iVar18 = ((*param_1 ^ local_18) >> 1 & 0x7f7f7f) + (*param_1 & local_18);
        iVar21 = ((local_1c ^ local_18) >> 1 & 0x7f7f7f) + (local_1c & local_18);
        param_1 = param_1 + 1;
        *param_2 = iVar18;
        *param_3 = local_18;
        *param_4 = iVar21;
        *param_5 = local_1c;
        local_8 = local_8 + -1;
        param_2 = piVar15;
        param_3 = puVar27;
        param_4 = piVar13;
        param_5 = puVar28;
        pbVar23 = param_8;
        pbVar30 = param_9;
        pbVar19 = param_10;
        pbVar14 = param_11;
        if (local_8 == 0) {
LAB_6374c970:
          param_11 = pbVar14;
          param_10 = pbVar19;
          param_9 = pbVar30;
          param_8 = pbVar23;
          if ((param_13 + param_12 & 1) != 0) {
            local_8 = local_8 + (local_2c >> 1);
            local_2c = local_2c - (local_2c >> 1);
            if (0 < local_8) {
              bVar1 = *param_10;
              bVar2 = *param_11;
              iVar18 = (&DAT_63791580)[*param_8];
              iVar21 = (&DAT_63791580)[*param_9];
              local_18 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                                 [iVar18 + (&DAT_63790d60)[bVar2] +
                                                           (&DAT_63790960)[bVar1]],
                                                 (&DAT_637903e0)
                                                 [iVar18 + (&DAT_637929a0)[bVar2] +
                                                           (&DAT_63791d80)[bVar1]]),
                                        (&DAT_637903e0)
                                        [iVar18 + (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1]]);
              local_1c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                                 [iVar21 + (&DAT_63790d60)[bVar2] +
                                                           (&DAT_63790960)[bVar1]],
                                                 (&DAT_637903e0)
                                                 [iVar21 + (&DAT_637929a0)[bVar2] +
                                                           (&DAT_63791d80)[bVar1]]),
                                        (&DAT_637903e0)
                                        [iVar21 + (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1]]);
              uVar17 = ((local_18 ^ local_10) >> 1 & 0x7f7f7f) + (local_18 & local_10);
              iVar18 = ((*param_1 ^ uVar17) >> 1 & 0x7f7f7f) + (*param_1 & uVar17);
              uVar24 = ((local_1c ^ local_c) >> 1 & 0x7f7f7f) + (local_1c & local_c);
              iVar21 = ((uVar24 ^ uVar17) >> 1 & 0x7f7f7f) + (uVar24 & uVar17);
              *param_2 = iVar18;
              *param_3 = uVar17;
              *param_4 = iVar21;
              *param_5 = uVar24;
              while( true ) {
                local_8 = local_8 + -1;
                param_5 = param_5 + 1;
                param_4 = param_4 + 1;
                param_3 = param_3 + 1;
                param_2 = param_2 + 1;
                param_1 = param_1 + 1;
                if ((local_8 == 0) || (local_14 = local_14 + param_13 * -2, local_14 < 0)) break;
                *param_2 = iVar18;
                *param_3 = uVar17;
                *param_4 = iVar21;
                *param_5 = uVar24;
              }
            }
          }
          goto LAB_6374cb2c;
        }
        while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
          param_2 = piVar15 + 1;
          param_1 = param_1 + 1;
          param_3 = puVar27 + 1;
          *piVar15 = iVar18;
          *puVar27 = local_18;
          *piVar13 = iVar21;
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
            goto LAB_6374c970;
          }
        }
        local_14 = local_14 + param_7;
        bVar1 = *param_10;
        bVar2 = *param_11;
        iVar22 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
        iVar26 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
        iVar29 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
        iVar18 = (&DAT_63791580)[*param_8];
        iVar21 = (&DAT_63791580)[*param_9];
        iVar25 = (&DAT_63791580)[param_8[1]];
        iVar3 = (&DAT_63791580)[param_9[1]];
        uVar4 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar18 + iVar22],(&DAT_637903e0)[iVar18 + iVar26])
                         ,(&DAT_637903e0)[iVar18 + iVar29]);
        uVar17 = (uint)uVar4;
        uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar21 + iVar22],(&DAT_637903e0)[iVar21 + iVar26])
                         ,(&DAT_637903e0)[iVar21 + iVar29]);
        local_c = (uint)uVar5;
        uVar6 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar25 + iVar22],(&DAT_637903e0)[iVar25 + iVar26])
                         ,(&DAT_637903e0)[iVar25 + iVar29]);
        local_20 = (uint)uVar6;
        param_2 = piVar15 + 1;
        uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar22],(&DAT_637903e0)[iVar3 + iVar26]),
                         (&DAT_637903e0)[iVar3 + iVar29]);
        uVar24 = (uint)uVar7;
        param_3 = puVar27 + 1;
        pbVar30 = param_9 + 2;
        pbVar23 = param_8 + 2;
        pbVar19 = param_10 + 1;
        pbVar14 = param_11 + 1;
        local_18 = (local_18 & uVar17) + ((local_18 ^ uVar17) >> 1 & 0x7f7f7f);
        iVar18 = ((*param_1 ^ local_18) >> 1 & 0x7f7f7f) + (*param_1 & local_18);
        local_1c = ((local_1c ^ local_c) >> 1 & 0x7f7f7f) + (local_1c & local_c);
        iVar21 = ((local_1c ^ local_18) >> 1 & 0x7f7f7f) + (local_1c & local_18);
        param_1 = param_1 + 1;
        *piVar15 = iVar18;
        *puVar27 = local_18;
        *piVar13 = iVar21;
        param_4 = piVar13 + 1;
        *puVar28 = local_1c;
        param_5 = puVar28 + 1;
        local_8 = local_8 + -1;
        piVar15 = param_4;
        piVar13 = param_2;
        puVar27 = param_3;
        puVar28 = param_5;
        if (local_8 == 0) goto LAB_6374cb2c;
        while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
          param_1 = param_1 + 1;
          *piVar13 = iVar18;
          *puVar27 = local_18;
          *piVar15 = iVar21;
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
            goto LAB_6374cb2c;
          }
        }
        param_2 = piVar13 + 1;
        local_14 = local_14 + param_7;
        param_3 = puVar27 + 1;
        param_4 = piVar15 + 1;
        param_5 = puVar28 + 1;
        iVar18 = ((*param_1 ^ uVar17) >> 1 & 0x7f7f7f) + (*param_1 & uVar17);
        iVar21 = ((uint3)((uVar5 ^ uVar4) >> 1) & 0x7f7f7f) + (uint)(uVar5 & uVar4);
        param_1 = param_1 + 1;
        *piVar13 = iVar18;
        *puVar27 = uVar17;
        *piVar15 = iVar21;
        *puVar28 = local_c;
        local_8 = local_8 + -1;
        piVar15 = param_4;
        piVar13 = param_2;
        puVar27 = param_3;
        puVar28 = param_5;
        if (local_8 == 0) goto LAB_6374ceb8;
        while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
          param_1 = param_1 + 1;
          *piVar13 = iVar18;
          *puVar27 = uVar17;
          *piVar15 = iVar21;
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
            local_18 = uVar17;
            goto LAB_6374cb2c;
          }
        }
        param_2 = piVar13 + 1;
        local_14 = local_14 + param_7;
        param_3 = puVar27 + 1;
        param_4 = piVar15 + 1;
        param_5 = puVar28 + 1;
        uVar17 = ((uint3)((uVar6 ^ uVar4) >> 1) & 0x7f7f7f) + (uint)(uVar6 & uVar4);
        iVar18 = ((*param_1 ^ uVar17) >> 1 & 0x7f7f7f) + (*param_1 & uVar17);
        uVar20 = ((uint3)((uVar7 ^ uVar5) >> 1) & 0x7f7f7f) + (uint)(uVar7 & uVar5);
        iVar21 = ((uVar20 ^ uVar17) >> 1 & 0x7f7f7f) + (uVar20 & uVar17);
        param_1 = param_1 + 1;
        *piVar13 = iVar18;
        *puVar27 = uVar17;
        *piVar15 = iVar21;
        *puVar28 = uVar20;
        local_8 = local_8 + -1;
        piVar15 = param_2;
        puVar27 = param_3;
        if (local_8 != 0) {
          while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
            param_2 = piVar15 + 1;
            param_1 = param_1 + 1;
            param_3 = puVar27 + 1;
            *piVar15 = iVar18;
            *puVar27 = uVar17;
            *param_4 = iVar21;
            *param_5 = uVar20;
            param_4 = param_4 + 1;
            param_5 = param_5 + 1;
            local_8 = local_8 + -1;
            piVar15 = param_2;
            puVar27 = param_3;
            if (local_8 == 0) {
              local_8 = 0;
              local_1c = uVar24;
              local_18 = local_20;
              goto LAB_6374cb2c;
            }
          }
          piVar13 = piVar15 + 1;
          local_14 = local_14 + param_7;
          puVar28 = puVar27 + 1;
          piVar16 = param_4 + 1;
          puVar31 = param_5 + 1;
          iVar21 = ((*param_1 ^ local_20) >> 1 & 0x7f7f7f) + (*param_1 & local_20);
          iVar18 = ((uint3)((uVar7 ^ uVar6) >> 1) & 0x7f7f7f) + (uint)(uVar7 & uVar6);
          param_1 = param_1 + 1;
          *piVar15 = iVar21;
          *puVar27 = local_20;
          *param_4 = iVar18;
          *param_5 = uVar24;
          local_8 = local_8 + -1;
          param_2 = piVar13;
          param_3 = puVar28;
          param_4 = piVar16;
          param_5 = puVar31;
          local_10 = local_20;
          local_c = uVar24;
          if (local_8 == 0) goto LAB_6374c970;
          while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
            param_2 = piVar13 + 1;
            param_1 = param_1 + 1;
            param_3 = puVar28 + 1;
            *piVar13 = iVar21;
            *puVar28 = local_20;
            *piVar16 = iVar18;
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
              goto LAB_6374c970;
            }
          }
          local_14 = local_14 + param_7;
          bVar1 = *pbVar19;
          bVar2 = *pbVar14;
          iVar22 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
          iVar26 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
          iVar29 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
          iVar18 = (&DAT_63791580)[*pbVar23];
          iVar21 = (&DAT_63791580)[*pbVar30];
          iVar25 = (&DAT_63791580)[param_8[3]];
          iVar3 = (&DAT_63791580)[param_9[3]];
          uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar18 + iVar22],
                                    (&DAT_637903e0)[iVar18 + iVar26]),
                           (&DAT_637903e0)[iVar18 + iVar29]);
          uVar17 = (uint)uVar8;
          uVar9 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar21 + iVar22],
                                    (&DAT_637903e0)[iVar21 + iVar26]),
                           (&DAT_637903e0)[iVar21 + iVar29]);
          local_c = (uint)uVar9;
          uVar4 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar25 + iVar22],
                                    (&DAT_637903e0)[iVar25 + iVar26]),
                           (&DAT_637903e0)[iVar25 + iVar29]);
          param_2 = piVar13 + 1;
          uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar22],(&DAT_637903e0)[iVar3 + iVar26])
                           ,(&DAT_637903e0)[iVar3 + iVar29]);
          param_3 = puVar28 + 1;
          param_8 = param_8 + 4;
          param_9 = param_9 + 4;
          param_10 = param_10 + 2;
          param_11 = param_11 + 2;
          local_20 = ((uint3)((uVar6 ^ uVar8) >> 1) & 0x7f7f7f) + (uint)(uVar6 & uVar8);
          iVar18 = ((*param_1 ^ local_20) >> 1 & 0x7f7f7f) + (*param_1 & local_20);
          *piVar13 = iVar18;
          uVar24 = ((uint3)((uVar7 ^ uVar9) >> 1) & 0x7f7f7f) + (uint)(uVar7 & uVar9);
          *puVar28 = local_20;
          param_4 = piVar16 + 1;
          iVar21 = ((uVar24 ^ local_20) >> 1 & 0x7f7f7f) + (uVar24 & local_20);
          *piVar16 = iVar21;
          param_1 = param_1 + 1;
          *puVar31 = uVar24;
          param_5 = puVar31 + 1;
          local_8 = local_8 + -1;
          piVar15 = param_2;
          if (local_8 == 0) goto LAB_6374cded;
          while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
            param_1 = param_1 + 1;
            param_2 = piVar15 + 1;
            *piVar15 = iVar18;
            *param_3 = local_20;
            *param_4 = iVar21;
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
              goto LAB_6374cb2c;
            }
          }
          local_14 = local_14 + param_7;
          param_2 = piVar15;
          goto LAB_6374ce04;
        }
        local_8 = 0;
LAB_6374cded:
        local_18 = local_20;
        local_1c = uVar24;
      }
    }
    else {
      bVar1 = *param_10;
      bVar2 = *param_11;
      iVar18 = (&DAT_63791580)[*param_8];
      iVar21 = (&DAT_63791580)[*param_9];
      local_18 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                         [iVar18 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]],
                                         (&DAT_637903e0)
                                         [iVar18 + (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1]])
                                ,(&DAT_637903e0)
                                 [iVar18 + (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1]]);
      local_1c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                         [iVar21 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]],
                                         (&DAT_637903e0)
                                         [iVar21 + (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1]])
                                ,(&DAT_637903e0)
                                 [iVar21 + (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1]]);
      param_8 = param_8 + 1;
      param_9 = param_9 + 1;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      local_8 = param_7 - local_2c;
      if (0 < local_8) goto LAB_6374c39d;
    }
LAB_6374cb2c:
    uVar17 = *param_1;
    for (local_8 = local_8 + local_2c; local_8 != 0; local_8 = local_8 + -1) {
      *param_2 = ((uVar17 ^ local_18) >> 1 & 0x7f7f7f) + (uVar17 & local_18);
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


