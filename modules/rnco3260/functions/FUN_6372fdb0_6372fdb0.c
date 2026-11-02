/* Module: rnco3260.dll
   Function: FUN_6372fdb0
   Address: 6372fdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6372fdb0(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,uint param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort uVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  ushort uVar15;
  ushort uVar16;
  uint uVar17;
  ushort uVar18;
  int iVar19;
  ushort *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int local_24;
  uint local_20;
  uint local_1c;
  ushort local_18;
  uint local_14;
  uint local_c;
  int local_8;
  
  local_8 = param_4 >> 1;
  local_24 = param_4 * 3 - local_8;
  if ((param_10 + param_9 & 1) != 0) {
    local_24 = local_24 + param_4 * 2;
  }
  local_24 = local_24 / (param_10 * 2);
  if (param_4 == 0) {
    return;
  }
  puVar20 = param_1;
  if (((param_9 & 1) == 0) && (1 < param_10)) {
    bVar1 = *param_7;
    bVar2 = *param_8;
    iVar19 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
    iVar13 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
    iVar21 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
    iVar22 = (&DAT_63791580)[*param_5];
    iVar25 = (&DAT_63791580)[*param_6];
    iVar3 = (&DAT_63791580)[param_5[1]];
    iVar4 = (&DAT_63791580)[param_6[1]];
    uVar17 = ((uint)(byte)(&DAT_6378e5e6)[iVar22 + iVar13] << 5 |
             (uint)(byte)(&DAT_6378e5e6)[iVar22 + iVar21]) << 5 |
             (uint)(byte)(&DAT_6378e5e6)[iVar22 + iVar19];
    uVar14 = ((uint)(byte)(&DAT_6378e5e2)[iVar25 + iVar13] << 5 |
             (uint)(byte)(&DAT_6378e5e2)[iVar25 + iVar21]) << 5 |
             (uint)(byte)(&DAT_6378e5e2)[iVar25 + iVar19];
    local_c = ((uint)(byte)(&DAT_6378e5e2)[iVar3 + iVar13] << 5 |
              (uint)(byte)(&DAT_6378e5e2)[iVar3 + iVar21]) << 5 |
              (uint)(byte)(&DAT_6378e5e2)[iVar3 + iVar19];
    local_1c = ((uint)(byte)(&DAT_6378e5e6)[iVar4 + iVar13] << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar4 + iVar21]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar4 + iVar19];
    param_5 = param_5 + 2;
    param_6 = param_6 + 2;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    iVar22 = param_4 - local_24;
    uVar16 = (ushort)uVar17;
    uVar12 = (ushort)uVar14;
    if (0 < iVar22) {
      while( true ) {
        uVar16 = (ushort)uVar17;
        *param_1 = uVar16;
        uVar12 = (ushort)uVar14;
        *param_2 = uVar12;
        puVar10 = param_2;
        iVar25 = iVar22;
        while( true ) {
          param_2 = puVar10 + 1;
          puVar20 = param_1 + 1;
          iVar22 = 0;
          if (iVar25 + -1 == 0) goto LAB_63730568;
          local_8 = local_8 + param_10 * -2;
          if (local_8 < 0) break;
          *puVar20 = uVar16;
          *param_2 = uVar12;
          param_1 = puVar20;
          puVar10 = param_2;
          iVar25 = iVar25 + -1;
        }
        param_1 = param_1 + 2;
        local_8 = local_8 + param_4;
        puVar10 = puVar10 + 2;
        local_14 = ((local_c ^ uVar17) >> 1 & 0x3def) + (local_c & uVar17);
        *puVar20 = (ushort)local_14;
        local_20 = ((local_1c ^ uVar14) >> 1 & 0x3def) + (local_1c & uVar14);
        iVar25 = iVar25 + -2;
        *param_2 = (ushort)local_20;
        iVar22 = 0;
        param_2 = puVar10;
        puVar20 = param_1;
        uVar16 = (ushort)local_c;
        uVar12 = (ushort)local_1c;
        if (iVar25 == 0) goto LAB_63730568;
        while (local_8 = local_8 + param_10 * -2, -1 < local_8) {
          *param_1 = (ushort)local_14;
          *puVar10 = (ushort)local_20;
          param_1 = param_1 + 1;
          puVar10 = puVar10 + 1;
          iVar25 = iVar25 + -1;
          if (iVar25 == 0) {
            iVar22 = 0;
            param_2 = puVar10;
            puVar20 = param_1;
            goto LAB_63730568;
          }
        }
        local_8 = local_8 + param_4;
        param_2 = puVar10;
        iVar22 = iVar25;
LAB_63730074:
        *param_1 = (ushort)local_c;
        *param_2 = (ushort)local_1c;
        puVar10 = param_1;
        iVar25 = iVar22;
        while( true ) {
          iVar25 = iVar25 + -1;
          puVar10 = puVar10 + 1;
          param_2 = param_2 + 1;
          pbVar5 = param_5;
          pbVar6 = param_6;
          pbVar7 = param_7;
          pbVar8 = param_8;
          if (iVar25 == 0) goto LAB_637303e3;
          local_8 = local_8 + param_10 * -2;
          if (local_8 < 0) break;
          *puVar10 = (ushort)local_c;
          *param_2 = (ushort)local_1c;
        }
        local_8 = local_8 + param_4;
        bVar1 = *param_7;
        bVar2 = *param_8;
        iVar21 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
        iVar19 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
        iVar23 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
        iVar25 = (&DAT_63791580)[*param_5];
        iVar3 = (&DAT_63791580)[*param_6];
        iVar4 = (&DAT_63791580)[param_5[1]];
        iVar13 = (&DAT_63791580)[param_6[1]];
        uVar17 = ((uint)(byte)(&DAT_6378e5e6)[iVar25 + iVar23] |
                 (uint)(byte)(&DAT_6378e5e6)[iVar25 + iVar19] << 5) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar25 + iVar21];
        uVar15 = (ushort)uVar17;
        uVar14 = ((uint)(byte)(&DAT_6378e5e2)[iVar3 + iVar19] << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar3 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar3 + iVar21];
        uVar11 = (ushort)uVar14;
        puVar20 = puVar10 + 1;
        uVar24 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar19] << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar21];
        uVar18 = (ushort)uVar24;
        local_20 = ((uint)(byte)(&DAT_6378e5e6)[iVar13 + iVar19] << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar13 + iVar23]) << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar13 + iVar21];
        local_18 = (ushort)local_20;
        local_c._0_2_ = ((ushort)local_c & uVar15) + ((ushort)((local_c ^ uVar17) >> 1) & 0x3def);
        *puVar10 = (ushort)local_c;
        local_1c._0_2_ = ((ushort)((local_1c ^ uVar14) >> 1) & 0x3def) + ((ushort)local_1c & uVar11)
        ;
        *param_2 = (ushort)local_1c;
        param_2 = param_2 + 1;
        param_1 = (ushort *)(iVar22 + -2);
        iVar22 = 0;
        uVar16 = (ushort)local_c;
        uVar12 = (ushort)local_1c;
        if (param_1 == (ushort *)0x0) goto LAB_63730568;
        while (local_8 = local_8 + param_10 * -2, -1 < local_8) {
          *puVar20 = (ushort)local_c;
          *param_2 = (ushort)local_1c;
          puVar20 = puVar20 + 1;
          param_2 = param_2 + 1;
          param_1 = (ushort *)((int)param_1 + -1);
          if (param_1 == (ushort *)0x0) {
            iVar22 = 0;
            goto LAB_63730568;
          }
        }
        *puVar20 = uVar15;
        local_8 = local_8 + param_4;
        *param_2 = uVar11;
        puVar20 = puVar20 + 1;
        param_2 = param_2 + 1;
        param_1 = (ushort *)((int)param_1 + -1);
        iVar22 = 0;
        puVar9 = param_2;
        uVar16 = uVar15;
        uVar12 = uVar11;
        if (param_1 == (ushort *)0x0) goto LAB_63730568;
        while (local_8 = local_8 + param_10 * -2, -1 < local_8) {
          *puVar20 = uVar15;
          *puVar9 = uVar11;
          puVar20 = puVar20 + 1;
          puVar9 = puVar9 + 1;
          param_1 = (ushort *)((int)param_1 + -1);
          if (param_1 == (ushort *)0x0) {
            iVar22 = 0;
            param_2 = puVar9;
            goto LAB_63730568;
          }
        }
        puVar10 = puVar20 + 1;
        local_8 = local_8 + param_4;
        param_2 = puVar9 + 1;
        local_14._0_2_ = ((ushort)((uVar24 ^ uVar17) >> 1) & 0x3def) + (uVar18 & uVar15);
        *puVar20 = (ushort)local_14;
        uVar16 = ((ushort)((local_20 ^ uVar14) >> 1) & 0x3def) + (local_18 & uVar11);
        *puVar9 = uVar16;
        iVar22 = (int)param_1 + -1;
        if (iVar22 == 0) break;
        while (local_8 = local_8 + param_10 * -2, -1 < local_8) {
          puVar20 = param_2 + 1;
          *puVar10 = (ushort)local_14;
          *param_2 = uVar16;
          puVar10 = puVar10 + 1;
          iVar22 = iVar22 + -1;
          param_2 = puVar20;
          if (iVar22 == 0) {
            iVar22 = 0;
            puVar20 = puVar10;
            uVar16 = uVar18;
            uVar12 = local_18;
            goto LAB_63730568;
          }
        }
        *puVar10 = uVar18;
        local_8 = local_8 + param_4;
        *param_2 = local_18;
        iVar25 = iVar22;
        while( true ) {
          iVar25 = iVar25 + -1;
          param_2 = param_2 + 1;
          puVar10 = puVar10 + 1;
          pbVar5 = param_5 + 2;
          pbVar6 = param_6 + 2;
          pbVar7 = param_7 + 1;
          pbVar8 = param_8 + 1;
          local_14 = uVar24;
          if (iVar25 == 0) goto LAB_637303e3;
          local_8 = local_8 + param_10 * -2;
          if (local_8 < 0) break;
          *puVar10 = uVar18;
          *param_2 = local_18;
        }
        local_8 = local_8 + param_4;
        bVar1 = param_7[1];
        bVar2 = param_8[1];
        iVar21 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
        iVar23 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
        iVar19 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
        iVar25 = (&DAT_63791580)[param_5[2]];
        iVar3 = (&DAT_63791580)[param_6[2]];
        iVar4 = (&DAT_63791580)[param_5[3]];
        iVar13 = (&DAT_63791580)[param_6[3]];
        uVar17 = ((uint)(byte)(&DAT_6378e5e6)[iVar25 + iVar19] << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar25 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar25 + iVar21];
        uVar14 = ((uint)(byte)(&DAT_6378e5e2)[iVar3 + iVar19] << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar3 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar3 + iVar21];
        local_c = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar19] << 5 |
                  (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar23]) << 5 |
                  (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar21];
        local_1c = ((uint)(byte)(&DAT_6378e5e6)[iVar13 + iVar19] << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar13 + iVar23]) << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar13 + iVar21];
        param_5 = param_5 + 4;
        param_6 = param_6 + 4;
        param_7 = param_7 + 2;
        param_8 = param_8 + 2;
        uVar18 = ((ushort)((uVar24 ^ uVar17) >> 1) & 0x3def) + (uVar18 & (ushort)uVar17);
        *puVar10 = uVar18;
        local_18 = ((ushort)((local_20 ^ uVar14) >> 1) & 0x3def) + (local_18 & (ushort)uVar14);
        *param_2 = local_18;
        iVar22 = iVar22 + -2;
        while( true ) {
          param_2 = param_2 + 1;
          puVar10 = puVar10 + 1;
          if (iVar22 == 0) goto LAB_63730798;
          local_8 = local_8 + param_10 * -2;
          if (local_8 < 0) break;
          *puVar10 = uVar18;
          *param_2 = local_18;
          iVar22 = iVar22 + -1;
        }
        local_8 = local_8 + param_4;
        param_1 = puVar10;
      }
LAB_63730798:
      iVar22 = 0;
      puVar20 = puVar10;
      uVar16 = uVar18;
      uVar12 = local_18;
    }
  }
  else {
    bVar1 = *param_7;
    bVar2 = *param_8;
    iVar22 = (&DAT_63791580)[*param_5];
    local_20 = (&DAT_63791580)[*param_6];
    local_c = ((uint)(byte)(&DAT_6378e5e4)[iVar22 + (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1]]
               << 5 | (uint)(byte)(&DAT_6378e5e4)
                                  [iVar22 + (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1]]) << 5 |
              (uint)(byte)(&DAT_6378e5e4)[iVar22 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]];
    local_1c = ((uint)(byte)(&DAT_6378e5e4)
                            [local_20 + (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1]] << 5 |
               (uint)(byte)(&DAT_6378e5e4)
                           [local_20 + (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)
                           [local_20 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]];
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    iVar22 = param_4 - local_24;
    uVar16 = (ushort)local_c;
    uVar12 = (ushort)local_1c;
    if (0 < iVar22) goto LAB_63730074;
  }
LAB_63730568:
  local_c._0_2_ = uVar16;
  for (iVar22 = iVar22 + local_24; iVar22 != 0; iVar22 = iVar22 + -1) {
    *puVar20 = (ushort)local_c;
    *param_2 = uVar12;
    puVar20 = puVar20 + 1;
    param_2 = param_2 + 1;
  }
  return;
LAB_637303e3:
  param_8 = pbVar8;
  param_7 = pbVar7;
  param_6 = pbVar6;
  param_5 = pbVar5;
  iVar22 = 0;
  puVar20 = puVar10;
  uVar16 = (ushort)local_c;
  uVar12 = (ushort)local_1c;
  if ((param_10 + param_9 & 1) != 0) {
    iVar22 = local_24 >> 1;
    local_24 = local_24 - iVar22;
    if (0 < iVar22) {
      bVar1 = *param_7;
      bVar2 = *param_8;
      iVar25 = (&DAT_63791580)[*param_5];
      iVar3 = (&DAT_63791580)[*param_6];
      uVar14 = ((uint)(byte)(&DAT_6378e5e4)
                            [iVar25 + (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1]] << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar25 + (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1]]
               ) << 5 | (uint)(byte)(&DAT_6378e5e4)
                                    [iVar25 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]];
      local_c._0_2_ = (ushort)uVar14;
      uVar17 = ((uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1]]
                << 5 | (uint)(byte)(&DAT_6378e5e4)
                                   [iVar3 + (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]];
      uVar12 = (ushort)uVar17;
      local_14._0_2_ =
           ((ushort)((uVar14 ^ local_14) >> 1) & 0x3def) + ((ushort)local_c & (ushort)local_14);
      uVar11 = ((ushort)((uVar17 ^ local_20) >> 1) & 0x3def) + (uVar12 & (ushort)local_20);
      *puVar10 = (ushort)local_14;
      *param_2 = uVar11;
      while( true ) {
        iVar22 = iVar22 + -1;
        param_2 = param_2 + 1;
        puVar10 = puVar10 + 1;
        puVar20 = puVar10;
        uVar16 = (ushort)local_c;
        if ((iVar22 == 0) || (local_8 = local_8 + param_10 * -2, local_8 < 0)) break;
        *puVar10 = (ushort)local_14;
        *param_2 = uVar11;
      }
    }
  }
  goto LAB_63730568;
}


