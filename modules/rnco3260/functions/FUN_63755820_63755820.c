/* Module: rnco3260.dll
   Function: FUN_63755820
   Address: 63755820
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63755820(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
            undefined4 param_6,undefined4 param_7,byte *param_8,byte *param_9,byte *param_10,
            byte *param_11,uint param_12,uint param_13)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  uint uVar17;
  ushort uVar18;
  uint uVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort uVar22;
  int iVar23;
  uint uVar24;
  ushort uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint local_2c;
  uint local_20;
  uint local_1c;
  ushort local_18;
  uint local_c;
  uint local_8;
  
  if (param_13 != 0) {
    if (((param_12 & 1) == 0) && (1 < (int)param_13)) {
      bVar1 = *param_11;
      bVar2 = *param_10;
      iVar23 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
      iVar11 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
      iVar26 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
      iVar3 = (&DAT_63791580)[*param_8];
      iVar4 = (&DAT_63791580)[*param_9];
      iVar5 = (&DAT_63791580)[param_8[1]];
      iVar6 = (&DAT_63791580)[param_9[1]];
      uVar9 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar11] << 5 |
              (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar26]) << 5 |
              (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar23];
      uVar12 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar11] << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar26]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar23];
      uVar13 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar11] << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar26]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar23];
      local_1c = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar11] << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar26]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar23];
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      param_12._0_2_ = (ushort)uVar12;
      *param_3 = (ushort)uVar9;
      *param_5 = (ushort)param_12;
      param_3[2] = (ushort)uVar13;
      param_5[2] = (ushort)local_1c;
      uVar17 = ((*param_1 ^ uVar9) >> 1 & 0x3def) + (*param_1 & uVar9);
      uVar8 = (ushort)uVar17;
      *param_2 = uVar8;
      uVar10 = ((uVar12 ^ uVar9) >> 1 & 0x3def) + (uVar12 & uVar9);
      uVar7 = (ushort)uVar10;
      *param_4 = uVar7;
      local_c = ((param_1[2] ^ uVar13) >> 1 & 0x3def) + (param_1[2] & uVar13);
      param_2[2] = (ushort)local_c;
      local_8 = ((local_1c ^ uVar13) >> 1 & 0x3def) + (local_1c & uVar13);
      param_4[2] = (ushort)local_8;
      param_2[1] = ((ushort)((local_c ^ uVar17) >> 1) & 0x3def) + ((ushort)local_c & uVar8);
      param_3[1] = ((ushort)((uVar13 ^ uVar9) >> 1) & 0x3def) + ((ushort)uVar13 & (ushort)uVar9);
      param_4[1] = ((ushort)((local_8 ^ uVar10) >> 1) & 0x3def) + ((ushort)local_8 & uVar7);
      param_5[1] = ((ushort)((local_1c ^ uVar12) >> 1) & 0x3def) +
                   ((ushort)local_1c & (ushort)param_12);
      param_1 = param_1 + 3;
      puVar20 = param_2 + 3;
      param_3 = param_3 + 3;
      param_5 = param_5 + 3;
      param_4 = param_4 + 3;
      param_13 = param_13 - 2;
    }
    else {
      bVar1 = *param_11;
      bVar2 = *param_10;
      iVar3 = (&DAT_63791580)[*param_8];
      iVar4 = (&DAT_63791580)[*param_9];
      uVar13 = ((uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]]
                << 5 | (uint)(byte)(&DAT_6378e5e4)
                                   [iVar3 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
      local_1c = ((uint)(byte)(&DAT_6378e5e4)
                              [iVar4 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]] << 5 |
                 (uint)(byte)(&DAT_6378e5e4)
                             [iVar4 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
                 (uint)(byte)(&DAT_6378e5e4)
                             [iVar4 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
      param_8 = param_8 + 1;
      param_9 = param_9 + 1;
      *param_3 = (ushort)uVar13;
      *param_5 = (ushort)local_1c;
      local_c = ((*param_1 ^ uVar13) >> 1 & 0x3def) + (*param_1 & uVar13);
      *param_2 = (ushort)local_c;
      puVar20 = param_2 + 1;
      local_8 = ((local_1c ^ uVar13) >> 1 & 0x3def) + (local_1c & uVar13);
      param_5 = param_5 + 1;
      *param_4 = (ushort)local_8;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      param_13 = param_13 - 1;
    }
    uVar7 = (ushort)local_8;
    param_11 = param_11 + 1;
    param_10 = param_10 + 1;
    if (3 < (int)param_13) {
      local_2c = param_13 >> 2;
      param_2 = puVar20;
      local_20 = uVar13;
      do {
        bVar1 = *param_11;
        bVar2 = *param_10;
        iVar23 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
        iVar11 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
        iVar26 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
        iVar3 = (&DAT_63791580)[*param_8];
        iVar4 = (&DAT_63791580)[*param_9];
        iVar5 = (&DAT_63791580)[param_8[1]];
        iVar6 = (&DAT_63791580)[param_9[1]];
        uVar13 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar11] << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar26]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar23];
        uVar19 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar11] << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar26]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar23];
        uVar9 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar11] << 5 |
                (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar26]) << 5 |
                (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar23];
        uVar24 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar11] << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar26]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar23];
        uVar7 = (ushort)uVar13;
        param_3[1] = uVar7;
        uVar18 = (ushort)uVar19;
        param_5[1] = uVar18;
        uVar8 = (ushort)uVar9;
        param_3[3] = uVar8;
        uVar22 = (ushort)uVar24;
        param_5[3] = uVar22;
        uVar10 = ((param_1[1] ^ uVar13) >> 1 & 0x3def) + (param_1[1] & uVar13);
        uVar14 = (ushort)uVar10;
        param_2[1] = uVar14;
        uVar12 = ((uVar19 ^ uVar13) >> 1 & 0x3def) + (uVar19 & uVar13);
        uVar15 = (ushort)uVar12;
        param_4[1] = uVar15;
        uVar17 = ((param_1[3] ^ uVar9) >> 1 & 0x3def) + (param_1[3] & uVar9);
        uVar16 = (ushort)uVar17;
        param_2[3] = uVar16;
        uVar27 = ((uVar24 ^ uVar9) >> 1 & 0x3def) + (uVar24 & uVar9);
        uVar25 = (ushort)uVar27;
        param_4[3] = uVar25;
        *param_2 = ((ushort)((local_c ^ uVar10) >> 1) & 0x3def) + ((ushort)local_c & uVar14);
        *param_3 = ((ushort)((local_20 ^ uVar13) >> 1) & 0x3def) + ((ushort)local_20 & uVar7);
        *param_4 = ((ushort)((local_8 ^ uVar12) >> 1) & 0x3def) + ((ushort)local_8 & uVar15);
        *param_5 = ((ushort)((local_1c ^ uVar19) >> 1) & 0x3def) + ((ushort)local_1c & uVar18);
        param_2[2] = ((ushort)((uVar17 ^ uVar10) >> 1) & 0x3def) + (uVar16 & uVar14);
        param_3[2] = ((ushort)((uVar9 ^ uVar13) >> 1) & 0x3def) + (uVar8 & uVar7);
        param_4[2] = ((ushort)((uVar27 ^ uVar12) >> 1) & 0x3def) + (uVar25 & uVar15);
        param_5[2] = ((ushort)((uVar24 ^ uVar19) >> 1) & 0x3def) + (uVar22 & uVar18);
        bVar1 = param_11[1];
        bVar2 = param_10[1];
        iVar11 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
        iVar23 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
        iVar26 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
        iVar3 = (&DAT_63791580)[param_8[2]];
        iVar4 = (&DAT_63791580)[param_9[2]];
        iVar5 = (&DAT_63791580)[param_8[3]];
        iVar6 = (&DAT_63791580)[param_9[3]];
        uVar10 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar26] << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar11];
        uVar12 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar26] << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar11];
        uVar13 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar26] << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar11];
        local_1c = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar26] << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar23]) << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar11];
        param_8 = param_8 + 4;
        param_9 = param_9 + 4;
        param_10 = param_10 + 2;
        param_11 = param_11 + 2;
        uVar14 = (ushort)uVar10;
        param_3[5] = uVar14;
        param_12._0_2_ = (ushort)uVar12;
        param_5[5] = (ushort)param_12;
        param_3[7] = (ushort)uVar13;
        param_5[7] = (ushort)local_1c;
        uVar19 = ((param_1[5] ^ uVar10) >> 1 & 0x3def) + (param_1[5] & uVar10);
        uVar15 = (ushort)uVar19;
        param_2[5] = uVar15;
        uVar28 = ((uVar12 ^ uVar10) >> 1 & 0x3def) + (uVar12 & uVar10);
        uVar18 = (ushort)uVar28;
        param_4[5] = uVar18;
        local_c = (param_1[7] & uVar13) + ((param_1[7] ^ uVar13) >> 1 & 0x3def);
        param_2[7] = (ushort)local_c;
        local_8 = (local_1c & uVar13) + ((local_1c ^ uVar13) >> 1 & 0x3def);
        uVar7 = (ushort)local_8;
        param_4[7] = uVar7;
        param_2[4] = ((ushort)((uVar17 ^ uVar19) >> 1) & 0x3def) + (uVar16 & uVar15);
        param_3[4] = ((ushort)((uVar9 ^ uVar10) >> 1) & 0x3def) + (uVar8 & uVar14);
        param_4[4] = ((ushort)((uVar27 ^ uVar28) >> 1) & 0x3def) + (uVar25 & uVar18);
        param_5[4] = ((ushort)((uVar24 ^ uVar12) >> 1) & 0x3def) + (uVar22 & (ushort)param_12);
        param_2[6] = ((ushort)((local_c ^ uVar19) >> 1) & 0x3def) + ((ushort)local_c & uVar15);
        param_3[6] = ((ushort)((uVar13 ^ uVar10) >> 1) & 0x3def) + ((ushort)uVar13 & uVar14);
        param_4[6] = ((ushort)((local_8 ^ uVar28) >> 1) & 0x3def) + (uVar7 & uVar18);
        param_5[6] = ((ushort)((local_1c ^ uVar12) >> 1) & 0x3def) +
                     ((ushort)local_1c & (ushort)param_12);
        param_1 = param_1 + 8;
        puVar20 = param_2 + 8;
        param_3 = param_3 + 8;
        param_5 = param_5 + 8;
        param_4 = param_4 + 8;
        param_13 = param_13 - 4;
        local_2c = local_2c - 1;
        param_2 = puVar20;
        local_20 = uVar13;
      } while (local_2c != 0);
    }
    uVar9 = uVar13;
    puVar21 = puVar20;
    uVar10 = local_1c;
    if (1 < (int)param_13) {
      bVar1 = *param_11;
      bVar2 = *param_10;
      iVar23 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
      iVar26 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
      iVar11 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
      iVar3 = (&DAT_63791580)[*param_8];
      iVar4 = (&DAT_63791580)[*param_9];
      iVar5 = (&DAT_63791580)[param_8[1]];
      iVar6 = (&DAT_63791580)[param_9[1]];
      uVar19 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar11] << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar26]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar23];
      uVar24 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar11] << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar26]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar23];
      uVar9 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar11] << 5 |
              (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar26]) << 5 |
              (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar23];
      uVar10 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar11] << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar26]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar23];
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      local_18 = (ushort)uVar19;
      param_3[1] = local_18;
      param_12._0_2_ = (ushort)uVar24;
      param_5[1] = (ushort)param_12;
      param_2._0_2_ = (ushort)uVar9;
      param_3[3] = (ushort)param_2;
      local_20._0_2_ = (ushort)uVar10;
      param_5[3] = (ushort)local_20;
      uVar27 = ((param_1[1] ^ uVar19) >> 1 & 0x3def) + (param_1[1] & uVar19);
      uVar14 = (ushort)uVar27;
      puVar20[1] = uVar14;
      uVar12 = ((uVar24 ^ uVar19) >> 1 & 0x3def) + (uVar24 & uVar19);
      uVar8 = (ushort)uVar12;
      param_4[1] = uVar8;
      uVar28 = ((param_1[3] ^ uVar9) >> 1 & 0x3def) + (param_1[3] & uVar9);
      puVar20[3] = (ushort)uVar28;
      uVar17 = ((uVar10 ^ uVar9) >> 1 & 0x3def) + (uVar10 & uVar9);
      uVar7 = (ushort)uVar17;
      param_4[3] = uVar7;
      *puVar20 = ((ushort)((local_c ^ uVar27) >> 1) & 0x3def) + ((ushort)local_c & uVar14);
      *param_3 = ((ushort)((uVar13 ^ uVar19) >> 1) & 0x3def) + ((ushort)uVar13 & local_18);
      *param_4 = ((ushort)((local_8 ^ uVar12) >> 1) & 0x3def) + ((ushort)local_8 & uVar8);
      puVar21 = puVar20 + 4;
      *param_5 = ((ushort)((local_1c ^ uVar24) >> 1) & 0x3def) +
                 ((ushort)local_1c & (ushort)param_12);
      puVar20[2] = ((ushort)((uVar28 ^ uVar27) >> 1) & 0x3def) + ((ushort)uVar28 & uVar14);
      param_3[2] = ((ushort)((uVar9 ^ uVar19) >> 1) & 0x3def) + ((ushort)param_2 & local_18);
      param_4[2] = ((ushort)((uVar17 ^ uVar12) >> 1) & 0x3def) + (uVar7 & uVar8);
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
      param_4 = param_4 + 4;
      param_5[2] = ((ushort)((uVar10 ^ uVar24) >> 1) & 0x3def) +
                   ((ushort)local_20 & (ushort)param_12);
      param_13 = param_13 - 2;
      param_5 = param_5 + 4;
      local_c = uVar28;
      local_8 = uVar17;
    }
    if (0 < (int)param_13) {
      bVar1 = *param_11;
      bVar2 = *param_10;
      iVar3 = (&DAT_63791580)[*param_8];
      iVar4 = (&DAT_63791580)[*param_9];
      uVar17 = ((uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]]
                << 5 | (uint)(byte)(&DAT_6378e5e4)
                                   [iVar3 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
      uVar13 = ((uint)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]]
                << 5 | (uint)(byte)(&DAT_6378e5e4)
                                   [iVar4 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
      uVar14 = (ushort)uVar17;
      param_3[1] = uVar14;
      param_3[2] = uVar14;
      uVar7 = (ushort)uVar13;
      param_5[1] = uVar7;
      param_5[2] = uVar7;
      uVar12 = ((param_1[1] ^ uVar17) >> 1 & 0x3def) + (param_1[1] & uVar17);
      uVar8 = (ushort)uVar12;
      puVar21[1] = uVar8;
      puVar21[2] = uVar8;
      uVar19 = ((uVar13 ^ uVar17) >> 1 & 0x3def) + (uVar13 & uVar17);
      uVar15 = (ushort)uVar19;
      param_4[1] = uVar15;
      param_4[2] = uVar15;
      *puVar21 = ((ushort)((local_c ^ uVar12) >> 1) & 0x3def) + ((ushort)local_c & uVar8);
      *param_3 = ((ushort)((uVar9 ^ uVar17) >> 1) & 0x3def) + ((ushort)uVar9 & uVar14);
      *param_4 = ((ushort)((local_8 ^ uVar19) >> 1) & 0x3def) + ((ushort)local_8 & uVar15);
      *param_5 = ((ushort)((uVar10 ^ uVar13) >> 1) & 0x3def) + ((ushort)uVar10 & uVar7);
      return;
    }
    *puVar21 = (ushort)local_c;
    *param_3 = (ushort)uVar9;
    *param_4 = uVar7;
    *param_5 = (ushort)uVar10;
  }
  return;
}


