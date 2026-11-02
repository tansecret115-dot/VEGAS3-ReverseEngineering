/* Module: rnco3260.dll
   Function: FUN_6372e630
   Address: 6372e630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6372e630(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,byte param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  ushort local_18;
  ushort local_14;
  ushort local_10;
  int local_c;
  int local_8;
  
  local_c = param_10 >> 1;
  local_8 = param_4;
  if (param_4 != 0) {
    pbVar13 = param_5;
    if ((param_9 & 1) != 0) goto LAB_6372e9a7;
    do {
      local_c = local_c - param_4;
      if (local_c < 0) {
        local_c = local_c + param_10;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 1;
          goto LAB_6372e9a7;
        }
        bVar1 = *param_8;
        bVar2 = *param_7;
        iVar11 = (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2];
        iVar12 = (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2];
        iVar10 = (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2];
        iVar8 = (&DAT_63791580)[*param_6];
        iVar9 = (&DAT_63791580)[*pbVar13];
        iVar6 = (&DAT_63791580)[pbVar13[1]];
        iVar7 = (&DAT_63791580)[param_6[1]];
        local_10 = ((ushort)(byte)(&DAT_6378e5e4)[iVar9 + iVar10] << 5 |
                   (ushort)(byte)(&DAT_6378e5e4)[iVar9 + iVar12]) << 5 |
                   (ushort)(byte)(&DAT_6378e5e4)[iVar9 + iVar11];
        local_14 = ((ushort)(byte)(&DAT_6378e5e4)[iVar8 + iVar10] << 5 |
                   (ushort)(byte)(&DAT_6378e5e4)[iVar8 + iVar12]) << 5 |
                   (ushort)(byte)(&DAT_6378e5e4)[iVar8 + iVar11];
        local_18 = ((ushort)(byte)(&DAT_6378e5e4)[iVar6 + iVar10] << 5 |
                   (ushort)(byte)(&DAT_6378e5e4)[iVar6 + iVar12]) << 5 |
                   (ushort)(byte)(&DAT_6378e5e4)[iVar6 + iVar11];
        param_5._0_2_ =
             ((ushort)(byte)(&DAT_6378e5e4)[iVar7 + iVar10] << 5 |
             (ushort)(byte)(&DAT_6378e5e4)[iVar7 + iVar12]) << 5 |
             (ushort)(byte)(&DAT_6378e5e4)[iVar7 + iVar11];
        *param_1 = local_10;
        param_1[1] = local_18;
        param_1 = param_1 + 2;
        *param_2 = local_14;
        param_2[1] = (ushort)param_5;
        param_2 = param_2 + 2;
      }
      else {
        bVar1 = *param_8;
        bVar2 = *param_7;
        iVar8 = (&DAT_63791580)[*param_6];
        iVar9 = (&DAT_63791580)[*pbVar13];
        local_10 = ((ushort)(byte)(&DAT_6378e5e4)
                                  [iVar9 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]] << 5 |
                   (ushort)(byte)(&DAT_6378e5e4)
                                 [iVar9 + (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2]]) << 5 |
                   (ushort)(byte)(&DAT_6378e5e4)
                                 [iVar9 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]];
        local_14 = ((ushort)(byte)(&DAT_6378e5e4)
                                  [iVar8 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]] << 5 |
                   (ushort)(byte)(&DAT_6378e5e4)
                                 [iVar8 + (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2]]) << 5 |
                   (ushort)(byte)(&DAT_6378e5e4)
                                 [iVar8 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]];
        *param_1 = local_10;
        param_1 = param_1 + 1;
        *param_2 = local_14;
        param_2 = param_2 + 1;
      }
      local_c = local_c - param_4;
      while( true ) {
        param_7 = param_7 + 1;
        pbVar13 = pbVar13 + 2;
        param_6 = param_6 + 2;
        param_8 = param_8 + 1;
        if (local_c < 0) break;
        local_c = local_c - param_4;
        if (local_c < 0) {
          do {
            pbVar13 = pbVar13 + 1;
            param_6 = param_6 + 1;
            local_c = local_c + param_10;
            local_8 = local_8 + -1;
            if (local_8 == 0) {
              return;
            }
LAB_6372e9a7:
            bVar1 = *param_8;
            bVar2 = *param_7;
            iVar8 = (&DAT_63791580)[*pbVar13];
            iVar9 = (&DAT_63791580)[*param_6];
            bVar3 = (&DAT_6378e5e4)[iVar9 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]];
            bVar4 = (&DAT_6378e5e4)[iVar9 + (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2]];
            bVar5 = (&DAT_6378e5e4)[iVar9 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]];
            *param_1 = ((ushort)(byte)(&DAT_6378e5e4)
                                      [iVar8 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]] << 5
                       | (ushort)(byte)(&DAT_6378e5e4)
                                       [iVar8 + (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar2]]) <<
                       5 | (ushort)(byte)(&DAT_6378e5e4)
                                         [iVar8 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]];
            param_1 = param_1 + 1;
            *param_2 = ((ushort)bVar3 << 5 | (ushort)bVar4) << 5 | (ushort)bVar5;
            param_2 = param_2 + 1;
            pbVar13 = pbVar13 + 1;
            param_6 = param_6 + 1;
            local_c = local_c - param_4;
            while( true ) {
              param_8 = param_8 + 1;
              param_7 = param_7 + 1;
              if (local_c < 0) goto LAB_6372eaaa;
              local_c = local_c - param_4;
              if (local_c < 0) break;
              pbVar13 = pbVar13 + 2;
              param_6 = param_6 + 2;
              local_c = local_c - param_4;
            }
          } while( true );
        }
        local_c = local_c - param_4;
      }
LAB_6372eaaa:
      local_c = local_c + param_10;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


