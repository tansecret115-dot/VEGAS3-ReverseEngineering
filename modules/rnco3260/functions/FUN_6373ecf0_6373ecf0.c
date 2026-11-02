/* Module: rnco3260.dll
   Function: FUN_6373ecf0
   Address: 6373ecf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6373ecf0(ushort *param_1,short *param_2,ushort *param_3,short *param_4,ushort *param_5,
            undefined4 param_6,int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11
            ,uint param_12,int param_13)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  short *psVar9;
  byte *pbVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  short *psVar17;
  uint uVar18;
  int iVar19;
  short *psVar20;
  short *psVar21;
  short sVar22;
  short sVar23;
  ushort *puVar24;
  byte *pbVar25;
  byte *pbVar26;
  ushort *puVar27;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_20;
  uint local_1c;
  short local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_c = param_7 >> 1;
  local_30 = param_7 * 3 - local_c;
  if ((param_13 + param_12 & 1) != 0) {
    local_30 = local_30 + param_7 * 2;
  }
  local_30 = local_30 / (param_13 * 2);
  if (param_7 == 0) {
    return;
  }
  puVar11 = param_3;
  psVar20 = param_2;
  if (((param_12 & 1) == 0) && (1 < param_13)) {
    iVar1 = (&DAT_63790960)[*param_10];
    iVar2 = (&DAT_63792180)[*param_11];
    iVar19 = (&DAT_637929a0)[*param_11] + (&DAT_63791d80)[*param_10];
    iVar3 = (&DAT_63791580)[*param_8];
    iVar4 = (&DAT_63791580)[*param_9];
    iVar5 = (&DAT_63791580)[param_8[1]];
    iVar6 = (&DAT_63791580)[param_9[1]];
    uVar13 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar2] << 6 |
             (uint)(byte)(&DAT_6378efe3)[iVar3 + iVar19]) << 5 |
             (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar1];
    uVar15 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar2] << 6 |
             (uint)(byte)(&DAT_6378efe1)[iVar4 + iVar19]) << 5 |
             (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar1];
    local_14 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar2] << 6 |
               (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar19]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar1];
    local_10 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar2] << 6 |
               (uint)(byte)(&DAT_6378efe3)[iVar6 + iVar19]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar1];
    param_8 = param_8 + 2;
    param_9 = param_9 + 2;
    param_10 = param_10 + 1;
    param_11 = param_11 + 1;
    local_8 = param_7 - local_30;
    psVar21 = param_2;
    if (0 < local_8) {
      while( true ) {
        psVar20 = psVar21 + 1;
        puVar11 = param_3 + 1;
        uVar7 = (ushort)uVar13;
        param_2._0_2_ = ((ushort)((*param_1 ^ uVar13) >> 1) & 0x7bef) + (*param_1 & uVar7);
        uVar8 = (ushort)uVar15;
        sVar23 = ((ushort)((uVar15 ^ uVar13) >> 1) & 0x7bef) + (uVar8 & uVar7);
        param_1 = param_1 + 1;
        *psVar21 = (short)param_2;
        *param_3 = uVar7;
        *param_4 = sVar23;
        param_4 = param_4 + 1;
        *param_5 = uVar8;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        if (local_8 == 0) break;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          param_1 = param_1 + 1;
          psVar21 = psVar20 + 1;
          *psVar20 = (short)param_2;
          *puVar11 = uVar7;
          puVar11 = puVar11 + 1;
          *param_4 = sVar23;
          param_4 = param_4 + 1;
          *param_5 = uVar8;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          psVar20 = psVar21;
          if (local_8 == 0) {
            local_8 = 0;
            goto LAB_6373f30b;
          }
        }
        psVar21 = psVar20 + 1;
        local_c = local_c + param_7;
        local_2c = ((local_14 ^ uVar13) >> 1 & 0x7bef) + (local_14 & uVar13);
        param_3 = puVar11 + 1;
        uVar7 = (ushort)local_2c;
        param_2._0_2_ = ((ushort)((*param_1 ^ local_2c) >> 1) & 0x7bef) + (*param_1 & uVar7);
        local_28 = ((local_10 ^ uVar15) >> 1 & 0x7bef) + (local_10 & uVar15);
        uVar8 = (ushort)local_28;
        sVar23 = ((ushort)((local_28 ^ local_2c) >> 1) & 0x7bef) + (uVar8 & uVar7);
        param_1 = param_1 + 1;
        *psVar20 = (short)param_2;
        *puVar11 = uVar7;
        *param_4 = sVar23;
        param_4 = param_4 + 1;
        *param_5 = uVar8;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        puVar11 = param_3;
        psVar20 = psVar21;
        uVar13 = local_14;
        uVar15 = local_10;
        if (local_8 == 0) break;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          psVar20 = psVar21 + 1;
          param_1 = param_1 + 1;
          puVar11 = param_3 + 1;
          *psVar21 = (short)param_2;
          *param_3 = uVar7;
          *param_4 = sVar23;
          *param_5 = uVar8;
          param_4 = param_4 + 1;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          param_3 = puVar11;
          psVar21 = psVar20;
          if (local_8 == 0) {
            local_8 = 0;
            goto LAB_6373f30b;
          }
        }
        local_c = local_c + param_7;
LAB_6373ef88:
        psVar20 = psVar21 + 1;
        puVar11 = param_3 + 1;
        psVar17 = param_4 + 1;
        uVar7 = (ushort)local_14;
        param_2._0_2_ = ((ushort)((*param_1 ^ local_14) >> 1) & 0x7bef) + (*param_1 & uVar7);
        puVar27 = param_5 + 1;
        uVar8 = (ushort)local_10;
        sVar23 = ((ushort)((local_10 ^ local_14) >> 1) & 0x7bef) + (uVar8 & uVar7);
        param_1 = param_1 + 1;
        *psVar21 = (short)param_2;
        *param_3 = uVar7;
        *param_4 = sVar23;
        *param_5 = uVar8;
        local_8 = local_8 + -1;
        puVar12 = puVar11;
        psVar21 = psVar20;
        puVar24 = puVar27;
        param_4 = psVar17;
        pbVar25 = param_8;
        pbVar16 = param_9;
        pbVar26 = param_10;
        pbVar10 = param_11;
        if (local_8 == 0) {
LAB_6373f661:
          param_11 = pbVar10;
          param_10 = pbVar26;
          param_9 = pbVar16;
          param_8 = pbVar25;
          param_5 = puVar27;
          uVar13 = local_14;
          uVar15 = local_10;
          if ((param_13 + param_12 & 1) != 0) {
            local_8 = local_8 + (local_30 >> 1);
            local_30 = local_30 - (local_30 >> 1);
            if (0 < local_8) {
              iVar1 = (&DAT_63791580)[*param_8];
              iVar2 = (&DAT_63791580)[*param_9];
              uVar13 = ((uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63792180)[*param_11]] << 6 |
                       (uint)(byte)(&DAT_6378efe2)
                                   [iVar1 + (&DAT_637929a0)[*param_11] + (&DAT_63791d80)[*param_10]]
                       ) << 5 | (uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63790960)[*param_10]];
              uVar15 = ((uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63792180)[*param_11]] << 6 |
                       (uint)(byte)(&DAT_6378efe2)
                                   [iVar2 + (&DAT_637929a0)[*param_11] + (&DAT_63791d80)[*param_10]]
                       ) << 5 | (uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63790960)[*param_10]];
              uVar14 = ((uVar13 ^ local_2c) >> 1 & 0x7bef) + (uVar13 & local_2c);
              uVar7 = (ushort)uVar14;
              param_2._0_2_ = ((ushort)((*param_1 ^ uVar14) >> 1) & 0x7bef) + (*param_1 & uVar7);
              psVar21 = psVar20 + 1;
              puVar12 = puVar11 + 1;
              param_5 = puVar27 + 1;
              uVar18 = ((uVar15 ^ local_28) >> 1 & 0x7bef) + (uVar15 & local_28);
              uVar8 = (ushort)uVar18;
              sVar23 = ((ushort)((uVar18 ^ uVar14) >> 1) & 0x7bef) + (uVar8 & uVar7);
              param_1 = param_1 + 1;
              *psVar20 = (short)param_2;
              *puVar11 = uVar7;
              *param_4 = sVar23;
              *puVar27 = uVar8;
              param_4 = param_4 + 1;
              local_8 = local_8 + -1;
              puVar11 = puVar12;
              psVar20 = psVar21;
              if (local_8 != 0) goto LAB_6373f80d;
            }
          }
          break;
        }
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          psVar20 = psVar21 + 1;
          param_1 = param_1 + 1;
          puVar11 = puVar12 + 1;
          *psVar21 = (short)param_2;
          *puVar12 = uVar7;
          *psVar17 = sVar23;
          *puVar24 = uVar8;
          psVar17 = psVar17 + 1;
          puVar24 = puVar24 + 1;
          local_8 = local_8 + -1;
          puVar12 = puVar11;
          psVar21 = psVar20;
          if (local_8 == 0) {
            local_8 = 0;
            puVar27 = puVar24;
            param_4 = psVar17;
            goto LAB_6373f661;
          }
        }
        local_c = local_c + param_7;
        iVar1 = (&DAT_63790960)[*param_10];
        iVar2 = (&DAT_63792180)[*param_11];
        iVar19 = (&DAT_637929a0)[*param_11] + (&DAT_63791d80)[*param_10];
        iVar3 = (&DAT_63791580)[*param_8];
        iVar4 = (&DAT_63791580)[*param_9];
        iVar5 = (&DAT_63791580)[param_8[1]];
        iVar6 = (&DAT_63791580)[param_9[1]];
        uVar13 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar2] << 6 |
                 (uint)(byte)(&DAT_6378efe3)[iVar3 + iVar19]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar1];
        uVar15 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar2] << 6 |
                 (uint)(byte)(&DAT_6378efe1)[iVar4 + iVar19]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar1];
        local_2c = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar2] << 6 |
                   (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar19]) << 5 |
                   (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar1];
        local_28 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar2] << 6 |
                   (uint)(byte)(&DAT_6378efe3)[iVar6 + iVar19]) << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar1];
        pbVar25 = param_8 + 2;
        pbVar16 = param_9 + 2;
        pbVar26 = param_10 + 1;
        pbVar10 = param_11 + 1;
        local_14 = ((local_14 ^ uVar13) >> 1 & 0x7bef) + (local_14 & uVar13);
        uVar7 = (ushort)local_14;
        sVar23 = ((ushort)((*param_1 ^ local_14) >> 1) & 0x7bef) + (*param_1 & uVar7);
        *psVar21 = sVar23;
        local_10 = (local_10 & uVar15) + ((local_10 ^ uVar15) >> 1 & 0x7bef);
        uVar8 = (ushort)local_10;
        sVar22 = ((ushort)((local_10 ^ local_14) >> 1) & 0x7bef) + (uVar8 & uVar7);
        *puVar12 = uVar7;
        *psVar17 = sVar22;
        param_5 = param_5 + 2;
        *puVar27 = uVar8;
        puVar27 = param_1;
        while( true ) {
          param_4 = psVar17 + 1;
          puVar24 = puVar12 + 1;
          psVar9 = psVar21 + 1;
          param_1 = puVar27 + 1;
          if (local_8 + -1 == 0) {
            local_8 = 0;
            puVar11 = puVar24;
            psVar20 = psVar9;
            uVar13 = local_14;
            uVar15 = local_10;
            goto LAB_6373f30b;
          }
          local_c = local_c + param_13 * -2;
          if (local_c < 0) break;
          *psVar9 = sVar23;
          *puVar24 = uVar7;
          *param_4 = sVar22;
          *param_5 = uVar8;
          param_5 = param_5 + 1;
          puVar27 = param_1;
          psVar21 = psVar9;
          puVar12 = puVar24;
          psVar17 = param_4;
          local_8 = local_8 + -1;
        }
        local_c = local_c + param_7;
        psVar20 = psVar21 + 2;
        puVar11 = puVar12 + 2;
        uVar7 = (ushort)uVar13;
        param_2._0_2_ = ((ushort)((*param_1 ^ uVar13) >> 1) & 0x7bef) + (*param_1 & uVar7);
        uVar8 = (ushort)uVar15;
        sVar23 = ((ushort)((uVar15 ^ uVar13) >> 1) & 0x7bef) + (uVar8 & uVar7);
        param_1 = puVar27 + 2;
        *psVar9 = (short)param_2;
        *puVar24 = uVar7;
        *param_4 = sVar23;
        param_4 = psVar17 + 2;
        *param_5 = uVar8;
        param_5 = param_5 + 1;
        local_8 = local_8 + -2;
        if (local_8 == 0) break;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          param_1 = param_1 + 1;
          psVar21 = psVar20 + 1;
          *psVar20 = (short)param_2;
          *puVar11 = uVar7;
          puVar11 = puVar11 + 1;
          *param_4 = sVar23;
          param_4 = param_4 + 1;
          *param_5 = uVar8;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          psVar20 = psVar21;
          if (local_8 == 0) {
            local_8 = 0;
            goto LAB_6373f30b;
          }
        }
        psVar21 = psVar20 + 1;
        local_c = local_c + param_7;
        uVar14 = ((local_2c ^ uVar13) >> 1 & 0x7bef) + (local_2c & uVar13);
        param_3 = puVar11 + 1;
        uVar7 = (ushort)uVar14;
        param_2._0_2_ = ((ushort)((*param_1 ^ uVar14) >> 1) & 0x7bef) + (*param_1 & uVar7);
        uVar13 = ((local_28 ^ uVar15) >> 1 & 0x7bef) + (local_28 & uVar15);
        uVar8 = (ushort)uVar13;
        sVar23 = ((ushort)((uVar13 ^ uVar14) >> 1) & 0x7bef) + (uVar8 & uVar7);
        param_1 = param_1 + 1;
        *psVar20 = (short)param_2;
        *puVar11 = uVar7;
        *param_4 = sVar23;
        param_4 = param_4 + 1;
        *param_5 = uVar8;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        local_20 = local_28;
        local_1c = local_2c;
        if (local_8 == 0) {
LAB_6373fae5:
          local_14 = local_1c;
          local_10 = local_20;
          puVar11 = param_3;
          psVar20 = psVar21;
          uVar13 = local_14;
          uVar15 = local_10;
          break;
        }
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          psVar20 = psVar21 + 1;
          param_1 = param_1 + 1;
          puVar11 = param_3 + 1;
          *psVar21 = (short)param_2;
          *param_3 = uVar7;
          *param_4 = sVar23;
          *param_5 = uVar8;
          param_4 = param_4 + 1;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          param_3 = puVar11;
          psVar21 = psVar20;
          if (local_8 == 0) {
            local_8 = 0;
            uVar13 = local_2c;
            uVar15 = local_28;
            goto LAB_6373f30b;
          }
        }
        local_c = local_c + param_7;
        psVar20 = psVar21 + 1;
        puVar11 = param_3 + 1;
        psVar17 = param_4 + 1;
        uVar7 = (ushort)local_2c;
        param_2._0_2_ = ((ushort)((*param_1 ^ local_2c) >> 1) & 0x7bef) + (*param_1 & uVar7);
        puVar12 = param_5 + 1;
        uVar8 = (ushort)local_28;
        sVar23 = ((ushort)((local_28 ^ local_2c) >> 1) & 0x7bef) + (uVar8 & uVar7);
        param_1 = param_1 + 1;
        *psVar21 = (short)param_2;
        *param_3 = uVar7;
        *param_4 = sVar23;
        *param_5 = uVar8;
        local_8 = local_8 + -1;
        psVar21 = psVar20;
        puVar27 = puVar12;
        param_4 = psVar17;
        if (local_8 == 0) goto LAB_6373f661;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          param_1 = param_1 + 1;
          psVar20 = psVar21 + 1;
          *psVar21 = (short)param_2;
          *puVar11 = uVar7;
          *psVar17 = sVar23;
          *puVar27 = uVar8;
          puVar11 = puVar11 + 1;
          psVar17 = psVar17 + 1;
          puVar27 = puVar27 + 1;
          local_8 = local_8 + -1;
          psVar21 = psVar20;
          if (local_8 == 0) {
            local_8 = 0;
            param_4 = psVar17;
            goto LAB_6373f661;
          }
        }
        local_c = local_c + param_7;
        iVar1 = (&DAT_63790960)[*pbVar26];
        iVar2 = (&DAT_63792180)[*pbVar10];
        iVar19 = (&DAT_637929a0)[*pbVar10] + (&DAT_63791d80)[*pbVar26];
        iVar3 = (&DAT_63791580)[*pbVar25];
        iVar4 = (&DAT_63791580)[*pbVar16];
        iVar5 = (&DAT_63791580)[param_8[3]];
        iVar6 = (&DAT_63791580)[param_9[3]];
        uVar13 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar2] << 6 |
                 (uint)(byte)(&DAT_6378efe3)[iVar3 + iVar19]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar1];
        uVar15 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar2] << 6 |
                 (uint)(byte)(&DAT_6378efe1)[iVar4 + iVar19]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar1];
        local_14 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar2] << 6 |
                   (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar19]) << 5 |
                   (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar1];
        local_10 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar2] << 6 |
                   (uint)(byte)(&DAT_6378efe3)[iVar6 + iVar19]) << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar1];
        param_8 = param_8 + 4;
        param_9 = param_9 + 4;
        param_10 = param_10 + 2;
        param_11 = param_11 + 2;
        local_1c = ((local_2c ^ uVar13) >> 1 & 0x7bef) + (local_2c & uVar13);
        uVar7 = (ushort)local_1c;
        sVar23 = ((ushort)((*param_1 ^ local_1c) >> 1) & 0x7bef) + (*param_1 & uVar7);
        *psVar21 = sVar23;
        local_20 = (local_28 & uVar15) + ((local_28 ^ uVar15) >> 1 & 0x7bef);
        uVar8 = (ushort)local_20;
        sVar22 = ((ushort)((local_20 ^ local_1c) >> 1) & 0x7bef) + (uVar8 & uVar7);
        *puVar11 = uVar7;
        *psVar17 = sVar22;
        param_5 = param_5 + 2;
        *puVar12 = uVar8;
        param_3 = puVar11;
        param_4 = psVar17;
        while( true ) {
          local_8 = local_8 + -1;
          param_4 = param_4 + 1;
          param_3 = param_3 + 1;
          psVar21 = psVar21 + 1;
          param_1 = param_1 + 1;
          if (local_8 == 0) {
            local_8 = 0;
            goto LAB_6373fae5;
          }
          local_c = local_c + param_13 * -2;
          if (local_c < 0) break;
          *psVar21 = sVar23;
          *param_3 = uVar7;
          *param_4 = sVar22;
          *param_5 = uVar8;
          param_5 = param_5 + 1;
        }
        local_c = local_c + param_7;
      }
    }
  }
  else {
    local_2c = (&DAT_63792180)[*param_11];
    iVar1 = (&DAT_63791580)[*param_8];
    iVar2 = (&DAT_63791580)[*param_9];
    local_14 = ((uint)(byte)(&DAT_6378e5e4)[iVar1 + local_2c] << 6 |
               (uint)(byte)(&DAT_6378efe2)
                           [iVar1 + (&DAT_637929a0)[*param_11] + (&DAT_63791d80)[*param_10]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63790960)[*param_10]];
    local_10 = ((uint)(byte)(&DAT_6378e5e4)[iVar2 + local_2c] << 6 |
               (uint)(byte)(&DAT_6378efe2)
                           [iVar2 + (&DAT_637929a0)[*param_11] + (&DAT_63791d80)[*param_10]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63790960)[*param_10]];
    param_8 = param_8 + 1;
    param_9 = param_9 + 1;
    param_10 = param_10 + 1;
    param_11 = param_11 + 1;
    local_8 = param_7 - local_30;
    psVar21 = param_2;
    uVar13 = local_14;
    uVar15 = local_10;
    if (0 < local_8) goto LAB_6373ef88;
  }
  goto LAB_6373f30b;
  while( true ) {
    psVar20 = psVar21 + 1;
    param_1 = param_1 + 1;
    puVar11 = puVar12 + 1;
    *psVar21 = (short)param_2;
    *puVar12 = uVar7;
    *param_4 = sVar23;
    *param_5 = uVar8;
    param_4 = param_4 + 1;
    param_5 = param_5 + 1;
    local_8 = local_8 + -1;
    puVar12 = puVar11;
    psVar21 = psVar20;
    if (local_8 == 0) break;
LAB_6373f80d:
    local_c = local_c + param_13 * -2;
    puVar11 = puVar12;
    psVar20 = psVar21;
    if (local_c < 0) break;
  }
LAB_6373f30b:
  local_10 = uVar15;
  local_14 = uVar13;
  uVar7 = (ushort)local_14;
  param_2._0_2_ = ((ushort)((*param_1 ^ local_14) >> 1) & 0x7bef) + (*param_1 & uVar7);
  local_18 = ((ushort)((local_10 ^ local_14) >> 1) & 0x7bef) + ((ushort)local_10 & uVar7);
  for (local_8 = local_8 + local_30; local_8 != 0; local_8 = local_8 + -1) {
    *psVar20 = (short)param_2;
    *puVar11 = uVar7;
    *param_4 = local_18;
    *param_5 = (ushort)local_10;
    psVar20 = psVar20 + 1;
    param_4 = param_4 + 1;
    param_5 = param_5 + 1;
    puVar11 = puVar11 + 1;
  }
  return;
}


