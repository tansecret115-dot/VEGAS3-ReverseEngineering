/* Module: rnco3260.dll
   Function: FUN_63753800
   Address: 63753800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63753800(ushort *param_1,short *param_2,ushort *param_3,short *param_4,ushort *param_5,
            undefined4 param_6,int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11
            ,uint param_12,int param_13)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  short *psVar9;
  int iVar10;
  byte *pbVar11;
  ushort *puVar12;
  ushort *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  short *psVar18;
  uint uVar19;
  int iVar20;
  short *psVar21;
  short *psVar22;
  short sVar23;
  short sVar24;
  int iVar25;
  ushort *puVar26;
  byte *pbVar27;
  byte *pbVar28;
  ushort *puVar29;
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
  puVar12 = param_3;
  psVar21 = param_2;
  if (((param_12 & 1) == 0) && (1 < param_13)) {
    bVar1 = *param_11;
    bVar2 = *param_10;
    iVar20 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
    iVar10 = (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2];
    iVar25 = (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2];
    iVar3 = (&DAT_63791580)[*param_8];
    iVar4 = (&DAT_63791580)[*param_9];
    iVar5 = (&DAT_63791580)[param_8[1]];
    iVar6 = (&DAT_63791580)[param_9[1]];
    uVar14 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar10] << 6 |
             (uint)(byte)(&DAT_6378efe3)[iVar3 + iVar25]) << 5 |
             (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar20];
    uVar16 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar10] << 6 |
             (uint)(byte)(&DAT_6378efe1)[iVar4 + iVar25]) << 5 |
             (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar20];
    local_14 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar10] << 6 |
               (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar25]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar20];
    local_10 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar10] << 6 |
               (uint)(byte)(&DAT_6378efe3)[iVar6 + iVar25]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar20];
    param_8 = param_8 + 2;
    param_9 = param_9 + 2;
    param_10 = param_10 + 1;
    param_11 = param_11 + 1;
    local_8 = param_7 - local_30;
    psVar22 = param_2;
    if (0 < local_8) {
      while( true ) {
        psVar21 = psVar22 + 1;
        puVar12 = param_3 + 1;
        uVar7 = (ushort)uVar14;
        param_2._0_2_ = ((ushort)((*param_1 ^ uVar14) >> 1) & 0x7bef) + (*param_1 & uVar7);
        uVar8 = (ushort)uVar16;
        sVar24 = ((ushort)((uVar16 ^ uVar14) >> 1) & 0x7bef) + (uVar8 & uVar7);
        param_1 = param_1 + 1;
        *psVar22 = (short)param_2;
        *param_3 = uVar7;
        *param_4 = sVar24;
        param_4 = param_4 + 1;
        *param_5 = uVar8;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        if (local_8 == 0) break;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          param_1 = param_1 + 1;
          psVar22 = psVar21 + 1;
          *psVar21 = (short)param_2;
          *puVar12 = uVar7;
          puVar12 = puVar12 + 1;
          *param_4 = sVar24;
          param_4 = param_4 + 1;
          *param_5 = uVar8;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          psVar21 = psVar22;
          if (local_8 == 0) {
            local_8 = 0;
            goto LAB_63753e55;
          }
        }
        psVar22 = psVar21 + 1;
        local_c = local_c + param_7;
        local_2c = ((local_14 ^ uVar14) >> 1 & 0x7bef) + (local_14 & uVar14);
        param_3 = puVar12 + 1;
        uVar7 = (ushort)local_2c;
        param_2._0_2_ = ((ushort)((*param_1 ^ local_2c) >> 1) & 0x7bef) + (*param_1 & uVar7);
        local_28 = ((local_10 ^ uVar16) >> 1 & 0x7bef) + (local_10 & uVar16);
        uVar8 = (ushort)local_28;
        sVar24 = ((ushort)((local_28 ^ local_2c) >> 1) & 0x7bef) + (uVar8 & uVar7);
        param_1 = param_1 + 1;
        *psVar21 = (short)param_2;
        *puVar12 = uVar7;
        *param_4 = sVar24;
        param_4 = param_4 + 1;
        *param_5 = uVar8;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        puVar12 = param_3;
        psVar21 = psVar22;
        uVar14 = local_14;
        uVar16 = local_10;
        if (local_8 == 0) break;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          psVar21 = psVar22 + 1;
          param_1 = param_1 + 1;
          puVar12 = param_3 + 1;
          *psVar22 = (short)param_2;
          *param_3 = uVar7;
          *param_4 = sVar24;
          *param_5 = uVar8;
          param_4 = param_4 + 1;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          param_3 = puVar12;
          psVar22 = psVar21;
          if (local_8 == 0) {
            local_8 = 0;
            goto LAB_63753e55;
          }
        }
        local_c = local_c + param_7;
LAB_63753ac1:
        psVar21 = psVar22 + 1;
        puVar12 = param_3 + 1;
        psVar18 = param_4 + 1;
        uVar7 = (ushort)local_14;
        param_2._0_2_ = ((ushort)((*param_1 ^ local_14) >> 1) & 0x7bef) + (*param_1 & uVar7);
        puVar29 = param_5 + 1;
        uVar8 = (ushort)local_10;
        sVar24 = ((ushort)((local_10 ^ local_14) >> 1) & 0x7bef) + (uVar8 & uVar7);
        param_1 = param_1 + 1;
        *psVar22 = (short)param_2;
        *param_3 = uVar7;
        *param_4 = sVar24;
        *param_5 = uVar8;
        local_8 = local_8 + -1;
        puVar13 = puVar12;
        psVar22 = psVar21;
        puVar26 = puVar29;
        param_4 = psVar18;
        pbVar27 = param_8;
        pbVar17 = param_9;
        pbVar28 = param_10;
        pbVar11 = param_11;
        if (local_8 == 0) {
LAB_637541ab:
          param_11 = pbVar11;
          param_10 = pbVar28;
          param_9 = pbVar17;
          param_8 = pbVar27;
          param_5 = puVar29;
          uVar14 = local_14;
          uVar16 = local_10;
          if ((param_13 + param_12 & 1) != 0) {
            local_8 = local_8 + (local_30 >> 1);
            local_30 = local_30 - (local_30 >> 1);
            if (0 < local_8) {
              bVar1 = *param_11;
              bVar2 = *param_10;
              iVar3 = (&DAT_63791580)[*param_8];
              iVar4 = (&DAT_63791580)[*param_9];
              uVar14 = ((uint)(byte)(&DAT_6378e5e4)
                                    [iVar3 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]] << 6 |
                       (uint)(byte)(&DAT_6378efe2)
                                   [iVar3 + (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2]]) << 5 |
                       (uint)(byte)(&DAT_6378e5e4)
                                   [iVar3 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
              uVar16 = ((uint)(byte)(&DAT_6378e5e4)
                                    [iVar4 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]] << 6 |
                       (uint)(byte)(&DAT_6378efe2)
                                   [iVar4 + (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2]]) << 5 |
                       (uint)(byte)(&DAT_6378e5e4)
                                   [iVar4 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
              uVar15 = ((uVar14 ^ local_2c) >> 1 & 0x7bef) + (uVar14 & local_2c);
              uVar7 = (ushort)uVar15;
              psVar22 = psVar21 + 1;
              param_2._0_2_ = ((ushort)((*param_1 ^ uVar15) >> 1) & 0x7bef) + (*param_1 & uVar7);
              puVar13 = puVar12 + 1;
              param_5 = puVar29 + 1;
              uVar19 = ((uVar16 ^ local_28) >> 1 & 0x7bef) + (uVar16 & local_28);
              uVar8 = (ushort)uVar19;
              sVar24 = ((ushort)((uVar19 ^ uVar15) >> 1) & 0x7bef) + (uVar8 & uVar7);
              param_1 = param_1 + 1;
              *psVar21 = (short)param_2;
              *puVar12 = uVar7;
              *param_4 = sVar24;
              *puVar29 = uVar8;
              param_4 = param_4 + 1;
              local_8 = local_8 + -1;
              puVar12 = puVar13;
              psVar21 = psVar22;
              if (local_8 != 0) goto LAB_6375436a;
            }
          }
          break;
        }
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          psVar21 = psVar22 + 1;
          param_1 = param_1 + 1;
          puVar12 = puVar13 + 1;
          *psVar22 = (short)param_2;
          *puVar13 = uVar7;
          *psVar18 = sVar24;
          *puVar26 = uVar8;
          psVar18 = psVar18 + 1;
          puVar26 = puVar26 + 1;
          local_8 = local_8 + -1;
          puVar13 = puVar12;
          psVar22 = psVar21;
          if (local_8 == 0) {
            local_8 = 0;
            puVar29 = puVar26;
            param_4 = psVar18;
            goto LAB_637541ab;
          }
        }
        local_c = local_c + param_7;
        bVar1 = *param_11;
        bVar2 = *param_10;
        iVar20 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
        iVar25 = (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2];
        iVar10 = (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2];
        iVar3 = (&DAT_63791580)[*param_8];
        iVar4 = (&DAT_63791580)[*param_9];
        iVar5 = (&DAT_63791580)[param_8[1]];
        iVar6 = (&DAT_63791580)[param_9[1]];
        uVar14 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar10] << 6 |
                 (uint)(byte)(&DAT_6378efe3)[iVar3 + iVar25]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar20];
        uVar16 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar10] << 6 |
                 (uint)(byte)(&DAT_6378efe1)[iVar4 + iVar25]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar20];
        local_2c = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar10] << 6 |
                   (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar25]) << 5 |
                   (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar20];
        local_28 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar10] << 6 |
                   (uint)(byte)(&DAT_6378efe3)[iVar6 + iVar25]) << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar20];
        pbVar27 = param_8 + 2;
        pbVar17 = param_9 + 2;
        pbVar28 = param_10 + 1;
        pbVar11 = param_11 + 1;
        local_14 = ((local_14 ^ uVar14) >> 1 & 0x7bef) + (local_14 & uVar14);
        uVar7 = (ushort)local_14;
        sVar24 = ((ushort)((*param_1 ^ local_14) >> 1) & 0x7bef) + (*param_1 & uVar7);
        local_10 = (local_10 & uVar16) + ((local_10 ^ uVar16) >> 1 & 0x7bef);
        uVar8 = (ushort)local_10;
        sVar23 = ((ushort)((local_10 ^ local_14) >> 1) & 0x7bef) + (uVar8 & uVar7);
        *psVar22 = sVar24;
        *puVar13 = uVar7;
        *psVar18 = sVar23;
        param_5 = param_5 + 2;
        *puVar29 = uVar8;
        puVar29 = param_1;
        while( true ) {
          param_4 = psVar18 + 1;
          puVar26 = puVar13 + 1;
          psVar9 = psVar22 + 1;
          param_1 = puVar29 + 1;
          if (local_8 + -1 == 0) {
            local_8 = 0;
            puVar12 = puVar26;
            psVar21 = psVar9;
            uVar14 = local_14;
            uVar16 = local_10;
            goto LAB_63753e55;
          }
          local_c = local_c + param_13 * -2;
          if (local_c < 0) break;
          *psVar9 = sVar24;
          *puVar26 = uVar7;
          *param_4 = sVar23;
          *param_5 = uVar8;
          param_5 = param_5 + 1;
          puVar29 = param_1;
          psVar22 = psVar9;
          puVar13 = puVar26;
          psVar18 = param_4;
          local_8 = local_8 + -1;
        }
        local_c = local_c + param_7;
        psVar21 = psVar22 + 2;
        puVar12 = puVar13 + 2;
        uVar7 = (ushort)uVar14;
        param_2._0_2_ = ((ushort)((*param_1 ^ uVar14) >> 1) & 0x7bef) + (*param_1 & uVar7);
        uVar8 = (ushort)uVar16;
        sVar24 = ((ushort)((uVar16 ^ uVar14) >> 1) & 0x7bef) + (uVar8 & uVar7);
        param_1 = puVar29 + 2;
        *psVar9 = (short)param_2;
        *puVar26 = uVar7;
        *param_4 = sVar24;
        param_4 = psVar18 + 2;
        *param_5 = uVar8;
        param_5 = param_5 + 1;
        local_8 = local_8 + -2;
        if (local_8 == 0) break;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          param_1 = param_1 + 1;
          psVar22 = psVar21 + 1;
          *psVar21 = (short)param_2;
          *puVar12 = uVar7;
          puVar12 = puVar12 + 1;
          *param_4 = sVar24;
          param_4 = param_4 + 1;
          *param_5 = uVar8;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          psVar21 = psVar22;
          if (local_8 == 0) {
            local_8 = 0;
            goto LAB_63753e55;
          }
        }
        psVar22 = psVar21 + 1;
        local_c = local_c + param_7;
        uVar15 = ((local_2c ^ uVar14) >> 1 & 0x7bef) + (local_2c & uVar14);
        param_3 = puVar12 + 1;
        uVar7 = (ushort)uVar15;
        param_2._0_2_ = ((ushort)((*param_1 ^ uVar15) >> 1) & 0x7bef) + (*param_1 & uVar7);
        uVar14 = ((local_28 ^ uVar16) >> 1 & 0x7bef) + (local_28 & uVar16);
        uVar8 = (ushort)uVar14;
        sVar24 = ((ushort)((uVar14 ^ uVar15) >> 1) & 0x7bef) + (uVar8 & uVar7);
        param_1 = param_1 + 1;
        *psVar21 = (short)param_2;
        *puVar12 = uVar7;
        *param_4 = sVar24;
        param_4 = param_4 + 1;
        *param_5 = uVar8;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        local_20 = local_28;
        local_1c = local_2c;
        if (local_8 == 0) {
LAB_63754658:
          local_14 = local_1c;
          local_10 = local_20;
          puVar12 = param_3;
          psVar21 = psVar22;
          uVar14 = local_14;
          uVar16 = local_10;
          break;
        }
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          psVar21 = psVar22 + 1;
          param_1 = param_1 + 1;
          puVar12 = param_3 + 1;
          *psVar22 = (short)param_2;
          *param_3 = uVar7;
          *param_4 = sVar24;
          *param_5 = uVar8;
          param_4 = param_4 + 1;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          param_3 = puVar12;
          psVar22 = psVar21;
          if (local_8 == 0) {
            local_8 = 0;
            uVar14 = local_2c;
            uVar16 = local_28;
            goto LAB_63753e55;
          }
        }
        local_c = local_c + param_7;
        psVar21 = psVar22 + 1;
        puVar12 = param_3 + 1;
        psVar18 = param_4 + 1;
        uVar7 = (ushort)local_2c;
        param_2._0_2_ = ((ushort)((*param_1 ^ local_2c) >> 1) & 0x7bef) + (*param_1 & uVar7);
        puVar13 = param_5 + 1;
        uVar8 = (ushort)local_28;
        sVar24 = ((ushort)((local_28 ^ local_2c) >> 1) & 0x7bef) + (uVar8 & uVar7);
        param_1 = param_1 + 1;
        *psVar22 = (short)param_2;
        *param_3 = uVar7;
        *param_4 = sVar24;
        *param_5 = uVar8;
        local_8 = local_8 + -1;
        psVar22 = psVar21;
        puVar29 = puVar13;
        param_4 = psVar18;
        if (local_8 == 0) goto LAB_637541ab;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          param_1 = param_1 + 1;
          psVar21 = psVar22 + 1;
          *psVar22 = (short)param_2;
          *puVar12 = uVar7;
          *psVar18 = sVar24;
          *puVar29 = uVar8;
          puVar12 = puVar12 + 1;
          psVar18 = psVar18 + 1;
          puVar29 = puVar29 + 1;
          local_8 = local_8 + -1;
          psVar22 = psVar21;
          if (local_8 == 0) {
            local_8 = 0;
            param_4 = psVar18;
            goto LAB_637541ab;
          }
        }
        local_c = local_c + param_7;
        bVar1 = *pbVar11;
        bVar2 = *pbVar28;
        iVar20 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
        iVar25 = (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2];
        iVar10 = (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2];
        iVar3 = (&DAT_63791580)[*pbVar27];
        iVar4 = (&DAT_63791580)[*pbVar17];
        iVar5 = (&DAT_63791580)[param_8[3]];
        iVar6 = (&DAT_63791580)[param_9[3]];
        uVar14 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar10] << 6 |
                 (uint)(byte)(&DAT_6378efe3)[iVar3 + iVar25]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar20];
        uVar16 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar10] << 6 |
                 (uint)(byte)(&DAT_6378efe1)[iVar4 + iVar25]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar20];
        local_14 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar10] << 6 |
                   (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar25]) << 5 |
                   (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar20];
        local_10 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar10] << 6 |
                   (uint)(byte)(&DAT_6378efe3)[iVar6 + iVar25]) << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar20];
        param_8 = param_8 + 4;
        param_9 = param_9 + 4;
        param_10 = param_10 + 2;
        param_11 = param_11 + 2;
        local_1c = ((local_2c ^ uVar14) >> 1 & 0x7bef) + (local_2c & uVar14);
        uVar7 = (ushort)local_1c;
        sVar24 = ((ushort)((*param_1 ^ local_1c) >> 1) & 0x7bef) + (*param_1 & uVar7);
        local_20 = (local_28 & uVar16) + ((local_28 ^ uVar16) >> 1 & 0x7bef);
        uVar8 = (ushort)local_20;
        sVar23 = ((ushort)((local_20 ^ local_1c) >> 1) & 0x7bef) + (uVar8 & uVar7);
        *psVar22 = sVar24;
        *puVar12 = uVar7;
        *psVar18 = sVar23;
        param_5 = param_5 + 2;
        *puVar13 = uVar8;
        param_3 = puVar12;
        param_4 = psVar18;
        while( true ) {
          local_8 = local_8 + -1;
          param_4 = param_4 + 1;
          param_3 = param_3 + 1;
          psVar22 = psVar22 + 1;
          param_1 = param_1 + 1;
          if (local_8 == 0) {
            local_8 = 0;
            goto LAB_63754658;
          }
          local_c = local_c + param_13 * -2;
          if (local_c < 0) break;
          *psVar22 = sVar24;
          *param_3 = uVar7;
          *param_4 = sVar23;
          *param_5 = uVar8;
          param_5 = param_5 + 1;
        }
        local_c = local_c + param_7;
      }
    }
  }
  else {
    bVar1 = *param_11;
    bVar2 = *param_10;
    iVar3 = (&DAT_63791580)[*param_8];
    local_2c = (&DAT_63791580)[*param_9];
    local_14 = ((uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]]
                << 6 | (uint)(byte)(&DAT_6378efe2)
                                   [iVar3 + (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
    local_10 = ((uint)(byte)(&DAT_6378e5e4)
                            [local_2c + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]] << 6 |
               (uint)(byte)(&DAT_6378efe2)
                           [local_2c + (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)
                           [local_2c + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
    param_8 = param_8 + 1;
    param_9 = param_9 + 1;
    param_10 = param_10 + 1;
    param_11 = param_11 + 1;
    local_8 = param_7 - local_30;
    psVar22 = param_2;
    uVar14 = local_14;
    uVar16 = local_10;
    if (0 < local_8) goto LAB_63753ac1;
  }
  goto LAB_63753e55;
  while( true ) {
    psVar21 = psVar22 + 1;
    param_1 = param_1 + 1;
    puVar12 = puVar13 + 1;
    *psVar22 = (short)param_2;
    *puVar13 = uVar7;
    *param_4 = sVar24;
    *param_5 = uVar8;
    param_4 = param_4 + 1;
    param_5 = param_5 + 1;
    local_8 = local_8 + -1;
    puVar13 = puVar12;
    psVar22 = psVar21;
    if (local_8 == 0) break;
LAB_6375436a:
    local_c = local_c + param_13 * -2;
    puVar12 = puVar13;
    psVar21 = psVar22;
    if (local_c < 0) break;
  }
LAB_63753e55:
  local_10 = uVar16;
  local_14 = uVar14;
  uVar7 = (ushort)local_14;
  param_2._0_2_ = ((ushort)((*param_1 ^ local_14) >> 1) & 0x7bef) + (*param_1 & uVar7);
  local_18 = ((ushort)((local_10 ^ local_14) >> 1) & 0x7bef) + ((ushort)local_10 & uVar7);
  for (local_8 = local_8 + local_30; local_8 != 0; local_8 = local_8 + -1) {
    *psVar21 = (short)param_2;
    *puVar12 = uVar7;
    *param_4 = local_18;
    *param_5 = (ushort)local_10;
    psVar21 = psVar21 + 1;
    param_4 = param_4 + 1;
    param_5 = param_5 + 1;
    puVar12 = puVar12 + 1;
  }
  return;
}


