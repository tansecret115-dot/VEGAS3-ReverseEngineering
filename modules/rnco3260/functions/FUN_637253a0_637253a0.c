/* Module: rnco3260.dll
   Function: FUN_637253a0
   Address: 637253a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637253a0(byte *param_1,byte *param_2,undefined4 param_3,int param_4,byte *param_5,byte *param_6,
            byte *param_7,byte *param_8,uint param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  byte bVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  byte *pbVar21;
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
      iVar5 = (&DAT_63790960)[*param_7];
      iVar16 = (&DAT_63792180)[*param_8];
      iVar19 = (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7];
      iVar6 = (&DAT_63791580)[*param_5];
      iVar7 = (&DAT_63791580)[*param_6];
      iVar8 = (&DAT_63791580)[param_5[1]];
      iVar9 = (&DAT_63791580)[param_6[1]];
      uVar15 = (uint)(byte)(&DAT_63795aa0)
                           [((uint)(byte)(&DAT_6378dbec)[iVar6 + iVar16] << 4 |
                            (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar19]) << 4 |
                            (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar5]];
      uVar14 = (uint)(byte)(&DAT_63795aa0)
                           [((uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar16] << 4 |
                            (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar19]) << 4 |
                            (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar5]];
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar16] << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar19]) << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar5]];
      bVar17 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbec)[iVar9 + iVar16] << 4 |
                (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar19]) << 4 |
                (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar5]];
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      param_7 = param_7 + 1;
      iVar16 = param_4 - local_28;
      param_8 = param_8 + 1;
      if (0 < iVar16) {
        while( true ) {
          local_10 = (uint)bVar1;
          local_14 = (uint)bVar17;
          *param_1 = (byte)uVar15;
          param_1 = param_1 + 1;
          *param_2 = (byte)uVar14;
          param_2 = param_2 + 1;
          local_8 = iVar16 + -1;
          iVar16 = 0;
          pbVar21 = param_1;
          if (local_8 == 0) break;
          while (local_c = local_c + param_10 * -2, -1 < local_c) {
            *pbVar21 = (byte)uVar15;
            param_1 = pbVar21 + 1;
            *param_2 = (byte)uVar14;
            param_2 = param_2 + 1;
            local_8 = local_8 + -1;
            pbVar21 = param_1;
            if (local_8 == 0) {
              iVar16 = 0;
              goto LAB_63725fa0;
            }
          }
          local_c = local_c + param_4;
          bVar3 = (&DAT_63795aa0)
                  [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) & 0x1e0 |
                        (int)((uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 2) +
                             (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2)) >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + local_10) +
                    (uint)*(byte *)(&DAT_637956a0 + uVar15) & 0x1e0) << 3];
          local_1c = (uint)bVar3;
          param_1 = pbVar21 + 1;
          bVar4 = (&DAT_63795aa0)
                  [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4 |
                        (uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) & 0x1e0) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + local_14) +
                    (uint)*(byte *)(&DAT_637956a0 + uVar14) & 0x1e0) << 3];
          local_24 = (uint)bVar4;
          *pbVar21 = bVar3;
          *param_2 = bVar4;
          param_2 = param_2 + 1;
          local_8 = local_8 + -1;
          iVar16 = 0;
          bVar18 = bVar17;
          if (local_8 == 0) goto LAB_63725cbe;
          while (local_c = local_c + param_10 * -2, -1 < local_c) {
            *param_1 = bVar3;
            param_1 = param_1 + 1;
            *param_2 = bVar4;
            param_2 = param_2 + 1;
            local_8 = local_8 + -1;
            if (local_8 == 0) {
              iVar16 = 0;
              goto LAB_63725cbe;
            }
          }
          local_c = local_c + param_4;
          iVar16 = local_8;
LAB_6372566c:
          *param_1 = (byte)local_10;
          *param_2 = bVar17;
          pbVar21 = param_1;
          iVar5 = iVar16;
          while( true ) {
            iVar5 = iVar5 + -1;
            param_2 = param_2 + 1;
            pbVar21 = pbVar21 + 1;
            pbVar10 = param_5;
            pbVar11 = param_6;
            pbVar12 = param_7;
            pbVar13 = param_8;
            if (iVar5 == 0) goto LAB_63725ad8;
            local_c = local_c + param_10 * -2;
            if (local_c < 0) break;
            *pbVar21 = (byte)local_10;
            *param_2 = bVar17;
          }
          local_c = local_c + param_4;
          iVar5 = (&DAT_63790960)[*param_7];
          iVar6 = (&DAT_63792180)[*param_8];
          iVar20 = (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7];
          iVar7 = (&DAT_63791580)[*param_5];
          iVar8 = (&DAT_63791580)[param_5[1]];
          iVar9 = (&DAT_63791580)[*param_6];
          iVar19 = (&DAT_63791580)[param_6[1]];
          bVar3 = (&DAT_63795aa0)
                  [((uint)(byte)(&DAT_6378dbec)[iVar7 + iVar20] |
                   (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar6] << 4) << 4 |
                   (uint)(byte)(&DAT_6378dbec)[iVar7 + iVar5]];
          uVar15 = (uint)bVar3;
          bVar4 = (&DAT_63795aa0)
                  [((uint)(byte)(&DAT_6378dbe4)[iVar9 + iVar20] |
                   (uint)(byte)(&DAT_6378dbe4)[iVar9 + iVar6] << 4) << 4 |
                   (uint)(byte)(&DAT_6378dbe4)[iVar9 + iVar5]];
          uVar14 = (uint)bVar4;
          local_18 = (&DAT_63795aa0)
                     [((uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar20] |
                      (uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar6] << 4) << 4 |
                      (uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar5]];
          local_1c = (uint)local_18;
          bVar2 = (&DAT_63795aa0)
                  [((uint)(byte)(&DAT_6378dbec)[iVar19 + iVar6] << 4 |
                   (uint)(byte)(&DAT_6378dbec)[iVar19 + iVar20]) << 4 |
                   (uint)(byte)(&DAT_6378dbec)[iVar19 + iVar5]];
          local_24 = (uint)bVar2;
          bVar1 = (&DAT_63795aa0)
                  [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) & 0x1e0 |
                        (int)((uint)*(byte *)((int)&DAT_637956a0 + local_10 * 4 + 2) +
                             (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2)) >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + local_10) +
                    (uint)*(byte *)(&DAT_637956a0 + uVar15) & 0x1e0) << 3];
          local_10 = (uint)bVar1;
          param_1 = pbVar21 + 1;
          bVar17 = (&DAT_63795aa0)
                   [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 1) +
                          (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) & 0x1e0 |
                         (int)((uint)*(byte *)((int)&DAT_637956a0 + local_14 * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + local_14) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar14) & 0x1e0) << 3];
          *pbVar21 = bVar1;
          *param_2 = bVar17;
          param_2 = param_2 + 1;
          local_8 = iVar16 + -2;
          iVar16 = 0;
          bVar18 = bVar17;
          if (local_8 == 0) goto LAB_63725cbe;
          while (local_c = local_c + param_10 * -2, -1 < local_c) {
            *param_1 = bVar1;
            param_1 = param_1 + 1;
            *param_2 = bVar17;
            param_2 = param_2 + 1;
            local_8 = local_8 + -1;
            if (local_8 == 0) {
              iVar16 = 0;
              goto LAB_63725cbe;
            }
          }
          *param_1 = bVar3;
          local_c = local_c + param_4;
          param_1 = param_1 + 1;
          *param_2 = bVar4;
          param_2 = param_2 + 1;
          local_8 = local_8 + -1;
          iVar16 = 0;
          pbVar21 = param_1;
          if (local_8 == 0) break;
          while (local_c = local_c + param_10 * -2, -1 < local_c) {
            *pbVar21 = bVar3;
            param_1 = pbVar21 + 1;
            *param_2 = bVar4;
            param_2 = param_2 + 1;
            local_8 = local_8 + -1;
            pbVar21 = param_1;
            if (local_8 == 0) {
              iVar16 = 0;
              bVar18 = bVar4;
              bVar1 = bVar3;
              goto LAB_63725cbe;
            }
          }
          local_c = local_c + param_4;
          bVar1 = (&DAT_63795aa0)
                  [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + local_1c * 4 + 2) +
                              (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2)) >> 4 |
                        (uint)*(byte *)((int)&DAT_637956a0 + local_1c * 4 + 1) +
                        (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) & 0x1e0) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + local_1c) +
                    (uint)*(byte *)(&DAT_637956a0 + uVar15) & 0x1e0) << 3];
          param_1 = pbVar21 + 1;
          bVar3 = (&DAT_63795aa0)
                  [(int)((uint)*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) & 0x1e0 |
                        (int)((uint)*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 2) +
                             (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2)) >> 4) >> 1 |
                   ((uint)*(byte *)(&DAT_637956a0 + local_24) +
                    (uint)*(byte *)(&DAT_637956a0 + uVar14) & 0x1e0) << 3];
          *pbVar21 = bVar1;
          *param_2 = bVar3;
          param_2 = param_2 + 1;
          local_8 = local_8 + -1;
          bVar18 = bVar2;
          if (local_8 == 0) {
LAB_63725f63:
            iVar16 = 0;
            local_10._0_1_ = local_18;
            bVar1 = (byte)local_10;
            goto LAB_63725cbe;
          }
          while (local_c = local_c + param_10 * -2, -1 < local_c) {
            *param_1 = bVar1;
            param_1 = param_1 + 1;
            *param_2 = bVar3;
            param_2 = param_2 + 1;
            local_8 = local_8 + -1;
            if (local_8 == 0) {
              iVar16 = 0;
              bVar1 = local_18;
              goto LAB_63725cbe;
            }
          }
          local_c = local_c + param_4;
          *param_1 = local_18;
          *param_2 = bVar2;
          pbVar21 = param_1;
          iVar5 = local_8;
          while( true ) {
            iVar5 = iVar5 + -1;
            param_2 = param_2 + 1;
            pbVar21 = pbVar21 + 1;
            pbVar10 = param_5 + 2;
            pbVar11 = param_6 + 2;
            pbVar12 = param_7 + 1;
            pbVar13 = param_8 + 1;
            if (iVar5 == 0) goto LAB_63725ad8;
            local_c = local_c + param_10 * -2;
            if (local_c < 0) break;
            *pbVar21 = local_18;
            *param_2 = bVar2;
          }
          local_c = local_c + param_4;
          bVar17 = param_7[1];
          bVar1 = param_8[1];
          iVar5 = (&DAT_63790960)[bVar17];
          iVar16 = (&DAT_63792180)[bVar1];
          iVar19 = (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar17];
          iVar6 = (&DAT_63791580)[param_5[2]];
          iVar7 = (&DAT_63791580)[param_6[2]];
          iVar8 = (&DAT_63791580)[param_5[3]];
          iVar9 = (&DAT_63791580)[param_6[3]];
          uVar15 = (uint)(byte)(&DAT_63795aa0)
                               [((uint)(byte)(&DAT_6378dbec)[iVar6 + iVar16] << 4 |
                                (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar19]) << 4 |
                                (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar5]];
          uVar14 = (uint)(byte)(&DAT_63795aa0)
                               [((uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar16] << 4 |
                                (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar19]) << 4 |
                                (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar5]];
          bVar1 = (&DAT_63795aa0)
                  [((uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar16] << 4 |
                   (uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar19]) << 4 |
                   (uint)(byte)(&DAT_6378dbe4)[iVar8 + iVar5]];
          bVar17 = (&DAT_63795aa0)
                   [((uint)(byte)(&DAT_6378dbec)[iVar9 + iVar16] << 4 |
                    (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar19]) << 4 |
                    (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar5]];
          param_5 = param_5 + 4;
          param_6 = param_6 + 4;
          param_7 = param_7 + 2;
          param_8 = param_8 + 2;
          local_18 = (&DAT_63795aa0)
                     [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) +
                                 (uint)*(byte *)((int)&DAT_637956a0 + local_1c * 4 + 2)) >> 4 |
                           (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) +
                           (uint)*(byte *)((int)&DAT_637956a0 + local_1c * 4 + 1) & 0x1e0) >> 1 |
                      ((uint)*(byte *)(&DAT_637956a0 + uVar15) +
                       (uint)*(byte *)(&DAT_637956a0 + local_1c) & 0x1e0) << 3];
          bVar18 = (&DAT_63795aa0)
                   [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2) +
                               (uint)*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 2)) >> 4 |
                         (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) +
                         (uint)*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 1) & 0x1e0) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar14) +
                     (uint)*(byte *)(&DAT_637956a0 + local_24) & 0x1e0) << 3];
          *pbVar21 = local_18;
          *param_2 = bVar18;
          iVar16 = local_8 + -2;
          param_1 = pbVar21;
          while( true ) {
            param_2 = param_2 + 1;
            param_1 = param_1 + 1;
            if (iVar16 == 0) goto LAB_63725f63;
            local_c = local_c + param_10 * -2;
            if (local_c < 0) break;
            *param_1 = local_18;
            *param_2 = bVar18;
            iVar16 = iVar16 + -1;
          }
          local_c = local_c + param_4;
        }
      }
LAB_63725fa0:
      bVar18 = (byte)uVar14;
      bVar1 = (byte)uVar15;
    }
    else {
      bVar17 = *param_7;
      bVar1 = *param_8;
      iVar5 = (&DAT_63791580)[*param_5];
      local_24 = (&DAT_63791580)[*param_6];
      local_10 = (uint)(byte)(&DAT_63795aa0)
                             [((uint)(byte)(&DAT_6378dbe8)[iVar5 + (&DAT_63792180)[bVar1]] << 4 |
                              (uint)(byte)(&DAT_6378dbe8)
                                          [iVar5 + (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar17]]
                              ) << 4 | (uint)(byte)(&DAT_6378dbe8)[iVar5 + (&DAT_63790960)[bVar17]]]
      ;
      param_5 = param_5 + 1;
      bVar18 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[local_24 + (&DAT_63792180)[bVar1]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [local_24 + (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar17]]) << 4 |
                (uint)(byte)(&DAT_6378dbe8)[local_24 + (&DAT_63790960)[bVar17]]];
      local_14 = (uint)bVar18;
      param_6 = param_6 + 1;
      param_7 = param_7 + 1;
      param_8 = param_8 + 1;
      iVar16 = param_4 - local_28;
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe8)[iVar5 + (&DAT_63792180)[bVar1]] << 4 |
               (uint)(byte)(&DAT_6378dbe8)[iVar5 + (&DAT_637929a0)[bVar1] + (&DAT_63791d80)[bVar17]]
               ) << 4 | (uint)(byte)(&DAT_6378dbe8)[iVar5 + (&DAT_63790960)[bVar17]]];
      bVar17 = bVar18;
      if (0 < iVar16) goto LAB_6372566c;
    }
LAB_63725cbe:
    local_10._0_1_ = bVar1;
    for (iVar16 = iVar16 + local_28; iVar16 != 0; iVar16 = iVar16 + -1) {
      *param_1 = (byte)local_10;
      param_1 = param_1 + 1;
      *param_2 = bVar18;
      param_2 = param_2 + 1;
    }
  }
  return;
LAB_63725ad8:
  param_8 = pbVar13;
  param_7 = pbVar12;
  param_6 = pbVar11;
  param_5 = pbVar10;
  iVar16 = 0;
  param_1 = pbVar21;
  bVar18 = bVar17;
  bVar1 = (byte)local_10;
  if ((param_10 + param_9 & 1) != 0) {
    iVar16 = local_28 >> 1;
    local_28 = local_28 - iVar16;
    if (0 < iVar16) {
      iVar5 = (&DAT_63791580)[*param_5];
      iVar6 = (&DAT_63791580)[*param_6];
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe8)[iVar5 + (&DAT_63792180)[*param_8]] << 4 |
               (uint)(byte)(&DAT_6378dbe8)
                           [iVar5 + (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7]]) << 4 |
               (uint)(byte)(&DAT_6378dbe8)[iVar5 + (&DAT_63790960)[*param_7]]];
      uVar14 = (uint)bVar1;
      bVar18 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[iVar6 + (&DAT_63792180)[*param_8]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar6 + (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7]]) << 4 |
                (uint)(byte)(&DAT_6378dbe8)[iVar6 + (&DAT_63790960)[*param_7]]];
      uVar15 = (uint)bVar18;
      bVar17 = (&DAT_63795aa0)
               [(int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1) +
                      (uint)*(byte *)((int)&DAT_637956a0 + local_1c * 4 + 1) & 0x1e0 |
                     (int)((uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + local_1c * 4 + 2)) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar14) + (uint)*(byte *)(&DAT_637956a0 + local_1c)
                & 0x1e0) << 3];
      bVar3 = (&DAT_63795aa0)
              [(int)((int)((uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) +
                          (uint)*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 2)) >> 4 |
                    (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) +
                    (uint)*(byte *)((int)&DAT_637956a0 + local_24 * 4 + 1) & 0x1e0) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + local_24)
               & 0x1e0) << 3];
      *pbVar21 = bVar17;
      *param_2 = bVar3;
      while( true ) {
        iVar16 = iVar16 + -1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        if ((iVar16 == 0) || (local_c = local_c + param_10 * -2, local_c < 0)) break;
        *param_1 = bVar17;
        *param_2 = bVar3;
      }
    }
  }
  goto LAB_63725cbe;
}


