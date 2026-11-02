/* Module: rnco3260.dll
   Function: FUN_6372c890
   Address: 6372c890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6372c890(ushort *param_1,ushort *param_2,undefined4 param_3,uint param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,byte param_9)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint local_10;
  uint local_8;
  
  local_8 = param_4;
  if (((param_9 & 1) != 0) && (param_4 != 0)) {
    bVar1 = *param_8;
    bVar2 = *param_7;
    iVar7 = (&DAT_63791580)[*param_5];
    iVar8 = (&DAT_63791580)[*param_6];
    bVar3 = (&DAT_6378e5e4)[iVar8 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]];
    bVar4 = (&DAT_6378efe2)[iVar8 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]];
    bVar5 = (&DAT_6378e5e4)[iVar8 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    *param_1 = ((ushort)(byte)(&DAT_6378e5e4)
                              [iVar7 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]] << 6 |
               (ushort)(byte)(&DAT_6378efe2)
                             [iVar7 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
               (ushort)(byte)(&DAT_6378e5e4)
                             [iVar7 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
    param_1 = param_1 + 1;
    *param_2 = ((ushort)bVar3 << 6 | (ushort)bVar4) << 5 | (ushort)bVar5;
    param_2 = param_2 + 1;
    local_8 = param_4 - 1;
  }
  if (1 < (int)local_8) {
    local_10 = local_8 >> 1;
    do {
      bVar1 = *param_8;
      bVar2 = *param_7;
      iVar11 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
      iVar12 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
      iVar13 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
      iVar7 = (&DAT_63791580)[*param_5];
      iVar8 = (&DAT_63791580)[*param_6];
      iVar9 = (&DAT_63791580)[param_5[1]];
      iVar10 = (&DAT_63791580)[param_6[1]];
      bVar1 = (&DAT_6378e5e6)[iVar7 + iVar13];
      bVar2 = (&DAT_6378efe3)[iVar7 + iVar12];
      bVar3 = (&DAT_6378e5e6)[iVar7 + iVar11];
      _param_9 = ((ushort)(byte)(&DAT_6378e5e2)[iVar8 + iVar13] << 6 |
                 (ushort)(byte)(&DAT_6378efe1)[iVar8 + iVar12]) << 5 |
                 (ushort)(byte)(&DAT_6378e5e2)[iVar8 + iVar11];
      param_4._0_2_ =
           ((ushort)(byte)(&DAT_6378e5e2)[iVar9 + iVar13] << 6 |
           (ushort)(byte)(&DAT_6378efe1)[iVar9 + iVar12]) << 5 |
           (ushort)(byte)(&DAT_6378e5e2)[iVar9 + iVar11];
      bVar4 = (&DAT_6378e5e6)[iVar10 + iVar13];
      bVar5 = (&DAT_6378efe3)[iVar10 + iVar12];
      bVar6 = (&DAT_6378e5e6)[iVar10 + iVar11];
      param_6 = param_6 + 2;
      param_5 = param_5 + 2;
      param_7 = param_7 + 1;
      param_8 = param_8 + 1;
      param_1[1] = (ushort)param_4;
      *param_1 = ((ushort)bVar1 << 6 | (ushort)bVar2) << 5 | (ushort)bVar3;
      param_2[1] = ((ushort)bVar4 << 6 | (ushort)bVar5) << 5 | (ushort)bVar6;
      local_8 = local_8 - 2;
      *param_2 = _param_9;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  if (local_8 != 0) {
    bVar1 = *param_8;
    bVar2 = *param_7;
    iVar7 = (&DAT_63791580)[*param_5];
    iVar8 = (&DAT_63791580)[*param_6];
    bVar3 = (&DAT_6378e5e4)[iVar8 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]];
    bVar4 = (&DAT_6378efe2)[iVar8 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]];
    bVar5 = (&DAT_6378e5e4)[iVar8 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
    *param_1 = ((ushort)(byte)(&DAT_6378e5e4)
                              [iVar7 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]] << 6 |
               (ushort)(byte)(&DAT_6378efe2)
                             [iVar7 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
               (ushort)(byte)(&DAT_6378e5e4)
                             [iVar7 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
    *param_2 = ((ushort)bVar3 << 6 | (ushort)bVar4) << 5 | (ushort)bVar5;
  }
  return;
}


