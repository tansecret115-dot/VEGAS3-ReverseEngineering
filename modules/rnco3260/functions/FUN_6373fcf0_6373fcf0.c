/* Module: rnco3260.dll
   Function: FUN_6373fcf0
   Address: 6373fcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6373fcf0(ushort *param_1,short *param_2,ushort *param_3,short *param_4,ushort *param_5,
            undefined4 param_6,int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11
            ,byte param_12,int param_13)

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
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  short *psVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ushort *puVar19;
  ushort uVar20;
  uint uVar21;
  int local_c;
  int local_8;
  
  local_c = param_13 >> 1;
  local_8 = param_7;
  if (param_7 != 0) {
    if ((param_12 & 1) != 0) goto LAB_637400db;
    do {
      local_c = local_c - param_7;
      if (local_c < 0) {
        local_c = local_c + param_13;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 1;
          goto LAB_637400db;
        }
        iVar8 = (&DAT_63790960)[*param_10];
        iVar17 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
        iVar9 = (&DAT_63792180)[*param_11];
        iVar4 = (&DAT_63791580)[*param_8];
        iVar5 = (&DAT_63791580)[*param_9];
        iVar6 = (&DAT_63791580)[param_8[1]];
        iVar7 = (&DAT_63791580)[param_9[1]];
        uVar12 = ((uint)(byte)(&DAT_6378e5e4)[iVar4 + iVar9] << 5 |
                 (uint)(byte)(&DAT_6378e5e4)[iVar4 + iVar17]) << 5 |
                 (uint)(byte)(&DAT_6378e5e4)[iVar4 + iVar8];
        uVar16 = ((uint)(byte)(&DAT_6378e5e4)[iVar5 + iVar9] << 5 |
                 (uint)(byte)(&DAT_6378e5e4)[iVar5 + iVar17]) << 5 |
                 (uint)(byte)(&DAT_6378e5e4)[iVar5 + iVar8];
        uVar21 = ((uint)(byte)(&DAT_6378e5e4)[iVar6 + iVar9] << 5 |
                 (uint)(byte)(&DAT_6378e5e4)[iVar6 + iVar17]) << 5 |
                 (uint)(byte)(&DAT_6378e5e4)[iVar6 + iVar8];
        uVar18 = ((uint)(byte)(&DAT_6378e5e4)[iVar7 + iVar9] << 5 |
                 (uint)(byte)(&DAT_6378e5e4)[iVar7 + iVar17]) << 5 |
                 (uint)(byte)(&DAT_6378e5e4)[iVar7 + iVar8];
        uVar10 = (ushort)uVar12;
        *param_3 = uVar10;
        uVar20 = (ushort)uVar21;
        param_3[1] = uVar20;
        param_3 = param_3 + 2;
        uVar14 = (ushort)uVar16;
        *param_5 = uVar14;
        uVar11 = (ushort)uVar18;
        param_5[1] = uVar11;
        param_5 = param_5 + 2;
        _param_12 = ((ushort)((uVar18 ^ uVar21) >> 1) & 0x3def) + (uVar11 & uVar20);
        uVar11 = *param_1;
        uVar15 = param_1[1];
        param_1 = param_1 + 2;
        *param_2 = ((ushort)((uVar11 ^ uVar12) >> 1) & 0x3def) + (uVar11 & uVar10);
        param_2[1] = ((ushort)((uVar15 ^ uVar21) >> 1) & 0x3def) + (uVar15 & uVar20);
        param_2 = param_2 + 2;
        *param_4 = ((ushort)((uVar16 ^ uVar12) >> 1) & 0x3def) + (uVar14 & uVar10);
        param_4[1] = _param_12;
        param_4 = param_4 + 2;
      }
      else {
        iVar8 = (&DAT_63791580)[*param_8];
        iVar9 = (&DAT_63791580)[*param_9];
        uVar12 = ((uint)(byte)(&DAT_6378e5e4)[iVar8 + (&DAT_63792180)[*param_11]] << 5 |
                 (uint)(byte)(&DAT_6378e5e4)
                             [iVar8 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 5
                 | (uint)(byte)(&DAT_6378e5e4)[iVar8 + (&DAT_63790960)[*param_10]];
        uVar16 = ((uint)(byte)(&DAT_6378e5e4)[iVar9 + (&DAT_63792180)[*param_11]] << 5 |
                 (uint)(byte)(&DAT_6378e5e4)
                             [iVar9 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 5
                 | (uint)(byte)(&DAT_6378e5e4)[iVar9 + (&DAT_63790960)[*param_10]];
        uVar15 = (ushort)uVar12;
        *param_3 = uVar15;
        param_3 = param_3 + 1;
        uVar11 = (ushort)uVar16;
        *param_5 = uVar11;
        param_5 = param_5 + 1;
        _param_12 = ((ushort)((uVar16 ^ uVar12) >> 1) & 0x3def) + (uVar11 & uVar15);
        uVar11 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = ((ushort)((uVar11 ^ uVar12) >> 1) & 0x3def) + (uVar11 & uVar15);
        param_2 = param_2 + 1;
        *param_4 = _param_12;
        param_4 = param_4 + 1;
      }
      local_c = local_c - param_7;
      while( true ) {
        param_11 = param_11 + 1;
        param_8 = param_8 + 2;
        param_10 = param_10 + 1;
        param_9 = param_9 + 2;
        if (local_c < 0) break;
        local_c = local_c - param_7;
        if (local_c < 0) {
          do {
            param_8 = param_8 + 1;
            param_9 = param_9 + 1;
            local_c = local_c + param_13;
            local_8 = local_8 + -1;
            if (local_8 == 0) {
              return;
            }
LAB_637400db:
            iVar8 = (&DAT_63791580)[*param_8];
            iVar9 = (&DAT_63791580)[*param_9];
            uVar12 = ((uint)(byte)(&DAT_6378e5e4)[iVar8 + (&DAT_63792180)[*param_11]] << 5 |
                     (uint)(byte)(&DAT_6378e5e4)
                                 [iVar8 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]])
                     << 5 | (uint)(byte)(&DAT_6378e5e4)[iVar8 + (&DAT_63790960)[*param_10]];
            bVar1 = (&DAT_6378e5e4)[iVar9 + (&DAT_63792180)[*param_11]];
            bVar2 = (&DAT_6378e5e4)[iVar9 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]
            ;
            bVar3 = (&DAT_6378e5e4)[iVar9 + (&DAT_63790960)[*param_10]];
            uVar11 = (ushort)uVar12;
            *param_3 = uVar11;
            param_3 = param_3 + 1;
            uVar16 = ((uint)bVar1 << 5 | (uint)bVar2) << 5 | (uint)bVar3;
            uVar15 = (ushort)uVar16;
            *param_5 = uVar15;
            param_5 = param_5 + 1;
            puVar19 = param_1 + 1;
            psVar13 = param_2 + 1;
            *param_2 = ((ushort)((*param_1 ^ uVar12) >> 1) & 0x3def) + (*param_1 & uVar11);
            *param_4 = ((ushort)((uVar16 ^ uVar12) >> 1) & 0x3def) + (uVar15 & uVar11);
            param_4 = param_4 + 1;
            param_8 = param_8 + 1;
            param_9 = param_9 + 1;
            local_c = local_c - param_7;
            while( true ) {
              param_11 = param_11 + 1;
              param_10 = param_10 + 1;
              param_1 = puVar19;
              param_2 = psVar13;
              if (local_c < 0) goto LAB_63740219;
              local_c = local_c - param_7;
              if (local_c < 0) break;
              param_8 = param_8 + 2;
              param_9 = param_9 + 2;
              local_c = local_c - param_7;
            }
          } while( true );
        }
        local_c = local_c - param_7;
      }
LAB_63740219:
      local_c = local_c + param_13;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


