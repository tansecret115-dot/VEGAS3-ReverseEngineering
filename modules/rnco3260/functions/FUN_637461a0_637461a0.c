/* Module: rnco3260.dll
   Function: FUN_637461a0
   Address: 637461a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637461a0(byte *param_1,undefined1 *param_2,byte *param_3,undefined1 *param_4,byte *param_5,
            undefined4 param_6,int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11
            ,uint param_12,int param_13)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint uVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  uint uVar25;
  int iVar26;
  undefined1 *puVar27;
  byte *pbVar28;
  byte *pbVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  byte *pbVar32;
  byte *pbVar33;
  int local_38;
  uint local_34;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_18;
  uint local_14;
  int local_c;
  int local_8;
  
  local_c = param_7 >> 1;
  local_38 = param_7 * 3 - local_c;
  if ((param_13 + param_12 & 1) != 0) {
    local_38 = local_38 + param_7 * 2;
  }
  local_38 = local_38 / (param_13 * 2);
  if (param_7 == 0) {
    return;
  }
  pbVar22 = param_5;
  puVar31 = param_2;
  if (((param_12 & 1) == 0) && (1 < param_13)) {
    iVar9 = (&DAT_63790960)[*param_10];
    iVar10 = (&DAT_63792180)[*param_11];
    iVar26 = (&DAT_637929a0)[*param_11] + (&DAT_63791d80)[*param_10];
    iVar11 = (&DAT_63791580)[*param_8];
    iVar12 = (&DAT_63791580)[*param_9];
    iVar13 = (&DAT_63791580)[param_8[1]];
    iVar14 = (&DAT_63791580)[param_9[1]];
    uVar16 = (uint)(byte)(&DAT_63795aa0)
                         [((uint)(byte)(&DAT_6378dbec)[iVar11 + iVar10] << 4 |
                          (uint)(byte)(&DAT_6378dbec)[iVar11 + iVar26]) << 4 |
                          (uint)(byte)(&DAT_6378dbec)[iVar11 + iVar9]];
    uVar15 = (uint)(byte)(&DAT_63795aa0)
                         [((uint)(byte)(&DAT_6378dbe4)[iVar12 + iVar10] << 4 |
                          (uint)(byte)(&DAT_6378dbe4)[iVar12 + iVar26]) << 4 |
                          (uint)(byte)(&DAT_6378dbe4)[iVar12 + iVar9]];
    bVar1 = (&DAT_63795aa0)
            [((uint)(byte)(&DAT_6378dbe4)[iVar13 + iVar10] << 4 |
             (uint)(byte)(&DAT_6378dbe4)[iVar13 + iVar26]) << 4 |
             (uint)(byte)(&DAT_6378dbe4)[iVar13 + iVar9]];
    bVar2 = (&DAT_63795aa0)
            [((uint)(byte)(&DAT_6378dbec)[iVar14 + iVar10] << 4 |
             (uint)(byte)(&DAT_6378dbec)[iVar14 + iVar26]) << 4 |
             (uint)(byte)(&DAT_6378dbec)[iVar14 + iVar9]];
    param_8 = param_8 + 2;
    param_9 = param_9 + 2;
    param_10 = param_10 + 1;
    local_8 = param_7 - local_38;
    param_11 = param_11 + 1;
    if (0 < local_8) {
      while( true ) {
        local_14 = (uint)bVar1;
        local_18 = (uint)bVar2;
        uVar21 = (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2);
        uVar17 = (uint)*param_1;
        uVar18 = (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1);
        uVar7 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) + uVar18 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2) + uVar21) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar17) + (uint)*(byte *)(&DAT_637956a0 + uVar16)
                 & 0x1e0) << 3];
        param_1 = param_1 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar18 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar21) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar16)
                 & 0x1e0) << 3];
        *param_2 = uVar7;
        *param_3 = (byte)uVar16;
        param_3 = param_3 + 1;
        *param_4 = uVar8;
        param_4 = param_4 + 1;
        *param_5 = (byte)uVar15;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        pbVar22 = param_5;
        puVar31 = param_2 + 1;
        puVar27 = param_2 + 1;
        if (local_8 == 0) break;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          param_1 = param_1 + 1;
          puVar31 = puVar27 + 1;
          *puVar27 = uVar7;
          *param_3 = (byte)uVar16;
          param_3 = param_3 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          *param_5 = (byte)uVar15;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          puVar27 = puVar31;
          if (local_8 == 0) {
            local_8 = 0;
            pbVar22 = param_5;
            goto LAB_63747142;
          }
        }
        local_c = local_c + param_7;
        bVar2 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_14) +
                  (uint)*(byte *)(&DAT_637956a0 + uVar16) & 0x1e0) << 3];
        local_2c = (uint)bVar2;
        uVar16 = (uint)*param_1;
        uVar17 = (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 1);
        uVar18 = (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 2);
        uVar7 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) + uVar17 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2) + uVar18) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar16) +
                  (uint)*(byte *)(&DAT_637956a0 + local_2c) & 0x1e0) << 3];
        bVar1 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_18) +
                  (uint)*(byte *)(&DAT_637956a0 + uVar15) & 0x1e0) << 3];
        local_34 = (uint)bVar1;
        param_1 = param_1 + 1;
        param_2 = puVar27 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + local_34 * 4 + 1) + uVar17 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + local_34 * 4 + 2) + uVar18) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_34) +
                  (uint)*(byte *)(&DAT_637956a0 + local_2c) & 0x1e0) << 3];
        *puVar27 = uVar7;
        *param_3 = bVar2;
        param_3 = param_3 + 1;
        *param_4 = uVar8;
        param_4 = param_4 + 1;
        *param_5 = bVar1;
        local_8 = local_8 + -1;
        pbVar22 = param_5 + 1;
        param_5 = param_5 + 1;
        puVar31 = param_2;
        uVar15 = local_18;
        uVar16 = local_14;
        if (local_8 == 0) break;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          *param_2 = uVar7;
          *param_3 = bVar2;
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          param_3 = param_3 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          pbVar22 = param_5 + 1;
          *param_5 = bVar1;
          local_8 = local_8 + -1;
          param_5 = pbVar22;
          if (local_8 == 0) {
            local_8 = 0;
            puVar31 = param_2;
            goto LAB_63747142;
          }
        }
        local_c = local_c + param_7;
        pbVar24 = param_3;
LAB_63746469:
        uVar15 = (uint)*param_1;
        uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1);
        uVar17 = (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2);
        uVar7 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar17) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) +
                  (uint)*(byte *)(&DAT_637956a0 + local_14) & 0x1e0) << 3];
        param_1 = param_1 + 1;
        puVar27 = param_2 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 1) + uVar16 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 2) + uVar17) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_18) +
                  (uint)*(byte *)(&DAT_637956a0 + local_14) & 0x1e0) << 3];
        *param_2 = uVar7;
        *pbVar24 = (byte)local_14;
        param_3 = pbVar24 + 1;
        *param_4 = uVar8;
        *param_5 = (byte)local_18;
        param_4 = param_4 + 1;
        pbVar19 = param_5 + 1;
        local_8 = local_8 + -1;
        pbVar22 = pbVar19;
        pbVar32 = param_3;
        pbVar28 = param_8;
        pbVar23 = param_9;
        pbVar33 = param_10;
        pbVar29 = param_11;
        if (local_8 == 0) {
LAB_63746e49:
          param_11 = pbVar29;
          param_10 = pbVar33;
          param_9 = pbVar23;
          param_8 = pbVar28;
          param_5 = pbVar19;
          pbVar22 = param_5;
          puVar31 = puVar27;
          uVar15 = local_18;
          uVar16 = local_14;
          if ((param_13 + param_12 & 1) != 0) {
            local_8 = local_8 + (local_38 >> 1);
            local_38 = local_38 - (local_38 >> 1);
            if (0 < local_8) {
              iVar9 = (&DAT_63791580)[*param_8];
              iVar10 = (&DAT_63791580)[*param_9];
              uVar16 = (uint)(byte)(&DAT_63795aa0)
                                   [((uint)(byte)(&DAT_6378dbe8)[iVar9 + (&DAT_63792180)[*param_11]]
                                     << 4 | (uint)(byte)(&DAT_6378dbe8)
                                                        [iVar9 + (&DAT_637929a0)[*param_11] +
                                                                 (&DAT_63791d80)[*param_10]]) << 4 |
                                    (uint)(byte)(&DAT_6378dbe8)[iVar9 + (&DAT_63790960)[*param_10]]]
              ;
              uVar15 = (uint)(byte)(&DAT_63795aa0)
                                   [((uint)(byte)(&DAT_6378dbe8)
                                                 [iVar10 + (&DAT_63792180)[*param_11]] << 4 |
                                    (uint)(byte)(&DAT_6378dbe8)
                                                [iVar10 + (&DAT_637929a0)[*param_11] +
                                                          (&DAT_63791d80)[*param_10]]) << 4 |
                                    (uint)(byte)(&DAT_6378dbe8)[iVar10 + (&DAT_63790960)[*param_10]]
                                   ];
              bVar2 = (&DAT_63795aa0)
                      [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) +
                             (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 1) & 0x1e0 |
                            (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2) +
                                 (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 2)) >> 4) >> 1
                       | ((uint)*(byte *)(&DAT_637956a0 + uVar16) +
                          (uint)*(byte *)(&DAT_637956a0 + local_2c) & 0x1e0) << 3];
              uVar17 = (uint)bVar2;
              uVar25 = (uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2);
              uVar18 = (uint)*param_1;
              uVar21 = (uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1);
              uVar7 = (&DAT_63795aa0)
                      [(int)(*(byte *)((int)&DAT_637956a0 + uVar18 * 4 + 1) + uVar21 & 0x1e0 |
                            (int)(*(byte *)((int)&DAT_637956a0 + uVar18 * 4 + 2) + uVar25) >> 4) >>
                       1 | ((uint)*(byte *)(&DAT_637956a0 + uVar18) +
                            (uint)*(byte *)(&DAT_637956a0 + uVar17) & 0x1e0) << 3];
              bVar1 = (&DAT_63795aa0)
                      [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) +
                             (uint)*(byte *)((int)&DAT_637956a0 + local_34 * 4 + 1) & 0x1e0 |
                            (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) +
                                 (uint)*(byte *)((int)&DAT_637956a0 + local_34 * 4 + 2)) >> 4) >> 1
                       | ((uint)*(byte *)(&DAT_637956a0 + uVar15) +
                          (uint)*(byte *)(&DAT_637956a0 + local_34) & 0x1e0) << 3];
              uVar18 = (uint)bVar1;
              param_1 = param_1 + 1;
              puVar31 = puVar27 + 1;
              uVar8 = (&DAT_63795aa0)
                      [(int)(*(byte *)((int)&DAT_637956a0 + uVar18 * 4 + 1) + uVar21 & 0x1e0 |
                            (int)(*(byte *)((int)&DAT_637956a0 + uVar18 * 4 + 2) + uVar25) >> 4) >>
                       1 | ((uint)*(byte *)(&DAT_637956a0 + uVar18) +
                            (uint)*(byte *)(&DAT_637956a0 + uVar17) & 0x1e0) << 3];
              *puVar27 = uVar7;
              *param_3 = bVar2;
              param_3 = param_3 + 1;
              *param_4 = uVar8;
              param_4 = param_4 + 1;
              *param_5 = bVar1;
              local_8 = local_8 + -1;
              pbVar22 = param_5 + 1;
              pbVar24 = param_5 + 1;
              if (local_8 != 0) goto LAB_637470ff;
            }
          }
          break;
        }
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          *puVar27 = uVar7;
          *pbVar32 = (byte)local_14;
          param_1 = param_1 + 1;
          puVar27 = puVar27 + 1;
          pbVar32 = pbVar32 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          pbVar20 = pbVar22 + 1;
          *pbVar22 = (byte)local_18;
          local_8 = local_8 + -1;
          pbVar22 = pbVar20;
          if (local_8 == 0) {
            local_8 = 0;
            param_3 = pbVar32;
            pbVar19 = pbVar20;
            goto LAB_63746e49;
          }
        }
        local_c = local_c + param_7;
        iVar9 = (&DAT_63790960)[*param_10];
        iVar10 = (&DAT_63792180)[*param_11];
        iVar26 = (&DAT_637929a0)[*param_11] + (&DAT_63791d80)[*param_10];
        iVar11 = (&DAT_63791580)[*param_8];
        iVar12 = (&DAT_63791580)[*param_9];
        iVar13 = (&DAT_63791580)[param_8[1]];
        iVar14 = (&DAT_63791580)[param_9[1]];
        bVar2 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbec)[iVar11 + iVar10] << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar11 + iVar26]) << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar11 + iVar9]];
        uVar16 = (uint)bVar2;
        bVar1 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar12 + iVar10] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar12 + iVar26]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar12 + iVar9]];
        uVar15 = (uint)bVar1;
        bVar3 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar13 + iVar10] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar13 + iVar26]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar13 + iVar9]];
        local_2c = (uint)bVar3;
        bVar4 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbec)[iVar14 + iVar10] << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar14 + iVar26]) << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar14 + iVar9]];
        local_34 = (uint)bVar4;
        pbVar28 = param_8 + 2;
        pbVar23 = param_9 + 2;
        pbVar33 = param_10 + 1;
        pbVar29 = param_11 + 1;
        bVar5 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar16) +
                  (uint)*(byte *)(&DAT_637956a0 + local_14) & 0x1e0) << 3];
        local_14 = (uint)bVar5;
        uVar17 = (uint)*param_1;
        uVar18 = (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1);
        uVar21 = (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2);
        uVar7 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) + uVar18 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2) + uVar21) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar17) +
                  (uint)*(byte *)(&DAT_637956a0 + local_14) & 0x1e0) << 3];
        bVar6 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) +
                  (uint)*(byte *)(&DAT_637956a0 + local_18) & 0x1e0) << 3];
        local_18 = (uint)bVar6;
        param_1 = param_1 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 1) + uVar18 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 2) + uVar21) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_18) +
                  (uint)*(byte *)(&DAT_637956a0 + local_14) & 0x1e0) << 3];
        *puVar27 = uVar7;
        *param_3 = bVar5;
        param_3 = pbVar24 + 2;
        *param_4 = uVar8;
        param_4 = param_4 + 1;
        *pbVar19 = bVar6;
        param_5 = param_5 + 2;
        local_8 = local_8 + -1;
        puVar30 = puVar27 + 1;
        pbVar32 = param_3;
        if (local_8 == 0) {
          local_8 = 0;
          pbVar22 = param_5;
          puVar31 = puVar27 + 1;
          uVar15 = local_18;
          uVar16 = local_14;
          break;
        }
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          param_1 = param_1 + 1;
          puVar31 = puVar30 + 1;
          *puVar30 = uVar7;
          *pbVar32 = bVar5;
          pbVar32 = pbVar32 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          *param_5 = bVar6;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          puVar30 = puVar31;
          if (local_8 == 0) {
            local_8 = 0;
            pbVar22 = param_5;
            param_3 = pbVar32;
            uVar15 = local_18;
            uVar16 = local_14;
            goto LAB_63747142;
          }
        }
        local_c = local_c + param_7;
        uVar17 = (uint)*param_1;
        uVar18 = (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1);
        uVar21 = (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2);
        uVar7 = (&DAT_63795aa0)
                [(int)((int)(*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2) + uVar21) >> 4 |
                      *(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) + uVar18 & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar17) + (uint)*(byte *)(&DAT_637956a0 + uVar16)
                 & 0x1e0) << 3];
        param_1 = param_1 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar18 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar21) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar16)
                 & 0x1e0) << 3];
        *puVar30 = uVar7;
        *param_3 = bVar2;
        *param_4 = uVar8;
        param_3 = pbVar24 + 3;
        param_4 = param_4 + 1;
        *param_5 = bVar1;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        pbVar22 = param_5;
        puVar31 = puVar30 + 1;
        puVar27 = puVar30 + 1;
        if (local_8 == 0) break;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          param_1 = param_1 + 1;
          puVar31 = puVar27 + 1;
          *puVar27 = uVar7;
          *param_3 = bVar2;
          param_3 = param_3 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          *param_5 = bVar1;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          puVar27 = puVar31;
          if (local_8 == 0) {
            local_8 = 0;
            pbVar22 = param_5;
            goto LAB_63747142;
          }
        }
        local_c = local_c + param_7;
        bVar2 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_2c) +
                  (uint)*(byte *)(&DAT_637956a0 + uVar16) & 0x1e0) << 3];
        uVar16 = (uint)bVar2;
        uVar17 = (uint)*param_1;
        uVar18 = (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1);
        uVar21 = (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2);
        uVar7 = (&DAT_63795aa0)
                [(int)((int)(*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2) + uVar21) >> 4 |
                      *(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) + uVar18 & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar17) + (uint)*(byte *)(&DAT_637956a0 + uVar16)
                 & 0x1e0) << 3];
        bVar1 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + local_34 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + local_34 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_34) +
                  (uint)*(byte *)(&DAT_637956a0 + uVar15) & 0x1e0) << 3];
        uVar15 = (uint)bVar1;
        pbVar24 = param_1 + 1;
        puVar31 = puVar27 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar18 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar21) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar16)
                 & 0x1e0) << 3];
        *puVar27 = uVar7;
        *param_3 = bVar2;
        pbVar32 = param_3 + 1;
        *param_4 = uVar8;
        param_4 = param_4 + 1;
        *param_5 = bVar1;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        local_28 = local_2c;
        local_24 = local_34;
        if (local_8 == 0) {
LAB_637475e5:
          local_14 = local_28;
          local_18 = local_24;
          pbVar22 = param_5;
          param_1 = pbVar24;
          param_3 = pbVar32;
          uVar15 = local_18;
          uVar16 = local_14;
          break;
        }
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          *puVar31 = uVar7;
          *pbVar32 = bVar2;
          pbVar24 = pbVar24 + 1;
          puVar31 = puVar31 + 1;
          pbVar32 = pbVar32 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          pbVar22 = param_5 + 1;
          *param_5 = bVar1;
          local_8 = local_8 + -1;
          param_5 = pbVar22;
          if (local_8 == 0) {
            local_8 = 0;
            param_1 = pbVar24;
            param_3 = pbVar32;
            uVar15 = local_34;
            uVar16 = local_2c;
            goto LAB_63747142;
          }
        }
        local_c = local_c + param_7;
        uVar15 = (uint)*pbVar24;
        uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 1);
        uVar17 = (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 2);
        uVar7 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar17) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) +
                  (uint)*(byte *)(&DAT_637956a0 + local_2c) & 0x1e0) << 3];
        param_1 = param_1 + 2;
        puVar27 = puVar31 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + local_34 * 4 + 1) + uVar16 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + local_34 * 4 + 2) + uVar17) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_34) +
                  (uint)*(byte *)(&DAT_637956a0 + local_2c) & 0x1e0) << 3];
        *puVar31 = uVar7;
        *pbVar32 = bVar3;
        pbVar20 = pbVar32 + 1;
        *param_4 = uVar8;
        param_4 = param_4 + 1;
        *param_5 = bVar4;
        pbVar19 = param_5 + 1;
        local_8 = local_8 + -1;
        pbVar22 = pbVar19;
        param_3 = pbVar20;
        if (local_8 == 0) goto LAB_63746e49;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          *puVar27 = uVar7;
          *param_3 = bVar3;
          param_1 = param_1 + 1;
          puVar27 = puVar27 + 1;
          param_3 = param_3 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          *pbVar22 = bVar4;
          pbVar22 = pbVar22 + 1;
          local_8 = local_8 + -1;
          if (local_8 == 0) {
            local_8 = 0;
            pbVar19 = pbVar22;
            goto LAB_63746e49;
          }
        }
        local_c = local_c + param_7;
        iVar9 = (&DAT_63790960)[*pbVar33];
        iVar10 = (&DAT_63792180)[*pbVar29];
        iVar26 = (&DAT_637929a0)[*pbVar29] + (&DAT_63791d80)[*pbVar33];
        iVar11 = (&DAT_63791580)[*pbVar28];
        iVar12 = (&DAT_63791580)[*pbVar23];
        iVar13 = (&DAT_63791580)[param_8[3]];
        iVar14 = (&DAT_63791580)[param_9[3]];
        uVar16 = (uint)(byte)(&DAT_63795aa0)
                             [((uint)(byte)(&DAT_6378dbec)[iVar11 + iVar10] << 4 |
                              (uint)(byte)(&DAT_6378dbec)[iVar11 + iVar26]) << 4 |
                              (uint)(byte)(&DAT_6378dbec)[iVar11 + iVar9]];
        uVar15 = (uint)(byte)(&DAT_63795aa0)
                             [((uint)(byte)(&DAT_6378dbe4)[iVar12 + iVar10] << 4 |
                              (uint)(byte)(&DAT_6378dbe4)[iVar12 + iVar26]) << 4 |
                              (uint)(byte)(&DAT_6378dbe4)[iVar12 + iVar9]];
        bVar1 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar13 + iVar10] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar13 + iVar26]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar13 + iVar9]];
        bVar2 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbec)[iVar14 + iVar10] << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar14 + iVar26]) << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar14 + iVar9]];
        param_8 = param_8 + 4;
        param_9 = param_9 + 4;
        param_10 = param_10 + 2;
        param_11 = param_11 + 2;
        bVar3 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar16) +
                  (uint)*(byte *)(&DAT_637956a0 + local_2c) & 0x1e0) << 3];
        local_28 = (uint)bVar3;
        uVar17 = (uint)*param_1;
        uVar18 = (uint)*(byte *)((int)&DAT_637956a0 + local_28 * 4 + 1);
        uVar21 = (uint)*(byte *)((int)&DAT_637956a0 + local_28 * 4 + 2);
        uVar7 = (&DAT_63795aa0)
                [(int)((int)(*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2) + uVar21) >> 4 |
                      *(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) + uVar18 & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar17) +
                  (uint)*(byte *)(&DAT_637956a0 + local_28) & 0x1e0) << 3];
        bVar4 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + local_34 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + local_34 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) +
                  (uint)*(byte *)(&DAT_637956a0 + local_34) & 0x1e0) << 3];
        local_24 = (uint)bVar4;
        pbVar24 = param_1 + 1;
        puVar31 = puVar27 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 1) + uVar18 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 2) + uVar21) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_24) +
                  (uint)*(byte *)(&DAT_637956a0 + local_28) & 0x1e0) << 3];
        *puVar27 = uVar7;
        *pbVar20 = bVar3;
        pbVar32 = pbVar32 + 2;
        *param_4 = uVar8;
        param_4 = param_4 + 1;
        *pbVar19 = bVar4;
        param_5 = param_5 + 2;
        local_8 = local_8 + -1;
        param_2 = puVar31;
        param_1 = pbVar24;
        if (local_8 == 0) goto LAB_637475e5;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          pbVar24 = param_1 + 1;
          puVar31 = param_2 + 1;
          *param_2 = uVar7;
          *pbVar32 = bVar3;
          pbVar32 = pbVar32 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          *param_5 = bVar4;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          param_2 = puVar31;
          param_1 = pbVar24;
          if (local_8 == 0) {
            local_8 = 0;
            goto LAB_637475e5;
          }
        }
        local_c = local_c + param_7;
        param_3 = pbVar32;
      }
    }
  }
  else {
    local_34 = (&DAT_63792180)[*param_11];
    iVar9 = (&DAT_63791580)[*param_8];
    iVar10 = (&DAT_63791580)[*param_9];
    local_14 = (uint)(byte)(&DAT_63795aa0)
                           [((uint)(byte)(&DAT_6378dbe8)[iVar9 + local_34] << 4 |
                            (uint)(byte)(&DAT_6378dbe8)
                                        [iVar9 + (&DAT_637929a0)[*param_11] +
                                                 (&DAT_63791d80)[*param_10]]) << 4 |
                            (uint)(byte)(&DAT_6378dbe8)[iVar9 + (&DAT_63790960)[*param_10]]];
    local_18 = (uint)(byte)(&DAT_63795aa0)
                           [((uint)(byte)(&DAT_6378dbe8)[iVar10 + local_34] << 4 |
                            (uint)(byte)(&DAT_6378dbe8)
                                        [iVar10 + (&DAT_637929a0)[*param_11] +
                                                  (&DAT_63791d80)[*param_10]]) << 4 |
                            (uint)(byte)(&DAT_6378dbe8)[iVar10 + (&DAT_63790960)[*param_10]]];
    param_8 = param_8 + 1;
    param_9 = param_9 + 1;
    param_10 = param_10 + 1;
    param_11 = param_11 + 1;
    local_8 = param_7 - local_38;
    pbVar24 = param_3;
    uVar15 = local_18;
    uVar16 = local_14;
    if (0 < local_8) goto LAB_63746469;
  }
  goto LAB_63747142;
  while( true ) {
    *puVar31 = uVar7;
    *param_3 = bVar2;
    param_1 = param_1 + 1;
    puVar31 = puVar31 + 1;
    param_3 = param_3 + 1;
    *param_4 = uVar8;
    param_4 = param_4 + 1;
    pbVar22 = pbVar24 + 1;
    *pbVar24 = bVar1;
    local_8 = local_8 + -1;
    pbVar24 = pbVar22;
    if (local_8 == 0) break;
LAB_637470ff:
    local_c = local_c + param_13 * -2;
    pbVar22 = pbVar24;
    if (local_c < 0) break;
  }
LAB_63747142:
  local_14 = uVar16;
  local_18 = uVar15;
  uVar15 = (uint)*param_1;
  uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1);
  uVar17 = (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2);
  uVar7 = (&DAT_63795aa0)
          [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0 |
                (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar17) >> 4) >> 1 |
           ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + local_14) &
           0x1e0) << 3];
  uVar8 = (&DAT_63795aa0)
          [(int)(*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 1) + uVar16 & 0x1e0 |
                (int)(*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 2) + uVar17) >> 4) >> 1 |
           ((uint)*(byte *)(&DAT_637956a0 + local_18) + (uint)*(byte *)(&DAT_637956a0 + local_14) &
           0x1e0) << 3];
  for (local_8 = local_8 + local_38; local_8 != 0; local_8 = local_8 + -1) {
    *puVar31 = uVar7;
    *param_3 = (byte)local_14;
    puVar31 = puVar31 + 1;
    *param_4 = uVar8;
    param_3 = param_3 + 1;
    *pbVar22 = (byte)local_18;
    param_4 = param_4 + 1;
    pbVar22 = pbVar22 + 1;
  }
  return;
}


