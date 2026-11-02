/* Module: rnco3260.dll
   Function: FUN_637378b0
   Address: 637378b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637378b0(uint *param_1,int *param_2,uint *param_3,int *param_4,uint *param_5,undefined4 param_6,
            int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11,uint param_12,
            int param_13)

{
  int iVar1;
  int iVar2;
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
  byte *pbVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint *puVar26;
  uint *puVar27;
  byte *pbVar28;
  uint *puVar29;
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
      iVar18 = (&DAT_63790960)[*param_10];
      iVar21 = (&DAT_63792180)[*param_11];
      iVar25 = (&DAT_637929a0)[*param_11] + (&DAT_63791d80)[*param_10];
      iVar24 = (&DAT_63791580)[*param_9];
      iVar1 = (&DAT_63791580)[param_8[1]];
      iVar2 = (&DAT_63791580)[*param_8];
      iVar3 = (&DAT_63791580)[param_9[1]];
      uVar17 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar2 + iVar18],
                                       (&DAT_637903e0)[iVar2 + iVar25]),
                              (&DAT_637903e0)[iVar2 + iVar21]);
      local_c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar24 + iVar18],
                                        (&DAT_637903e0)[iVar24 + iVar25]),
                               (&DAT_637903e0)[iVar24 + iVar21]);
      uVar4 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar1 + iVar18],(&DAT_637903e0)[iVar1 + iVar25]),
                       (&DAT_637903e0)[iVar1 + iVar21]);
      uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar18],(&DAT_637903e0)[iVar3 + iVar25]),
                       (&DAT_637903e0)[iVar3 + iVar21]);
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      local_8 = param_7 - local_2c;
      if (local_8 < 1) {
LAB_63738605:
        local_1c = local_c;
        local_18 = uVar17;
      }
      else {
LAB_63738551:
        local_18 = (uint)uVar4;
        local_1c = (uint)uVar5;
        iVar21 = ((*param_1 ^ uVar17) >> 1 & 0x7f7f7f) + (*param_1 & uVar17);
        iVar24 = ((local_c ^ uVar17) >> 1 & 0x7f7f7f) + (local_c & uVar17);
        *param_2 = iVar21;
        *param_3 = uVar17;
        *param_4 = iVar24;
        *param_5 = local_c;
        piVar15 = param_2;
        puVar27 = param_3;
        piVar13 = param_4;
        puVar29 = param_5;
        puVar26 = param_1;
        iVar18 = local_8;
        while( true ) {
          local_8 = iVar18 + -1;
          param_1 = puVar26 + 1;
          puVar12 = puVar29 + 1;
          piVar11 = piVar13 + 1;
          puVar10 = puVar27 + 1;
          piVar16 = piVar15 + 1;
          param_4 = piVar11;
          param_2 = piVar16;
          param_3 = puVar10;
          param_5 = puVar12;
          if (local_8 == 0) goto LAB_63738605;
          local_14 = local_14 + param_13 * -2;
          if (local_14 < 0) break;
          *piVar16 = iVar21;
          *puVar10 = uVar17;
          *piVar11 = iVar24;
          *puVar12 = local_c;
          piVar15 = piVar16;
          puVar27 = puVar10;
          piVar13 = piVar11;
          puVar29 = puVar12;
          puVar26 = param_1;
          iVar18 = local_8;
        }
        param_2 = piVar15 + 2;
        local_14 = local_14 + param_7;
        param_3 = puVar27 + 2;
        param_4 = piVar13 + 2;
        param_5 = puVar29 + 2;
        local_10 = ((local_18 ^ uVar17) >> 1 & 0x7f7f7f) + (local_18 & uVar17);
        iVar21 = ((*param_1 ^ local_10) >> 1 & 0x7f7f7f) + (*param_1 & local_10);
        local_c = ((local_1c ^ local_c) >> 1 & 0x7f7f7f) + (local_1c & local_c);
        iVar24 = ((local_c ^ local_10) >> 1 & 0x7f7f7f) + (local_c & local_10);
        param_1 = puVar26 + 2;
        *piVar16 = iVar21;
        *puVar10 = local_10;
        *piVar11 = iVar24;
        *puVar12 = local_c;
        local_8 = iVar18 + -2;
        piVar15 = param_2;
        puVar26 = param_3;
        if (local_8 == 0) goto LAB_6373828b;
        while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
          param_2 = piVar15 + 1;
          param_1 = param_1 + 1;
          param_3 = puVar26 + 1;
          *piVar15 = iVar21;
          *puVar26 = local_10;
          *param_4 = iVar24;
          *param_5 = local_c;
          param_4 = param_4 + 1;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          piVar15 = param_2;
          puVar26 = param_3;
          if (local_8 == 0) {
            local_8 = 0;
            goto LAB_6373828b;
          }
        }
        local_14 = local_14 + param_7;
        param_2 = piVar15;
        param_3 = puVar26;
LAB_63737b17:
        piVar15 = param_2 + 1;
        puVar26 = param_3 + 1;
        piVar13 = param_4 + 1;
        puVar27 = param_5 + 1;
        iVar18 = ((*param_1 ^ local_18) >> 1 & 0x7f7f7f) + (*param_1 & local_18);
        iVar21 = ((local_1c ^ local_18) >> 1 & 0x7f7f7f) + (local_1c & local_18);
        param_1 = param_1 + 1;
        *param_2 = iVar18;
        *param_3 = local_18;
        *param_4 = iVar21;
        *param_5 = local_1c;
        local_8 = local_8 + -1;
        param_2 = piVar15;
        param_3 = puVar26;
        param_4 = piVar13;
        param_5 = puVar27;
        pbVar22 = param_8;
        pbVar28 = param_9;
        pbVar19 = param_10;
        pbVar14 = param_11;
        if (local_8 == 0) {
LAB_637380d9:
          param_11 = pbVar14;
          param_10 = pbVar19;
          param_9 = pbVar28;
          param_8 = pbVar22;
          if ((param_13 + param_12 & 1) != 0) {
            local_8 = local_8 + (local_2c >> 1);
            local_2c = local_2c - (local_2c >> 1);
            if (0 < local_8) {
              iVar18 = (&DAT_63791580)[*param_8];
              iVar21 = (&DAT_63791580)[*param_9];
              local_18 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                                 [iVar18 + (&DAT_63790960)[*param_10]],
                                                 (&DAT_637903e0)
                                                 [iVar18 + (&DAT_637929a0)[*param_11] +
                                                           (&DAT_63791d80)[*param_10]]),
                                        (&DAT_637903e0)[iVar18 + (&DAT_63792180)[*param_11]]);
              local_1c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                                 [iVar21 + (&DAT_63790960)[*param_10]],
                                                 (&DAT_637903e0)
                                                 [iVar21 + (&DAT_637929a0)[*param_11] +
                                                           (&DAT_63791d80)[*param_10]]),
                                        (&DAT_637903e0)[iVar21 + (&DAT_63792180)[*param_11]]);
              uVar17 = ((local_18 ^ local_10) >> 1 & 0x7f7f7f) + (local_18 & local_10);
              iVar18 = ((*param_1 ^ uVar17) >> 1 & 0x7f7f7f) + (*param_1 & uVar17);
              uVar23 = ((local_1c ^ local_c) >> 1 & 0x7f7f7f) + (local_1c & local_c);
              iVar21 = ((uVar23 ^ uVar17) >> 1 & 0x7f7f7f) + (uVar23 & uVar17);
              *param_2 = iVar18;
              *param_3 = uVar17;
              *param_4 = iVar21;
              *param_5 = uVar23;
              while( true ) {
                local_8 = local_8 + -1;
                param_5 = param_5 + 1;
                param_4 = param_4 + 1;
                param_3 = param_3 + 1;
                param_1 = param_1 + 1;
                param_2 = param_2 + 1;
                if ((local_8 == 0) || (local_14 = local_14 + param_13 * -2, local_14 < 0)) break;
                *param_2 = iVar18;
                *param_3 = uVar17;
                *param_4 = iVar21;
                *param_5 = uVar23;
              }
            }
          }
          goto LAB_6373828b;
        }
        while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
          param_2 = piVar15 + 1;
          param_1 = param_1 + 1;
          param_3 = puVar26 + 1;
          *piVar15 = iVar18;
          *puVar26 = local_18;
          *piVar13 = iVar21;
          *puVar27 = local_1c;
          piVar13 = piVar13 + 1;
          puVar27 = puVar27 + 1;
          local_8 = local_8 + -1;
          piVar15 = param_2;
          puVar26 = param_3;
          if (local_8 == 0) {
            local_8 = 0;
            param_4 = piVar13;
            param_5 = puVar27;
            goto LAB_637380d9;
          }
        }
        local_14 = local_14 + param_7;
        iVar18 = (&DAT_63790960)[*param_10];
        iVar25 = (&DAT_637929a0)[*param_11] + (&DAT_63791d80)[*param_10];
        iVar21 = (&DAT_63792180)[*param_11];
        iVar24 = (&DAT_63791580)[*param_8];
        iVar1 = (&DAT_63791580)[*param_9];
        iVar2 = (&DAT_63791580)[param_8[1]];
        iVar3 = (&DAT_63791580)[param_9[1]];
        uVar4 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar24 + iVar18],(&DAT_637903e0)[iVar24 + iVar25])
                         ,(&DAT_637903e0)[iVar24 + iVar21]);
        uVar17 = (uint)uVar4;
        uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar1 + iVar18],(&DAT_637903e0)[iVar1 + iVar25]),
                         (&DAT_637903e0)[iVar1 + iVar21]);
        local_c = (uint)uVar5;
        uVar6 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar2 + iVar18],(&DAT_637903e0)[iVar2 + iVar25]),
                         (&DAT_637903e0)[iVar2 + iVar21]);
        local_20 = (uint)uVar6;
        uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar18],(&DAT_637903e0)[iVar3 + iVar25]),
                         (&DAT_637903e0)[iVar3 + iVar21]);
        uVar23 = (uint)uVar7;
        param_2 = piVar15 + 1;
        pbVar28 = param_9 + 2;
        pbVar22 = param_8 + 2;
        pbVar19 = param_10 + 1;
        pbVar14 = param_11 + 1;
        local_18 = (local_18 & uVar17) + ((local_18 ^ uVar17) >> 1 & 0x7f7f7f);
        param_3 = puVar26 + 1;
        iVar18 = ((*param_1 ^ local_18) >> 1 & 0x7f7f7f) + (*param_1 & local_18);
        local_1c = ((local_1c ^ local_c) >> 1 & 0x7f7f7f) + (local_1c & local_c);
        iVar21 = ((local_1c ^ local_18) >> 1 & 0x7f7f7f) + (local_1c & local_18);
        param_1 = param_1 + 1;
        *piVar15 = iVar18;
        *puVar26 = local_18;
        *piVar13 = iVar21;
        param_4 = piVar13 + 1;
        *puVar27 = local_1c;
        param_5 = puVar27 + 1;
        local_8 = local_8 + -1;
        piVar15 = param_4;
        piVar13 = param_2;
        puVar26 = param_3;
        puVar27 = param_5;
        if (local_8 == 0) goto LAB_6373828b;
        while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
          param_1 = param_1 + 1;
          *piVar13 = iVar18;
          *puVar26 = local_18;
          *piVar15 = iVar21;
          *puVar27 = local_1c;
          param_2 = piVar13 + 1;
          param_3 = puVar26 + 1;
          param_4 = piVar15 + 1;
          param_5 = puVar27 + 1;
          local_8 = local_8 + -1;
          piVar15 = param_4;
          piVar13 = param_2;
          puVar26 = param_3;
          puVar27 = param_5;
          if (local_8 == 0) {
            local_8 = 0;
            goto LAB_6373828b;
          }
        }
        param_2 = piVar13 + 1;
        local_14 = local_14 + param_7;
        param_3 = puVar26 + 1;
        param_4 = piVar15 + 1;
        param_5 = puVar27 + 1;
        iVar18 = ((*param_1 ^ uVar17) >> 1 & 0x7f7f7f) + (*param_1 & uVar17);
        iVar21 = ((uint3)((uVar5 ^ uVar4) >> 1) & 0x7f7f7f) + (uint)(uVar5 & uVar4);
        param_1 = param_1 + 1;
        *piVar13 = iVar18;
        *puVar26 = uVar17;
        *piVar15 = iVar21;
        *puVar27 = local_c;
        local_8 = local_8 + -1;
        piVar15 = param_4;
        piVar13 = param_2;
        puVar26 = param_3;
        puVar27 = param_5;
        if (local_8 == 0) goto LAB_63738605;
        while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
          param_1 = param_1 + 1;
          *piVar13 = iVar18;
          *puVar26 = uVar17;
          *piVar15 = iVar21;
          *puVar27 = local_c;
          param_2 = piVar13 + 1;
          param_3 = puVar26 + 1;
          param_4 = piVar15 + 1;
          param_5 = puVar27 + 1;
          local_8 = local_8 + -1;
          piVar15 = param_4;
          piVar13 = param_2;
          puVar26 = param_3;
          puVar27 = param_5;
          if (local_8 == 0) {
            local_8 = 0;
            local_1c = local_c;
            local_18 = uVar17;
            goto LAB_6373828b;
          }
        }
        param_2 = piVar13 + 1;
        local_14 = local_14 + param_7;
        param_3 = puVar26 + 1;
        param_4 = piVar15 + 1;
        param_5 = puVar27 + 1;
        uVar17 = ((uint3)((uVar6 ^ uVar4) >> 1) & 0x7f7f7f) + (uint)(uVar6 & uVar4);
        iVar18 = ((*param_1 ^ uVar17) >> 1 & 0x7f7f7f) + (*param_1 & uVar17);
        uVar20 = ((uint3)((uVar7 ^ uVar5) >> 1) & 0x7f7f7f) + (uint)(uVar7 & uVar5);
        iVar21 = ((uVar20 ^ uVar17) >> 1 & 0x7f7f7f) + (uVar20 & uVar17);
        param_1 = param_1 + 1;
        *piVar13 = iVar18;
        *puVar26 = uVar17;
        *piVar15 = iVar21;
        *puVar27 = uVar20;
        local_8 = local_8 + -1;
        piVar15 = param_2;
        puVar26 = param_3;
        if (local_8 != 0) {
          while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
            param_2 = piVar15 + 1;
            param_1 = param_1 + 1;
            param_3 = puVar26 + 1;
            *piVar15 = iVar18;
            *puVar26 = uVar17;
            *param_4 = iVar21;
            *param_5 = uVar20;
            param_4 = param_4 + 1;
            param_5 = param_5 + 1;
            local_8 = local_8 + -1;
            piVar15 = param_2;
            puVar26 = param_3;
            if (local_8 == 0) {
              local_8 = 0;
              local_1c = uVar23;
              local_18 = local_20;
              goto LAB_6373828b;
            }
          }
          piVar13 = piVar15 + 1;
          local_14 = local_14 + param_7;
          puVar27 = puVar26 + 1;
          piVar16 = param_4 + 1;
          puVar29 = param_5 + 1;
          iVar21 = ((*param_1 ^ local_20) >> 1 & 0x7f7f7f) + (*param_1 & local_20);
          iVar18 = ((uint3)((uVar7 ^ uVar6) >> 1) & 0x7f7f7f) + (uint)(uVar7 & uVar6);
          param_1 = param_1 + 1;
          *piVar15 = iVar21;
          *puVar26 = local_20;
          *param_4 = iVar18;
          *param_5 = uVar23;
          local_8 = local_8 + -1;
          param_2 = piVar13;
          param_3 = puVar27;
          param_4 = piVar16;
          param_5 = puVar29;
          local_10 = local_20;
          local_c = uVar23;
          if (local_8 == 0) goto LAB_637380d9;
          while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
            param_2 = piVar13 + 1;
            param_1 = param_1 + 1;
            param_3 = puVar27 + 1;
            *piVar13 = iVar21;
            *puVar27 = local_20;
            *piVar16 = iVar18;
            *puVar29 = uVar23;
            piVar16 = piVar16 + 1;
            puVar29 = puVar29 + 1;
            local_8 = local_8 + -1;
            piVar13 = param_2;
            puVar27 = param_3;
            if (local_8 == 0) {
              local_8 = 0;
              param_4 = piVar16;
              param_5 = puVar29;
              goto LAB_637380d9;
            }
          }
          local_14 = local_14 + param_7;
          iVar18 = (&DAT_63790960)[*pbVar19];
          iVar25 = (&DAT_637929a0)[*pbVar14] + (&DAT_63791d80)[*pbVar19];
          iVar21 = (&DAT_63792180)[*pbVar14];
          iVar24 = (&DAT_63791580)[*pbVar22];
          iVar1 = (&DAT_63791580)[*pbVar28];
          iVar2 = (&DAT_63791580)[param_8[3]];
          iVar3 = (&DAT_63791580)[param_9[3]];
          uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar24 + iVar18],
                                    (&DAT_637903e0)[iVar24 + iVar25]),
                           (&DAT_637903e0)[iVar24 + iVar21]);
          uVar17 = (uint)uVar8;
          uVar9 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar1 + iVar18],(&DAT_637903e0)[iVar1 + iVar25])
                           ,(&DAT_637903e0)[iVar1 + iVar21]);
          local_c = (uint)uVar9;
          uVar4 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar2 + iVar18],(&DAT_637903e0)[iVar2 + iVar25])
                           ,(&DAT_637903e0)[iVar2 + iVar21]);
          uVar5 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar18],(&DAT_637903e0)[iVar3 + iVar25])
                           ,(&DAT_637903e0)[iVar3 + iVar21]);
          param_2 = piVar13 + 1;
          param_8 = param_8 + 4;
          param_9 = param_9 + 4;
          param_10 = param_10 + 2;
          param_11 = param_11 + 2;
          local_20 = ((uint3)((uVar6 ^ uVar8) >> 1) & 0x7f7f7f) + (uint)(uVar6 & uVar8);
          iVar18 = ((*param_1 ^ local_20) >> 1 & 0x7f7f7f) + (*param_1 & local_20);
          *piVar13 = iVar18;
          uVar23 = ((uint3)((uVar7 ^ uVar9) >> 1) & 0x7f7f7f) + (uint)(uVar7 & uVar9);
          *puVar27 = local_20;
          param_3 = puVar27 + 1;
          param_4 = piVar16 + 1;
          iVar21 = ((uVar23 ^ local_20) >> 1 & 0x7f7f7f) + (uVar23 & local_20);
          *piVar16 = iVar21;
          param_1 = param_1 + 1;
          *puVar29 = uVar23;
          param_5 = puVar29 + 1;
          local_8 = local_8 + -1;
          piVar15 = param_2;
          if (local_8 == 0) goto LAB_6373853a;
          while (local_14 = local_14 + param_13 * -2, -1 < local_14) {
            param_1 = param_1 + 1;
            param_2 = piVar15 + 1;
            *piVar15 = iVar18;
            *param_3 = local_20;
            *param_4 = iVar21;
            *param_5 = uVar23;
            param_3 = param_3 + 1;
            param_4 = param_4 + 1;
            param_5 = param_5 + 1;
            local_8 = local_8 + -1;
            piVar15 = param_2;
            if (local_8 == 0) {
              local_8 = 0;
              local_1c = uVar23;
              local_18 = local_20;
              goto LAB_6373828b;
            }
          }
          local_14 = local_14 + param_7;
          param_2 = piVar15;
          goto LAB_63738551;
        }
        local_8 = 0;
LAB_6373853a:
        local_18 = local_20;
        local_1c = uVar23;
      }
    }
    else {
      iVar18 = (&DAT_63791580)[*param_8];
      iVar21 = (&DAT_63791580)[*param_9];
      local_18 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar18 + (&DAT_63790960)[*param_10]],
                                         (&DAT_637903e0)
                                         [iVar18 + (&DAT_637929a0)[*param_11] +
                                                   (&DAT_63791d80)[*param_10]]),
                                (&DAT_637903e0)[iVar18 + (&DAT_63792180)[*param_11]]);
      local_1c = (uint)CONCAT21(CONCAT11((&DAT_637903e0)[iVar21 + (&DAT_63790960)[*param_10]],
                                         (&DAT_637903e0)
                                         [iVar21 + (&DAT_637929a0)[*param_11] +
                                                   (&DAT_63791d80)[*param_10]]),
                                (&DAT_637903e0)[iVar21 + (&DAT_63792180)[*param_11]]);
      param_8 = param_8 + 1;
      param_9 = param_9 + 1;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      local_8 = param_7 - local_2c;
      if (0 < local_8) goto LAB_63737b17;
    }
LAB_6373828b:
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


