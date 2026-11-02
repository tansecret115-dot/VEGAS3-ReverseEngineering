/* Module: rnco3260.dll
   Function: FUN_63720c60
   Address: 63720c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63720c60(ushort *param_1,ushort *param_2,undefined4 param_3,int param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,uint param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  ushort uVar16;
  ushort uVar17;
  uint uVar18;
  ushort uVar19;
  int iVar20;
  ushort *puVar21;
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
  puVar21 = param_1;
  if (((param_9 & 1) == 0) && (1 < param_10)) {
    iVar22 = (&DAT_63790960)[*param_7];
    iVar25 = (&DAT_63792180)[*param_8];
    iVar20 = (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7];
    iVar3 = (&DAT_63791580)[*param_5];
    iVar4 = (&DAT_63791580)[*param_6];
    iVar5 = (&DAT_63791580)[param_5[1]];
    iVar6 = (&DAT_63791580)[param_6[1]];
    uVar15 = ((uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar25] << 6 |
             (uint)(byte)(&DAT_6378efe3)[iVar3 + iVar20]) << 5 |
             (uint)(byte)(&DAT_6378e5e6)[iVar3 + iVar22];
    uVar18 = ((uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar25] << 6 |
             (uint)(byte)(&DAT_6378efe1)[iVar4 + iVar20]) << 5 |
             (uint)(byte)(&DAT_6378e5e2)[iVar4 + iVar22];
    local_c = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar25] << 6 |
              (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar20]) << 5 |
              (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar22];
    local_1c = ((uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar25] << 6 |
               (uint)(byte)(&DAT_6378efe3)[iVar6 + iVar20]) << 5 |
               (uint)(byte)(&DAT_6378e5e6)[iVar6 + iVar22];
    param_5 = param_5 + 2;
    param_6 = param_6 + 2;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    iVar22 = param_4 - local_24;
    uVar13 = (ushort)uVar15;
    uVar17 = (ushort)uVar18;
    if (0 < iVar22) {
      while( true ) {
        uVar13 = (ushort)uVar15;
        *param_1 = uVar13;
        uVar17 = (ushort)uVar18;
        *param_2 = uVar17;
        puVar12 = param_2;
        iVar25 = iVar22;
        while( true ) {
          param_2 = puVar12 + 1;
          puVar21 = param_1 + 1;
          iVar22 = 0;
          if (iVar25 + -1 == 0) goto LAB_637213cb;
          local_8 = local_8 + param_10 * -2;
          if (local_8 < 0) break;
          *puVar21 = uVar13;
          *param_2 = uVar17;
          param_1 = puVar21;
          puVar12 = param_2;
          iVar25 = iVar25 + -1;
        }
        param_1 = param_1 + 2;
        local_8 = local_8 + param_4;
        puVar12 = puVar12 + 2;
        local_14 = ((local_c ^ uVar15) >> 1 & 0x7bef) + (local_c & uVar15);
        *puVar21 = (ushort)local_14;
        local_20 = ((local_1c ^ uVar18) >> 1 & 0x7bef) + (local_1c & uVar18);
        iVar25 = iVar25 + -2;
        *param_2 = (ushort)local_20;
        iVar22 = 0;
        param_2 = puVar12;
        puVar21 = param_1;
        uVar13 = (ushort)local_c;
        uVar17 = (ushort)local_1c;
        if (iVar25 == 0) goto LAB_637213cb;
        while (local_8 = local_8 + param_10 * -2, -1 < local_8) {
          *param_1 = (ushort)local_14;
          *puVar12 = (ushort)local_20;
          param_1 = param_1 + 1;
          puVar12 = puVar12 + 1;
          iVar25 = iVar25 + -1;
          if (iVar25 == 0) {
            iVar22 = 0;
            param_2 = puVar12;
            puVar21 = param_1;
            goto LAB_637213cb;
          }
        }
        local_8 = local_8 + param_4;
        param_2 = puVar12;
        iVar22 = iVar25;
LAB_63720efe:
        *param_1 = (ushort)local_c;
        *param_2 = (ushort)local_1c;
        puVar12 = param_1;
        iVar25 = iVar22;
        while( true ) {
          iVar25 = iVar25 + -1;
          puVar12 = puVar12 + 1;
          param_2 = param_2 + 1;
          pbVar7 = param_5;
          pbVar8 = param_6;
          pbVar9 = param_7;
          pbVar10 = param_8;
          if (iVar25 == 0) goto LAB_6372125a;
          local_8 = local_8 + param_10 * -2;
          if (local_8 < 0) break;
          *puVar12 = (ushort)local_c;
          *param_2 = (ushort)local_1c;
        }
        local_8 = local_8 + param_4;
        iVar25 = (&DAT_63790960)[*param_7];
        iVar3 = (&DAT_63792180)[*param_8];
        iVar23 = (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7];
        iVar4 = (&DAT_63791580)[*param_5];
        iVar5 = (&DAT_63791580)[*param_6];
        iVar6 = (&DAT_63791580)[param_5[1]];
        iVar20 = (&DAT_63791580)[param_6[1]];
        uVar15 = ((uint)(byte)(&DAT_6378e5e6)[iVar4 + iVar3] << 6 |
                 (uint)(byte)(&DAT_6378efe3)[iVar4 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar4 + iVar25];
        uVar14 = (ushort)uVar15;
        uVar18 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar3] << 6 |
                 (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar25];
        uVar16 = (ushort)uVar18;
        uVar24 = ((uint)(byte)(&DAT_6378e5e2)[iVar6 + iVar3] << 6 |
                 (uint)(byte)(&DAT_6378efe1)[iVar6 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar6 + iVar25];
        uVar19 = (ushort)uVar24;
        puVar21 = puVar12 + 1;
        local_20 = ((uint)(byte)(&DAT_6378e5e6)[iVar20 + iVar3] << 6 |
                   (uint)(byte)(&DAT_6378efe3)[iVar20 + iVar23]) << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar20 + iVar25];
        local_18 = (ushort)local_20;
        local_c._0_2_ = ((ushort)local_c & uVar14) + ((ushort)((local_c ^ uVar15) >> 1) & 0x7bef);
        *puVar12 = (ushort)local_c;
        local_1c._0_2_ = ((ushort)((local_1c ^ uVar18) >> 1) & 0x7bef) + ((ushort)local_1c & uVar16)
        ;
        *param_2 = (ushort)local_1c;
        param_2 = param_2 + 1;
        param_1 = (ushort *)(iVar22 + -2);
        iVar22 = 0;
        uVar13 = (ushort)local_c;
        uVar17 = (ushort)local_1c;
        if (param_1 == (ushort *)0x0) goto LAB_637213cb;
        while (local_8 = local_8 + param_10 * -2, -1 < local_8) {
          *puVar21 = (ushort)local_c;
          *param_2 = (ushort)local_1c;
          puVar21 = puVar21 + 1;
          param_2 = param_2 + 1;
          param_1 = (ushort *)((int)param_1 + -1);
          if (param_1 == (ushort *)0x0) {
            iVar22 = 0;
            goto LAB_637213cb;
          }
        }
        *puVar21 = uVar14;
        local_8 = local_8 + param_4;
        *param_2 = uVar16;
        puVar21 = puVar21 + 1;
        param_2 = param_2 + 1;
        param_1 = (ushort *)((int)param_1 + -1);
        iVar22 = 0;
        puVar11 = param_2;
        uVar13 = uVar14;
        uVar17 = uVar16;
        if (param_1 == (ushort *)0x0) goto LAB_637213cb;
        while (local_8 = local_8 + param_10 * -2, -1 < local_8) {
          *puVar21 = uVar14;
          *puVar11 = uVar16;
          puVar21 = puVar21 + 1;
          puVar11 = puVar11 + 1;
          param_1 = (ushort *)((int)param_1 + -1);
          if (param_1 == (ushort *)0x0) {
            iVar22 = 0;
            param_2 = puVar11;
            goto LAB_637213cb;
          }
        }
        puVar12 = puVar21 + 1;
        local_8 = local_8 + param_4;
        param_2 = puVar11 + 1;
        local_14._0_2_ = ((ushort)((uVar24 ^ uVar15) >> 1) & 0x7bef) + (uVar19 & uVar14);
        *puVar21 = (ushort)local_14;
        uVar13 = ((ushort)((local_20 ^ uVar18) >> 1) & 0x7bef) + (local_18 & uVar16);
        *puVar11 = uVar13;
        iVar22 = (int)param_1 + -1;
        if (iVar22 == 0) break;
        while (local_8 = local_8 + param_10 * -2, -1 < local_8) {
          puVar21 = param_2 + 1;
          *puVar12 = (ushort)local_14;
          *param_2 = uVar13;
          puVar12 = puVar12 + 1;
          iVar22 = iVar22 + -1;
          param_2 = puVar21;
          if (iVar22 == 0) {
            iVar22 = 0;
            puVar21 = puVar12;
            uVar13 = uVar19;
            uVar17 = local_18;
            goto LAB_637213cb;
          }
        }
        *puVar12 = uVar19;
        local_8 = local_8 + param_4;
        *param_2 = local_18;
        iVar25 = iVar22;
        while( true ) {
          iVar25 = iVar25 + -1;
          param_2 = param_2 + 1;
          puVar12 = puVar12 + 1;
          pbVar7 = param_5 + 2;
          pbVar8 = param_6 + 2;
          pbVar9 = param_7 + 1;
          pbVar10 = param_8 + 1;
          local_14 = uVar24;
          if (iVar25 == 0) goto LAB_6372125a;
          local_8 = local_8 + param_10 * -2;
          if (local_8 < 0) break;
          *puVar12 = uVar19;
          *param_2 = local_18;
        }
        local_8 = local_8 + param_4;
        bVar1 = param_7[1];
        iVar25 = (&DAT_63790960)[bVar1];
        bVar2 = param_8[1];
        iVar3 = (&DAT_63792180)[bVar2];
        iVar23 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
        iVar4 = (&DAT_63791580)[param_5[2]];
        iVar5 = (&DAT_63791580)[param_6[2]];
        iVar6 = (&DAT_63791580)[param_5[3]];
        iVar20 = (&DAT_63791580)[param_6[3]];
        uVar15 = ((uint)(byte)(&DAT_6378e5e6)[iVar4 + iVar3] << 6 |
                 (uint)(byte)(&DAT_6378efe3)[iVar4 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e6)[iVar4 + iVar25];
        uVar18 = ((uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar3] << 6 |
                 (uint)(byte)(&DAT_6378efe1)[iVar5 + iVar23]) << 5 |
                 (uint)(byte)(&DAT_6378e5e2)[iVar5 + iVar25];
        local_c = ((uint)(byte)(&DAT_6378e5e2)[iVar6 + iVar3] << 6 |
                  (uint)(byte)(&DAT_6378efe1)[iVar6 + iVar23]) << 5 |
                  (uint)(byte)(&DAT_6378e5e2)[iVar6 + iVar25];
        local_1c = ((uint)(byte)(&DAT_6378e5e6)[iVar20 + iVar3] << 6 |
                   (uint)(byte)(&DAT_6378efe3)[iVar20 + iVar23]) << 5 |
                   (uint)(byte)(&DAT_6378e5e6)[iVar20 + iVar25];
        param_5 = param_5 + 4;
        param_6 = param_6 + 4;
        param_7 = param_7 + 2;
        param_8 = param_8 + 2;
        uVar19 = ((ushort)((uVar24 ^ uVar15) >> 1) & 0x7bef) + (uVar19 & (ushort)uVar15);
        *puVar12 = uVar19;
        local_18 = ((ushort)((local_20 ^ uVar18) >> 1) & 0x7bef) + (local_18 & (ushort)uVar18);
        *param_2 = local_18;
        iVar22 = iVar22 + -2;
        while( true ) {
          param_2 = param_2 + 1;
          puVar12 = puVar12 + 1;
          if (iVar22 == 0) goto LAB_637215ea;
          local_8 = local_8 + param_10 * -2;
          if (local_8 < 0) break;
          *puVar12 = uVar19;
          *param_2 = local_18;
          iVar22 = iVar22 + -1;
        }
        local_8 = local_8 + param_4;
        param_1 = puVar12;
      }
LAB_637215ea:
      iVar22 = 0;
      puVar21 = puVar12;
      uVar13 = uVar19;
      uVar17 = local_18;
    }
  }
  else {
    iVar22 = (&DAT_63791580)[*param_5];
    iVar25 = (&DAT_63791580)[*param_6];
    local_20 = ((uint)(byte)(&DAT_6378e5e4)[iVar22 + (&DAT_63792180)[*param_8]] << 6 |
               (uint)(byte)(&DAT_6378efe2)
                           [iVar22 + (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7]]) << 5;
    local_c = local_20 | (byte)(&DAT_6378e5e4)[iVar22 + (&DAT_63790960)[*param_7]];
    local_1c = ((uint)(byte)(&DAT_6378e5e4)[iVar25 + (&DAT_63792180)[*param_8]] << 6 |
               (uint)(byte)(&DAT_6378efe2)
                           [iVar25 + (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar25 + (&DAT_63790960)[*param_7]];
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    iVar22 = param_4 - local_24;
    uVar13 = (ushort)local_c;
    uVar17 = (ushort)local_1c;
    if (0 < iVar22) goto LAB_63720efe;
  }
LAB_637213cb:
  local_c._0_2_ = uVar13;
  for (iVar22 = iVar22 + local_24; iVar22 != 0; iVar22 = iVar22 + -1) {
    *puVar21 = (ushort)local_c;
    *param_2 = uVar17;
    puVar21 = puVar21 + 1;
    param_2 = param_2 + 1;
  }
  return;
LAB_6372125a:
  param_8 = pbVar10;
  param_7 = pbVar9;
  param_6 = pbVar8;
  param_5 = pbVar7;
  iVar22 = 0;
  puVar21 = puVar12;
  uVar13 = (ushort)local_c;
  uVar17 = (ushort)local_1c;
  if ((param_10 + param_9 & 1) != 0) {
    iVar22 = local_24 >> 1;
    local_24 = local_24 - iVar22;
    if (0 < iVar22) {
      iVar25 = (&DAT_63791580)[*param_5];
      iVar3 = (&DAT_63791580)[*param_6];
      uVar15 = ((uint)(byte)(&DAT_6378e5e4)[iVar25 + (&DAT_63792180)[*param_8]] << 6 |
               (uint)(byte)(&DAT_6378efe2)
                           [iVar25 + (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar25 + (&DAT_63790960)[*param_7]];
      local_c._0_2_ = (ushort)uVar15;
      uVar18 = ((uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63792180)[*param_8]] << 6 |
               (uint)(byte)(&DAT_6378efe2)
                           [iVar3 + (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7]]) << 5 |
               (uint)(byte)(&DAT_6378e5e4)[iVar3 + (&DAT_63790960)[*param_7]];
      uVar17 = (ushort)uVar18;
      local_14._0_2_ =
           ((ushort)((uVar15 ^ local_14) >> 1) & 0x7bef) + ((ushort)local_c & (ushort)local_14);
      uVar14 = ((ushort)((uVar18 ^ local_20) >> 1) & 0x7bef) + (uVar17 & (ushort)local_20);
      *puVar12 = (ushort)local_14;
      *param_2 = uVar14;
      while( true ) {
        iVar22 = iVar22 + -1;
        param_2 = param_2 + 1;
        puVar12 = puVar12 + 1;
        puVar21 = puVar12;
        uVar13 = (ushort)local_c;
        if ((iVar22 == 0) || (local_8 = local_8 + param_10 * -2, local_8 < 0)) break;
        *puVar12 = (ushort)local_14;
        *param_2 = uVar14;
      }
    }
  }
  goto LAB_637213cb;
}


