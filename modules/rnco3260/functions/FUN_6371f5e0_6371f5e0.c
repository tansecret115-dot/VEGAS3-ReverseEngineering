/* Module: rnco3260.dll
   Function: FUN_6371f5e0
   Address: 6371f5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6371f5e0(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,byte param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  ushort local_18;
  ushort local_14;
  ushort local_10;
  int local_c;
  int local_8;
  
  local_c = param_10 >> 1;
  local_8 = param_4;
  if (param_4 != 0) {
    pbVar11 = param_5;
    if ((param_9 & 1) != 0) goto LAB_6371f93f;
    do {
      local_c = local_c - param_4;
      if (local_c < 0) {
        local_c = local_c + param_10;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 1;
          goto LAB_6371f93f;
        }
        iVar8 = (&DAT_63790960)[*param_7];
        iVar10 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
        iVar9 = (&DAT_63792180)[*param_8];
        iVar4 = (&DAT_63791580)[*pbVar11];
        iVar5 = (&DAT_63791580)[*param_6];
        iVar6 = (&DAT_63791580)[pbVar11[1]];
        iVar7 = (&DAT_63791580)[param_6[1]];
        local_10 = ((ushort)(byte)(&DAT_6378e5e4)[iVar4 + iVar9] << 6 |
                   (ushort)(byte)(&DAT_6378efe2)[iVar4 + iVar10]) << 5 |
                   (ushort)(byte)(&DAT_6378e5e4)[iVar4 + iVar8];
        local_14 = ((ushort)(byte)(&DAT_6378e5e4)[iVar5 + iVar9] << 6 |
                   (ushort)(byte)(&DAT_6378efe2)[iVar5 + iVar10]) << 5 |
                   (ushort)(byte)(&DAT_6378e5e4)[iVar5 + iVar8];
        local_18 = ((ushort)(byte)(&DAT_6378e5e4)[iVar6 + iVar9] << 6 |
                   (ushort)(byte)(&DAT_6378efe2)[iVar6 + iVar10]) << 5 |
                   (ushort)(byte)(&DAT_6378e5e4)[iVar6 + iVar8];
        param_5._0_2_ =
             ((ushort)(byte)(&DAT_6378e5e4)[iVar7 + iVar9] << 6 |
             (ushort)(byte)(&DAT_6378efe2)[iVar7 + iVar10]) << 5 |
             (ushort)(byte)(&DAT_6378e5e4)[iVar7 + iVar8];
        *param_1 = local_10;
        param_1[1] = local_18;
        param_1 = param_1 + 2;
        *param_2 = local_14;
        param_2[1] = (ushort)param_5;
        param_2 = param_2 + 2;
      }
      else {
        iVar8 = (&DAT_63791580)[*pbVar11];
        iVar9 = (&DAT_63791580)[*param_6];
        local_10 = ((ushort)(byte)(&DAT_6378e5e4)[iVar8 + (&DAT_63792180)[*param_8]] << 6 |
                   (ushort)(byte)(&DAT_6378efe2)
                                 [iVar8 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) <<
                   5 | (ushort)(byte)(&DAT_6378e5e4)[iVar8 + (&DAT_63790960)[*param_7]];
        local_14 = ((ushort)(byte)(&DAT_6378e5e4)[iVar9 + (&DAT_63792180)[*param_8]] << 6 |
                   (ushort)(byte)(&DAT_6378efe2)
                                 [iVar9 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) <<
                   5 | (ushort)(byte)(&DAT_6378e5e4)[iVar9 + (&DAT_63790960)[*param_7]];
        *param_1 = local_10;
        param_1 = param_1 + 1;
        *param_2 = local_14;
        param_2 = param_2 + 1;
      }
      local_c = local_c - param_4;
      while( true ) {
        param_8 = param_8 + 1;
        pbVar11 = pbVar11 + 2;
        param_7 = param_7 + 1;
        param_6 = param_6 + 2;
        if (local_c < 0) break;
        local_c = local_c - param_4;
        if (local_c < 0) {
          do {
            pbVar11 = pbVar11 + 1;
            param_6 = param_6 + 1;
            local_c = local_c + param_10;
            local_8 = local_8 + -1;
            if (local_8 == 0) {
              return;
            }
LAB_6371f93f:
            iVar8 = (&DAT_63791580)[*pbVar11];
            iVar9 = (&DAT_63791580)[*param_6];
            bVar1 = (&DAT_6378e5e4)[iVar9 + (&DAT_63792180)[*param_8]];
            bVar2 = (&DAT_6378efe2)[iVar9 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]];
            bVar3 = (&DAT_6378e5e4)[iVar9 + (&DAT_63790960)[*param_7]];
            *param_1 = ((ushort)(byte)(&DAT_6378e5e4)[iVar8 + (&DAT_63792180)[*param_8]] << 6 |
                       (ushort)(byte)(&DAT_6378efe2)
                                     [iVar8 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]
                       ) << 5 | (ushort)(byte)(&DAT_6378e5e4)[iVar8 + (&DAT_63790960)[*param_7]];
            *param_2 = ((ushort)bVar1 << 6 | (ushort)bVar2) << 5 | (ushort)bVar3;
            param_2 = param_2 + 1;
            param_1 = param_1 + 1;
            pbVar11 = pbVar11 + 1;
            param_6 = param_6 + 1;
            local_c = local_c - param_4;
            while( true ) {
              param_8 = param_8 + 1;
              param_7 = param_7 + 1;
              if (local_c < 0) goto LAB_6371fa31;
              local_c = local_c - param_4;
              if (local_c < 0) break;
              pbVar11 = pbVar11 + 2;
              param_6 = param_6 + 2;
              local_c = local_c - param_4;
            }
          } while( true );
        }
        local_c = local_c - param_4;
      }
LAB_6371fa31:
      local_c = local_c + param_10;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


