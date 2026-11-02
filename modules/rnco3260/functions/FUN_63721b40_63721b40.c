/* Module: rnco3260.dll
   Function: FUN_63721b40
   Address: 63721b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63721b40(ushort *param_1,ushort *param_2,undefined4 param_3,uint param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,byte param_9)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint local_c;
  uint local_8;
  
  local_8 = param_4;
  if (((param_9 & 1) != 0) && (param_4 != 0)) {
    bVar1 = *param_7;
    bVar2 = *param_8;
    iVar10 = (&DAT_63791580)[*param_6];
    iVar11 = (&DAT_63791580)[*param_5];
    bVar3 = (&DAT_6378e5e4)[iVar10 + (&DAT_63792180)[bVar2]];
    bVar4 = (&DAT_6378e5e4)[iVar10 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]];
    bVar5 = (&DAT_6378e5e4)[iVar10 + (&DAT_63790960)[bVar1]];
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    *param_1 = ((ushort)(byte)(&DAT_6378e5e4)[iVar11 + (&DAT_63792180)[bVar2]] << 5 |
               (ushort)(byte)(&DAT_6378e5e4)
                             [iVar11 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]) << 5 |
               (ushort)(byte)(&DAT_6378e5e4)[iVar11 + (&DAT_63790960)[bVar1]];
    *param_2 = ((ushort)bVar3 << 5 | (ushort)bVar4) << 5 | (ushort)bVar5;
    param_1 = param_1 + 1;
    local_8 = param_4 - 1;
    param_2 = param_2 + 1;
  }
  if (1 < (int)local_8) {
    local_c = local_8 >> 1;
    do {
      iVar10 = (&DAT_63790960)[*param_7];
      iVar11 = (&DAT_63792180)[*param_8];
      iVar16 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
      iVar12 = (&DAT_63791580)[*param_5];
      iVar13 = (&DAT_63791580)[*param_6];
      iVar14 = (&DAT_63791580)[param_5[1]];
      iVar15 = (&DAT_63791580)[param_6[1]];
      bVar1 = (&DAT_6378e5e2)[iVar13 + iVar11];
      bVar2 = (&DAT_6378e5e2)[iVar13 + iVar16];
      bVar3 = (&DAT_6378e5e2)[iVar13 + iVar10];
      bVar4 = (&DAT_6378e5e2)[iVar14 + iVar11];
      bVar5 = (&DAT_6378e5e2)[iVar14 + iVar16];
      bVar6 = (&DAT_6378e5e2)[iVar14 + iVar10];
      bVar7 = (&DAT_6378e5e6)[iVar15 + iVar11];
      bVar8 = (&DAT_6378e5e6)[iVar15 + iVar16];
      bVar9 = (&DAT_6378e5e6)[iVar15 + iVar10];
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      param_7 = param_7 + 1;
      param_8 = param_8 + 1;
      *param_1 = ((ushort)(byte)(&DAT_6378e5e6)[iVar12 + iVar11] << 5 |
                 (ushort)(byte)(&DAT_6378e5e6)[iVar12 + iVar16]) << 5 |
                 (ushort)(byte)(&DAT_6378e5e6)[iVar12 + iVar10];
      param_1[1] = ((ushort)bVar4 << 5 | (ushort)bVar5) << 5 | (ushort)bVar6;
      param_1 = param_1 + 2;
      param_2[1] = ((ushort)bVar7 << 5 | (ushort)bVar8) << 5 | (ushort)bVar9;
      *param_2 = ((ushort)bVar1 << 5 | (ushort)bVar2) << 5 | (ushort)bVar3;
      param_2 = param_2 + 2;
      local_8 = local_8 - 2;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  if (local_8 != 0) {
    iVar10 = (&DAT_63791580)[*param_5];
    iVar11 = (&DAT_63791580)[*param_6];
    bVar1 = (&DAT_6378e5e4)[iVar11 + (&DAT_63792180)[*param_8]];
    bVar2 = (&DAT_6378e5e4)[iVar11 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]];
    bVar3 = (&DAT_6378e5e4)[iVar11 + (&DAT_63790960)[*param_7]];
    *param_1 = ((ushort)(byte)(&DAT_6378e5e4)[iVar10 + (&DAT_63792180)[*param_8]] << 5 |
               (ushort)(byte)(&DAT_6378e5e4)
                             [iVar10 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 5
               | (ushort)(byte)(&DAT_6378e5e4)[iVar10 + (&DAT_63790960)[*param_7]];
    *param_2 = ((ushort)bVar1 << 5 | (ushort)bVar2) << 5 | (ushort)bVar3;
  }
  return;
}


