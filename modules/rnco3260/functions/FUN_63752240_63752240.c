/* Module: rnco3260.dll
   Function: FUN_63752240
   Address: 63752240
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63752240(ushort *param_1,short *param_2,ushort *param_3,short *param_4,ushort *param_5,
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
  int iVar9;
  int iVar10;
  uint uVar11;
  short sVar12;
  int iVar13;
  short sVar14;
  ushort *puVar15;
  uint uVar16;
  uint uVar17;
  ushort uVar18;
  uint uVar19;
  int iVar20;
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
  puVar15 = param_5;
  if (0 < local_8) {
    if ((param_12 & 1) == 0) goto LAB_63752360;
    bVar1 = *param_10;
    bVar2 = *param_11;
    iVar3 = (&DAT_63791580)[*param_8];
    iVar4 = (&DAT_63791580)[*param_9];
    uVar19 = ((uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]]
              << 6 | (uint)(byte)(&DAT_6378efe2)
                                 [iVar3 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]) << 5 |
             (uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]];
    uVar16 = ((uint)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]]
              << 6 | (uint)(byte)(&DAT_6378efe2)
                                 [iVar4 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]) << 5 |
             (uint)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]];
    param_8 = param_8 + 1;
    param_9 = param_9 + 1;
    while( true ) {
      param_11 = param_11 + 1;
      param_10 = param_10 + 1;
      puVar15 = param_5 + 1;
      uVar18 = (ushort)uVar19;
      sVar12 = ((ushort)((*param_1 ^ uVar19) >> 1) & 0x7bef) + (*param_1 & uVar18);
      local_10 = (ushort)uVar16;
      sVar14 = ((ushort)((uVar16 ^ uVar19) >> 1) & 0x7bef) + (local_10 & uVar18);
      param_1 = param_1 + 1;
      *param_2 = sVar12;
      param_2 = param_2 + 1;
      *param_3 = uVar18;
      param_3 = param_3 + 1;
      *param_4 = sVar14;
      param_4 = param_4 + 1;
      *param_5 = local_10;
      local_8 = local_8 + -1;
      param_5 = puVar15;
      if (local_8 == 0) break;
      while (local_c = local_c - param_13, -1 < local_c) {
        puVar15 = param_5 + 1;
        param_1 = param_1 + 1;
        *param_2 = sVar12;
        param_2 = param_2 + 1;
        *param_3 = uVar18;
        param_3 = param_3 + 1;
        *param_4 = sVar14;
        param_4 = param_4 + 1;
        *param_5 = local_10;
        local_8 = local_8 + -1;
        param_5 = puVar15;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_6375266c;
        }
      }
      local_c = local_c + param_7;
LAB_63752360:
      bVar1 = *param_10;
      bVar2 = *param_11;
      iVar20 = (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2];
      iVar10 = (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2];
      iVar13 = (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2];
      iVar3 = (&DAT_63791580)[*param_8];
      iVar4 = (&DAT_63791580)[*param_9];
      iVar5 = (&DAT_63791580)[param_8[1]];
      iVar6 = (&DAT_63791580)[param_9[1]];
      uVar17 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar10] << 6 |
               (uint)(byte)(&DAT_6378efe3)[iVar3 + iVar13]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar20];
      uVar11 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar10] << 6 |
               (uint)(byte)(&DAT_6378efe1)[iVar4 + iVar13]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar20];
      uVar19 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar10] << 6 |
               (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar13]) << 5 |
               (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar20];
      uVar18 = (ushort)uVar19;
      uVar16 = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar10] << 6 |
               (uint)(byte)(&DAT_6378efe3)[iVar6 + iVar13]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar20];
      local_10 = (ushort)uVar16;
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      uVar7 = (ushort)uVar17;
      uVar8 = (ushort)uVar11;
      sVar12 = ((ushort)((*param_1 ^ uVar17) >> 1) & 0x7bef) + (*param_1 & uVar7);
      sVar14 = ((ushort)((uVar11 ^ uVar17) >> 1) & 0x7bef) + (uVar8 & uVar7);
      *param_2 = sVar12;
      param_2 = param_2 + 1;
      *param_3 = uVar7;
      param_3 = param_3 + 1;
      *param_4 = sVar14;
      param_4 = param_4 + 1;
      *param_5 = uVar8;
      puVar15 = param_5 + 1;
      local_8 = local_8 + -1;
      param_5 = puVar15;
      if (local_8 == 0) goto LAB_63752767;
      while( true ) {
        param_1 = param_1 + 1;
        local_c = local_c - param_13;
        if (local_c < 0) break;
        puVar15 = param_5 + 1;
        *param_2 = sVar12;
        param_2 = param_2 + 1;
        *param_3 = uVar7;
        param_3 = param_3 + 1;
        *param_4 = sVar14;
        param_4 = param_4 + 1;
        *param_5 = uVar8;
        local_8 = local_8 + -1;
        param_5 = puVar15;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_63752767;
        }
      }
      local_c = local_c + param_7;
    }
LAB_6375266c:
    if ((param_13 + param_12 & 1) == 0) goto LAB_63752767;
  }
  bVar1 = *param_10;
  bVar2 = *param_11;
  iVar3 = (&DAT_63791580)[*param_8];
  iVar4 = (&DAT_63791580)[*param_9];
  uVar19 = ((uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]] <<
            6 | (uint)(byte)(&DAT_6378efe2)[iVar3 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]
           ) << 5 | (uint)(byte)(&DAT_6378e5e4)
                                [iVar3 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]];
  uVar18 = (ushort)uVar19;
  uVar16 = ((uint)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]] <<
            6 | (uint)(byte)(&DAT_6378efe2)[iVar4 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]
           ) << 5 | (uint)(byte)(&DAT_6378e5e4)
                                [iVar4 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]];
  sVar12 = ((ushort)((*param_1 ^ uVar19) >> 1) & 0x7bef) + (*param_1 & uVar18);
  local_10 = (ushort)uVar16;
  sVar14 = ((ushort)((uVar16 ^ uVar19) >> 1) & 0x7bef) + (local_10 & uVar18);
LAB_63752767:
  for (local_8 = local_8 + iVar9 / param_13; local_8 != 0; local_8 = local_8 + -1) {
    *param_2 = sVar12;
    param_2 = param_2 + 1;
    *param_3 = uVar18;
    param_3 = param_3 + 1;
    *param_4 = sVar14;
    param_4 = param_4 + 1;
    *puVar15 = local_10;
    puVar15 = puVar15 + 1;
  }
  return;
}


