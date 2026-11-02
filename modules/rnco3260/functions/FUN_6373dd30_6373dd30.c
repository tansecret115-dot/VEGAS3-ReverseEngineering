/* Module: rnco3260.dll
   Function: FUN_6373dd30
   Address: 6373dd30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6373dd30(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5,
            undefined4 param_6,undefined4 param_7,byte *param_8,byte *param_9,byte *param_10,
            byte *param_11,uint param_12,uint param_13)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  ushort uVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort uVar20;
  uint uVar21;
  ushort uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint local_2c;
  uint local_20;
  uint local_1c;
  ushort local_18;
  uint local_10;
  uint local_c;
  
  if (param_13 != 0) {
    if (((param_12 & 1) == 0) && (1 < (int)param_13)) {
      iVar1 = (&DAT_63790960)[*param_10];
      iVar2 = (&DAT_63792180)[*param_11];
      iVar23 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
      iVar3 = (&DAT_63791580)[*param_8];
      iVar4 = (&DAT_63791580)[*param_9];
      iVar5 = (&DAT_63791580)[param_8[1]];
      iVar6 = (&DAT_63791580)[param_9[1]];
      uVar9 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar2] << 6 |
              (uint)(byte)(&DAT_6378efe3)[iVar3 + iVar23]) << 5 |
              (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar1];
      uVar11 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar2] << 6 |
               (uint)(byte)(&DAT_6378efe1)[iVar4 + iVar23]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar1];
      uVar12 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar2] << 6 |
               (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar23]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar1];
      local_1c = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar2] << 6 |
                 (uint)(byte)(&DAT_6378efe3)[iVar6 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar1];
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      param_12._0_2_ = (ushort)uVar11;
      *param_3 = (ushort)uVar9;
      *param_5 = (ushort)param_12;
      param_3[2] = (ushort)uVar12;
      param_5[2] = (ushort)local_1c;
      uVar24 = ((*param_1 ^ uVar9) >> 1 & 0x7bef) + (*param_1 & uVar9);
      uVar8 = (ushort)uVar24;
      *param_2 = uVar8;
      uVar10 = ((uVar11 ^ uVar9) >> 1 & 0x7bef) + (uVar11 & uVar9);
      uVar7 = (ushort)uVar10;
      *param_4 = uVar7;
      local_10 = ((param_1[2] ^ uVar12) >> 1 & 0x7bef) + (param_1[2] & uVar12);
      param_2[2] = (ushort)local_10;
      local_c = ((local_1c ^ uVar12) >> 1 & 0x7bef) + (local_1c & uVar12);
      param_4[2] = (ushort)local_c;
      param_2[1] = ((ushort)((local_10 ^ uVar24) >> 1) & 0x7bef) + ((ushort)local_10 & uVar8);
      param_3[1] = ((ushort)((uVar12 ^ uVar9) >> 1) & 0x7bef) + ((ushort)uVar12 & (ushort)uVar9);
      param_4[1] = ((ushort)((local_c ^ uVar10) >> 1) & 0x7bef) + ((ushort)local_c & uVar7);
      param_5[1] = ((ushort)((local_1c ^ uVar11) >> 1) & 0x7bef) +
                   ((ushort)local_1c & (ushort)param_12);
      param_1 = param_1 + 3;
      puVar18 = param_2 + 3;
      param_3 = param_3 + 3;
      param_5 = param_5 + 3;
      param_4 = param_4 + 3;
      param_13 = param_13 - 2;
    }
    else {
      iVar1 = (&DAT_63791580)[*param_8];
      iVar2 = (&DAT_63791580)[*param_9];
      uVar12 = ((uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63792180)[*param_11]] << 6 |
               (uint)(byte)(&DAT_6378efe2)
                           [iVar1 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63790960)[*param_10]];
      local_1c = ((uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63792180)[*param_11]] << 6 |
                 (uint)(byte)(&DAT_6378efe2)
                             [iVar2 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 5
                 | (uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63790960)[*param_10]];
      param_8 = param_8 + 1;
      param_9 = param_9 + 1;
      *param_3 = (ushort)uVar12;
      *param_5 = (ushort)local_1c;
      local_10 = ((*param_1 ^ uVar12) >> 1 & 0x7bef) + (*param_1 & uVar12);
      *param_2 = (ushort)local_10;
      local_c = ((local_1c ^ uVar12) >> 1 & 0x7bef) + (local_1c & uVar12);
      puVar18 = param_2 + 1;
      param_5 = param_5 + 1;
      *param_4 = (ushort)local_c;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      param_13 = param_13 - 1;
    }
    uVar7 = (ushort)local_c;
    param_11 = param_11 + 1;
    param_10 = param_10 + 1;
    if (3 < (int)param_13) {
      local_2c = param_13 >> 2;
      param_2 = puVar18;
      local_20 = uVar12;
      do {
        iVar1 = (&DAT_63790960)[*param_10];
        iVar23 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
        iVar2 = (&DAT_63792180)[*param_11];
        iVar3 = (&DAT_63791580)[*param_8];
        iVar4 = (&DAT_63791580)[*param_9];
        iVar5 = (&DAT_63791580)[param_8[1]];
        iVar6 = (&DAT_63791580)[param_9[1]];
        uVar10 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar2] << 6 |
                 (uint)(byte)(&DAT_6378efe3)[iVar3 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar1];
        uVar12 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar2] << 6 |
                 (uint)(byte)(&DAT_6378efe1)[iVar4 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar1];
        uVar9 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar2] << 6 |
                (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar23]) << 5 |
                (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar1];
        uVar21 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar2] << 6 |
                 (uint)(byte)(&DAT_6378efe3)[iVar6 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar1];
        uVar7 = (ushort)uVar10;
        param_3[1] = uVar7;
        uVar17 = (ushort)uVar12;
        param_5[1] = uVar17;
        uVar8 = (ushort)uVar9;
        param_3[3] = uVar8;
        uVar20 = (ushort)uVar21;
        param_5[3] = uVar20;
        uVar11 = ((param_1[1] ^ uVar10) >> 1 & 0x7bef) + (param_1[1] & uVar10);
        uVar13 = (ushort)uVar11;
        param_2[1] = uVar13;
        uVar24 = ((uVar12 ^ uVar10) >> 1 & 0x7bef) + (uVar12 & uVar10);
        uVar14 = (ushort)uVar24;
        param_4[1] = uVar14;
        uVar16 = ((param_1[3] ^ uVar9) >> 1 & 0x7bef) + (param_1[3] & uVar9);
        uVar15 = (ushort)uVar16;
        param_2[3] = uVar15;
        uVar25 = ((uVar21 ^ uVar9) >> 1 & 0x7bef) + (uVar21 & uVar9);
        uVar22 = (ushort)uVar25;
        param_4[3] = uVar22;
        *param_2 = ((ushort)((local_10 ^ uVar11) >> 1) & 0x7bef) + ((ushort)local_10 & uVar13);
        *param_3 = ((ushort)((local_20 ^ uVar10) >> 1) & 0x7bef) + ((ushort)local_20 & uVar7);
        *param_4 = ((ushort)((local_c ^ uVar24) >> 1) & 0x7bef) + ((ushort)local_c & uVar14);
        *param_5 = ((ushort)((local_1c ^ uVar12) >> 1) & 0x7bef) + ((ushort)local_1c & uVar17);
        param_2[2] = ((ushort)((uVar16 ^ uVar11) >> 1) & 0x7bef) + (uVar15 & uVar13);
        param_3[2] = ((ushort)((uVar9 ^ uVar10) >> 1) & 0x7bef) + (uVar8 & uVar7);
        param_4[2] = ((ushort)((uVar25 ^ uVar24) >> 1) & 0x7bef) + (uVar22 & uVar14);
        param_5[2] = ((ushort)((uVar21 ^ uVar12) >> 1) & 0x7bef) + (uVar20 & uVar17);
        iVar1 = (&DAT_63790960)[param_10[1]];
        iVar2 = (&DAT_63792180)[param_11[1]];
        iVar23 = (&DAT_63791d80)[param_10[1]] + (&DAT_637929a0)[param_11[1]];
        iVar3 = (&DAT_63791580)[param_8[2]];
        iVar4 = (&DAT_63791580)[param_9[2]];
        iVar5 = (&DAT_63791580)[param_8[3]];
        iVar6 = (&DAT_63791580)[param_9[3]];
        uVar10 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar2] << 6 |
                 (uint)(byte)(&DAT_6378efe3)[iVar3 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar1];
        uVar11 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar2] << 6 |
                 (uint)(byte)(&DAT_6378efe1)[iVar4 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar1];
        uVar12 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar2] << 6 |
                 (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar1];
        local_1c = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar2] << 6 |
                   (uint)(byte)(&DAT_6378efe3)[iVar6 + iVar23]) << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar1];
        param_8 = param_8 + 4;
        param_9 = param_9 + 4;
        param_10 = param_10 + 2;
        param_11 = param_11 + 2;
        uVar13 = (ushort)uVar10;
        param_3[5] = uVar13;
        param_12._0_2_ = (ushort)uVar11;
        param_5[5] = (ushort)param_12;
        param_3[7] = (ushort)uVar12;
        param_5[7] = (ushort)local_1c;
        uVar24 = ((param_1[5] ^ uVar10) >> 1 & 0x7bef) + (param_1[5] & uVar10);
        uVar14 = (ushort)uVar24;
        param_2[5] = uVar14;
        uVar26 = ((uVar11 ^ uVar10) >> 1 & 0x7bef) + (uVar11 & uVar10);
        uVar17 = (ushort)uVar26;
        param_4[5] = uVar17;
        local_10 = (param_1[7] & uVar12) + ((param_1[7] ^ uVar12) >> 1 & 0x7bef);
        param_2[7] = (ushort)local_10;
        local_c = (local_1c & uVar12) + ((local_1c ^ uVar12) >> 1 & 0x7bef);
        uVar7 = (ushort)local_c;
        param_4[7] = uVar7;
        param_2[4] = ((ushort)((uVar16 ^ uVar24) >> 1) & 0x7bef) + (uVar15 & uVar14);
        param_3[4] = ((ushort)((uVar9 ^ uVar10) >> 1) & 0x7bef) + (uVar8 & uVar13);
        param_4[4] = ((ushort)((uVar25 ^ uVar26) >> 1) & 0x7bef) + (uVar22 & uVar17);
        param_5[4] = ((ushort)((uVar21 ^ uVar11) >> 1) & 0x7bef) + (uVar20 & (ushort)param_12);
        param_2[6] = ((ushort)((local_10 ^ uVar24) >> 1) & 0x7bef) + ((ushort)local_10 & uVar14);
        param_3[6] = ((ushort)((uVar12 ^ uVar10) >> 1) & 0x7bef) + ((ushort)uVar12 & uVar13);
        param_4[6] = ((ushort)((local_c ^ uVar26) >> 1) & 0x7bef) + (uVar7 & uVar17);
        param_5[6] = ((ushort)((local_1c ^ uVar11) >> 1) & 0x7bef) +
                     ((ushort)local_1c & (ushort)param_12);
        param_1 = param_1 + 8;
        puVar18 = param_2 + 8;
        param_3 = param_3 + 8;
        param_5 = param_5 + 8;
        param_4 = param_4 + 8;
        param_13 = param_13 - 4;
        local_2c = local_2c - 1;
        param_2 = puVar18;
        local_20 = uVar12;
      } while (local_2c != 0);
    }
    uVar9 = uVar12;
    puVar19 = puVar18;
    uVar10 = local_1c;
    if (1 < (int)param_13) {
      iVar1 = (&DAT_63790960)[*param_10];
      iVar2 = (&DAT_63792180)[*param_11];
      iVar23 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
      iVar3 = (&DAT_63791580)[*param_8];
      iVar4 = (&DAT_63791580)[*param_9];
      iVar5 = (&DAT_63791580)[param_8[1]];
      iVar6 = (&DAT_63791580)[param_9[1]];
      uVar16 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar2] << 6 |
               (uint)(byte)(&DAT_6378efe3)[iVar3 + iVar23]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar1];
      uVar21 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar2] << 6 |
               (uint)(byte)(&DAT_6378efe1)[iVar4 + iVar23]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar1];
      uVar9 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar2] << 6 |
              (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar23]) << 5 |
              (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar1];
      uVar10 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar2] << 6 |
               (uint)(byte)(&DAT_6378efe3)[iVar6 + iVar23]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar1];
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      param_12._0_2_ = (ushort)uVar21;
      local_18 = (ushort)uVar16;
      param_3[1] = local_18;
      param_5[1] = (ushort)param_12;
      param_2._0_2_ = (ushort)uVar9;
      param_3[3] = (ushort)param_2;
      local_20._0_2_ = (ushort)uVar10;
      param_5[3] = (ushort)local_20;
      uVar25 = ((param_1[1] ^ uVar16) >> 1 & 0x7bef) + (param_1[1] & uVar16);
      uVar13 = (ushort)uVar25;
      puVar18[1] = uVar13;
      uVar11 = ((uVar21 ^ uVar16) >> 1 & 0x7bef) + (uVar21 & uVar16);
      uVar8 = (ushort)uVar11;
      param_4[1] = uVar8;
      uVar26 = ((param_1[3] ^ uVar9) >> 1 & 0x7bef) + (param_1[3] & uVar9);
      puVar18[3] = (ushort)uVar26;
      uVar24 = ((uVar10 ^ uVar9) >> 1 & 0x7bef) + (uVar10 & uVar9);
      uVar7 = (ushort)uVar24;
      param_4[3] = uVar7;
      *puVar18 = ((ushort)((local_10 ^ uVar25) >> 1) & 0x7bef) + ((ushort)local_10 & uVar13);
      *param_3 = ((ushort)((uVar12 ^ uVar16) >> 1) & 0x7bef) + ((ushort)uVar12 & local_18);
      *param_4 = ((ushort)((local_c ^ uVar11) >> 1) & 0x7bef) + ((ushort)local_c & uVar8);
      *param_5 = ((ushort)((local_1c ^ uVar21) >> 1) & 0x7bef) +
                 ((ushort)local_1c & (ushort)param_12);
      puVar19 = puVar18 + 4;
      puVar18[2] = ((ushort)((uVar26 ^ uVar25) >> 1) & 0x7bef) + ((ushort)uVar26 & uVar13);
      param_3[2] = ((ushort)((uVar9 ^ uVar16) >> 1) & 0x7bef) + ((ushort)param_2 & local_18);
      param_4[2] = ((ushort)((uVar24 ^ uVar11) >> 1) & 0x7bef) + (uVar7 & uVar8);
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
      param_4 = param_4 + 4;
      param_5[2] = ((ushort)((uVar10 ^ uVar21) >> 1) & 0x7bef) +
                   ((ushort)local_20 & (ushort)param_12);
      param_13 = param_13 - 2;
      param_5 = param_5 + 4;
      local_10 = uVar26;
      local_c = uVar24;
    }
    if (0 < (int)param_13) {
      iVar1 = (&DAT_63791580)[*param_8];
      iVar2 = (&DAT_63791580)[*param_9];
      uVar12 = ((uint)(byte)(&DAT_6378efe2)
                            [iVar1 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]] |
               (uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63792180)[*param_11]] << 6) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63790960)[*param_10]];
      uVar11 = ((uint)(byte)(&DAT_6378efe2)
                            [iVar2 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]] |
               (uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63792180)[*param_11]] << 6) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63790960)[*param_10]];
      uVar14 = (ushort)uVar12;
      param_3[1] = uVar14;
      param_3[2] = uVar14;
      uVar7 = (ushort)uVar11;
      param_5[1] = uVar7;
      param_5[2] = uVar7;
      uVar24 = ((param_1[1] ^ uVar12) >> 1 & 0x7bef) + (param_1[1] & uVar12);
      uVar8 = (ushort)uVar24;
      puVar19[1] = uVar8;
      puVar19[2] = uVar8;
      uVar16 = ((uVar11 ^ uVar12) >> 1 & 0x7bef) + (uVar11 & uVar12);
      uVar13 = (ushort)uVar16;
      param_4[1] = uVar13;
      param_4[2] = uVar13;
      *puVar19 = ((ushort)((local_10 ^ uVar24) >> 1) & 0x7bef) + ((ushort)local_10 & uVar8);
      *param_3 = ((ushort)((uVar9 ^ uVar12) >> 1) & 0x7bef) + ((ushort)uVar9 & uVar14);
      *param_4 = ((ushort)((local_c ^ uVar16) >> 1) & 0x7bef) + ((ushort)local_c & uVar13);
      *param_5 = ((ushort)((uVar10 ^ uVar11) >> 1) & 0x7bef) + ((ushort)uVar10 & uVar7);
      return;
    }
    *puVar19 = (ushort)local_10;
    *param_3 = (ushort)uVar9;
    *param_4 = uVar7;
    *param_5 = (ushort)uVar10;
  }
  return;
}


