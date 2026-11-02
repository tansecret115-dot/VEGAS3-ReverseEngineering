/* Module: rnco3260.dll
   Function: FUN_6375af60
   Address: 6375af60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6375af60(byte *param_1,undefined1 *param_2,byte *param_3,undefined1 *param_4,byte *param_5,
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
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint uVar24;
  int iVar25;
  undefined1 *puVar26;
  byte *pbVar27;
  byte *pbVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  int iVar31;
  byte *pbVar32;
  byte *pbVar33;
  int local_38;
  uint local_30;
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
  pbVar21 = param_5;
  puVar30 = param_2;
  if (((param_12 & 1) == 0) && (1 < param_13)) {
    bVar1 = *param_10;
    bVar2 = *param_11;
    iVar25 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
    iVar17 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
    iVar31 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
    iVar9 = (&DAT_63791580)[*param_8];
    iVar10 = (&DAT_63791580)[*param_9];
    iVar11 = (&DAT_63791580)[param_8[1]];
    iVar12 = (&DAT_63791580)[param_9[1]];
    uVar14 = (uint)(byte)(&DAT_63795aa0)
                         [((uint)(byte)(&DAT_6378dbec)[iVar9 + iVar31] << 4 |
                          (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar25]) << 4 |
                          (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar17]];
    uVar13 = (uint)(byte)(&DAT_63795aa0)
                         [((uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar31] << 4 |
                          (uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar25]) << 4 |
                          (uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar17]];
    bVar1 = (&DAT_63795aa0)
            [((uint)(byte)(&DAT_6378dbe4)[iVar11 + iVar31] << 4 |
             (uint)(byte)(&DAT_6378dbe4)[iVar11 + iVar25]) << 4 |
             (uint)(byte)(&DAT_6378dbe4)[iVar11 + iVar17]];
    bVar2 = (&DAT_63795aa0)
            [((uint)(byte)(&DAT_6378dbec)[iVar12 + iVar31] << 4 |
             (uint)(byte)(&DAT_6378dbec)[iVar12 + iVar25]) << 4 |
             (uint)(byte)(&DAT_6378dbec)[iVar12 + iVar17]];
    param_8 = param_8 + 2;
    param_9 = param_9 + 2;
    param_10 = param_10 + 1;
    local_8 = param_7 - local_38;
    param_11 = param_11 + 1;
    if (0 < local_8) {
      while( true ) {
        local_14 = (uint)bVar1;
        local_18 = (uint)bVar2;
        uVar15 = (uint)*param_1;
        uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1);
        uVar20 = (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2);
        uVar7 = (&DAT_63795aa0)
                [(int)((int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar20) >> 4 |
                      *(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar14)
                 & 0x1e0) << 3];
        param_1 = param_1 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) + uVar16 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) + uVar20) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar13) + (uint)*(byte *)(&DAT_637956a0 + uVar14)
                 & 0x1e0) << 3];
        *param_2 = uVar7;
        *param_3 = (byte)uVar14;
        param_3 = param_3 + 1;
        *param_4 = uVar8;
        param_4 = param_4 + 1;
        *param_5 = (byte)uVar13;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        pbVar21 = param_5;
        puVar30 = param_2 + 1;
        puVar26 = param_2 + 1;
        if (local_8 == 0) break;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          param_1 = param_1 + 1;
          puVar30 = puVar26 + 1;
          *puVar26 = uVar7;
          *param_3 = (byte)uVar14;
          param_3 = param_3 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          *param_5 = (byte)uVar13;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          puVar26 = puVar30;
          if (local_8 == 0) {
            local_8 = 0;
            pbVar21 = param_5;
            goto LAB_6375bf4c;
          }
        }
        local_c = local_c + param_7;
        bVar1 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_14) +
                  (uint)*(byte *)(&DAT_637956a0 + uVar14) & 0x1e0) << 3];
        local_2c = (uint)bVar1;
        uVar14 = (uint)*param_1;
        uVar15 = (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 1);
        uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 2);
        uVar7 = (&DAT_63795aa0)
                [(int)((int)(*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2) + uVar16) >> 4 |
                      *(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) + uVar15 & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar14) +
                  (uint)*(byte *)(&DAT_637956a0 + local_2c) & 0x1e0) << 3];
        bVar2 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_18) +
                  (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
        local_30 = (uint)bVar2;
        param_1 = param_1 + 1;
        param_2 = puVar26 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + local_30 * 4 + 1) + uVar15 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + local_30 * 4 + 2) + uVar16) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_30) +
                  (uint)*(byte *)(&DAT_637956a0 + local_2c) & 0x1e0) << 3];
        *puVar26 = uVar7;
        *param_3 = bVar1;
        param_3 = param_3 + 1;
        *param_4 = uVar8;
        param_4 = param_4 + 1;
        *param_5 = bVar2;
        local_8 = local_8 + -1;
        pbVar21 = param_5 + 1;
        param_5 = param_5 + 1;
        puVar30 = param_2;
        uVar13 = local_18;
        uVar14 = local_14;
        if (local_8 == 0) break;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          *param_2 = uVar7;
          *param_3 = bVar1;
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          param_3 = param_3 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          pbVar21 = param_5 + 1;
          *param_5 = bVar2;
          local_8 = local_8 + -1;
          param_5 = pbVar21;
          if (local_8 == 0) {
            local_8 = 0;
            puVar30 = param_2;
            goto LAB_6375bf4c;
          }
        }
        local_c = local_c + param_7;
        pbVar23 = param_3;
LAB_6375b24e:
        uVar13 = (uint)*param_1;
        uVar14 = (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1);
        uVar15 = (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2);
        uVar7 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) + uVar14 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) + uVar15) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar13) +
                  (uint)*(byte *)(&DAT_637956a0 + local_14) & 0x1e0) << 3];
        param_1 = param_1 + 1;
        puVar26 = param_2 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 1) + uVar14 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 2) + uVar15) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_18) +
                  (uint)*(byte *)(&DAT_637956a0 + local_14) & 0x1e0) << 3];
        *param_2 = uVar7;
        *pbVar23 = (byte)local_14;
        param_3 = pbVar23 + 1;
        *param_4 = uVar8;
        *param_5 = (byte)local_18;
        param_4 = param_4 + 1;
        pbVar18 = param_5 + 1;
        local_8 = local_8 + -1;
        pbVar21 = pbVar18;
        pbVar32 = param_3;
        pbVar27 = param_8;
        pbVar22 = param_9;
        pbVar33 = param_10;
        pbVar28 = param_11;
        if (local_8 == 0) {
LAB_6375bc40:
          param_11 = pbVar28;
          param_10 = pbVar33;
          param_9 = pbVar22;
          param_8 = pbVar27;
          param_5 = pbVar18;
          pbVar21 = param_5;
          puVar30 = puVar26;
          uVar13 = local_18;
          uVar14 = local_14;
          if ((param_13 + param_12 & 1) != 0) {
            local_8 = local_8 + (local_38 >> 1);
            local_38 = local_38 - (local_38 >> 1);
            if (0 < local_8) {
              bVar1 = *param_10;
              bVar2 = *param_11;
              iVar9 = (&DAT_63791580)[*param_8];
              iVar10 = (&DAT_63791580)[*param_9];
              uVar14 = (uint)(byte)(&DAT_63795aa0)
                                   [((uint)(byte)(&DAT_6378dbe8)
                                                 [iVar9 + (&DAT_63792180)[bVar2] +
                                                          (&DAT_63791980)[bVar1]] << 4 |
                                    (uint)(byte)(&DAT_6378dbe8)
                                                [iVar9 + (&DAT_637929a0)[bVar2] +
                                                         (&DAT_63791d80)[bVar1]]) << 4 |
                                    (uint)(byte)(&DAT_6378dbe8)
                                                [iVar9 + (&DAT_63790d60)[bVar2] +
                                                         (&DAT_63790960)[bVar1]]];
              uVar13 = (uint)(byte)(&DAT_63795aa0)
                                   [((uint)(byte)(&DAT_6378dbe8)
                                                 [iVar10 + (&DAT_63792180)[bVar2] +
                                                           (&DAT_63791980)[bVar1]] << 4 |
                                    (uint)(byte)(&DAT_6378dbe8)
                                                [iVar10 + (&DAT_637929a0)[bVar2] +
                                                          (&DAT_63791d80)[bVar1]]) << 4 |
                                    (uint)(byte)(&DAT_6378dbe8)
                                                [iVar10 + (&DAT_63790d60)[bVar2] +
                                                          (&DAT_63790960)[bVar1]]];
              bVar1 = (&DAT_63795aa0)
                      [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 2) +
                                  (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4 |
                            (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 1) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) & 0x1e0) >> 1 |
                       ((uint)*(byte *)(&DAT_637956a0 + local_2c) +
                        (uint)*(byte *)(&DAT_637956a0 + uVar14) & 0x1e0) << 3];
              uVar15 = (uint)bVar1;
              uVar24 = (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2);
              uVar16 = (uint)*param_1;
              uVar20 = (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1);
              uVar7 = (&DAT_63795aa0)
                      [(int)((int)(*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2) + uVar24) >> 4 |
                            *(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) + uVar20 & 0x1e0) >> 1 |
                       ((uint)*(byte *)(&DAT_637956a0 + uVar16) +
                        (uint)*(byte *)(&DAT_637956a0 + uVar15) & 0x1e0) << 3];
              bVar2 = (&DAT_63795aa0)
                      [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + local_30 * 4 + 2) +
                                  (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4 |
                            (uint)*(byte *)((int)&DAT_637956a0 + local_30 * 4 + 1) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0) >> 1 |
                       ((uint)*(byte *)(&DAT_637956a0 + local_30) +
                        (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
              uVar16 = (uint)bVar2;
              param_1 = param_1 + 1;
              puVar30 = puVar26 + 1;
              uVar8 = (&DAT_63795aa0)
                      [(int)(*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) + uVar20 & 0x1e0 |
                            (int)(*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2) + uVar24) >> 4) >>
                       1 | ((uint)*(byte *)(&DAT_637956a0 + uVar16) +
                            (uint)*(byte *)(&DAT_637956a0 + uVar15) & 0x1e0) << 3];
              *puVar26 = uVar7;
              *param_3 = bVar1;
              param_3 = param_3 + 1;
              *param_4 = uVar8;
              param_4 = param_4 + 1;
              *param_5 = bVar2;
              local_8 = local_8 + -1;
              pbVar21 = param_5 + 1;
              pbVar23 = param_5 + 1;
              if (local_8 != 0) goto LAB_6375bf09;
            }
          }
          break;
        }
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          *puVar26 = uVar7;
          *pbVar32 = (byte)local_14;
          param_1 = param_1 + 1;
          puVar26 = puVar26 + 1;
          pbVar32 = pbVar32 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          pbVar19 = pbVar21 + 1;
          *pbVar21 = (byte)local_18;
          local_8 = local_8 + -1;
          pbVar21 = pbVar19;
          if (local_8 == 0) {
            local_8 = 0;
            param_3 = pbVar32;
            pbVar18 = pbVar19;
            goto LAB_6375bc40;
          }
        }
        bVar1 = *param_10;
        local_c = local_c + param_7;
        bVar2 = *param_11;
        iVar25 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
        iVar31 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
        iVar17 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
        iVar9 = (&DAT_63791580)[*param_8];
        iVar10 = (&DAT_63791580)[*param_9];
        iVar11 = (&DAT_63791580)[param_8[1]];
        iVar12 = (&DAT_63791580)[param_9[1]];
        bVar1 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbec)[iVar9 + iVar31] << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar25]) << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar17]];
        uVar14 = (uint)bVar1;
        bVar2 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar31] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar25]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar17]];
        uVar13 = (uint)bVar2;
        bVar3 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar11 + iVar31] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar11 + iVar25]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar11 + iVar17]];
        local_2c = (uint)bVar3;
        bVar4 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbec)[iVar12 + iVar31] << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar12 + iVar25]) << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar12 + iVar17]];
        local_30 = (uint)bVar4;
        pbVar27 = param_8 + 2;
        pbVar22 = param_9 + 2;
        pbVar33 = param_10 + 1;
        pbVar28 = param_11 + 1;
        bVar5 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar14) +
                  (uint)*(byte *)(&DAT_637956a0 + local_14) & 0x1e0) << 3];
        local_14 = (uint)bVar5;
        uVar15 = (uint)*param_1;
        uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1);
        uVar20 = (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2);
        uVar7 = (&DAT_63795aa0)
                [(int)((int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar20) >> 4 |
                      *(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) +
                  (uint)*(byte *)(&DAT_637956a0 + local_14) & 0x1e0) << 3];
        bVar6 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar13) +
                  (uint)*(byte *)(&DAT_637956a0 + local_18) & 0x1e0) << 3];
        local_18 = (uint)bVar6;
        param_1 = param_1 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 1) + uVar16 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 2) + uVar20) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_18) +
                  (uint)*(byte *)(&DAT_637956a0 + local_14) & 0x1e0) << 3];
        *puVar26 = uVar7;
        *param_3 = bVar5;
        param_3 = pbVar23 + 2;
        *param_4 = uVar8;
        param_4 = param_4 + 1;
        param_5 = param_5 + 2;
        *pbVar18 = bVar6;
        local_8 = local_8 + -1;
        puVar29 = puVar26 + 1;
        pbVar32 = param_3;
        if (local_8 == 0) {
          local_8 = 0;
          pbVar21 = param_5;
          puVar30 = puVar26 + 1;
          uVar13 = local_18;
          uVar14 = local_14;
          break;
        }
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          param_1 = param_1 + 1;
          puVar30 = puVar29 + 1;
          *puVar29 = uVar7;
          *pbVar32 = bVar5;
          pbVar32 = pbVar32 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          *param_5 = bVar6;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          puVar29 = puVar30;
          if (local_8 == 0) {
            local_8 = 0;
            pbVar21 = param_5;
            param_3 = pbVar32;
            uVar13 = local_18;
            uVar14 = local_14;
            goto LAB_6375bf4c;
          }
        }
        local_c = local_c + param_7;
        uVar20 = (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2);
        uVar15 = (uint)*param_1;
        uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1);
        uVar7 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar20) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar14)
                 & 0x1e0) << 3];
        param_1 = param_1 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) + uVar16 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) + uVar20) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar13) + (uint)*(byte *)(&DAT_637956a0 + uVar14)
                 & 0x1e0) << 3];
        *puVar29 = uVar7;
        *param_3 = bVar1;
        *param_4 = uVar8;
        param_3 = pbVar23 + 3;
        param_4 = param_4 + 1;
        *param_5 = bVar2;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        pbVar21 = param_5;
        puVar30 = puVar29 + 1;
        puVar26 = puVar29 + 1;
        if (local_8 == 0) break;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          param_1 = param_1 + 1;
          puVar30 = puVar26 + 1;
          *puVar26 = uVar7;
          *param_3 = bVar1;
          param_3 = param_3 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          *param_5 = bVar2;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          puVar26 = puVar30;
          if (local_8 == 0) {
            local_8 = 0;
            pbVar21 = param_5;
            goto LAB_6375bf4c;
          }
        }
        local_c = local_c + param_7;
        bVar1 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_2c) +
                  (uint)*(byte *)(&DAT_637956a0 + uVar14) & 0x1e0) << 3];
        uVar14 = (uint)bVar1;
        uVar15 = (uint)*param_1;
        uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1);
        uVar20 = (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2);
        uVar7 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar20) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar14)
                 & 0x1e0) << 3];
        bVar2 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_30 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + local_30 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_30) +
                  (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
        uVar13 = (uint)bVar2;
        pbVar23 = param_1 + 1;
        puVar30 = puVar26 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) + uVar16 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) + uVar20) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar13) + (uint)*(byte *)(&DAT_637956a0 + uVar14)
                 & 0x1e0) << 3];
        *puVar26 = uVar7;
        *param_3 = bVar1;
        pbVar32 = param_3 + 1;
        *param_4 = uVar8;
        param_4 = param_4 + 1;
        *param_5 = bVar2;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        local_28 = local_2c;
        local_24 = local_30;
        if (local_8 == 0) {
LAB_6375c401:
          local_14 = local_28;
          local_18 = local_24;
          pbVar21 = param_5;
          param_1 = pbVar23;
          param_3 = pbVar32;
          uVar13 = local_18;
          uVar14 = local_14;
          break;
        }
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          *puVar30 = uVar7;
          *pbVar32 = bVar1;
          pbVar23 = pbVar23 + 1;
          puVar30 = puVar30 + 1;
          pbVar32 = pbVar32 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          pbVar21 = param_5 + 1;
          *param_5 = bVar2;
          local_8 = local_8 + -1;
          param_5 = pbVar21;
          if (local_8 == 0) {
            local_8 = 0;
            param_1 = pbVar23;
            param_3 = pbVar32;
            uVar13 = local_30;
            uVar14 = local_2c;
            goto LAB_6375bf4c;
          }
        }
        local_c = local_c + param_7;
        uVar13 = (uint)*pbVar23;
        uVar14 = (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 1);
        uVar15 = (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 2);
        uVar7 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) + uVar14 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) + uVar15) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar13) +
                  (uint)*(byte *)(&DAT_637956a0 + local_2c) & 0x1e0) << 3];
        param_1 = param_1 + 2;
        puVar26 = puVar30 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + local_30 * 4 + 1) + uVar14 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + local_30 * 4 + 2) + uVar15) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_30) +
                  (uint)*(byte *)(&DAT_637956a0 + local_2c) & 0x1e0) << 3];
        *puVar30 = uVar7;
        *pbVar32 = bVar3;
        pbVar19 = pbVar32 + 1;
        *param_4 = uVar8;
        param_4 = param_4 + 1;
        *param_5 = bVar4;
        pbVar18 = param_5 + 1;
        local_8 = local_8 + -1;
        pbVar21 = pbVar18;
        param_3 = pbVar19;
        if (local_8 == 0) goto LAB_6375bc40;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          *puVar26 = uVar7;
          *param_3 = bVar3;
          param_1 = param_1 + 1;
          puVar26 = puVar26 + 1;
          param_3 = param_3 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          *pbVar21 = bVar4;
          pbVar21 = pbVar21 + 1;
          local_8 = local_8 + -1;
          if (local_8 == 0) {
            local_8 = 0;
            pbVar18 = pbVar21;
            goto LAB_6375bc40;
          }
        }
        bVar1 = *pbVar33;
        local_c = local_c + param_7;
        bVar2 = *pbVar28;
        iVar25 = (&DAT_637929a0)[bVar2] + (&DAT_63791d80)[bVar1];
        iVar31 = (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1];
        iVar17 = (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1];
        iVar9 = (&DAT_63791580)[*pbVar27];
        iVar10 = (&DAT_63791580)[*pbVar22];
        iVar11 = (&DAT_63791580)[param_8[3]];
        iVar12 = (&DAT_63791580)[param_9[3]];
        uVar14 = (uint)(byte)(&DAT_63795aa0)
                             [((uint)(byte)(&DAT_6378dbec)[iVar9 + iVar31] << 4 |
                              (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar25]) << 4 |
                              (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar17]];
        uVar13 = (uint)(byte)(&DAT_63795aa0)
                             [((uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar31] << 4 |
                              (uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar25]) << 4 |
                              (uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar17]];
        bVar1 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar11 + iVar31] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar11 + iVar25]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar11 + iVar17]];
        bVar2 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbec)[iVar12 + iVar31] << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar12 + iVar25]) << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar12 + iVar17]];
        param_8 = param_8 + 4;
        param_9 = param_9 + 4;
        param_10 = param_10 + 2;
        param_11 = param_11 + 2;
        bVar3 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + local_2c * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar14) +
                  (uint)*(byte *)(&DAT_637956a0 + local_2c) & 0x1e0) << 3];
        local_28 = (uint)bVar3;
        uVar15 = (uint)*param_1;
        uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + local_28 * 4 + 1);
        uVar20 = (uint)*(byte *)((int)&DAT_637956a0 + local_28 * 4 + 2);
        uVar7 = (&DAT_63795aa0)
                [(int)((int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar20) >> 4 |
                      *(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) +
                  (uint)*(byte *)(&DAT_637956a0 + local_28) & 0x1e0) << 3];
        bVar4 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + local_30 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + local_30 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar13) +
                  (uint)*(byte *)(&DAT_637956a0 + local_30) & 0x1e0) << 3];
        local_24 = (uint)bVar4;
        pbVar23 = param_1 + 1;
        puVar30 = puVar26 + 1;
        uVar8 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 1) + uVar16 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 2) + uVar20) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_24) +
                  (uint)*(byte *)(&DAT_637956a0 + local_28) & 0x1e0) << 3];
        *puVar26 = uVar7;
        *pbVar19 = bVar3;
        pbVar32 = pbVar32 + 2;
        *param_4 = uVar8;
        param_4 = param_4 + 1;
        param_5 = param_5 + 2;
        *pbVar18 = bVar4;
        local_8 = local_8 + -1;
        param_2 = puVar30;
        param_1 = pbVar23;
        if (local_8 == 0) goto LAB_6375c401;
        while (local_c = local_c + param_13 * -2, -1 < local_c) {
          pbVar23 = param_1 + 1;
          puVar30 = param_2 + 1;
          *param_2 = uVar7;
          *pbVar32 = bVar3;
          pbVar32 = pbVar32 + 1;
          *param_4 = uVar8;
          param_4 = param_4 + 1;
          *param_5 = bVar4;
          param_5 = param_5 + 1;
          local_8 = local_8 + -1;
          param_2 = puVar30;
          param_1 = pbVar23;
          if (local_8 == 0) {
            local_8 = 0;
            goto LAB_6375c401;
          }
        }
        local_c = local_c + param_7;
        param_3 = pbVar32;
      }
    }
  }
  else {
    bVar1 = *param_10;
    bVar2 = *param_11;
    iVar9 = (&DAT_63791580)[*param_8];
    iVar10 = (&DAT_63791580)[*param_9];
    local_14 = (uint)(byte)(&DAT_63795aa0)
                           [((uint)(byte)(&DAT_6378dbe8)
                                         [iVar9 + (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1]]
                             << 4 | (uint)(byte)(&DAT_6378dbe8)
                                                [iVar9 + (&DAT_637929a0)[bVar2] +
                                                         (&DAT_63791d80)[bVar1]]) << 4 |
                            (uint)(byte)(&DAT_6378dbe8)
                                        [iVar9 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]]];
    param_8 = param_8 + 1;
    local_18 = (uint)(byte)(&DAT_63795aa0)
                           [((uint)(byte)(&DAT_6378dbe8)
                                         [iVar10 + (&DAT_63792180)[bVar2] + (&DAT_63791980)[bVar1]]
                             << 4 | (uint)(byte)(&DAT_6378dbe8)
                                                [iVar10 + (&DAT_637929a0)[bVar2] +
                                                          (&DAT_63791d80)[bVar1]]) << 4 |
                            (uint)(byte)(&DAT_6378dbe8)
                                        [iVar10 + (&DAT_63790d60)[bVar2] + (&DAT_63790960)[bVar1]]];
    param_9 = param_9 + 1;
    param_10 = param_10 + 1;
    param_11 = param_11 + 1;
    local_8 = param_7 - local_38;
    pbVar23 = param_3;
    uVar13 = local_18;
    uVar14 = local_14;
    if (0 < local_8) goto LAB_6375b24e;
  }
  goto LAB_6375bf4c;
  while( true ) {
    *puVar30 = uVar7;
    *param_3 = bVar1;
    param_1 = param_1 + 1;
    puVar30 = puVar30 + 1;
    param_3 = param_3 + 1;
    *param_4 = uVar8;
    param_4 = param_4 + 1;
    pbVar21 = pbVar23 + 1;
    *pbVar23 = bVar2;
    local_8 = local_8 + -1;
    pbVar23 = pbVar21;
    if (local_8 == 0) break;
LAB_6375bf09:
    local_c = local_c + param_13 * -2;
    pbVar21 = pbVar23;
    if (local_c < 0) break;
  }
LAB_6375bf4c:
  local_14 = uVar14;
  local_18 = uVar13;
  uVar13 = (uint)*param_1;
  uVar14 = (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1);
  uVar15 = (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2);
  uVar7 = (&DAT_63795aa0)
          [(int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) + uVar14 & 0x1e0 |
                (int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) + uVar15) >> 4) >> 1 |
           ((uint)*(byte *)(&DAT_637956a0 + uVar13) + (uint)*(byte *)(&DAT_637956a0 + local_14) &
           0x1e0) << 3];
  uVar8 = (&DAT_63795aa0)
          [(int)(*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 1) + uVar14 & 0x1e0 |
                (int)(*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 2) + uVar15) >> 4) >> 1 |
           ((uint)*(byte *)(&DAT_637956a0 + local_18) + (uint)*(byte *)(&DAT_637956a0 + local_14) &
           0x1e0) << 3];
  for (local_8 = local_8 + local_38; local_8 != 0; local_8 = local_8 + -1) {
    *puVar30 = uVar7;
    *param_3 = (byte)local_14;
    puVar30 = puVar30 + 1;
    *param_4 = uVar8;
    param_3 = param_3 + 1;
    *pbVar21 = (byte)local_18;
    param_4 = param_4 + 1;
    pbVar21 = pbVar21 + 1;
  }
  return;
}


