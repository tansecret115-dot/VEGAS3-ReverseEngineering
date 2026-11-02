/* Module: rnco3260.dll
   Function: FUN_6372eea0
   Address: 6372eea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6372eea0(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,uint param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar14;
  int local_c;
  int local_8;
  
  local_c = param_4 >> 1;
  iVar7 = param_4 - local_c;
  if ((param_10 + param_9 & 1) != 0) {
    iVar7 = iVar7 + param_4;
  }
  if (param_4 == 0) {
    return;
  }
  local_8 = param_4 - iVar7 / param_10;
  if (0 < local_8) {
    if ((param_9 & 1) == 0) goto LAB_6372efc1;
    bVar1 = *param_8;
    bVar2 = *param_7;
    iVar3 = (&DAT_63791580)[*param_5];
    iVar4 = (&DAT_63791580)[*param_6];
    uVar9 = ((ushort)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]]
             << 5 | (ushort)(byte)(&DAT_6378e5e4)
                                  [iVar3 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
            (ushort)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]];
    uVar11 = ((ushort)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]]
              << 5 | (ushort)(byte)(&DAT_6378e5e4)
                                   [iVar4 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
             (ushort)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]];
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    while( true ) {
      param_8 = param_8 + 1;
      param_7 = param_7 + 1;
      *param_1 = uVar9;
      *param_2 = uVar11;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      local_8 = local_8 + -1;
      if (local_8 == 0) break;
      while (local_c = local_c - param_10, -1 < local_c) {
        *param_1 = uVar9;
        *param_2 = uVar11;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_6372f1c1;
        }
      }
      local_c = local_c + param_4;
LAB_6372efc1:
      bVar1 = *param_8;
      bVar2 = *param_7;
      iVar8 = (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2];
      iVar10 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
      iVar14 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      iVar5 = (&DAT_63791580)[param_5[1]];
      iVar6 = (&DAT_63791580)[param_6[1]];
      uVar13 = ((ushort)(byte)(&DAT_6378e5e6)[iVar3 + iVar10] << 5 |
               (ushort)(byte)(&DAT_6378e5e6)[iVar3 + iVar14]) << 5 |
               (ushort)(byte)(&DAT_6378e5e6)[iVar3 + iVar8];
      uVar12 = ((ushort)(byte)(&DAT_6378e5e2)[iVar4 + iVar10] << 5 |
               (ushort)(byte)(&DAT_6378e5e2)[iVar4 + iVar14]) << 5 |
               (ushort)(byte)(&DAT_6378e5e2)[iVar4 + iVar8];
      uVar9 = ((ushort)(byte)(&DAT_6378e5e2)[iVar5 + iVar10] << 5 |
              (ushort)(byte)(&DAT_6378e5e2)[iVar5 + iVar14]) << 5 |
              (ushort)(byte)(&DAT_6378e5e2)[iVar5 + iVar8];
      uVar11 = ((ushort)(byte)(&DAT_6378e5e6)[iVar6 + iVar10] << 5 |
               (ushort)(byte)(&DAT_6378e5e6)[iVar6 + iVar14]) << 5 |
               (ushort)(byte)(&DAT_6378e5e6)[iVar6 + iVar8];
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      *param_1 = uVar13;
      param_1 = param_1 + 1;
      *param_2 = uVar12;
      param_2 = param_2 + 1;
      local_8 = local_8 + -1;
      if (local_8 == 0) goto LAB_6372f293;
      while (local_c = local_c - param_10, -1 < local_c) {
        *param_1 = uVar13;
        param_1 = param_1 + 1;
        *param_2 = uVar12;
        param_2 = param_2 + 1;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_6372f293;
        }
      }
      local_c = local_c + param_4;
    }
LAB_6372f1c1:
    if ((param_9 + param_10 & 1) == 0) goto LAB_6372f293;
  }
  bVar1 = *param_8;
  bVar2 = *param_7;
  iVar3 = (&DAT_63791580)[*param_5];
  iVar4 = (&DAT_63791580)[*param_6];
  uVar9 = ((ushort)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]] <<
           5 | (ushort)(byte)(&DAT_6378e5e4)
                             [iVar3 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
          (ushort)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]];
  uVar11 = ((ushort)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]]
            << 5 | (ushort)(byte)(&DAT_6378e5e4)
                                 [iVar4 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
           (ushort)(byte)(&DAT_6378e5e4)[iVar4 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]];
LAB_6372f293:
  for (local_8 = local_8 + iVar7 / param_10; local_8 != 0; local_8 = local_8 + -1) {
    *param_1 = uVar9;
    *param_2 = uVar11;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


