/* Module: rnco3260.dll
   Function: FUN_63740240
   Address: 63740240
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63740240(ushort *param_1,short *param_2,ushort *param_3,short *param_4,ushort *param_5,
            undefined4 param_6,uint param_7,byte *param_8,byte *param_9,byte *param_10,
            byte *param_11,byte param_12)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  int iVar17;
  uint local_c;
  uint local_8;
  
  local_8 = param_7;
  if (((param_12 & 1) != 0) && (param_7 != 0)) {
    iVar2 = (&DAT_63791580)[*param_8];
    iVar3 = (&DAT_63791580)[*param_9];
    uVar9 = ((uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63792180)[*param_11]] << 5 |
            (uint)(byte)(&DAT_6378e5e4)
                        [iVar2 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 5 |
            (uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63790960)[*param_10]];
    uVar11 = ((uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63792180)[*param_11]] << 5 |
             (uint)(byte)(&DAT_6378e5e4)
                         [iVar3 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 5 |
             (uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63790960)[*param_10]];
    param_8 = param_8 + 1;
    param_9 = param_9 + 1;
    uVar8 = (ushort)uVar9;
    *param_3 = uVar8;
    param_3 = param_3 + 1;
    param_10 = param_10 + 1;
    param_11 = param_11 + 1;
    uVar10 = (ushort)uVar11;
    *param_5 = uVar10;
    param_5 = param_5 + 1;
    uVar15 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = ((ushort)((uVar15 ^ uVar9) >> 1) & 0x3def) + (uVar15 & uVar8);
    param_2 = param_2 + 1;
    *param_4 = ((ushort)((uVar11 ^ uVar9) >> 1) & 0x3def) + (uVar10 & uVar8);
    param_4 = param_4 + 1;
    local_8 = param_7 - 1;
  }
  if (1 < (int)local_8) {
    local_c = local_8 >> 1;
    do {
      iVar2 = (&DAT_63790960)[*param_10];
      iVar3 = (&DAT_63792180)[*param_11];
      iVar17 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
      iVar4 = (&DAT_63791580)[*param_8];
      iVar5 = (&DAT_63791580)[*param_9];
      iVar6 = (&DAT_63791580)[param_8[1]];
      iVar7 = (&DAT_63791580)[param_9[1]];
      uVar9 = ((uint)(byte)(&DAT_6378e5e6)[iVar4 + iVar3] << 5 |
              (uint)(byte)(&DAT_6378e5e6)[iVar4 + iVar17]) << 5 |
              (uint)(byte)(&DAT_6378e5e6)[iVar4 + iVar2];
      uVar11 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar3] << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar17]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar2];
      uVar16 = ((uint)(byte)(&DAT_6378e5e2)[iVar6 + iVar3] << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar6 + iVar17]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar6 + iVar2];
      uVar13 = ((uint)(byte)(&DAT_6378e5e6)[iVar7 + iVar3] << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar7 + iVar17]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar7 + iVar2];
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      uVar8 = (ushort)uVar9;
      *param_3 = uVar8;
      uVar14 = (ushort)uVar16;
      param_3[1] = uVar14;
      param_3 = param_3 + 2;
      uVar10 = (ushort)uVar11;
      *param_5 = uVar10;
      uVar12 = (ushort)uVar13;
      param_5[1] = uVar12;
      param_5 = param_5 + 2;
      uVar15 = *param_1;
      puVar1 = param_1 + 1;
      local_8 = local_8 - 2;
      param_1 = param_1 + 2;
      param_2[1] = ((ushort)((*puVar1 ^ uVar16) >> 1) & 0x3def) + (*puVar1 & uVar14);
      *param_2 = ((ushort)((uVar15 ^ uVar9) >> 1) & 0x3def) + (uVar15 & uVar8);
      param_2 = param_2 + 2;
      param_4[1] = ((ushort)((uVar13 ^ uVar16) >> 1) & 0x3def) + (uVar12 & uVar14);
      *param_4 = ((ushort)((uVar11 ^ uVar9) >> 1) & 0x3def) + (uVar10 & uVar8);
      param_4 = param_4 + 2;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  if (local_8 != 0) {
    iVar2 = (&DAT_63791580)[*param_8];
    iVar3 = (&DAT_63791580)[*param_9];
    uVar9 = ((uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63792180)[*param_11]] << 5 |
            (uint)(byte)(&DAT_6378e5e4)
                        [iVar2 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 5 |
            (uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63790960)[*param_10]];
    uVar11 = ((uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63792180)[*param_11]] << 5 |
             (uint)(byte)(&DAT_6378e5e4)
                         [iVar3 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 5 |
             (uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63790960)[*param_10]];
    uVar15 = (ushort)uVar9;
    *param_3 = uVar15;
    uVar8 = (ushort)uVar11;
    *param_5 = uVar8;
    *param_2 = ((ushort)((*param_1 ^ uVar9) >> 1) & 0x3def) + (*param_1 & uVar15);
    *param_4 = ((ushort)((uVar11 ^ uVar9) >> 1) & 0x3def) + (uVar8 & uVar15);
  }
  return;
}


