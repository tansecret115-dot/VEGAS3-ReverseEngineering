/* Module: rnco3260.dll
   Function: FUN_637243b0
   Address: 637243b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637243b0(byte *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,byte *param_5,
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
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint local_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  byte *local_18;
  uint local_c;
  
  if (param_10 != 0) {
    if (((param_9 & 1) == 0) && (1 < (int)param_10)) {
      iVar4 = (&DAT_63790960)[*param_7];
      iVar5 = (&DAT_63792180)[*param_8];
      iVar10 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
      iVar6 = (&DAT_63791580)[*param_5];
      iVar7 = (&DAT_63791580)[*param_6];
      iVar8 = (&DAT_63791580)[param_5[1]];
      iVar9 = (&DAT_63791580)[param_6[1]];
      uVar14 = (uint)(byte)(&DAT_63795aa0)
                           [((uint)(byte)(&DAT_6378dbec)[iVar6 + iVar5] << 4 |
                            (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar10]) << 4 |
                            (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar4]];
      bVar18 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar5] << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar10]) << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar4]];
      uVar15 = (uint)bVar18;
      bVar13 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar5] << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar10]) << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar4]];
      param_9 = (uint)bVar13;
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbec)[iVar9 + iVar5] << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar10]) << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar4]];
      local_c = (uint)bVar1;
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      *param_1 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbec)[iVar6 + iVar5] << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar10]) << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar4]];
      *param_2 = bVar18;
      pbVar11 = param_1 + 3;
      pbVar19 = param_2 + 3;
      param_10 = param_10 - 2;
      bVar18 = (&DAT_63795aa0)
               [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_c * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) & 0x1e0 |
                     (int)((uint)*(byte *)((int)&DAT_637956a0 + local_c * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2)) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + local_c) + (uint)*(byte *)(&DAT_637956a0 + uVar15)
                & 0x1e0) << 3];
      param_1[1] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + param_9 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + param_9 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + param_9) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar14) & 0x1e0) << 3];
      param_1[2] = bVar13;
      param_2[1] = bVar18;
      param_2[2] = bVar1;
    }
    else {
      iVar4 = (&DAT_63791580)[*param_5];
      iVar5 = (&DAT_63791580)[*param_6];
      param_9 = (uint)(byte)(&DAT_63795aa0)
                            [((uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63792180)[*param_8]] << 4 |
                             (uint)(byte)(&DAT_6378dbe8)
                                         [iVar4 + (&DAT_63791d80)[*param_7] +
                                                  (&DAT_637929a0)[*param_8]]) << 4 |
                             (uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63790960)[*param_7]]];
      bVar18 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[iVar5 + (&DAT_63792180)[*param_8]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar5 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 4 |
                (uint)(byte)(&DAT_6378dbe8)[iVar5 + (&DAT_63790960)[*param_7]]];
      local_c = (uint)bVar18;
      param_5 = param_5 + 1;
      param_6 = param_6 + 1;
      *param_1 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63792180)[*param_8]] << 4 |
                  (uint)(byte)(&DAT_6378dbe8)
                              [iVar4 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 4
                  | (uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63790960)[*param_7]]];
      *param_2 = bVar18;
      pbVar11 = param_1 + 1;
      pbVar19 = param_2 + 1;
      param_10 = param_10 - 1;
    }
    param_8 = param_8 + 1;
    param_7 = param_7 + 1;
    if (3 < (int)param_10) {
      local_28 = (byte *)((int)&DAT_637956a0 + param_9 * 4 + 1);
      local_18 = (byte *)((int)&DAT_637956a0 + param_9 * 4 + 2);
      local_1c = (byte *)(&DAT_637956a0 + param_9);
      local_20 = (byte *)((int)&DAT_637956a0 + local_c * 4 + 2);
      local_24 = (byte *)(&DAT_637956a0 + local_c);
      local_30 = param_10 >> 2;
      pbVar12 = pbVar11;
      pbVar20 = pbVar19;
      do {
        local_2c = (byte *)((int)&DAT_637956a0 + local_c * 4 + 1);
        iVar4 = (&DAT_63790960)[*param_7];
        iVar5 = (&DAT_63792180)[*param_8];
        iVar10 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
        iVar6 = (&DAT_63791580)[*param_5];
        iVar7 = (&DAT_63791580)[*param_6];
        iVar8 = (&DAT_63791580)[param_5[1]];
        iVar9 = (&DAT_63791580)[param_6[1]];
        bVar18 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbec)[iVar6 + iVar5] << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar10]) << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar4]];
        uVar14 = (uint)bVar18;
        bVar13 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar5] << 4 |
                  (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar10]) << 4 |
                  (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar4]];
        uVar15 = (uint)bVar13;
        bVar1 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar5] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar10]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar4]];
        uVar16 = (uint)bVar1;
        bVar2 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbec)[iVar9 + iVar5] << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar10]) << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar4]];
        uVar17 = (uint)bVar2;
        bVar3 = (&DAT_63795aa0)
                [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + (uint)*local_2c &
                       0x1e0 | (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) +
                                    (uint)*local_20) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*local_24 & 0x1e0) << 3];
        *pbVar12 = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) + (uint)*local_28 &
                          0x1e0 | (int)((uint)*local_18 +
                                       (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4)
                    >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar14) + (uint)*local_1c & 0x1e0) << 3]
        ;
        pbVar12[1] = bVar18;
        *pbVar20 = bVar3;
        pbVar20[1] = bVar13;
        bVar18 = (&DAT_63795aa0)
                 [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2) +
                             (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2)) >> 4 |
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) +
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) & 0x1e0) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar17) + (uint)*(byte *)(&DAT_637956a0 + uVar15)
                  & 0x1e0) << 3];
        pbVar12[2] = (&DAT_63795aa0)
                     [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2) +
                                 (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4 |
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) & 0x1e0) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar16) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar14) & 0x1e0) << 3];
        pbVar12[3] = bVar1;
        pbVar20[2] = bVar18;
        pbVar20[3] = bVar2;
        iVar4 = (&DAT_63790960)[param_7[1]];
        iVar5 = (&DAT_63792180)[param_8[1]];
        iVar10 = (&DAT_63791d80)[param_7[1]] + (&DAT_637929a0)[param_8[1]];
        iVar6 = (&DAT_63791580)[param_5[2]];
        iVar7 = (&DAT_63791580)[param_6[2]];
        iVar8 = (&DAT_63791580)[param_5[3]];
        iVar9 = (&DAT_63791580)[param_6[3]];
        bVar18 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbec)[iVar6 + iVar5] << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar10]) << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar4]];
        uVar14 = (uint)bVar18;
        bVar13 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar5] << 4 |
                  (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar10]) << 4 |
                  (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar4]];
        uVar15 = (uint)bVar13;
        bVar1 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar5] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar10]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar4]];
        param_9 = (uint)bVar1;
        bVar2 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbec)[iVar9 + iVar5] << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar10]) << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar4]];
        local_c = (uint)bVar2;
        param_5 = param_5 + 4;
        param_6 = param_6 + 4;
        param_7 = param_7 + 2;
        param_8 = param_8 + 2;
        bVar3 = (&DAT_63795aa0)
                [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2)) >> 4 |
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar17) + (uint)*(byte *)(&DAT_637956a0 + uVar15)
                 & 0x1e0) << 3];
        pbVar12[4] = (&DAT_63795aa0)
                     [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2) +
                                 (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4 |
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) & 0x1e0) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar16) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar14) & 0x1e0) << 3];
        pbVar12[5] = bVar18;
        pbVar20[5] = bVar13;
        pbVar20[4] = bVar3;
        local_28 = (byte *)((int)&DAT_637956a0 + param_9 * 4 + 1);
        local_18 = (byte *)((int)&DAT_637956a0 + param_9 * 4 + 2);
        local_1c = (byte *)(&DAT_637956a0 + param_9);
        local_20 = (byte *)((int)&DAT_637956a0 + local_c * 4 + 2);
        local_24 = (byte *)(&DAT_637956a0 + local_c);
        pbVar11 = pbVar12 + 8;
        pbVar19 = pbVar20 + 8;
        param_10 = param_10 - 4;
        local_30 = local_30 - 1;
        bVar18 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + local_c * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + (uint)*local_20)
                       >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*local_24 & 0x1e0) << 3];
        pbVar12[6] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) + (uint)*local_28 &
                            0x1e0 | (int)((uint)*local_18 +
                                         (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4)
                      >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar14) + (uint)*local_1c & 0x1e0) <<
                             3];
        pbVar12[7] = bVar1;
        pbVar20[6] = bVar18;
        pbVar20[7] = bVar2;
        pbVar12 = pbVar11;
        pbVar20 = pbVar19;
      } while (local_30 != 0);
    }
    bVar13 = (byte)local_c;
    bVar18 = (byte)param_9;
    if (1 < (int)param_10) {
      iVar4 = (&DAT_63790960)[*param_7];
      iVar5 = (&DAT_63792180)[*param_8];
      iVar10 = (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8];
      iVar6 = (&DAT_63791580)[*param_5];
      iVar7 = (&DAT_63791580)[*param_6];
      iVar8 = (&DAT_63791580)[param_5[1]];
      iVar9 = (&DAT_63791580)[param_6[1]];
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbec)[iVar6 + iVar5] << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar10]) << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar4]];
      uVar14 = (uint)bVar1;
      bVar2 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar5] << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar10]) << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar4]];
      uVar15 = (uint)bVar2;
      bVar18 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar5] << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar10]) << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar4]];
      uVar16 = (uint)bVar18;
      bVar13 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbec)[iVar9 + iVar5] << 4 |
                (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar10]) << 4 |
                (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar4]];
      uVar17 = (uint)bVar13;
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      param_7 = param_7 + 1;
      param_8 = param_8 + 1;
      bVar3 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_c * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + local_c * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + local_c) + (uint)*(byte *)(&DAT_637956a0 + uVar15) &
               0x1e0) << 3];
      *pbVar11 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + param_9 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + param_9 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + param_9) +
                   (uint)*(byte *)(&DAT_637956a0 + uVar14) & 0x1e0) << 3];
      pbVar11[1] = bVar1;
      *pbVar19 = bVar3;
      pbVar19[1] = bVar2;
      bVar1 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar17) + (uint)*(byte *)(&DAT_637956a0 + uVar15) &
               0x1e0) << 3];
      pbVar11[2] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar16) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar14) & 0x1e0) << 3];
      pbVar11[3] = bVar18;
      pbVar19[2] = bVar1;
      pbVar11 = pbVar11 + 4;
      pbVar19[3] = bVar13;
      pbVar19 = pbVar19 + 4;
      param_10 = param_10 - 2;
      param_9 = uVar16;
      local_c = uVar17;
    }
    if (0 < (int)param_10) {
      iVar4 = (&DAT_63791580)[*param_5];
      iVar5 = (&DAT_63791580)[*param_6];
      bVar18 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63792180)[*param_8]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar4 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 4 |
                (uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63790960)[*param_7]]];
      uVar14 = (uint)bVar18;
      bVar13 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[iVar5 + (&DAT_63792180)[*param_8]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar5 + (&DAT_63791d80)[*param_7] + (&DAT_637929a0)[*param_8]]) << 4 |
                (uint)(byte)(&DAT_6378dbe8)[iVar5 + (&DAT_63790960)[*param_7]]];
      uVar15 = (uint)bVar13;
      bVar1 = (&DAT_63795aa0)
              [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_c * 4 + 1) +
                     (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) & 0x1e0 |
                    (int)((uint)*(byte *)((int)&DAT_637956a0 + local_c * 4 + 2) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2)) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + local_c) + (uint)*(byte *)(&DAT_637956a0 + uVar15) &
               0x1e0) << 3];
      *pbVar11 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + param_9 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + param_9 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + param_9) +
                   (uint)*(byte *)(&DAT_637956a0 + uVar14) & 0x1e0) << 3];
      pbVar11[1] = bVar18;
      pbVar11[2] = bVar18;
      *pbVar19 = bVar1;
      pbVar19[1] = bVar13;
      pbVar19[2] = bVar13;
      return;
    }
    *pbVar11 = bVar18;
    *pbVar19 = bVar13;
  }
  return;
}


