/* Module: rnco3260.dll
   Function: FUN_6373d7d0
   Address: 6373d7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6373d7d0(ushort *param_1,short *param_2,ushort *param_3,short *param_4,ushort *param_5,
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
  int iVar9;
  uint uVar10;
  short sVar11;
  int iVar12;
  short sVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  ushort uVar17;
  uint uVar18;
  ushort local_10;
  int local_c;
  int local_8;
  
  local_c = param_7 >> 1;
  iVar9 = param_7 - local_c;
  if ((param_13 + param_12 & 1) != 0) {
    iVar9 = iVar9 + param_7;
  }
  if (param_7 == 0) {
    return;
  }
  local_8 = param_7 - iVar9 / param_13;
  puVar14 = param_5;
  if (0 < local_8) {
    if ((param_12 & 1) == 0) goto LAB_6373d8e9;
    iVar1 = (&DAT_63791580)[*param_8];
    iVar2 = (&DAT_63791580)[*param_9];
    uVar18 = ((uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63792180)[*param_11]] << 6 |
             (uint)(byte)(&DAT_6378efe2)
                         [iVar1 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 5 |
             (uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63790960)[*param_10]];
    uVar15 = ((uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63792180)[*param_11]] << 6 |
             (uint)(byte)(&DAT_6378efe2)
                         [iVar2 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 5 |
             (uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63790960)[*param_10]];
    param_8 = param_8 + 1;
    param_9 = param_9 + 1;
    while( true ) {
      param_11 = param_11 + 1;
      param_10 = param_10 + 1;
      puVar14 = param_5 + 1;
      uVar17 = (ushort)uVar18;
      sVar11 = ((ushort)((*param_1 ^ uVar18) >> 1) & 0x7bef) + (*param_1 & uVar17);
      local_10 = (ushort)uVar15;
      sVar13 = ((ushort)((uVar15 ^ uVar18) >> 1) & 0x7bef) + (local_10 & uVar17);
      param_1 = param_1 + 1;
      *param_2 = sVar11;
      param_2 = param_2 + 1;
      *param_3 = uVar17;
      param_3 = param_3 + 1;
      *param_4 = sVar13;
      param_4 = param_4 + 1;
      *param_5 = local_10;
      local_8 = local_8 + -1;
      param_5 = puVar14;
      if (local_8 == 0) break;
      while (local_c = local_c - param_13, -1 < local_c) {
        puVar14 = param_5 + 1;
        param_1 = param_1 + 1;
        *param_2 = sVar11;
        param_2 = param_2 + 1;
        *param_3 = uVar17;
        param_3 = param_3 + 1;
        *param_4 = sVar13;
        param_4 = param_4 + 1;
        *param_5 = local_10;
        local_8 = local_8 + -1;
        param_5 = puVar14;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_6373dbe0;
        }
      }
      local_c = local_c + param_7;
LAB_6373d8e9:
      iVar1 = (&DAT_63790960)[*param_10];
      iVar2 = (&DAT_63792180)[*param_11];
      iVar12 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
      iVar3 = (&DAT_63791580)[*param_9];
      iVar4 = (&DAT_63791580)[param_8[1]];
      iVar5 = (&DAT_63791580)[*param_8];
      iVar6 = (&DAT_63791580)[param_9[1]];
      uVar16 = ((uint)(byte)(&DAT_6378e5e6)[iVar5 + iVar2] << 6 |
               (uint)(byte)(&DAT_6378efe3)[iVar5 + iVar12]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar5 + iVar1];
      uVar10 = ((uint)(byte)(&DAT_6378e5e2)[iVar3 + iVar2] << 6 |
               (uint)(byte)(&DAT_6378efe1)[iVar3 + iVar12]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar3 + iVar1];
      uVar18 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar2] << 6 |
               (uint)(byte)(&DAT_6378efe1)[iVar4 + iVar12]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar1];
      uVar17 = (ushort)uVar18;
      uVar15 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar2] << 6 |
               (uint)(byte)(&DAT_6378efe3)[iVar6 + iVar12]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar1];
      local_10 = (ushort)uVar15;
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      uVar7 = (ushort)uVar16;
      uVar8 = (ushort)uVar10;
      sVar11 = ((ushort)((*param_1 ^ uVar16) >> 1) & 0x7bef) + (*param_1 & uVar7);
      sVar13 = ((ushort)((uVar10 ^ uVar16) >> 1) & 0x7bef) + (uVar8 & uVar7);
      *param_2 = sVar11;
      param_2 = param_2 + 1;
      *param_3 = uVar7;
      param_3 = param_3 + 1;
      *param_4 = sVar13;
      param_4 = param_4 + 1;
      *param_5 = uVar8;
      puVar14 = param_5 + 1;
      local_8 = local_8 + -1;
      param_5 = puVar14;
      if (local_8 == 0) goto LAB_6373dccb;
      while( true ) {
        param_1 = param_1 + 1;
        local_c = local_c - param_13;
        if (local_c < 0) break;
        puVar14 = param_5 + 1;
        *param_2 = sVar11;
        param_2 = param_2 + 1;
        *param_3 = uVar7;
        param_3 = param_3 + 1;
        *param_4 = sVar13;
        param_4 = param_4 + 1;
        *param_5 = uVar8;
        local_8 = local_8 + -1;
        param_5 = puVar14;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_6373dccb;
        }
      }
      local_c = local_c + param_7;
    }
LAB_6373dbe0:
    if ((param_13 + param_12 & 1) == 0) goto LAB_6373dccb;
  }
  iVar1 = (&DAT_63791580)[*param_8];
  iVar2 = (&DAT_63791580)[*param_9];
  uVar18 = ((uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63792180)[*param_11]] << 6 |
           (uint)(byte)(&DAT_6378efe2)
                       [iVar1 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 5 |
           (uint)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63790960)[*param_10]];
  uVar15 = ((uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63792180)[*param_11]] << 6 |
           (uint)(byte)(&DAT_6378efe2)
                       [iVar2 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 5 |
           (uint)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63790960)[*param_10]];
  local_10 = (ushort)uVar15;
  uVar17 = (ushort)uVar18;
  sVar11 = ((ushort)((*param_1 ^ uVar18) >> 1) & 0x7bef) + (*param_1 & uVar17);
  sVar13 = ((ushort)((uVar15 ^ uVar18) >> 1) & 0x7bef) + (local_10 & uVar17);
LAB_6373dccb:
  for (local_8 = local_8 + iVar9 / param_13; local_8 != 0; local_8 = local_8 + -1) {
    *param_2 = sVar11;
    param_2 = param_2 + 1;
    *param_3 = uVar17;
    param_3 = param_3 + 1;
    *param_4 = sVar13;
    param_4 = param_4 + 1;
    *puVar14 = local_10;
    puVar14 = puVar14 + 1;
  }
  return;
}


