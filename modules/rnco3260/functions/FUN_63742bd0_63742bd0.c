/* Module: rnco3260.dll
   Function: FUN_63742bd0
   Address: 63742bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63742bd0(byte *param_1,undefined1 *param_2,byte *param_3,undefined1 *param_4,byte *param_5,
            undefined4 param_6,int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11
            ,byte param_12,int param_13)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int local_14;
  int local_8;
  
  local_14 = param_13 >> 1;
  local_8 = param_7;
  if (param_7 != 0) {
    if ((param_12 & 1) != 0) goto LAB_637431a6;
    do {
      local_14 = local_14 - param_7;
      if (local_14 < 0) {
        local_14 = local_14 + param_13;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 1;
          goto LAB_637431a6;
        }
        iVar11 = (&DAT_63790960)[*param_10];
        iVar12 = (&DAT_63792180)[*param_11];
        iVar14 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
        iVar7 = (&DAT_63791580)[*param_8];
        iVar8 = (&DAT_63791580)[*param_9];
        iVar9 = (&DAT_63791580)[param_8[1]];
        iVar10 = (&DAT_63791580)[param_9[1]];
        uVar13 = (uint)(byte)(&DAT_63795aa0)
                             [((uint)(byte)(&DAT_6378dbe8)[iVar7 + iVar12] << 4 |
                              (uint)(byte)(&DAT_6378dbe8)[iVar7 + iVar14]) << 4 |
                              (uint)(byte)(&DAT_6378dbe8)[iVar7 + iVar11]];
        bVar5 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe8)[iVar8 + iVar12] << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar8 + iVar14]) << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar8 + iVar11]];
        uVar15 = (uint)bVar5;
        bVar1 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe8)[iVar9 + iVar12] << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar9 + iVar14]) << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar9 + iVar11]];
        uVar16 = (uint)bVar1;
        bVar2 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe8)[iVar10 + iVar12] << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar10 + iVar14]) << 4 |
                 (uint)(byte)(&DAT_6378dbe8)[iVar10 + iVar11]];
        uVar17 = (uint)bVar2;
        *param_3 = (&DAT_63795aa0)
                   [((uint)(byte)(&DAT_6378dbe8)[iVar7 + iVar12] << 4 |
                    (uint)(byte)(&DAT_6378dbe8)[iVar7 + iVar14]) << 4 |
                    (uint)(byte)(&DAT_6378dbe8)[iVar7 + iVar11]];
        param_3[1] = bVar1;
        *param_5 = bVar5;
        param_5[1] = bVar2;
        uVar20 = (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1);
        uVar21 = (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2);
        param_5 = param_5 + 2;
        uVar6 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar20 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar21) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar13)
                 & 0x1e0) << 3];
        uVar15 = (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1);
        uVar18 = (uint)*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2);
        uVar3 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) + uVar15 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2) + uVar18) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar17) + (uint)*(byte *)(&DAT_637956a0 + uVar16)
                 & 0x1e0) << 3];
        uVar17 = (uint)*param_1;
        uVar19 = (uint)param_1[1];
        param_1 = param_1 + 2;
        uVar4 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar19 * 4 + 1) + uVar15 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar19 * 4 + 2) + uVar18) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar19) + (uint)*(byte *)(&DAT_637956a0 + uVar16)
                 & 0x1e0) << 3];
        *param_2 = (&DAT_63795aa0)
                   [(int)(*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) + uVar20 & 0x1e0 |
                         (int)(*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2) + uVar21) >> 4) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar17) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
        param_2[1] = uVar4;
        param_2 = param_2 + 2;
        *param_4 = uVar6;
        param_4[1] = uVar3;
        param_3 = param_3 + 2;
        param_4 = param_4 + 2;
      }
      else {
        iVar11 = (&DAT_63791580)[*param_9];
        iVar12 = (&DAT_63791580)[*param_8];
        uVar13 = (uint)(byte)(&DAT_63795aa0)
                             [((uint)(byte)(&DAT_6378dbe8)[iVar12 + (&DAT_63792180)[*param_11]] << 4
                              | (uint)(byte)(&DAT_6378dbe8)
                                            [iVar12 + (&DAT_63791d80)[*param_10] +
                                                      (&DAT_637929a0)[*param_11]]) << 4 |
                              (uint)(byte)(&DAT_6378dbe8)[iVar12 + (&DAT_63790960)[*param_10]]];
        bVar5 = (&DAT_63795aa0)
                [((uint)(byte)(&DAT_6378dbe8)[iVar11 + (&DAT_63792180)[*param_11]] << 4 |
                 (uint)(byte)(&DAT_6378dbe8)
                             [iVar11 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) <<
                 4 | (uint)(byte)(&DAT_6378dbe8)[iVar11 + (&DAT_63790960)[*param_10]]];
        uVar15 = (uint)bVar5;
        *param_3 = (&DAT_63795aa0)
                   [((uint)(byte)(&DAT_6378dbe8)[iVar12 + (&DAT_63792180)[*param_11]] << 4 |
                    (uint)(byte)(&DAT_6378dbe8)
                                [iVar12 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]])
                    << 4 | (uint)(byte)(&DAT_6378dbe8)[iVar12 + (&DAT_63790960)[*param_10]]];
        *param_5 = bVar5;
        param_5 = param_5 + 1;
        uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1);
        uVar17 = (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2);
        uVar6 = (&DAT_63795aa0)
                [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0 |
                      (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar17) >> 4) >> 1 |
                 ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar13)
                 & 0x1e0) << 3];
        uVar15 = (uint)*param_1;
        param_1 = param_1 + 1;
        *param_2 = (&DAT_63795aa0)
                   [(int)((int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar17) >> 4 |
                         *(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0) >> 1 |
                    ((uint)*(byte *)(&DAT_637956a0 + uVar15) +
                     (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
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
LAB_637431a6:
            iVar11 = (&DAT_63791580)[*param_8];
            iVar12 = (&DAT_63791580)[*param_9];
            uVar13 = (uint)(byte)(&DAT_63795aa0)
                                 [((uint)(byte)(&DAT_6378dbe8)[iVar11 + (&DAT_63792180)[*param_11]]
                                   << 4 | (uint)(byte)(&DAT_6378dbe8)
                                                      [iVar11 + (&DAT_63791d80)[*param_10] +
                                                                (&DAT_637929a0)[*param_11]]) << 4 |
                                  (uint)(byte)(&DAT_6378dbe8)[iVar11 + (&DAT_63790960)[*param_10]]];
            bVar5 = (&DAT_63795aa0)
                    [((uint)(byte)(&DAT_6378dbe8)[iVar12 + (&DAT_63792180)[*param_11]] << 4 |
                     (uint)(byte)(&DAT_6378dbe8)
                                 [iVar12 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]])
                     << 4 | (uint)(byte)(&DAT_6378dbe8)[iVar12 + (&DAT_63790960)[*param_10]]];
            uVar15 = (uint)bVar5;
            *param_3 = (&DAT_63795aa0)
                       [((uint)(byte)(&DAT_6378dbe8)[iVar11 + (&DAT_63792180)[*param_11]] << 4 |
                        (uint)(byte)(&DAT_6378dbe8)
                                    [iVar11 + (&DAT_63791d80)[*param_10] +
                                              (&DAT_637929a0)[*param_11]]) << 4 |
                        (uint)(byte)(&DAT_6378dbe8)[iVar11 + (&DAT_63790960)[*param_10]]];
            param_3 = param_3 + 1;
            *param_5 = bVar5;
            param_5 = param_5 + 1;
            uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1);
            uVar17 = (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2);
            uVar6 = (&DAT_63795aa0)
                    [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0 |
                          (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar17) >> 4) >> 1
                     | ((uint)*(byte *)(&DAT_637956a0 + uVar15) +
                        (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
            uVar15 = (uint)*param_1;
            param_1 = param_1 + 1;
            *param_2 = (&DAT_63795aa0)
                       [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0 |
                             (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar17) >> 4) >>
                        1 | ((uint)*(byte *)(&DAT_637956a0 + uVar15) +
                             (uint)*(byte *)(&DAT_637956a0 + uVar13) & 0x1e0) << 3];
            param_2 = param_2 + 1;
            *param_4 = uVar6;
            param_4 = param_4 + 1;
            param_8 = param_8 + 1;
            param_9 = param_9 + 1;
            local_14 = local_14 - param_7;
            while( true ) {
              param_11 = param_11 + 1;
              param_10 = param_10 + 1;
              if (local_14 < 0) goto LAB_63743373;
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
LAB_63743373:
      local_14 = local_14 + param_13;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


