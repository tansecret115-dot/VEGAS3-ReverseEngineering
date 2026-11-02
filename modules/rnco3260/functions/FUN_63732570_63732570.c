/* Module: rnco3260.dll
   Function: FUN_63732570
   Address: 63732570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63732570(byte *param_1,byte *param_2,undefined4 param_3,int param_4,byte *param_5,byte *param_6,
            byte *param_7,byte *param_8,uint param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  int iVar21;
  int local_28;
  uint local_24;
  uint local_1c;
  byte local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_c = param_4 >> 1;
  local_28 = param_4 * 3 - local_c;
  if ((param_9 + param_10 & 1) != 0) {
    local_28 = local_28 + param_4 * 2;
  }
  local_28 = local_28 / (param_10 * 2);
  if (param_4 != 0) {
    if (((param_9 & 1) == 0) && (1 < param_10)) {
      bVar16 = *param_8;
      bVar1 = *param_7;
      iVar14 = (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar16];
      iVar18 = (&DAT_637929a0)[bVar16] + (&DAT_63791d80)[bVar1];
      iVar20 = (&DAT_63792180)[bVar16] + (&DAT_63791980)[bVar1];
      iVar5 = (&DAT_63791580)[*param_5];
      iVar15 = (&DAT_63791580)[*param_6];
      iVar6 = (&DAT_63791580)[param_5[1]];
      iVar7 = (&DAT_63791580)[param_6[1]];
      uVar13 = (uint)(byte)(&DAT_63795aa0)
                           [((uint)(byte)(&DAT_6378dbec)[iVar5 + iVar20] << 4 |
                            (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar18]) << 4 |
                            (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar14]];
      uVar12 = (uint)(byte)(&DAT_63795aa0)
                           [((uint)(byte)(&DAT_6378dbe4)[iVar15 + iVar20] << 4 |
                            (uint)(byte)(&DAT_6378dbe4)[iVar15 + iVar18]) << 4 |
                            (uint)(byte)(&DAT_6378dbe4)[iVar15 + iVar14]];
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar20] << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar18]) << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar14]];
      bVar16 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbec)[iVar7 + iVar20] << 4 |
                (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar18]) << 4 |
                (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar14]];
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      param_7 = param_7 + 1;
      iVar15 = param_4 - local_28;
      param_8 = param_8 + 1;
      if (0 < iVar15) {
        while( true ) {
          local_10 = (uint)bVar1;
          local_14 = (uint)bVar16;
          *param_1 = (byte)uVar13;
          param_1 = param_1 + 1;
          *param_2 = (byte)uVar12;
          param_2 = param_2 + 1;
          local_8 = iVar15 + -1;
          iVar15 = 0;
          pbVar19 = param_1;
          if (local_8 == 0) break;
          while (local_c = local_c + param_10 * -2, -1 < local_c) {
            *pbVar19 = (byte)uVar13;
            param_1 = pbVar19 + 1;
            *param_2 = (byte)uVar12;
            param_2 = param_2 + 1;
            local_8 = local_8 + -1;
            pbVar19 = param_1;
            if (local_8 == 0) {
              iVar15 = 0;
              goto LAB_637331c8;
            }
          }
          local_c = local_c + param_4;
          bVar3 = (&DAT_63795aa0)
                  [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4 |
                        (uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + local_10) +
                    (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
          local_1c = (uint)bVar3;
          param_1 = pbVar19 + 1;
          bVar4 = (&DAT_63795aa0)
                  [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) & 0x1e0 |
                        (int)((uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2) +
                             (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + local_14) +
                    (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
          local_24 = (uint)bVar4;
          *pbVar19 = bVar3;
          *param_2 = bVar4;
          param_2 = param_2 + 1;
          local_8 = local_8 + -1;
          iVar15 = 0;
          bVar17 = bVar16;
          if (local_8 == 0) goto LAB_63732ed3;
          while (local_c = local_c + param_10 * -2, -1 < local_c) {
            *param_1 = bVar3;
            param_1 = param_1 + 1;
            *param_2 = bVar4;
            param_2 = param_2 + 1;
            local_8 = local_8 + -1;
            if (local_8 == 0) {
              iVar15 = 0;
              goto LAB_63732ed3;
            }
          }
          local_c = local_c + param_4;
          iVar15 = local_8;
LAB_63732862:
          *param_1 = (byte)local_10;
          *param_2 = bVar16;
          pbVar19 = param_1;
          iVar5 = iVar15;
          while( true ) {
            iVar5 = iVar5 + -1;
            param_2 = param_2 + 1;
            pbVar19 = pbVar19 + 1;
            pbVar8 = param_5;
            pbVar9 = param_6;
            pbVar10 = param_7;
            pbVar11 = param_8;
            if (iVar5 == 0) goto LAB_63732cda;
            local_c = local_c + param_10 * -2;
            if (local_c < 0) break;
            *pbVar19 = (byte)local_10;
            *param_2 = bVar16;
          }
          local_c = local_c + param_4;
          bVar16 = *param_8;
          bVar1 = *param_7;
          iVar21 = (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar16];
          iVar18 = (&DAT_63792180)[bVar16] + (&DAT_63791980)[bVar1];
          iVar20 = (&DAT_637929a0)[bVar16] + (&DAT_63791d80)[bVar1];
          iVar5 = (&DAT_63791580)[*param_5];
          iVar6 = (&DAT_63791580)[*param_6];
          iVar7 = (&DAT_63791580)[param_5[1]];
          iVar14 = (&DAT_63791580)[param_6[1]];
          bVar3 = (&DAT_63795aa0)
                  [((uint)(byte)(&DAT_6378dbec)[iVar5 + iVar18] << 4 |
                   (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar20]) << 4 |
                   (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar21]];
          uVar13 = (uint)bVar3;
          bVar4 = (&DAT_63795aa0)
                  [((uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar18] << 4 |
                   (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar20]) << 4 |
                   (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar21]];
          uVar12 = (uint)bVar4;
          local_18 = (&DAT_63795aa0)
                     [((uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar18] << 4 |
                      (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar20]) << 4 |
                      (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar21]];
          local_1c = (uint)local_18;
          bVar2 = (&DAT_63795aa0)
                  [((uint)(byte)(&DAT_6378dbec)[iVar14 + iVar18] << 4 |
                   (uint)(byte)(&DAT_6378dbec)[iVar14 + iVar20]) << 4 |
                   (uint)(byte)(&DAT_6378dbec)[iVar14 + iVar21]];
          local_24 = (uint)bVar2;
          bVar1 = (&DAT_63795aa0)
                  [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0 |
                        (int)((uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 2) +
                             (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + local_10) +
                    (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
          local_10 = (uint)bVar1;
          param_1 = pbVar19 + 1;
          bVar16 = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + local_14) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
          *pbVar19 = bVar1;
          *param_2 = bVar16;
          param_2 = param_2 + 1;
          local_8 = iVar15 + -2;
          iVar15 = 0;
          bVar17 = bVar16;
          if (local_8 == 0) goto LAB_63732ed3;
          while (local_c = local_c + param_10 * -2, -1 < local_c) {
            *param_1 = bVar1;
            param_1 = param_1 + 1;
            *param_2 = bVar16;
            param_2 = param_2 + 1;
            local_8 = local_8 + -1;
            if (local_8 == 0) {
              iVar15 = 0;
              goto LAB_63732ed3;
            }
          }
          *param_1 = bVar3;
          local_c = local_c + param_4;
          param_1 = param_1 + 1;
          *param_2 = bVar4;
          param_2 = param_2 + 1;
          local_8 = local_8 + -1;
          iVar15 = 0;
          pbVar19 = param_1;
          if (local_8 == 0) break;
          while (local_c = local_c + param_10 * -2, -1 < local_c) {
            *pbVar19 = bVar3;
            param_1 = pbVar19 + 1;
            *param_2 = bVar4;
            param_2 = param_2 + 1;
            local_8 = local_8 + -1;
            pbVar19 = param_1;
            if (local_8 == 0) {
              iVar15 = 0;
              bVar17 = bVar4;
              bVar1 = bVar3;
              goto LAB_63732ed3;
            }
          }
          local_c = local_c + param_4;
          bVar1 = (&DAT_63795aa0)
                  [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_1c * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0 |
                        (int)((uint)*(byte *)((int)&DAT_637956a0 + local_1c * 4 + 2) +
                             (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + local_1c) +
                    (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
          param_1 = pbVar19 + 1;
          bVar3 = (&DAT_63795aa0)
                  [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) & 0x1e0 |
                        (int)((uint)*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 2) +
                             (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + local_24) +
                    (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
          *pbVar19 = bVar1;
          *param_2 = bVar3;
          param_2 = param_2 + 1;
          local_8 = local_8 + -1;
          bVar17 = bVar2;
          if (local_8 == 0) {
LAB_6373318b:
            iVar15 = 0;
            local_10._0_1_ = local_18;
            bVar1 = (byte)local_10;
            goto LAB_63732ed3;
          }
          while (local_c = local_c + param_10 * -2, -1 < local_c) {
            *param_1 = bVar1;
            param_1 = param_1 + 1;
            *param_2 = bVar3;
            param_2 = param_2 + 1;
            local_8 = local_8 + -1;
            if (local_8 == 0) {
              iVar15 = 0;
              bVar1 = local_18;
              goto LAB_63732ed3;
            }
          }
          local_c = local_c + param_4;
          *param_1 = local_18;
          *param_2 = bVar2;
          pbVar19 = param_1;
          iVar5 = local_8;
          while( true ) {
            iVar5 = iVar5 + -1;
            param_2 = param_2 + 1;
            pbVar19 = pbVar19 + 1;
            pbVar8 = param_5 + 2;
            pbVar9 = param_6 + 2;
            pbVar10 = param_7 + 1;
            pbVar11 = param_8 + 1;
            if (iVar5 == 0) goto LAB_63732cda;
            local_c = local_c + param_10 * -2;
            if (local_c < 0) break;
            *pbVar19 = local_18;
            *param_2 = bVar2;
          }
          local_c = local_c + param_4;
          bVar16 = param_8[1];
          bVar1 = param_7[1];
          iVar14 = (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar16];
          iVar18 = (&DAT_637929a0)[bVar16] + (&DAT_63791d80)[bVar1];
          iVar20 = (&DAT_63792180)[bVar16] + (&DAT_63791980)[bVar1];
          iVar5 = (&DAT_63791580)[param_5[2]];
          iVar15 = (&DAT_63791580)[param_6[2]];
          iVar6 = (&DAT_63791580)[param_5[3]];
          iVar7 = (&DAT_63791580)[param_6[3]];
          uVar13 = (uint)(byte)(&DAT_63795aa0)
                               [((uint)(byte)(&DAT_6378dbec)[iVar5 + iVar20] << 4 |
                                (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar18]) << 4 |
                                (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar14]];
          uVar12 = (uint)(byte)(&DAT_63795aa0)
                               [((uint)(byte)(&DAT_6378dbe4)[iVar15 + iVar20] << 4 |
                                (uint)(byte)(&DAT_6378dbe4)[iVar15 + iVar18]) << 4 |
                                (uint)(byte)(&DAT_6378dbe4)[iVar15 + iVar14]];
          bVar1 = (&DAT_63795aa0)
                  [((uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar20] << 4 |
                   (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar18]) << 4 |
                   (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar14]];
          bVar16 = (&DAT_63795aa0)
                   [((uint)(byte)(&DAT_6378dbec)[iVar7 + iVar20] << 4 |
                    (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar18]) << 4 |
                    (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar14]];
          param_5 = param_5 + 4;
          param_6 = param_6 + 4;
          param_7 = param_7 + 2;
          param_8 = param_8 + 2;
          local_18 = (&DAT_63795aa0)
                     [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) +
                                 (uint)*(byte *)((int)&DAT_637956a0 + local_1c * 4 + 2)) >> 4 |
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) +
                           (uint)*(byte *)((int)&DAT_637956a0 + local_1c * 4 + 1) & 0x1e0) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar13) +
                       (uint)*(byte *)(&DAT_637956a0 + local_1c) & 0x1e0) << 3];
          bVar17 = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar12) +
                     (uint)*(byte *)(&DAT_637956a0 + local_24) & 0x1e0) << 3];
          *pbVar19 = local_18;
          *param_2 = bVar17;
          iVar15 = local_8 + -2;
          param_1 = pbVar19;
          while( true ) {
            param_2 = param_2 + 1;
            param_1 = param_1 + 1;
            if (iVar15 == 0) goto LAB_6373318b;
            local_c = local_c + param_10 * -2;
            if (local_c < 0) break;
            *param_1 = local_18;
            *param_2 = bVar17;
            iVar15 = iVar15 + -1;
          }
          local_c = local_c + param_4;
        }
      }
LAB_637331c8:
      bVar17 = (byte)uVar12;
      bVar1 = (byte)uVar13;
    }
    else {
      bVar16 = *param_8;
      bVar1 = *param_7;
      local_24 = (&DAT_63792180)[bVar16] + (&DAT_63791980)[bVar1];
      iVar5 = (&DAT_63791580)[*param_5];
      local_1c = (&DAT_63791580)[*param_6];
      local_10 = (uint)(byte)(&DAT_63795aa0)
                             [((uint)(byte)(&DAT_6378dbe8)[iVar5 + local_24] << 4 |
                              (uint)(byte)(&DAT_6378dbe8)
                                          [iVar5 + (&DAT_637929a0)[bVar16] + (&DAT_63791d80)[bVar1]]
                              ) << 4 | (uint)(byte)(&DAT_6378dbe8)
                                                   [iVar5 + (&DAT_63790960)[bVar1] +
                                                            (&DAT_63790d60)[bVar16]]];
      param_5 = param_5 + 1;
      bVar17 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[local_1c + local_24] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [local_1c + (&DAT_637929a0)[bVar16] + (&DAT_63791d80)[bVar1]]) << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [local_1c + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar16]]];
      local_14 = (uint)bVar17;
      param_6 = param_6 + 1;
      param_7 = param_7 + 1;
      param_8 = param_8 + 1;
      iVar15 = param_4 - local_28;
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe8)[iVar5 + local_24] << 4 |
               (uint)(byte)(&DAT_6378dbe8)[iVar5 + (&DAT_637929a0)[bVar16] + (&DAT_63791d80)[bVar1]]
               ) << 4 | (uint)(byte)(&DAT_6378dbe8)
                                    [iVar5 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar16]]];
      bVar16 = bVar17;
      if (0 < iVar15) goto LAB_63732862;
    }
LAB_63732ed3:
    local_10._0_1_ = bVar1;
    for (iVar15 = iVar15 + local_28; iVar15 != 0; iVar15 = iVar15 + -1) {
      *param_1 = (byte)local_10;
      param_1 = param_1 + 1;
      *param_2 = bVar17;
      param_2 = param_2 + 1;
    }
  }
  return;
LAB_63732cda:
  param_8 = pbVar11;
  param_7 = pbVar10;
  param_6 = pbVar9;
  param_5 = pbVar8;
  iVar15 = 0;
  param_1 = pbVar19;
  bVar17 = bVar16;
  bVar1 = (byte)local_10;
  if ((param_10 + param_9 & 1) != 0) {
    iVar15 = local_28 >> 1;
    local_28 = local_28 - iVar15;
    if (0 < iVar15) {
      bVar16 = *param_8;
      bVar17 = *param_7;
      iVar5 = (&DAT_63791580)[*param_5];
      iVar6 = (&DAT_63791580)[*param_6];
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe8)
                            [iVar5 + (&DAT_63792180)[bVar16] + (&DAT_63791980)[bVar17]] << 4 |
               (uint)(byte)(&DAT_6378dbe8)
                           [iVar5 + (&DAT_637929a0)[bVar16] + (&DAT_63791d80)[bVar17]]) << 4 |
               (uint)(byte)(&DAT_6378dbe8)
                           [iVar5 + (&DAT_63790960)[bVar17] + (&DAT_63790d60)[bVar16]]];
      uVar12 = (uint)bVar1;
      bVar17 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)
                             [iVar6 + (&DAT_63792180)[bVar16] + (&DAT_63791980)[bVar17]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar6 + (&DAT_637929a0)[bVar16] + (&DAT_63791d80)[bVar17]]) << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar6 + (&DAT_63790960)[bVar17] + (&DAT_63790d60)[bVar16]]];
      uVar13 = (uint)bVar17;
      bVar16 = (&DAT_63795aa0)
               [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + local_1c * 4 + 2)) >> 4 |
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + local_1c * 4 + 1) & 0x1e0) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar12) + (uint)*(byte *)(&DAT_637956a0 + local_1c)
                & 0x1e0) << 3];
      bVar3 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar13) + (uint)*(byte *)(&DAT_637956a0 + local_24)
               & 0x1e0) << 3];
      *pbVar19 = bVar16;
      *param_2 = bVar3;
      while( true ) {
        iVar15 = iVar15 + -1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        if ((iVar15 == 0) || (local_c = local_c + param_10 * -2, local_c < 0)) break;
        *param_1 = bVar16;
        *param_2 = bVar3;
      }
    }
  }
  goto LAB_63732ed3;
}


