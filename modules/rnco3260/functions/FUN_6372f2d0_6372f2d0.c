/* Module: rnco3260.dll
   Function: FUN_6372f2d0
   Address: 6372f2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6372f2d0(ushort *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,uint param_9,uint param_10)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort uVar20;
  uint uVar21;
  uint local_1c;
  uint local_10;
  uint local_c;
  ushort local_8;
  
  if (param_10 != 0) {
    if (((param_9 & 1) == 0) && (1 < (int)param_10)) {
      bVar1 = *param_8;
      bVar2 = *param_7;
      iVar10 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
      iVar17 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
      iVar13 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      iVar5 = (&DAT_63791580)[param_5[1]];
      iVar6 = (&DAT_63791580)[param_6[1]];
      uVar21 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar13] << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar17]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar10];
      uVar14 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar13] << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar17]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar10];
      local_c = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar13] << 5 |
                (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar17]) << 5 |
                (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar10];
      local_10 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar13] << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar17]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar10];
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      local_8 = (ushort)uVar14;
      uVar20 = (ushort)uVar21;
      *param_1 = uVar20;
      *param_2 = local_8;
      param_1[2] = (ushort)local_c;
      puVar18 = param_1 + 3;
      puVar11 = param_2 + 3;
      param_9._0_2_ = ((ushort)((local_c ^ uVar21) >> 1) & 0x3def) + ((ushort)local_c & uVar20);
      param_1[1] = (ushort)param_9;
      param_2[1] = ((ushort)((local_10 ^ uVar14) >> 1) & 0x3def) + ((ushort)local_10 & local_8);
      param_2[2] = (ushort)local_10;
      param_10 = param_10 - 2;
    }
    else {
      bVar1 = *param_8;
      bVar2 = *param_7;
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      local_c = ((uint)(byte)(&DAT_6378e5e4)
                             [iVar3 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]] << 5 |
                (uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]
                ) << 5 | (uint)(byte)(&DAT_6378e5e4)
                                     [iVar3 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
      local_10 = ((uint)(byte)(&DAT_6378e5e4)
                              [iVar4 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]] << 5 |
                 (uint)(byte)(&DAT_6378e5e4)
                             [iVar4 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
                 (uint)(byte)(&DAT_6378e5e4)
                             [iVar4 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
      param_5 = param_5 + 1;
      param_6 = param_6 + 1;
      *param_1 = (ushort)local_c;
      *param_2 = (ushort)local_10;
      puVar18 = param_1 + 1;
      puVar11 = param_2 + 1;
      param_10 = param_10 - 1;
    }
    uVar20 = (ushort)local_c;
    param_8 = param_8 + 1;
    param_7 = param_7 + 1;
    if (3 < (int)param_10) {
      local_1c = param_10 >> 2;
      param_1 = puVar18;
      param_2 = puVar11;
      do {
        bVar1 = *param_8;
        bVar2 = *param_7;
        iVar13 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
        iVar17 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
        iVar10 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
        iVar3 = (&DAT_63791580)[*param_5];
        iVar4 = (&DAT_63791580)[*param_6];
        iVar5 = (&DAT_63791580)[param_5[1]];
        iVar6 = (&DAT_63791580)[param_6[1]];
        uVar15 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar10] << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar17]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar13];
        uVar16 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar10] << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar17]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar13];
        uVar14 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar10] << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar17]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar13];
        uVar21 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar10] << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar17]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar13];
        uVar20 = (ushort)uVar15;
        *param_1 = ((ushort)((local_c ^ uVar15) >> 1) & 0x3def) + ((ushort)local_c & uVar20);
        uVar7 = (ushort)uVar16;
        param_1[1] = uVar20;
        *param_2 = ((ushort)((local_10 ^ uVar16) >> 1) & 0x3def) + ((ushort)local_10 & uVar7);
        param_2[1] = uVar7;
        uVar8 = (ushort)uVar14;
        param_1[2] = ((ushort)((uVar14 ^ uVar15) >> 1) & 0x3def) + (uVar8 & uVar20);
        param_1[3] = uVar8;
        uVar20 = (ushort)uVar21;
        param_2[3] = uVar20;
        param_2[2] = ((ushort)((uVar21 ^ uVar16) >> 1) & 0x3def) + (uVar20 & uVar7);
        bVar1 = param_8[1];
        bVar2 = param_7[1];
        iVar10 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
        iVar13 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
        iVar17 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
        iVar3 = (&DAT_63791580)[param_5[2]];
        iVar4 = (&DAT_63791580)[param_6[2]];
        iVar5 = (&DAT_63791580)[param_5[3]];
        iVar6 = (&DAT_63791580)[param_6[3]];
        uVar15 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar17] << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar13]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar10];
        uVar16 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar17] << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar13]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar10];
        local_c = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar17] << 5 |
                  (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar13]) << 5 |
                  (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar10];
        local_10 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar17] << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar13]) << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar10];
        param_5 = param_5 + 4;
        param_6 = param_6 + 4;
        param_7 = param_7 + 2;
        param_8 = param_8 + 2;
        uVar7 = (ushort)uVar15;
        uVar9 = (ushort)uVar16;
        param_1[4] = ((ushort)((uVar14 ^ uVar15) >> 1) & 0x3def) + (uVar8 & uVar7);
        param_1[5] = uVar7;
        param_2[4] = ((ushort)((uVar21 ^ uVar16) >> 1) & 0x3def) + (uVar20 & uVar9);
        param_2[5] = uVar9;
        uVar20 = (ushort)local_c;
        param_1[6] = ((ushort)((local_c ^ uVar15) >> 1) & 0x3def) + (uVar20 & uVar7);
        param_1[7] = uVar20;
        param_2[7] = (ushort)local_10;
        puVar18 = param_1 + 8;
        param_2[6] = ((ushort)((local_10 ^ uVar16) >> 1) & 0x3def) + ((ushort)local_10 & uVar9);
        puVar11 = param_2 + 8;
        param_10 = param_10 - 4;
        local_1c = local_1c - 1;
        param_1 = puVar18;
        param_2 = puVar11;
      } while (local_1c != 0);
    }
    puVar12 = puVar11;
    uVar14 = local_10;
    puVar19 = puVar18;
    if (1 < (int)param_10) {
      bVar1 = *param_8;
      bVar2 = *param_7;
      iVar13 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
      iVar17 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
      iVar10 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      iVar5 = (&DAT_63791580)[param_5[1]];
      iVar6 = (&DAT_63791580)[param_6[1]];
      uVar21 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar10] << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar17]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar13];
      uVar15 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar10] << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar17]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar13];
      uVar16 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar10] << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar17]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar13];
      uVar14 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar10] << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar17]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar13];
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      param_7 = param_7 + 1;
      param_8 = param_8 + 1;
      uVar8 = (ushort)uVar21;
      local_c._0_2_ = ((ushort)((local_c ^ uVar21) >> 1) & 0x3def) + ((ushort)local_c & uVar8);
      uVar7 = (ushort)uVar15;
      *puVar18 = (ushort)local_c;
      puVar18[1] = uVar8;
      *puVar11 = ((ushort)((local_10 ^ uVar15) >> 1) & 0x3def) + ((ushort)local_10 & uVar7);
      puVar11[1] = uVar7;
      uVar20 = (ushort)uVar16;
      puVar19 = puVar18 + 4;
      param_9._0_2_ = ((ushort)((uVar16 ^ uVar21) >> 1) & 0x3def) + (uVar20 & uVar8);
      puVar12 = puVar11 + 4;
      puVar18[2] = (ushort)param_9;
      puVar18[3] = uVar20;
      puVar11[2] = ((ushort)((uVar14 ^ uVar15) >> 1) & 0x3def) + ((ushort)uVar14 & uVar7);
      puVar11[3] = (ushort)uVar14;
      param_10 = param_10 - 2;
      local_c = uVar16;
    }
    if (0 < (int)param_10) {
      bVar1 = *param_8;
      bVar2 = *param_7;
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      uVar15 = ((uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]]
                << 5 | (uint)(byte)(&DAT_6378e5e4)
                                   [iVar3 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
      uVar21 = ((uint)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]]
                << 5 | (uint)(byte)(&DAT_6378e5e4)
                                   [iVar4 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
      uVar20 = (ushort)uVar15;
      uVar7 = (ushort)uVar21;
      *puVar19 = ((ushort)((local_c ^ uVar15) >> 1) & 0x3def) + ((ushort)local_c & uVar20);
      puVar19[1] = uVar20;
      puVar19[2] = uVar20;
      *puVar12 = ((ushort)((uVar14 ^ uVar21) >> 1) & 0x3def) + ((ushort)uVar14 & uVar7);
      puVar12[1] = uVar7;
      puVar12[2] = uVar7;
      return;
    }
    *puVar19 = uVar20;
    *puVar12 = (ushort)uVar14;
  }
  return;
}


