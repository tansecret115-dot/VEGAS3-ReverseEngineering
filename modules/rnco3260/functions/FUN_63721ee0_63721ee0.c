/* Module: rnco3260.dll
   Function: FUN_63721ee0
   Address: 63721ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63721ee0(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,uint param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  int local_10;
  int local_8;
  
  local_10 = param_4 >> 1;
  iVar8 = param_4 - local_10;
  if ((param_10 + param_9 & 1) != 0) {
    iVar8 = iVar8 + param_4;
  }
  if (param_4 == 0) {
    return;
  }
  local_8 = param_4 - iVar8 / param_10;
  if (0 < local_8) {
    if ((param_9 & 1) == 0) goto LAB_63721ffb;
    iVar1 = (&DAT_63791580)[*param_5];
    iVar2 = (&DAT_63791580)[*param_6];
    uVar9 = ((ushort)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63792180)[*param_8]] << 5 |
            (ushort)(byte)(&DAT_6378e5e4)
                          [iVar1 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 5 |
            (ushort)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63790960)[*param_7]];
    uVar10 = ((ushort)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63792180)[*param_8]] << 5 |
             (ushort)(byte)(&DAT_6378e5e4)
                           [iVar2 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 5 |
             (ushort)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63790960)[*param_7]];
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    while( true ) {
      param_8 = param_8 + 1;
      param_7 = param_7 + 1;
      *param_1 = uVar9;
      *param_2 = uVar10;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      local_8 = local_8 + -1;
      if (local_8 == 0) break;
      while (local_10 = local_10 - param_10, -1 < local_10) {
        *param_1 = uVar9;
        *param_2 = uVar10;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_637221da;
        }
      }
      local_10 = local_10 + param_4;
LAB_63721ffb:
      iVar1 = (&DAT_63790960)[*param_7];
      iVar2 = (&DAT_63792180)[*param_8];
      iVar12 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      iVar5 = (&DAT_63791580)[param_5[1]];
      iVar6 = (&DAT_63791580)[param_6[1]];
      uVar11 = ((ushort)(byte)(&DAT_6378e5e6)[iVar3 + iVar2] << 5 |
               (ushort)(byte)(&DAT_6378e5e6)[iVar3 + iVar12]) << 5 |
               (ushort)(byte)(&DAT_6378e5e6)[iVar3 + iVar1];
      uVar7 = ((ushort)(byte)(&DAT_6378e5e2)[iVar4 + iVar2] << 5 |
              (ushort)(byte)(&DAT_6378e5e2)[iVar4 + iVar12]) << 5 |
              (ushort)(byte)(&DAT_6378e5e2)[iVar4 + iVar1];
      uVar9 = ((ushort)(byte)(&DAT_6378e5e2)[iVar5 + iVar2] << 5 |
              (ushort)(byte)(&DAT_6378e5e2)[iVar5 + iVar12]) << 5 |
              (ushort)(byte)(&DAT_6378e5e2)[iVar5 + iVar1];
      uVar10 = ((ushort)(byte)(&DAT_6378e5e6)[iVar6 + iVar2] << 5 |
               (ushort)(byte)(&DAT_6378e5e6)[iVar6 + iVar12]) << 5 |
               (ushort)(byte)(&DAT_6378e5e6)[iVar6 + iVar1];
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      *param_1 = uVar11;
      param_1 = param_1 + 1;
      *param_2 = uVar7;
      param_2 = param_2 + 1;
      local_8 = local_8 + -1;
      if (local_8 == 0) goto LAB_6372229c;
      while (local_10 = local_10 - param_10, -1 < local_10) {
        *param_1 = uVar11;
        param_1 = param_1 + 1;
        *param_2 = uVar7;
        param_2 = param_2 + 1;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_6372229c;
        }
      }
      local_10 = local_10 + param_4;
    }
LAB_637221da:
    if ((param_9 + param_10 & 1) == 0) goto LAB_6372229c;
  }
  iVar1 = (&DAT_63791580)[*param_5];
  iVar2 = (&DAT_63791580)[*param_6];
  uVar9 = ((ushort)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63792180)[*param_8]] << 5 |
          (ushort)(byte)(&DAT_6378e5e4)
                        [iVar1 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 5 |
          (ushort)(byte)(&DAT_6378e5e4)[iVar1 + (&DAT_63790960)[*param_7]];
  uVar10 = ((ushort)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63792180)[*param_8]] << 5 |
           (ushort)(byte)(&DAT_6378e5e4)
                         [iVar2 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 5 |
           (ushort)(byte)(&DAT_6378e5e4)[iVar2 + (&DAT_63790960)[*param_7]];
LAB_6372229c:
  for (local_8 = local_8 + iVar8 / param_10; local_8 != 0; local_8 = local_8 + -1) {
    *param_1 = uVar9;
    *param_2 = uVar10;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


