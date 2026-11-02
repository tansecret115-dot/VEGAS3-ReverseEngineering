/* Module: rnco3260.dll
   Function: FUN_637578b0
   Address: 637578b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637578b0(byte *param_1,undefined1 *param_2,byte *param_3,undefined1 *param_4,byte *param_5,
            undefined4 param_6,int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11
            ,byte param_12,int param_13)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int local_14;
  int local_8;
  
  local_14 = param_13 >> 1;
  local_8 = param_7;
  if (param_7 != 0) {
    if ((param_12 & 1) != 0) goto LAB_63757ea0;
    do {
      local_14 = local_14 - param_7;
      if (local_14 < 0) {
        local_14 = local_14 + param_13;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 1;
          goto LAB_63757ea0;
        }
        bVar3 = *param_11;
        bVar4 = *param_10;
        iVar20 = (&DAT_63790960)[bVar4] + (&DAT_63790d60)[bVar3];
        iVar21 = (&DAT_63791d80)[bVar4] + (&DAT_637929a0)[bVar3];
        iVar11 = (&DAT_63791980)[bVar4] + (&DAT_63792180)[bVar3];
        iVar9 = (&DAT_63791580)[*param_9];
        iVar10 = (&DAT_63791580)[*param_8];
        iVar7 = (&DAT_63791580)[param_8[1]];
        iVar8 = (&DAT_63791580)[param_9[1]];
        uVar12 = (uint)(byte)(&DAT_63795aa0)
                             [((uint)(byte)(&DAT_6378dbe8)[iVar10 + iVar11] << 4 |
                              (uint)(byte)(&DAT_6378dbe8)[iVar10 + iVar21]) << 4 |
                              (uint)(byte)(&DAT_6378dbe8)[iVar10 + iVar20]];
        bVar3 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe8)[iVar9 + iVar11] << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar9 + iVar21]) << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar9 + iVar20]];
        uVar13 = (uint)bVar3;
        bVar4 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe8)[iVar7 + iVar11] << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar7 + iVar21]) << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar7 + iVar20]];
        uVar14 = (uint)bVar4;
        bVar5 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe8)[iVar8 + iVar11] << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar8 + iVar21]) << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar8 + iVar20]];
        uVar15 = (uint)bVar5;
        *param_3 = (&DAT_63795aa0)
                   [((uint)(byte)(&DAT_6378dbe8)[iVar10 + iVar11] << 4 |
                    (uint)(byte)(&DAT_6378dbe8)[iVar10 + iVar21]) << 4 |
                    (uint)(byte)(&DAT_6378dbe8)[iVar10 + iVar20]];
        param_3[1] = bVar4;
        *param_5 = bVar3;
        param_5[1] = bVar5;
        uVar18 = (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1);
        uVar19 = (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2);
        param_5 = param_5 + 2;
        uVar6 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) + uVar18 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) + uVar19) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar13) + (uint)*(byte *)(&DAT_637956a0 + uVar12)
                 & 0x1e0) << 3];
        uVar13 = (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 1);
        uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + uVar14 * 4 + 2);
        uVar1 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar13 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar16) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar14)
                 & 0x1e0) << 3];
        uVar15 = (uint)*param_1;
        uVar17 = (uint)param_1[1];
        param_1 = param_1 + 2;
        uVar2 = (&DAT_63795aa0)
                [(int)((int)(*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2) + uVar16) >> 4 |
                      *(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) + uVar13 & 0x1e0) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar17) + (uint)*(byte *)(&DAT_637956a0 + uVar14)
                 & 0x1e0) << 3];
        *param_2 = (&DAT_63795aa0)
                   [(int)((int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar19) >> 4 |
                         *(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar18 & 0x1e0) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar15) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
        param_2[1] = uVar2;
        param_2 = param_2 + 2;
        *param_4 = uVar6;
        param_4[1] = uVar1;
        param_3 = param_3 + 2;
        param_4 = param_4 + 2;
      }
      else {
        bVar3 = *param_10;
        bVar4 = *param_11;
        iVar9 = (&DAT_63791580)[*param_8];
        iVar10 = (&DAT_63791580)[*param_9];
        uVar12 = (uint)(byte)(&DAT_63795aa0)
                             [((uint)(byte)(&DAT_6378dbe8)
                                           [iVar9 + (&DAT_63791980)[bVar3] + (&DAT_63792180)[bVar4]]
                               << 4 | (uint)(byte)(&DAT_6378dbe8)
                                                  [iVar9 + (&DAT_63791d80)[bVar3] +
                                                           (&DAT_637929a0)[bVar4]]) << 4 |
                              (uint)(byte)(&DAT_6378dbe8)
                                          [iVar9 + (&DAT_63790960)[bVar3] + (&DAT_63790d60)[bVar4]]]
        ;
        bVar5 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe8)
                              [iVar10 + (&DAT_63791980)[bVar3] + (&DAT_63792180)[bVar4]] << 4 |
                 (uint)(byte)(&DAT_6378dbe8)
                             [iVar10 + (&DAT_63791d80)[bVar3] + (&DAT_637929a0)[bVar4]]) << 4 |
                 (uint)(byte)(&DAT_6378dbe8)
                             [iVar10 + (&DAT_63790960)[bVar3] + (&DAT_63790d60)[bVar4]]];
        uVar13 = (uint)bVar5;
        *param_3 = (&DAT_63795aa0)
                   [((uint)(byte)(&DAT_6378dbe8)
                                 [iVar9 + (&DAT_63791980)[bVar3] + (&DAT_63792180)[bVar4]] << 4 |
                    (uint)(byte)(&DAT_6378dbe8)
                                [iVar9 + (&DAT_63791d80)[bVar3] + (&DAT_637929a0)[bVar4]]) << 4 |
                    (uint)(byte)(&DAT_6378dbe8)
                                [iVar9 + (&DAT_63790960)[bVar3] + (&DAT_63790d60)[bVar4]]];
        *param_5 = bVar5;
        param_5 = param_5 + 1;
        uVar14 = (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1);
        uVar15 = (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2);
        uVar6 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) + uVar14 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) + uVar15) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar13) + (uint)*(byte *)(&DAT_637956a0 + uVar12)
                 & 0x1e0) << 3];
        uVar13 = (uint)*param_1;
        param_1 = param_1 + 1;
        *param_2 = (&DAT_63795aa0)
                   [(int)((int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) + uVar15) >> 4 |
                         *(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) + uVar14 & 0x1e0) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar13) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
        param_2 = param_2 + 1;
        *param_4 = uVar6;
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
      }
      local_14 = local_14 - param_7;
      while( true ) {
        param_11 = param_11 + 1;
        param_10 = param_10 + 1;
        param_8 = param_8 + 2;
        param_9 = param_9 + 2;
        if (local_14 < 0) break;
        local_14 = local_14 - param_7;
        if (local_14 < 0) {
          do {
            param_8 = param_8 + 1;
            param_9 = param_9 + 1;
            local_14 = local_14 + param_13;
            local_8 = local_8 + -1;
            if (local_8 == 0) {
              return;
            }
LAB_63757ea0:
            bVar3 = *param_11;
            bVar4 = *param_10;
            iVar9 = (&DAT_63791580)[*param_8];
            iVar10 = (&DAT_63791580)[*param_9];
            uVar12 = (uint)(byte)(&DAT_63795aa0)
                                 [((uint)(byte)(&DAT_6378dbe8)
                                               [iVar9 + (&DAT_63791980)[bVar4] +
                                                        (&DAT_63792180)[bVar3]] << 4 |
                                  (uint)(byte)(&DAT_6378dbe8)
                                              [iVar9 + (&DAT_63791d80)[bVar4] +
                                                       (&DAT_637929a0)[bVar3]]) << 4 |
                                  (uint)(byte)(&DAT_6378dbe8)
                                              [iVar9 + (&DAT_63790960)[bVar4] +
                                                       (&DAT_63790d60)[bVar3]]];
            bVar5 = (&DAT_63795aa0)
                    [((uint)(byte)(&DAT_6378dbe8)
                                  [iVar10 + (&DAT_63791980)[bVar4] + (&DAT_63792180)[bVar3]] << 4 |
                     (uint)(byte)(&DAT_6378dbe8)
                                 [iVar10 + (&DAT_63791d80)[bVar4] + (&DAT_637929a0)[bVar3]]) << 4 |
                     (uint)(byte)(&DAT_6378dbe8)
                                 [iVar10 + (&DAT_63790960)[bVar4] + (&DAT_63790d60)[bVar3]]];
            uVar13 = (uint)bVar5;
            *param_3 = (&DAT_63795aa0)
                       [((uint)(byte)(&DAT_6378dbe8)
                                     [iVar9 + (&DAT_63791980)[bVar4] + (&DAT_63792180)[bVar3]] << 4
                        | (uint)(byte)(&DAT_6378dbe8)
                                      [iVar9 + (&DAT_63791d80)[bVar4] + (&DAT_637929a0)[bVar3]]) <<
                        4 | (uint)(byte)(&DAT_6378dbe8)
                                        [iVar9 + (&DAT_63790960)[bVar4] + (&DAT_63790d60)[bVar3]]];
            param_3 = param_3 + 1;
            *param_5 = bVar5;
            param_5 = param_5 + 1;
            uVar14 = (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1);
            uVar15 = (uint)*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2);
            uVar6 = (&DAT_63795aa0)
                    [(int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) + uVar14 & 0x1e0 |
                          (int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) + uVar15) >> 4) >> 1
                     | ((uint)*(byte *)(&DAT_637956a0 + uVar13) +
                        (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
            uVar13 = (uint)*param_1;
            param_1 = param_1 + 1;
            *param_2 = (&DAT_63795aa0)
                       [(int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) + uVar14 & 0x1e0 |
                             (int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) + uVar15) >> 4) >>
                        1 | ((uint)*(byte *)(&DAT_637956a0 + uVar13) +
                             (uint)*(byte *)(&DAT_637956a0 + uVar12) & 0x1e0) << 3];
            param_2 = param_2 + 1;
            *param_4 = uVar6;
            param_4 = param_4 + 1;
            param_8 = param_8 + 1;
            param_9 = param_9 + 1;
            local_14 = local_14 - param_7;
            while( true ) {
              param_11 = param_11 + 1;
              param_10 = param_10 + 1;
              if (local_14 < 0) goto LAB_6375807a;
              local_14 = local_14 - param_7;
              if (local_14 < 0) break;
              param_8 = param_8 + 2;
              param_9 = param_9 + 2;
              local_14 = local_14 - param_7;
            }
          } while( true );
        }
        local_14 = local_14 - param_7;
      }
LAB_6375807a:
      local_14 = local_14 + param_13;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


