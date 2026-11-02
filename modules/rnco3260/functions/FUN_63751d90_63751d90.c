/* Module: rnco3260.dll
   Function: FUN_63751d90
   Address: 63751d90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63751d90(ushort *param_1,short *param_2,ushort *param_3,short *param_4,ushort *param_5,
            undefined4 param_6,uint param_7,byte *param_8,byte *param_9,byte *param_10,
            byte *param_11,byte param_12)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  ushort uVar14;
  uint uVar15;
  ushort uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint local_c;
  uint local_8;
  
  local_8 = param_7;
  if (((param_12 & 1) != 0) && (param_7 != 0)) {
    bVar2 = *param_11;
    bVar3 = *param_10;
    iVar4 = (&DAT_63791580)[*param_8];
    iVar5 = (&DAT_63791580)[*param_9];
    uVar10 = ((uint)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63791980)[bVar3] + (&DAT_63792180)[bVar2]]
              << 6 | (uint)(byte)(&DAT_6378efe2)
                                 [iVar4 + (&DAT_63791d80)[bVar3] + (&DAT_637929a0)[bVar2]]) << 5 |
             (uint)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63790960)[bVar3] + (&DAT_63790d60)[bVar2]];
    uVar12 = ((uint)(byte)(&DAT_6378e5e4)[iVar5 + (&DAT_63791980)[bVar3] + (&DAT_63792180)[bVar2]]
              << 6 | (uint)(byte)(&DAT_6378efe2)
                                 [iVar5 + (&DAT_63791d80)[bVar3] + (&DAT_637929a0)[bVar2]]) << 5 |
             (uint)(byte)(&DAT_6378e5e4)[iVar5 + (&DAT_63790960)[bVar3] + (&DAT_63790d60)[bVar2]];
    param_8 = param_8 + 1;
    param_9 = param_9 + 1;
    uVar8 = (ushort)uVar10;
    *param_3 = uVar8;
    param_3 = param_3 + 1;
    param_10 = param_10 + 1;
    param_11 = param_11 + 1;
    uVar9 = (ushort)uVar12;
    *param_5 = uVar9;
    param_5 = param_5 + 1;
    *param_2 = ((ushort)((*param_1 ^ uVar10) >> 1) & 0x7bef) + (*param_1 & uVar8);
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    *param_4 = ((ushort)((uVar12 ^ uVar10) >> 1) & 0x7bef) + (uVar9 & uVar8);
    param_4 = param_4 + 1;
    local_8 = param_7 - 1;
  }
  if (1 < (int)local_8) {
    local_c = local_8 >> 1;
    do {
      bVar2 = *param_11;
      bVar3 = *param_10;
      iVar17 = (&DAT_63790960)[bVar3] + (&DAT_63790d60)[bVar2];
      iVar13 = (&DAT_63791980)[bVar3] + (&DAT_63792180)[bVar2];
      iVar19 = (&DAT_63791d80)[bVar3] + (&DAT_637929a0)[bVar2];
      iVar4 = (&DAT_63791580)[*param_8];
      iVar5 = (&DAT_63791580)[*param_9];
      iVar6 = (&DAT_63791580)[param_8[1]];
      iVar7 = (&DAT_63791580)[param_9[1]];
      uVar10 = ((uint)(byte)(&DAT_6378e5e6)[iVar4 + iVar13] << 6 |
               (uint)(byte)(&DAT_6378efe3)[iVar4 + iVar19]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar4 + iVar17];
      uVar12 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar13] << 6 |
               (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar19]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar17];
      uVar18 = ((uint)(byte)(&DAT_6378e5e2)[iVar6 + iVar13] << 6 |
               (uint)(byte)(&DAT_6378efe1)[iVar6 + iVar19]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar6 + iVar17];
      uVar15 = ((uint)(byte)(&DAT_6378e5e6)[iVar7 + iVar13] << 6 |
               (uint)(byte)(&DAT_6378efe3)[iVar7 + iVar19]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar7 + iVar17];
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      uVar9 = (ushort)uVar10;
      *param_3 = uVar9;
      uVar16 = (ushort)uVar18;
      param_3[1] = uVar16;
      param_3 = param_3 + 2;
      uVar11 = (ushort)uVar12;
      *param_5 = uVar11;
      uVar14 = (ushort)uVar15;
      param_5[1] = uVar14;
      param_5 = param_5 + 2;
      uVar8 = *param_1;
      puVar1 = param_1 + 1;
      param_1 = param_1 + 2;
      param_2[1] = ((ushort)((*puVar1 ^ uVar18) >> 1) & 0x7bef) + (*puVar1 & uVar16);
      *param_2 = ((ushort)((uVar8 ^ uVar10) >> 1) & 0x7bef) + (uVar8 & uVar9);
      param_2 = param_2 + 2;
      *param_4 = ((ushort)((uVar12 ^ uVar10) >> 1) & 0x7bef) + (uVar11 & uVar9);
      param_4[1] = ((ushort)((uVar15 ^ uVar18) >> 1) & 0x7bef) + (uVar14 & uVar16);
      param_4 = param_4 + 2;
      local_8 = local_8 - 2;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  if (local_8 != 0) {
    bVar2 = *param_11;
    bVar3 = *param_10;
    iVar4 = (&DAT_63791580)[*param_8];
    iVar5 = (&DAT_63791580)[*param_9];
    uVar10 = ((uint)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63791980)[bVar3] + (&DAT_63792180)[bVar2]]
              << 6 | (uint)(byte)(&DAT_6378efe2)
                                 [iVar4 + (&DAT_63791d80)[bVar3] + (&DAT_637929a0)[bVar2]]) << 5 |
             (uint)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63790960)[bVar3] + (&DAT_63790d60)[bVar2]];
    uVar12 = ((uint)(byte)(&DAT_6378e5e4)[iVar5 + (&DAT_63791980)[bVar3] + (&DAT_63792180)[bVar2]]
              << 6 | (uint)(byte)(&DAT_6378efe2)
                                 [iVar5 + (&DAT_63791d80)[bVar3] + (&DAT_637929a0)[bVar2]]) << 5 |
             (uint)(byte)(&DAT_6378e5e4)[iVar5 + (&DAT_63790960)[bVar3] + (&DAT_63790d60)[bVar2]];
    uVar8 = (ushort)uVar10;
    *param_3 = uVar8;
    uVar9 = (ushort)uVar12;
    *param_5 = uVar9;
    *param_2 = ((ushort)((*param_1 ^ uVar10) >> 1) & 0x7bef) + (*param_1 & uVar8);
    *param_4 = ((ushort)((uVar12 ^ uVar10) >> 1) & 0x7bef) + (uVar9 & uVar8);
  }
  return;
}


