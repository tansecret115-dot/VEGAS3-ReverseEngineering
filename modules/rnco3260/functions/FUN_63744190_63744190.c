/* Module: rnco3260.dll
   Function: FUN_63744190
   Address: 63744190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63744190(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 undefined4 param_6,undefined4 param_7,byte *param_8,byte *param_9,byte *param_10,
                 byte *param_11,uint param_12,uint param_13)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint local_58;
  byte *local_54;
  byte *local_50;
  byte *local_4c;
  byte *local_48;
  byte *local_44;
  byte *local_40;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_24;
  uint local_20;
  byte *local_1c;
  uint local_18;
  uint local_14;
  byte *local_10;
  
  if (param_13 != 0) {
    if (((param_12 & 1) == 0) && (1 < (int)param_13)) {
      iVar3 = (&DAT_63790960)[*param_10];
      iVar4 = (&DAT_63792180)[*param_11];
      iVar19 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
      iVar5 = (&DAT_63791580)[*param_8];
      iVar6 = (&DAT_63791580)[*param_9];
      iVar7 = (&DAT_63791580)[param_8[1]];
      iVar8 = (&DAT_63791580)[param_9[1]];
      uVar9 = (uint)(byte)(&DAT_63795aa0)
                          [((uint)(byte)(&DAT_6378dbec)[iVar5 + iVar4] << 4 |
                           (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar19]) << 4 |
                           (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar3]];
      bVar15 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar4] << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar19]) << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar3]];
      uVar12 = (uint)bVar15;
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar4] << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar19]) << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar3]];
      local_14 = (uint)bVar1;
      bVar2 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbec)[iVar8 + iVar4] << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar8 + iVar19]) << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar8 + iVar3]];
      local_20 = (uint)bVar2;
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      *param_3 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbec)[iVar5 + iVar4] << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar19]) << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar3]];
      *param_5 = bVar15;
      param_3[2] = bVar1;
      param_5[2] = bVar2;
      uVar11 = (uint)*param_1;
      uVar13 = (uint)(byte)(&DAT_63795aa0)
                           [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) +
                                  (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) & 0x1e0 |
                                 (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2) +
                                      (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2)) >> 4) >>
                            1 | ((uint)*(byte *)(&DAT_637956a0 + uVar11) +
                                 (uint)*(byte *)(&DAT_637956a0 + uVar9) & 0x1e0) << 3];
      *param_2 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar11) + (uint)*(byte *)(&DAT_637956a0 + uVar9)
                  & 0x1e0) << 3];
      local_2c = (byte *)((int)&DAT_637956a0 + local_14 * 4 + 2);
      uVar10 = (uint)(byte)(&DAT_63795aa0)
                           [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) +
                                  (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) & 0x1e0 |
                                 (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2) +
                                      (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2)) >> 4) >>
                            1 | ((uint)*(byte *)(&DAT_637956a0 + uVar12) +
                                 (uint)*(byte *)(&DAT_637956a0 + uVar9) & 0x1e0) << 3];
      *param_4 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar12) + (uint)*(byte *)(&DAT_637956a0 + uVar9)
                  & 0x1e0) << 3];
      uVar11 = (uint)param_1[2];
      local_1c = (byte *)((int)&DAT_637956a0 + local_14 * 4 + 1);
      local_10 = (byte *)(&DAT_637956a0 + local_14);
      local_30 = (byte *)((int)&DAT_637956a0 + local_20 * 4 + 2);
      local_18 = (uint)(byte)(&DAT_63795aa0)
                             [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) +
                                    (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1) & 0x1e0 |
                                   (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2) +
                                        (uint)*local_2c) >> 4) >> 1 |
                              ((uint)*(byte *)(&DAT_637956a0 + uVar11) + (uint)*local_10 & 0x1e0) <<
                              3];
      param_2[2] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2) +
                              (uint)*local_2c) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar11) + (uint)*local_10 & 0x1e0) << 3];
      local_34 = (byte *)((int)&DAT_637956a0 + local_20 * 4 + 1);
      local_24 = (byte *)(&DAT_637956a0 + local_20);
      uVar11 = (uint)(byte)(&DAT_63795aa0)
                           [(int)((uint)*local_34 + (uint)*local_1c & 0x1e0 |
                                 (int)((uint)*local_30 + (uint)*local_2c) >> 4) >> 1 |
                            ((uint)*local_24 + (uint)*local_10 & 0x1e0) << 3];
      param_4[2] = (&DAT_63795aa0)
                   [(int)((uint)*local_34 + (uint)*local_1c & 0x1e0 |
                         (int)((uint)*local_30 + (uint)*local_2c) >> 4) >> 1 |
                    ((uint)*local_24 + (uint)*local_10 & 0x1e0) << 3];
      param_2[1] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + local_18) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
      param_3[1] = (&DAT_63795aa0)
                   [(int)((uint)*local_1c + (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) &
                          0x1e0 | (int)((uint)*local_2c +
                                       (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2)) >> 4) >>
                    1 | ((uint)*local_10 + (uint)*(byte *)(&DAT_637956a0 + uVar9) & 0x1e0) << 3];
      param_4[1] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar11) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar10) & 0x1e0) << 3];
      param_5[1] = (&DAT_63795aa0)
                   [(int)((uint)*local_34 + (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) &
                          0x1e0 | (int)((uint)*local_30 +
                                       (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4)
                    >> 1 | ((uint)*local_24 + (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3]
      ;
      param_1 = param_1 + 3;
      param_2 = param_2 + 3;
      param_3 = param_3 + 3;
      param_4 = param_4 + 3;
      param_5 = param_5 + 3;
      param_13 = param_13 - 2;
    }
    else {
      iVar3 = (&DAT_63791580)[*param_8];
      iVar4 = (&DAT_63791580)[*param_9];
      local_14 = (uint)(byte)(&DAT_63795aa0)
                             [((uint)(byte)(&DAT_6378dbe8)[iVar3 + (&DAT_63792180)[*param_11]] << 4
                              | (uint)(byte)(&DAT_6378dbe8)
                                            [iVar3 + (&DAT_63791d80)[*param_10] +
                                                     (&DAT_637929a0)[*param_11]]) << 4 |
                              (uint)(byte)(&DAT_6378dbe8)[iVar3 + (&DAT_63790960)[*param_10]]];
      param_8 = param_8 + 1;
      param_9 = param_9 + 1;
      bVar15 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63792180)[*param_11]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar4 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 4
                | (uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63790960)[*param_10]]];
      local_20 = (uint)bVar15;
      *param_3 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbe8)[iVar3 + (&DAT_63792180)[*param_11]] << 4 |
                  (uint)(byte)(&DAT_6378dbe8)
                              [iVar3 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) <<
                  4 | (uint)(byte)(&DAT_6378dbe8)[iVar3 + (&DAT_63790960)[*param_10]]];
      *param_5 = bVar15;
      uVar11 = (uint)*param_1;
      local_1c = (byte *)((int)&DAT_637956a0 + local_14 * 4 + 1);
      local_10 = (byte *)(&DAT_637956a0 + local_14);
      local_2c = (byte *)((int)&DAT_637956a0 + local_14 * 4 + 2);
      local_18 = (uint)(byte)(&DAT_63795aa0)
                             [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2) +
                                         (uint)*local_2c) >> 4 |
                                   (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) +
                                   (uint)*local_1c & 0x1e0) >> 1 |
                              ((uint)*(byte *)(&DAT_637956a0 + uVar11) + (uint)*local_10 & 0x1e0) <<
                              3];
      *param_2 = (&DAT_63795aa0)
                 [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2) + (uint)*local_2c
                             ) >> 4 |
                       (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) + (uint)*local_1c &
                       0x1e0) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar11) + (uint)*local_10 & 0x1e0) << 3];
      local_34 = (byte *)((int)&DAT_637956a0 + local_20 * 4 + 1);
      local_30 = (byte *)((int)&DAT_637956a0 + local_20 * 4 + 2);
      local_24 = (byte *)(&DAT_637956a0 + local_20);
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      uVar11 = (uint)(byte)(&DAT_63795aa0)
                           [(int)((uint)*local_34 + (uint)*local_1c & 0x1e0 |
                                 (int)((uint)*local_30 + (uint)*local_2c) >> 4) >> 1 |
                            ((uint)*local_24 + (uint)*local_10 & 0x1e0) << 3];
      param_3 = param_3 + 1;
      *param_4 = (&DAT_63795aa0)
                 [(int)((uint)*local_34 + (uint)*local_1c & 0x1e0 |
                       (int)((uint)*local_30 + (uint)*local_2c) >> 4) >> 1 |
                  ((uint)*local_24 + (uint)*local_10 & 0x1e0) << 3];
      param_4 = param_4 + 1;
      param_5 = param_5 + 1;
      param_13 = param_13 - 1;
    }
    bVar15 = (byte)local_14;
    param_11 = param_11 + 1;
    param_10 = param_10 + 1;
    if (3 < (int)param_13) {
      local_4c = (byte *)((int)&DAT_637956a0 + local_18 * 4 + 1);
      local_50 = (byte *)((int)&DAT_637956a0 + local_18 * 4 + 2);
      local_40 = (byte *)(&DAT_637956a0 + local_18);
      local_54 = (byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1);
      local_44 = (byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2);
      local_48 = (byte *)(&DAT_637956a0 + uVar11);
      local_58 = param_13 >> 2;
      do {
        iVar3 = (&DAT_63790960)[*param_10];
        iVar4 = (&DAT_63792180)[*param_11];
        iVar19 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
        iVar5 = (&DAT_63791580)[*param_8];
        iVar6 = (&DAT_63791580)[*param_9];
        iVar7 = (&DAT_63791580)[param_8[1]];
        iVar8 = (&DAT_63791580)[param_9[1]];
        uVar11 = (uint)(byte)(&DAT_63795aa0)
                             [((uint)(byte)(&DAT_6378dbec)[iVar5 + iVar4] << 4 |
                              (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar19]) << 4 |
                              (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar3]];
        bVar15 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar4] << 4 |
                  (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar19]) << 4 |
                  (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar3]];
        uVar9 = (uint)bVar15;
        bVar1 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar4] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar19]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar3]];
        uVar10 = (uint)bVar1;
        bVar2 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbec)[iVar8 + iVar4] << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar8 + iVar19]) << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar8 + iVar3]];
        uVar18 = (uint)bVar2;
        param_3[1] = (&DAT_63795aa0)
                     [((uint)(byte)(&DAT_6378dbec)[iVar5 + iVar4] << 4 |
                      (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar19]) << 4 |
                      (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar3]];
        param_5[1] = bVar15;
        param_3[3] = bVar1;
        param_5[3] = bVar2;
        uVar12 = (uint)param_1[1];
        uVar16 = (uint)(byte)(&DAT_63795aa0)
                             [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) +
                                    (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) & 0x1e0 |
                                   (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2) +
                                        (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2)) >> 4)
                              >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar12) +
                                      (uint)*(byte *)(&DAT_637956a0 + uVar11) & 0x1e0) << 3];
        param_2[1] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) & 0x1e0 |
                           (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2) +
                                (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2)) >> 4) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar12) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar11) & 0x1e0) << 3];
        uVar12 = (uint)(byte)(&DAT_63795aa0)
                             [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) +
                                    (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) & 0x1e0 |
                                   (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2) +
                                        (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2)) >> 4)
                              >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar9) +
                                      (uint)*(byte *)(&DAT_637956a0 + uVar11) & 0x1e0) << 3];
        param_4[1] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) & 0x1e0 |
                           (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2) +
                                (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2)) >> 4) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar9) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar11) & 0x1e0) << 3];
        uVar13 = (uint)param_1[3];
        uVar14 = (uint)(byte)(&DAT_63795aa0)
                             [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) +
                                    (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) & 0x1e0 |
                                   (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) +
                                        (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2)) >> 4)
                              >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar13) +
                                      (uint)*(byte *)(&DAT_637956a0 + uVar10) & 0x1e0) << 3];
        param_2[3] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) & 0x1e0 |
                           (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) +
                                (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2)) >> 4) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar13) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar10) & 0x1e0) << 3];
        uVar13 = (uint)(byte)(&DAT_63795aa0)
                             [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar18 * 4 + 1) +
                                    (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) & 0x1e0 |
                                   (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar18 * 4 + 2) +
                                        (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2)) >> 4)
                              >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar18) +
                                      (uint)*(byte *)(&DAT_637956a0 + uVar10) & 0x1e0) << 3];
        param_4[3] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar18 * 4 + 1) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) & 0x1e0 |
                           (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar18 * 4 + 2) +
                                (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2)) >> 4) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar18) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar10) & 0x1e0) << 3];
        *param_2 = (&DAT_63795aa0)
                   [(int)((int)((uint)*local_50 +
                               (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2)) >> 4 |
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) + (uint)*local_4c &
                         0x1e0) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar16) + (uint)*local_40 & 0x1e0) << 3];
        *param_3 = (&DAT_63795aa0)
                   [(int)((uint)*local_1c + (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) &
                          0x1e0 | (int)((uint)*local_2c +
                                       (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2)) >> 4)
                    >> 1 | ((uint)*local_10 + (uint)*(byte *)(&DAT_637956a0 + uVar11) & 0x1e0) << 3]
        ;
        *param_4 = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) + (uint)*local_54 &
                          0x1e0 | (int)((uint)*local_44 +
                                       (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4)
                    >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar12) + (uint)*local_48 & 0x1e0) << 3]
        ;
        *param_5 = (&DAT_63795aa0)
                   [(int)((uint)*local_34 + (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) &
                          0x1e0 | (int)((uint)*local_30 +
                                       (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2)) >> 4) >>
                    1 | ((uint)*local_24 + (uint)*(byte *)(&DAT_637956a0 + uVar9) & 0x1e0) << 3];
        param_2[2] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) & 0x1e0 |
                           (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2) +
                                (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2)) >> 4) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar14) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar16) & 0x1e0) << 3];
        param_3[2] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) & 0x1e0 |
                           (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2) +
                                (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2)) >> 4) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar10) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar11) & 0x1e0) << 3];
        param_4[2] = (&DAT_63795aa0)
                     [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) +
                                 (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4 |
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) & 0x1e0) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar13) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
        param_5[2] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar18 * 4 + 1) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) & 0x1e0 |
                           (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar18 * 4 + 2) +
                                (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2)) >> 4) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar18) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar9) & 0x1e0) << 3];
        iVar3 = (&DAT_63790960)[param_10[1]];
        iVar19 = (&DAT_63791d80)[param_10[1]] + (&DAT_637929a0)[param_11[1]];
        iVar4 = (&DAT_63792180)[param_11[1]];
        iVar5 = (&DAT_63791580)[param_8[2]];
        iVar6 = (&DAT_63791580)[param_9[2]];
        iVar7 = (&DAT_63791580)[param_8[3]];
        iVar8 = (&DAT_63791580)[param_9[3]];
        uVar9 = (uint)(byte)(&DAT_63795aa0)
                            [((uint)(byte)(&DAT_6378dbec)[iVar5 + iVar4] << 4 |
                             (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar19]) << 4 |
                             (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar3]];
        bVar1 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar4] << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar19]) << 4 |
                 (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar3]];
        uVar12 = (uint)bVar1;
        bVar15 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar4] << 4 |
                  (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar19]) << 4 |
                  (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar3]];
        local_14 = (uint)bVar15;
        bVar2 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbec)[iVar8 + iVar4] << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar8 + iVar19]) << 4 |
                 (uint)(byte)(&DAT_6378dbec)[iVar8 + iVar3]];
        local_20 = (uint)bVar2;
        param_8 = param_8 + 4;
        param_9 = param_9 + 4;
        param_10 = param_10 + 2;
        param_11 = param_11 + 2;
        param_3[5] = (&DAT_63795aa0)
                     [((uint)(byte)(&DAT_6378dbec)[iVar5 + iVar4] << 4 |
                      (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar19]) << 4 |
                      (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar3]];
        param_5[5] = bVar1;
        param_3[7] = bVar15;
        param_5[7] = bVar2;
        uVar11 = (uint)param_1[5];
        uVar16 = (uint)(byte)(&DAT_63795aa0)
                             [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2) +
                                         (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2)) >> 4 |
                                   (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) +
                                   (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) & 0x1e0) >> 1
                              | ((uint)*(byte *)(&DAT_637956a0 + uVar11) +
                                 (uint)*(byte *)(&DAT_637956a0 + uVar9) & 0x1e0) << 3];
        param_2[5] = (&DAT_63795aa0)
                     [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2) +
                                 (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2)) >> 4 |
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) & 0x1e0) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar11) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar9) & 0x1e0) << 3];
        uVar17 = (uint)(byte)(&DAT_63795aa0)
                             [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) +
                                    (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) & 0x1e0 |
                                   (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2) +
                                        (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2)) >> 4)
                              >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar12) +
                                      (uint)*(byte *)(&DAT_637956a0 + uVar9) & 0x1e0) << 3];
        param_4[5] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) & 0x1e0 |
                           (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2) +
                                (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2)) >> 4) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar12) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar9) & 0x1e0) << 3];
        uVar11 = (uint)param_1[7];
        local_2c = (byte *)((int)&DAT_637956a0 + local_14 * 4 + 2);
        local_1c = (byte *)((int)&DAT_637956a0 + local_14 * 4 + 1);
        local_10 = (byte *)(&DAT_637956a0 + local_14);
        local_18 = (uint)(byte)(&DAT_63795aa0)
                               [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2) +
                                           (uint)*local_2c) >> 4 |
                                     (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) +
                                     (uint)*local_1c & 0x1e0) >> 1 |
                                ((uint)*(byte *)(&DAT_637956a0 + uVar11) + (uint)*local_10 & 0x1e0)
                                << 3];
        param_2[7] = (&DAT_63795aa0)
                     [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2) +
                                 (uint)*local_2c) >> 4 |
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) + (uint)*local_1c &
                           0x1e0) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar11) + (uint)*local_10 & 0x1e0) << 3];
        local_34 = (byte *)((int)&DAT_637956a0 + local_20 * 4 + 1);
        local_30 = (byte *)((int)&DAT_637956a0 + local_20 * 4 + 2);
        local_24 = (byte *)(&DAT_637956a0 + local_20);
        uVar11 = (uint)(byte)(&DAT_63795aa0)
                             [(int)((uint)*local_34 + (uint)*local_1c & 0x1e0 |
                                   (int)((uint)*local_30 + (uint)*local_2c) >> 4) >> 1 |
                              ((uint)*local_24 + (uint)*local_10 & 0x1e0) << 3];
        param_4[7] = (&DAT_63795aa0)
                     [(int)((uint)*local_34 + (uint)*local_1c & 0x1e0 |
                           (int)((uint)*local_30 + (uint)*local_2c) >> 4) >> 1 |
                      ((uint)*local_24 + (uint)*local_10 & 0x1e0) << 3];
        param_2[4] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) & 0x1e0 |
                           (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2) +
                                (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2)) >> 4) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar14) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar16) & 0x1e0) << 3];
        param_3[4] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) & 0x1e0 |
                           (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2) +
                                (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2)) >> 4) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar10) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar9) & 0x1e0) << 3];
        param_4[4] = (&DAT_63795aa0)
                     [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) +
                                 (uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2)) >> 4 |
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) +
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) & 0x1e0) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar13) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar17) & 0x1e0) << 3];
        param_5[4] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar18 * 4 + 1) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) & 0x1e0 |
                           (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar18 * 4 + 2) +
                                (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar18) +
                       (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
        local_4c = (byte *)((int)&DAT_637956a0 + local_18 * 4 + 1);
        local_50 = (byte *)((int)&DAT_637956a0 + local_18 * 4 + 2);
        local_40 = (byte *)(&DAT_637956a0 + local_18);
        param_2[6] = (&DAT_63795aa0)
                     [(int)((int)((uint)*local_50 +
                                 (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2)) >> 4 |
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) + (uint)*local_4c &
                           0x1e0) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar16) + (uint)*local_40 & 0x1e0) << 3];
        param_3[6] = (&DAT_63795aa0)
                     [(int)((uint)*local_1c + (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) &
                            0x1e0 | (int)((uint)*local_2c +
                                         (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2)) >> 4)
                      >> 1 | ((uint)*local_10 + (uint)*(byte *)(&DAT_637956a0 + uVar9) & 0x1e0) << 3
                     ];
        local_44 = (byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2);
        local_54 = (byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1);
        local_48 = (byte *)(&DAT_637956a0 + uVar11);
        param_4[6] = (&DAT_63795aa0)
                     [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) + (uint)*local_54 &
                            0x1e0 | (int)((uint)*local_44 +
                                         (uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2)) >> 4)
                      >> 1 | ((uint)*(byte *)(&DAT_637956a0 + uVar17) + (uint)*local_48 & 0x1e0) <<
                             3];
        param_5[6] = (&DAT_63795aa0)
                     [(int)((uint)*local_34 + (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) &
                            0x1e0 | (int)((uint)*local_30 +
                                         (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4)
                      >> 1 | ((uint)*local_24 + (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) <<
                             3];
        param_1 = param_1 + 8;
        param_2 = param_2 + 8;
        param_3 = param_3 + 8;
        param_4 = param_4 + 8;
        param_5 = param_5 + 8;
        param_13 = param_13 - 4;
        local_58 = local_58 - 1;
      } while (local_58 != 0);
    }
    uVar9 = uVar11;
    if (1 < (int)param_13) {
      iVar3 = (&DAT_63790960)[*param_10];
      iVar4 = (&DAT_63792180)[*param_11];
      iVar19 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
      iVar5 = (&DAT_63791580)[*param_8];
      iVar6 = (&DAT_63791580)[*param_9];
      iVar7 = (&DAT_63791580)[param_8[1]];
      iVar8 = (&DAT_63791580)[param_9[1]];
      uVar10 = (uint)(byte)(&DAT_63795aa0)
                           [((uint)(byte)(&DAT_6378dbec)[iVar5 + iVar4] << 4 |
                            (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar19]) << 4 |
                            (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar3]];
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar4] << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar19]) << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar3]];
      uVar12 = (uint)bVar1;
      bVar15 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar4] << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar19]) << 4 |
                (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar3]];
      uVar13 = (uint)bVar15;
      bVar2 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbec)[iVar8 + iVar4] << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar8 + iVar19]) << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar8 + iVar3]];
      uVar16 = (uint)bVar2;
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      param_3[1] = (&DAT_63795aa0)
                   [((uint)(byte)(&DAT_6378dbec)[iVar5 + iVar4] << 4 |
                    (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar19]) << 4 |
                    (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar3]];
      param_5[1] = bVar1;
      param_3[3] = bVar15;
      param_5[3] = bVar2;
      uVar9 = (uint)param_1[1];
      uVar17 = (uint)(byte)(&DAT_63795aa0)
                           [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2) +
                                       (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2)) >> 4 |
                                 (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) +
                                 (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) & 0x1e0) >> 1
                            | ((uint)*(byte *)(&DAT_637956a0 + uVar9) +
                               (uint)*(byte *)(&DAT_637956a0 + uVar10) & 0x1e0) << 3];
      param_2[1] = (&DAT_63795aa0)
                   [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2) +
                               (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2)) >> 4 |
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) & 0x1e0) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar9) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar10) & 0x1e0) << 3];
      uVar14 = (uint)(byte)(&DAT_63795aa0)
                           [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) +
                                  (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) & 0x1e0 |
                                 (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2) +
                                      (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2)) >> 4) >>
                            1 | ((uint)*(byte *)(&DAT_637956a0 + uVar12) +
                                 (uint)*(byte *)(&DAT_637956a0 + uVar10) & 0x1e0) << 3];
      param_4[1] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar12) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar10) & 0x1e0) << 3];
      uVar9 = (uint)param_1[3];
      uVar18 = (uint)(byte)(&DAT_63795aa0)
                           [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) +
                                  (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0 |
                                 (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2) +
                                      (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4) >>
                            1 | ((uint)*(byte *)(&DAT_637956a0 + uVar9) +
                                 (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
      param_2[3] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar9) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
      uVar9 = (uint)(byte)(&DAT_63795aa0)
                          [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) +
                                 (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0 |
                                (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2) +
                                     (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4) >>
                           1 | ((uint)*(byte *)(&DAT_637956a0 + uVar16) +
                                (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
      param_4[3] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar16) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
      *param_2 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + local_18) +
                   (uint)*(byte *)(&DAT_637956a0 + uVar17) & 0x1e0) << 3];
      *param_3 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + local_14) +
                   (uint)*(byte *)(&DAT_637956a0 + uVar10) & 0x1e0) << 3];
      *param_4 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar11) + (uint)*(byte *)(&DAT_637956a0 + uVar14)
                  & 0x1e0) << 3];
      *param_5 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_20 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + local_20 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + local_20) +
                   (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
      param_2[2] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar18 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar18 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar18) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar17) & 0x1e0) << 3];
      param_3[2] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar13) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar10) & 0x1e0) << 3];
      param_4[2] = (&DAT_63795aa0)
                   [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2) +
                               (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4 |
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) & 0x1e0) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar9) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar14) & 0x1e0) << 3];
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
      param_5[2] = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar16) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
      param_3 = param_3 + 4;
      param_4 = param_4 + 4;
      param_5 = param_5 + 4;
      param_13 = param_13 - 2;
      local_20 = uVar16;
      local_18 = uVar18;
      local_14 = uVar13;
    }
    if (0 < (int)param_13) {
      iVar3 = (&DAT_63791580)[*param_8];
      iVar4 = (&DAT_63791580)[*param_9];
      bVar15 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[iVar3 + (&DAT_63792180)[*param_11]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar3 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 4
                | (uint)(byte)(&DAT_6378dbe8)[iVar3 + (&DAT_63790960)[*param_10]]];
      uVar11 = (uint)bVar15;
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63792180)[*param_11]] << 4 |
               (uint)(byte)(&DAT_6378dbe8)
                           [iVar4 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 4 |
               (uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63790960)[*param_10]]];
      uVar12 = (uint)bVar1;
      param_3[1] = bVar15;
      param_3[2] = bVar15;
      param_5[1] = bVar1;
      param_5[2] = bVar1;
      uVar10 = (uint)param_1[1];
      bVar15 = (&DAT_63795aa0)
               [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) & 0x1e0 |
                     (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2)) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar10) + (uint)*(byte *)(&DAT_637956a0 + uVar11) &
                0x1e0) << 3];
      uVar13 = (uint)bVar15;
      param_2[1] = bVar15;
      param_2[2] = bVar15;
      bVar15 = (&DAT_63795aa0)
               [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) & 0x1e0 |
                     (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2)) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar12) + (uint)*(byte *)(&DAT_637956a0 + uVar11) &
                0x1e0) << 3];
      uVar10 = (uint)bVar15;
      param_4[1] = bVar15;
      param_4[2] = bVar15;
      *param_2 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + local_18 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + local_18) +
                   (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
      *param_3 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + local_14) +
                   (uint)*(byte *)(&DAT_637956a0 + uVar11) & 0x1e0) << 3];
      *param_4 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar9) + (uint)*(byte *)(&DAT_637956a0 + uVar10)
                  & 0x1e0) << 3];
      *param_5 = (&DAT_63795aa0)
                 [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_20 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) & 0x1e0 |
                       (int)((uint)*(byte *)((int)&DAT_637956a0 + local_20 * 4 + 2) +
                            (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2)) >> 4) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + local_20) +
                   (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
      return;
    }
    *param_2 = (byte)local_18;
    *param_3 = bVar15;
    *param_4 = (byte)uVar9;
    *param_5 = (byte)local_20;
  }
  return;
}


