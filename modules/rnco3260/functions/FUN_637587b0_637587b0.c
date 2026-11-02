/* Module: rnco3260.dll
   Function: FUN_637587b0
   Address: 637587b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637587b0(byte *param_1,undefined1 *param_2,byte *param_3,undefined1 *param_4,byte *param_5,
            undefined4 param_6,int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11
            ,uint param_12,int param_13)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int local_10;
  uint local_c;
  int local_8;
  
  local_10 = param_7 >> 1;
  iVar7 = param_7 - local_10;
  if ((param_13 + param_12 & 1) != 0) {
    iVar7 = iVar7 + param_7;
  }
  if (param_7 == 0) {
    return;
  }
  local_8 = param_7 - iVar7 / param_13;
  if (0 < local_8) {
    if ((param_12 & 1) == 0) goto LAB_637588db;
    bVar1 = *param_11;
    bVar2 = *param_10;
    iVar3 = (&DAT_63791580)[*param_8];
    iVar4 = (&DAT_63791580)[*param_9];
    uVar8 = (uint)(byte)(&DAT_63795aa0)
                        [((uint)(byte)(&DAT_6378dbe8)
                                      [iVar3 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]] << 4
                         | (uint)(byte)(&DAT_6378dbe8)
                                       [iVar3 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) <<
                         4 | (uint)(byte)(&DAT_6378dbe8)
                                         [iVar3 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]]];
    local_c = (uint)(byte)(&DAT_63795aa0)
                          [((uint)(byte)(&DAT_6378dbe8)
                                        [iVar4 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]] <<
                            4 | (uint)(byte)(&DAT_6378dbe8)
                                            [iVar4 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]
                                            ]) << 4 |
                           (uint)(byte)(&DAT_6378dbe8)
                                       [iVar4 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]]];
    param_8 = param_8 + 1;
    param_9 = param_9 + 1;
    while( true ) {
      param_11 = param_11 + 1;
      param_10 = param_10 + 1;
      uVar12 = (uint)*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2);
      uVar9 = (uint)*param_1;
      uVar11 = (uint)*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1);
      uVar10 = (&DAT_63795aa0)
               [(int)(*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) + uVar11 & 0x1e0 |
                     (int)(*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2) + uVar12) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar9) + (uint)*(byte *)(&DAT_637956a0 + uVar8) &
                0x1e0) << 3];
      uVar13 = (&DAT_63795aa0)
               [(int)(*(byte *)((int)&DAT_637956a0 + local_c * 4 + 1) + uVar11 & 0x1e0 |
                     (int)(*(byte *)((int)&DAT_637956a0 + local_c * 4 + 2) + uVar12) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + local_c) + (uint)*(byte *)(&DAT_637956a0 + uVar8) &
                0x1e0) << 3];
      param_1 = param_1 + 1;
      *param_2 = uVar10;
      param_2 = param_2 + 1;
      *param_3 = (byte)uVar8;
      param_3 = param_3 + 1;
      *param_4 = uVar13;
      param_4 = param_4 + 1;
      *param_5 = (byte)local_c;
      param_5 = param_5 + 1;
      local_8 = local_8 + -1;
      if (local_8 == 0) break;
      while (local_10 = local_10 - param_13, -1 < local_10) {
        param_1 = param_1 + 1;
        *param_2 = uVar10;
        param_2 = param_2 + 1;
        *param_3 = (byte)uVar8;
        param_3 = param_3 + 1;
        *param_4 = uVar13;
        param_4 = param_4 + 1;
        *param_5 = (byte)local_c;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_63758d1f;
        }
      }
      local_10 = local_10 + param_7;
LAB_637588db:
      bVar1 = *param_11;
      bVar2 = *param_10;
      iVar17 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
      iVar18 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
      iVar14 = (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2];
      iVar3 = (&DAT_63791580)[*param_8];
      iVar4 = (&DAT_63791580)[*param_9];
      iVar5 = (&DAT_63791580)[param_8[1]];
      iVar6 = (&DAT_63791580)[param_9[1]];
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbec)[iVar3 + iVar18] << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar3 + iVar17]) << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar3 + iVar14]];
      uVar9 = (uint)bVar1;
      bVar2 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe4)[iVar4 + iVar18] << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar4 + iVar17]) << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar4 + iVar14]];
      uVar16 = (uint)bVar2;
      uVar8 = (uint)(byte)(&DAT_63795aa0)
                          [((uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar18] << 4 |
                           (uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar17]) << 4 |
                           (uint)(byte)(&DAT_6378dbe4)[iVar5 + iVar14]];
      local_c = (uint)(byte)(&DAT_63795aa0)
                            [((uint)(byte)(&DAT_6378dbec)[iVar6 + iVar18] << 4 |
                             (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar17]) << 4 |
                             (uint)(byte)(&DAT_6378dbec)[iVar6 + iVar14]];
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      uVar12 = (uint)*param_1;
      uVar15 = (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2);
      uVar11 = (uint)*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1);
      uVar10 = (&DAT_63795aa0)
               [(int)(*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 1) + uVar11 & 0x1e0 |
                     (int)(*(byte *)((int)&DAT_637956a0 + uVar12 * 4 + 2) + uVar15) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar12) + (uint)*(byte *)(&DAT_637956a0 + uVar9) &
                0x1e0) << 3];
      uVar13 = (&DAT_63795aa0)
               [(int)(*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) + uVar11 & 0x1e0 |
                     (int)(*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2) + uVar15) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar16) + (uint)*(byte *)(&DAT_637956a0 + uVar9) &
                0x1e0) << 3];
      *param_2 = uVar10;
      *param_3 = bVar1;
      *param_4 = uVar13;
      *param_5 = bVar2;
      while( true ) {
        local_8 = local_8 + -1;
        param_5 = param_5 + 1;
        param_4 = param_4 + 1;
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_63758b8d;
        }
        param_1 = param_1 + 1;
        local_10 = local_10 - param_13;
        if (local_10 < 0) break;
        *param_2 = uVar10;
        *param_3 = bVar1;
        *param_4 = uVar13;
        *param_5 = bVar2;
      }
      local_10 = local_10 + param_7;
    }
LAB_63758d1f:
    if ((param_12 + param_13 & 1) == 0) goto LAB_63758b8d;
  }
  bVar1 = *param_11;
  bVar2 = *param_10;
  iVar3 = (&DAT_63791580)[*param_8];
  iVar4 = (&DAT_63791580)[*param_9];
  uVar8 = (uint)(byte)(&DAT_63795aa0)
                      [((uint)(byte)(&DAT_6378dbe8)
                                    [iVar3 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]] << 4 |
                       (uint)(byte)(&DAT_6378dbe8)
                                   [iVar3 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) << 4 |
                       (uint)(byte)(&DAT_6378dbe8)
                                   [iVar3 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]]];
  local_c = (uint)(byte)(&DAT_63795aa0)
                        [((uint)(byte)(&DAT_6378dbe8)
                                      [iVar4 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]] << 4
                         | (uint)(byte)(&DAT_6378dbe8)
                                       [iVar4 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]) <<
                         4 | (uint)(byte)(&DAT_6378dbe8)
                                         [iVar4 + (&DAT_63790d60)[bVar1] + (&DAT_63790960)[bVar2]]];
  uVar9 = (uint)*param_1;
  uVar11 = (uint)*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1);
  uVar12 = (uint)*(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2);
  uVar10 = (&DAT_63795aa0)
           [(int)((int)(*(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 2) + uVar12) >> 4 |
                 *(byte *)((int)&DAT_637956a0 + uVar9 * 4 + 1) + uVar11 & 0x1e0) >> 1 |
            ((uint)*(byte *)(&DAT_637956a0 + uVar9) + (uint)*(byte *)(&DAT_637956a0 + uVar8) & 0x1e0
            ) << 3];
  uVar13 = (&DAT_63795aa0)
           [(int)(*(byte *)((int)&DAT_637956a0 + local_c * 4 + 1) + uVar11 & 0x1e0 |
                 (int)(*(byte *)((int)&DAT_637956a0 + local_c * 4 + 2) + uVar12) >> 4) >> 1 |
            ((uint)*(byte *)(&DAT_637956a0 + local_c) + (uint)*(byte *)(&DAT_637956a0 + uVar8) &
            0x1e0) << 3];
LAB_63758b8d:
  param_1 = (byte *)(local_8 + iVar7 / param_13);
  if (param_1 != (byte *)0x0) {
    do {
      *param_2 = uVar10;
      param_2 = param_2 + 1;
      *param_3 = (byte)uVar8;
      param_3 = param_3 + 1;
      *param_4 = uVar13;
      param_4 = param_4 + 1;
      *param_5 = (byte)local_c;
      param_5 = param_5 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != (byte *)0x0);
  }
  return;
}


