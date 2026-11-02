/* Module: rnco3260.dll
   Function: FUN_637222e0
   Address: 637222e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637222e0(ushort *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,uint param_9,uint param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  ushort *puVar15;
  ushort uVar16;
  uint uVar17;
  uint local_18;
  uint local_14;
  ushort local_c;
  ushort local_8;
  
  if (param_10 != 0) {
    if (((param_9 & 1) == 0) && (1 < (int)param_10)) {
      iVar1 = (&DAT_63790960)[*param_7];
      iVar2 = (&DAT_63792180)[*param_8];
      iVar14 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      iVar5 = (&DAT_63791580)[param_5[1]];
      iVar6 = (&DAT_63791580)[param_6[1]];
      uVar17 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar2] << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar14]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar1];
      uVar10 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar2] << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar14]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar1];
      param_9 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar2] << 5 |
                (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar14]) << 5 |
                (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar1];
      param_5 = param_5 + 2;
      local_14 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar2] << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar14]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar1];
      param_6 = param_6 + 2;
      local_c = (ushort)uVar10;
      uVar16 = (ushort)uVar17;
      *param_1 = uVar16;
      *param_2 = local_c;
      puVar15 = param_1 + 3;
      puVar12 = param_2 + 3;
      local_8 = ((ushort)((param_9 ^ uVar17) >> 1) & 0x3def) + ((ushort)param_9 & uVar16);
      param_1[1] = local_8;
      param_1[2] = (ushort)param_9;
      param_2[1] = ((ushort)((local_14 ^ uVar10) >> 1) & 0x3def) + ((ushort)local_14 & local_c);
      param_2[2] = (ushort)local_14;
      param_10 = param_10 - 2;
    }
    else {
      iVar1 = (&DAT_63791580)[*param_5];
      iVar2 = (&DAT_63791580)[*param_6];
      param_9 = ((uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63792180)[*param_8]] << 5 |
                (uint)(byte)(&DAT_6378e5e4)
                            [iVar1 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 5 |
                (uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63790960)[*param_7]];
      local_14 = ((uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63792180)[*param_8]] << 5 |
                 (uint)(byte)(&DAT_6378e5e4)
                             [iVar2 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 5 |
                 (uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63790960)[*param_7]];
      param_5 = param_5 + 1;
      param_6 = param_6 + 1;
      *param_1 = (ushort)param_9;
      *param_2 = (ushort)local_14;
      puVar15 = param_1 + 1;
      puVar12 = param_2 + 1;
      param_10 = param_10 - 1;
    }
    uVar16 = (ushort)param_9;
    param_8 = param_8 + 1;
    param_7 = param_7 + 1;
    if (3 < (int)param_10) {
      local_18 = param_10 >> 2;
      param_1 = puVar15;
      param_2 = puVar12;
      do {
        iVar1 = (&DAT_63790960)[*param_7];
        iVar2 = (&DAT_63792180)[*param_8];
        iVar14 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
        iVar3 = (&DAT_63791580)[*param_5];
        iVar4 = (&DAT_63791580)[*param_6];
        iVar5 = (&DAT_63791580)[param_5[1]];
        iVar6 = (&DAT_63791580)[param_6[1]];
        uVar10 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar2] << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar14]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar1];
        uVar17 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar2] << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar14]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar1];
        uVar11 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar2] << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar14]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar1];
        uVar13 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar2] << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar14]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar1];
        uVar16 = (ushort)uVar10;
        *param_1 = ((ushort)((param_9 ^ uVar10) >> 1) & 0x3def) + ((ushort)param_9 & uVar16);
        uVar7 = (ushort)uVar17;
        param_1[1] = uVar16;
        *param_2 = ((ushort)((local_14 ^ uVar17) >> 1) & 0x3def) + ((ushort)local_14 & uVar7);
        param_2[1] = uVar7;
        uVar8 = (ushort)uVar11;
        param_1[2] = ((ushort)((uVar11 ^ uVar10) >> 1) & 0x3def) + (uVar8 & uVar16);
        param_1[3] = uVar8;
        uVar16 = (ushort)uVar13;
        param_2[3] = uVar16;
        param_2[2] = ((ushort)((uVar13 ^ uVar17) >> 1) & 0x3def) + (uVar16 & uVar7);
        iVar1 = (&DAT_63790960)[param_7[1]];
        iVar2 = (&DAT_63792180)[param_8[1]];
        iVar14 = (&DAT_63791d80)[param_7[1]] + (&DAT_637929a0)[param_8[1]];
        iVar3 = (&DAT_63791580)[param_5[2]];
        iVar4 = (&DAT_63791580)[param_6[2]];
        iVar5 = (&DAT_63791580)[param_5[3]];
        iVar6 = (&DAT_63791580)[param_6[3]];
        uVar10 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar2] << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar14]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar1];
        uVar17 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar2] << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar14]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar1];
        param_9 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar2] << 5 |
                  (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar14]) << 5 |
                  (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar1];
        local_14 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar2] << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar14]) << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar1];
        param_5 = param_5 + 4;
        param_6 = param_6 + 4;
        param_7 = param_7 + 2;
        param_8 = param_8 + 2;
        uVar7 = (ushort)uVar10;
        uVar9 = (ushort)uVar17;
        param_1[4] = ((ushort)((uVar11 ^ uVar10) >> 1) & 0x3def) + (uVar8 & uVar7);
        param_1[5] = uVar7;
        param_2[4] = ((ushort)((uVar13 ^ uVar17) >> 1) & 0x3def) + (uVar16 & uVar9);
        param_2[5] = uVar9;
        uVar16 = (ushort)param_9;
        param_1[6] = ((ushort)((param_9 ^ uVar10) >> 1) & 0x3def) + (uVar16 & uVar7);
        param_1[7] = uVar16;
        param_2[7] = (ushort)local_14;
        param_2[6] = ((ushort)((local_14 ^ uVar17) >> 1) & 0x3def) + ((ushort)local_14 & uVar9);
        puVar15 = param_1 + 8;
        puVar12 = param_2 + 8;
        param_10 = param_10 - 4;
        local_18 = local_18 - 1;
        param_1 = puVar15;
        param_2 = puVar12;
      } while (local_18 != 0);
    }
    uVar10 = local_14;
    if (1 < (int)param_10) {
      iVar1 = (&DAT_63790960)[*param_7];
      iVar14 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
      iVar2 = (&DAT_63792180)[*param_8];
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      iVar5 = (&DAT_63791580)[param_5[1]];
      iVar6 = (&DAT_63791580)[param_6[1]];
      uVar17 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar2] << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar14]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar1];
      uVar11 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar2] << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar14]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar1];
      uVar13 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar2] << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar14]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar1];
      uVar10 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar2] << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar14]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar1];
      param_6 = param_6 + 2;
      param_5 = param_5 + 2;
      param_7 = param_7 + 1;
      param_8 = param_8 + 1;
      uVar8 = (ushort)uVar17;
      param_9._0_2_ = ((ushort)((param_9 ^ uVar17) >> 1) & 0x3def) + ((ushort)param_9 & uVar8);
      uVar7 = (ushort)uVar11;
      *puVar15 = (ushort)param_9;
      puVar15[1] = uVar8;
      *puVar12 = ((ushort)((local_14 ^ uVar11) >> 1) & 0x3def) + ((ushort)local_14 & uVar7);
      puVar12[1] = uVar7;
      uVar16 = (ushort)uVar13;
      local_8 = ((ushort)((uVar13 ^ uVar17) >> 1) & 0x3def) + (uVar16 & uVar8);
      puVar15[3] = uVar16;
      puVar15[2] = local_8;
      puVar12[2] = ((ushort)((uVar10 ^ uVar11) >> 1) & 0x3def) + ((ushort)uVar10 & uVar7);
      puVar12[3] = (ushort)uVar10;
      puVar15 = puVar15 + 4;
      puVar12 = puVar12 + 4;
      param_10 = param_10 - 2;
      param_9 = uVar13;
    }
    if (0 < (int)param_10) {
      iVar1 = (&DAT_63791580)[*param_5];
      iVar2 = (&DAT_63791580)[*param_6];
      uVar11 = ((uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63792180)[*param_8]] << 5 |
               (uint)(byte)(&DAT_6378e5e4)
                           [iVar1 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63790960)[*param_7]];
      uVar17 = ((uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63792180)[*param_8]] << 5 |
               (uint)(byte)(&DAT_6378e5e4)
                           [iVar2 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63790960)[*param_7]];
      uVar16 = (ushort)uVar11;
      uVar7 = (ushort)uVar17;
      *puVar15 = ((ushort)((param_9 ^ uVar11) >> 1) & 0x3def) + ((ushort)param_9 & uVar16);
      puVar15[1] = uVar16;
      puVar15[2] = uVar16;
      *puVar12 = ((ushort)((uVar10 ^ uVar17) >> 1) & 0x3def) + ((ushort)uVar10 & uVar7);
      puVar12[1] = uVar7;
      puVar12[2] = uVar7;
      return;
    }
    *puVar15 = uVar16;
    *puVar12 = (ushort)uVar10;
  }
  return;
}


