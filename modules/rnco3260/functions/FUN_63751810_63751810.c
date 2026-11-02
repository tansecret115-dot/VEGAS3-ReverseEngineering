/* Module: rnco3260.dll
   Function: FUN_63751810
   Address: 63751810
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63751810(ushort *param_1,short *param_2,ushort *param_3,short *param_4,ushort *param_5,
            undefined4 param_6,int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11
            ,byte param_12,int param_13)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  short *psVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ushort *puVar18;
  ushort uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int local_c;
  int local_8;
  
  local_c = param_13 >> 1;
  local_8 = param_7;
  if (param_7 != 0) {
    if ((param_12 & 1) != 0) goto LAB_63751c1d;
    do {
      local_c = local_c - param_7;
      if (local_c < 0) {
        local_c = local_c + param_13;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 1;
          goto LAB_63751c1d;
        }
        bVar1 = *param_11;
        bVar2 = *param_10;
        iVar20 = (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2];
        iVar17 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
        iVar21 = (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2];
        iVar7 = (&DAT_63791580)[*param_8];
        iVar8 = (&DAT_63791580)[*param_9];
        iVar5 = (&DAT_63791580)[param_8[1]];
        iVar6 = (&DAT_63791580)[param_9[1]];
        uVar12 = ((uint)(byte)(&DAT_6378e5e4)[iVar7 + iVar21] << 6 |
                 (uint)(byte)(&DAT_6378efe2)[iVar7 + iVar17]) << 5 |
                 (uint)(byte)(&DAT_6378e5e4)[iVar7 + iVar20];
        uVar15 = ((uint)(byte)(&DAT_6378e5e4)[iVar8 + iVar21] << 6 |
                 (uint)(byte)(&DAT_6378efe2)[iVar8 + iVar17]) << 5 |
                 (uint)(byte)(&DAT_6378e5e4)[iVar8 + iVar20];
        uVar22 = ((uint)(byte)(&DAT_6378e5e4)[iVar5 + iVar21] << 6 |
                 (uint)(byte)(&DAT_6378efe2)[iVar5 + iVar17]) << 5 |
                 (uint)(byte)(&DAT_6378e5e4)[iVar5 + iVar20];
        uVar16 = ((uint)(byte)(&DAT_6378e5e4)[iVar6 + iVar21] << 6 |
                 (uint)(byte)(&DAT_6378efe2)[iVar6 + iVar17]) << 5 |
                 (uint)(byte)(&DAT_6378e5e4)[iVar6 + iVar20];
        uVar9 = (ushort)uVar12;
        *param_3 = uVar9;
        uVar19 = (ushort)uVar22;
        param_3[1] = uVar19;
        param_3 = param_3 + 2;
        uVar14 = (ushort)uVar15;
        *param_5 = uVar14;
        uVar11 = (ushort)uVar16;
        param_5[1] = uVar11;
        param_5 = param_5 + 2;
        _param_12 = ((ushort)((uVar16 ^ uVar22) >> 1) & 0x7bef) + (uVar11 & uVar19);
        uVar11 = *param_1;
        uVar10 = param_1[1];
        param_1 = param_1 + 2;
        *param_2 = ((ushort)((uVar11 ^ uVar12) >> 1) & 0x7bef) + (uVar11 & uVar9);
        param_2[1] = ((ushort)((uVar10 ^ uVar22) >> 1) & 0x7bef) + (uVar10 & uVar19);
        param_2 = param_2 + 2;
        *param_4 = ((ushort)((uVar15 ^ uVar12) >> 1) & 0x7bef) + (uVar14 & uVar9);
        param_4[1] = _param_12;
        param_4 = param_4 + 2;
      }
      else {
        bVar1 = *param_11;
        bVar2 = *param_10;
        iVar7 = (&DAT_63791580)[*param_9];
        iVar8 = (&DAT_63791580)[*param_8];
        uVar12 = ((uint)(byte)(&DAT_6378e5e4)
                              [iVar8 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]] << 6 |
                 (uint)(byte)(&DAT_6378efe2)
                             [iVar8 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
                 (uint)(byte)(&DAT_6378e5e4)
                             [iVar8 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]];
        uVar15 = ((uint)(byte)(&DAT_6378e5e4)
                              [iVar7 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]] << 6 |
                 (uint)(byte)(&DAT_6378efe2)
                             [iVar7 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
                 (uint)(byte)(&DAT_6378e5e4)
                             [iVar7 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]];
        uVar10 = (ushort)uVar12;
        *param_3 = uVar10;
        param_3 = param_3 + 1;
        uVar11 = (ushort)uVar15;
        *param_5 = uVar11;
        param_5 = param_5 + 1;
        _param_12 = ((ushort)((uVar15 ^ uVar12) >> 1) & 0x7bef) + (uVar11 & uVar10);
        uVar11 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = ((ushort)((uVar11 ^ uVar12) >> 1) & 0x7bef) + (uVar11 & uVar10);
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
LAB_63751c1d:
            bVar1 = *param_11;
            bVar2 = *param_10;
            iVar7 = (&DAT_63791580)[*param_8];
            iVar8 = (&DAT_63791580)[*param_9];
            uVar12 = ((uint)(byte)(&DAT_6378e5e4)
                                  [iVar7 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]] << 6 |
                     (uint)(byte)(&DAT_6378efe2)
                                 [iVar7 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 5 |
                     (uint)(byte)(&DAT_6378e5e4)
                                 [iVar7 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]];
            bVar3 = (&DAT_6378e5e4)[iVar8 + (&DAT_63792180)[bVar1] + (&DAT_63791980)[bVar2]];
            bVar4 = (&DAT_6378efe2)[iVar8 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]];
            bVar1 = (&DAT_6378e5e4)[iVar8 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]];
            uVar11 = (ushort)uVar12;
            *param_3 = uVar11;
            param_3 = param_3 + 1;
            uVar15 = ((uint)bVar3 << 6 | (uint)bVar4) << 5 | (uint)bVar1;
            uVar10 = (ushort)uVar15;
            *param_5 = uVar10;
            param_5 = param_5 + 1;
            puVar18 = param_1 + 1;
            psVar13 = param_2 + 1;
            *param_2 = ((ushort)((*param_1 ^ uVar12) >> 1) & 0x7bef) + (*param_1 & uVar11);
            *param_4 = ((ushort)((uVar15 ^ uVar12) >> 1) & 0x7bef) + (uVar10 & uVar11);
            param_4 = param_4 + 1;
            param_8 = param_8 + 1;
            param_9 = param_9 + 1;
            local_c = local_c - param_7;
            while( true ) {
              param_11 = param_11 + 1;
              param_10 = param_10 + 1;
              param_1 = puVar18;
              param_2 = psVar13;
              if (local_c < 0) goto LAB_63751d6e;
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
LAB_63751d6e:
      local_c = local_c + param_13;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


