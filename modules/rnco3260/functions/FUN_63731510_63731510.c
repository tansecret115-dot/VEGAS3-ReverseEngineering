/* Module: rnco3260.dll
   Function: FUN_63731510
   Address: 63731510
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63731510(byte *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,uint param_9,uint param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint local_2c;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  uint local_8;
  
  if (param_10 != 0) {
    if (((param_9 & 1) == 0) && (1 < (int)param_10)) {
      bVar16 = *param_7;
      bVar10 = *param_8;
      iVar8 = (&DAT_63790d60)[bVar10] + (&DAT_63790960)[bVar16];
      iVar11 = (&DAT_63791d80)[bVar16] + (&DAT_637929a0)[bVar10];
      iVar17 = (&DAT_63791980)[bVar16] + (&DAT_63792180)[bVar10];
      iVar4 = (&DAT_63791580)[*param_5];
      iVar5 = (&DAT_63791580)[*param_6];
      iVar6 = (&DAT_63791580)[param_5[1]];
      iVar7 = (&DAT_63791580)[param_6[1]];
      uVar12 = (uint)(byte)(&DAT_63795aa0)
                           [((uint)(byte)(&DAT_6378dbec)[iVar4 + iVar11] |
                            (uint)(byte)(&DAT_6378dbec)[iVar4 + iVar17] << 4) << 4 |
                            (uint)(byte)(&DAT_6378dbec)[iVar4 + iVar8]];
      bVar16 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar17] << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar11]) << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar8]];
      uVar13 = (uint)bVar16;
      bVar10 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar11] |
                (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar17] << 4) << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar8]];
      local_8 = (uint)bVar10;
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbec)[iVar7 + iVar17] << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar11]) << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar8]];
      local_10 = (uint)bVar1;
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      *param_1 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbec)[iVar4 + iVar11] |
                  (uint)(byte)(&DAT_6378dbec)[iVar4 + iVar17] << 4) << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar4 + iVar8]];
      *param_2 = bVar16;
      pbVar9 = param_1 + 3;
      pbVar18 = param_2 + 3;
      param_10 = param_10 - 2;
      bVar16 = (&DAT_63795aa0)
               [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0 |
                     (int)((uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + local_10) + (uint)*(byte *)(&DAT_637956a0 + uVar13)
                & 0x1e0) << 3];
      param_1[1] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + local_8) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
      param_1[2] = bVar10;
      param_2[1] = bVar16;
      param_2[2] = bVar1;
    }
    else {
      bVar16 = *param_7;
      bVar10 = *param_8;
      iVar4 = (&DAT_63791580)[*param_5];
      iVar5 = (&DAT_63791580)[*param_6];
      local_8 = (uint)(byte)(&DAT_63795aa0)
                            [((uint)(byte)(&DAT_6378dbe8)
                                          [iVar4 + (&DAT_63791980)[bVar16] + (&DAT_63792180)[bVar10]
                                          ] << 4 |
                             (uint)(byte)(&DAT_6378dbe8)
                                         [iVar4 + (&DAT_63791d80)[bVar16] + (&DAT_637929a0)[bVar10]]
                             ) << 4 | (uint)(byte)(&DAT_6378dbe8)
                                                  [iVar4 + (&DAT_63790d60)[bVar10] +
                                                           (&DAT_63790960)[bVar16]]];
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe8)
                            [iVar5 + (&DAT_63791980)[bVar16] + (&DAT_63792180)[bVar10]] << 4 |
               (uint)(byte)(&DAT_6378dbe8)
                           [iVar5 + (&DAT_63791d80)[bVar16] + (&DAT_637929a0)[bVar10]]) << 4 |
               (uint)(byte)(&DAT_6378dbe8)
                           [iVar5 + (&DAT_63790d60)[bVar10] + (&DAT_63790960)[bVar16]]];
      local_10 = (uint)bVar1;
      param_5 = param_5 + 1;
      param_6 = param_6 + 1;
      *param_1 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbe8)
                               [iVar4 + (&DAT_63791980)[bVar16] + (&DAT_63792180)[bVar10]] << 4 |
                  (uint)(byte)(&DAT_6378dbe8)
                              [iVar4 + (&DAT_63791d80)[bVar16] + (&DAT_637929a0)[bVar10]]) << 4 |
                  (uint)(byte)(&DAT_6378dbe8)
                              [iVar4 + (&DAT_63790d60)[bVar10] + (&DAT_63790960)[bVar16]]];
      *param_2 = bVar1;
      pbVar9 = param_1 + 1;
      pbVar18 = param_2 + 1;
      param_10 = param_10 - 1;
    }
    param_8 = param_8 + 1;
    param_7 = param_7 + 1;
    if (3 < (int)param_10) {
      local_24 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 1);
      local_18 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 2);
      local_14 = (byte *)(&DAT_637956a0 + local_8);
      local_1c = (byte *)((int)&DAT_637956a0 + local_10 * 4 + 2);
      local_20 = (byte *)(&DAT_637956a0 + local_10);
      local_2c = param_10 >> 2;
      pbVar20 = pbVar9;
      pbVar19 = pbVar18;
      do {
        local_28 = (byte *)((int)&DAT_637956a0 + local_10 * 4 + 1);
        bVar16 = *param_7;
        bVar10 = *param_8;
        iVar11 = (&DAT_63790d60)[bVar10] + (&DAT_63790960)[bVar16];
        iVar17 = (&DAT_63791d80)[bVar16] + (&DAT_637929a0)[bVar10];
        iVar8 = (&DAT_63791980)[bVar16] + (&DAT_63792180)[bVar10];
        iVar4 = (&DAT_63791580)[*param_5];
        iVar5 = (&DAT_63791580)[*param_6];
        iVar6 = (&DAT_63791580)[param_5[1]];
        iVar7 = (&DAT_63791580)[param_6[1]];
        bVar16 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbec)[iVar4 + iVar8] << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar4 + iVar17]) << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar4 + iVar11]];
        uVar12 = (uint)bVar16;
        bVar10 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar8] << 4 |
                  (uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar17]) << 4 |
                  (uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar11]];
        uVar13 = (uint)bVar10;
        bVar1 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar8] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar17]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar11]];
        uVar14 = (uint)bVar1;
        bVar2 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbec)[iVar7 + iVar8] << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar17]) << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar11]];
        uVar15 = (uint)bVar2;
        bVar3 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) + (uint)*local_28 &
                       0x1e0 | (int)((uint)*local_1c +
                                    (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4) >> 1
                 | ((uint)*(byte *)(&DAT_637956a0 + uVar13) + (uint)*local_20 & 0x1e0) << 3];
        *pbVar20 = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) + (uint)*local_24 &
                          0x1e0 | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2) +
                                       (uint)*local_18) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar12) + (uint)*local_14 & 0x1e0) << 3];
        pbVar20[1] = bVar16;
        *pbVar19 = bVar3;
        pbVar19[1] = bVar10;
        bVar16 = (&DAT_63795aa0)
                 [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) +
                             (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4 |
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar13)
                  & 0x1e0) << 3];
        pbVar20[2] = (&DAT_63795aa0)
                     [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2) +
                                 (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4 |
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) & 0x1e0) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar14) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
        pbVar20[3] = bVar1;
        pbVar19[2] = bVar16;
        pbVar19[3] = bVar2;
        bVar16 = param_7[1];
        bVar10 = param_8[1];
        iVar11 = (&DAT_63790d60)[bVar10] + (&DAT_63790960)[bVar16];
        iVar17 = (&DAT_63791d80)[bVar16] + (&DAT_637929a0)[bVar10];
        iVar8 = (&DAT_63791980)[bVar16] + (&DAT_63792180)[bVar10];
        iVar4 = (&DAT_63791580)[param_5[2]];
        iVar5 = (&DAT_63791580)[param_6[2]];
        iVar6 = (&DAT_63791580)[param_5[3]];
        iVar7 = (&DAT_63791580)[param_6[3]];
        bVar16 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbec)[iVar4 + iVar8] << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar4 + iVar17]) << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar4 + iVar11]];
        uVar12 = (uint)bVar16;
        bVar10 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar8] << 4 |
                  (uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar17]) << 4 |
                  (uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar11]];
        uVar13 = (uint)bVar10;
        bVar1 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar8] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar17]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar11]];
        local_8 = (uint)bVar1;
        bVar2 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbec)[iVar7 + iVar8] << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar17]) << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar11]];
        local_10 = (uint)bVar2;
        param_5 = param_5 + 4;
        param_6 = param_6 + 4;
        param_7 = param_7 + 2;
        param_8 = param_8 + 2;
        bVar3 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar13)
                 & 0x1e0) << 3];
        pbVar20[4] = (&DAT_63795aa0)
                     [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2) +
                                 (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4 |
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) & 0x1e0) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar14) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
        pbVar20[5] = bVar16;
        pbVar19[5] = bVar10;
        pbVar19[4] = bVar3;
        local_24 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 1);
        local_18 = (byte *)((int)&DAT_637956a0 + local_8 * 4 + 2);
        local_14 = (byte *)(&DAT_637956a0 + local_8);
        local_1c = (byte *)((int)&DAT_637956a0 + local_10 * 4 + 2);
        local_20 = (byte *)(&DAT_637956a0 + local_10);
        pbVar9 = pbVar20 + 8;
        pbVar18 = pbVar19 + 8;
        param_10 = param_10 - 4;
        local_2c = local_2c - 1;
        bVar16 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 1) & 0x1e0 |
                       (int)((uint)*local_1c + (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2))
                       >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar13) + (uint)*local_20 & 0x1e0) << 3];
        pbVar20[6] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) + (uint)*local_24 &
                            0x1e0 | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2) +
                                         (uint)*local_18) >> 4) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar12) + (uint)*local_14 & 0x1e0) << 3];
        pbVar20[7] = bVar1;
        pbVar19[6] = bVar16;
        pbVar19[7] = bVar2;
        pbVar20 = pbVar9;
        pbVar19 = pbVar18;
      } while (local_2c != 0);
    }
    bVar10 = (byte)local_10;
    bVar16 = (byte)local_8;
    pbVar20 = pbVar18;
    if (1 < (int)param_10) {
      bVar16 = *param_7;
      bVar10 = *param_8;
      iVar11 = (&DAT_63790d60)[bVar10] + (&DAT_63790960)[bVar16];
      iVar17 = (&DAT_63791d80)[bVar16] + (&DAT_637929a0)[bVar10];
      iVar8 = (&DAT_63791980)[bVar16] + (&DAT_63792180)[bVar10];
      iVar4 = (&DAT_63791580)[*param_5];
      iVar5 = (&DAT_63791580)[*param_6];
      iVar6 = (&DAT_63791580)[param_5[1]];
      iVar7 = (&DAT_63791580)[param_6[1]];
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbec)[iVar4 + iVar8] << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar4 + iVar17]) << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar4 + iVar11]];
      uVar12 = (uint)bVar1;
      bVar2 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar8] << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar17]) << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar11]];
      uVar13 = (uint)bVar2;
      bVar16 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar8] << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar17]) << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar11]];
      uVar14 = (uint)bVar16;
      bVar10 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbec)[iVar7 + iVar8] << 4 |
                (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar17]) << 4 |
                (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar11]];
      uVar15 = (uint)bVar10;
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      param_7 = param_7 + 1;
      param_8 = param_8 + 1;
      bVar3 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + local_10) + (uint)*(byte *)(&DAT_637956a0 + uVar13)
               & 0x1e0) << 3];
      *pbVar9 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_8) + (uint)*(byte *)(&DAT_637956a0 + uVar12)
                 & 0x1e0) << 3];
      pbVar9[1] = bVar1;
      *pbVar18 = bVar3;
      pbVar18[1] = bVar2;
      bVar1 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar13) &
               0x1e0) << 3];
      pbVar9[2] = (&DAT_63795aa0)
                  [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) & 0x1e0 |
                        (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2) +
                             (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + uVar14) +
                    (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
      pbVar20 = pbVar18 + 4;
      pbVar9[3] = bVar16;
      pbVar18[2] = bVar1;
      pbVar9 = pbVar9 + 4;
      pbVar18[3] = bVar10;
      param_10 = param_10 - 2;
      local_10 = uVar15;
      local_8 = uVar14;
    }
    if (0 < (int)param_10) {
      bVar16 = *param_7;
      bVar10 = *param_8;
      iVar4 = (&DAT_63791580)[*param_5];
      iVar5 = (&DAT_63791580)[*param_6];
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe8)
                            [iVar4 + (&DAT_63791980)[bVar16] + (&DAT_63792180)[bVar10]] << 4 |
               (uint)(byte)(&DAT_6378dbe8)
                           [iVar4 + (&DAT_63791d80)[bVar16] + (&DAT_637929a0)[bVar10]]) << 4 |
               (uint)(byte)(&DAT_6378dbe8)
                           [iVar4 + (&DAT_63790d60)[bVar10] + (&DAT_63790960)[bVar16]]];
      uVar12 = (uint)bVar1;
      bVar16 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)
                             [iVar5 + (&DAT_63791980)[bVar16] + (&DAT_63792180)[bVar10]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar5 + (&DAT_63791d80)[bVar16] + (&DAT_637929a0)[bVar10]]) << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar5 + (&DAT_63790d60)[bVar10] + (&DAT_63790960)[bVar16]]];
      uVar13 = (uint)bVar16;
      bVar10 = (&DAT_63795aa0)
               [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0 |
                     (int)((uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + local_10) + (uint)*(byte *)(&DAT_637956a0 + uVar13)
                & 0x1e0) << 3];
      *pbVar9 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) & 0x1e0 |
                      (int)((uint)*(byte *)((int)&DAT_637956a0 + local_8 * 4 + 2) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + local_8) + (uint)*(byte *)(&DAT_637956a0 + uVar12)
                 & 0x1e0) << 3];
      pbVar9[1] = bVar1;
      pbVar9[2] = bVar1;
      *pbVar20 = bVar10;
      pbVar20[1] = bVar16;
      pbVar20[2] = bVar16;
      return;
    }
    *pbVar9 = bVar16;
    *pbVar20 = bVar10;
  }
  return;
}


