/* Module: rnco3260.dll
   Function: FUN_63743a90
   Address: 63743a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63743a90(byte *param_1,undefined1 *param_2,byte *param_3,undefined1 *param_4,byte *param_5,
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
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int local_10;
  uint local_c;
  int local_8;
  
  local_10 = param_7 >> 1;
  iVar9 = param_7 - local_10;
  if ((param_13 + param_12 & 1) != 0) {
    iVar9 = iVar9 + param_7;
  }
  if (param_7 == 0) {
    return;
  }
  local_8 = param_7 - iVar9 / param_13;
  if (0 < local_8) {
    if ((param_12 & 1) == 0) goto LAB_63743bab;
    iVar3 = (&DAT_63791580)[*param_8];
    iVar4 = (&DAT_63791580)[*param_9];
    uVar10 = (uint)(byte)(&DAT_63795aa0)
                         [((uint)(byte)(&DAT_6378dbe8)[iVar3 + (&DAT_63792180)[*param_11]] << 4 |
                          (uint)(byte)(&DAT_6378dbe8)
                                      [iVar3 + (&DAT_63791d80)[*param_10] +
                                               (&DAT_637929a0)[*param_11]]) << 4 |
                          (uint)(byte)(&DAT_6378dbe8)[iVar3 + (&DAT_63790960)[*param_10]]];
    param_8 = param_8 + 1;
    local_c = (uint)(byte)(&DAT_63795aa0)
                          [((uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63792180)[*param_11]] << 4 |
                           (uint)(byte)(&DAT_6378dbe8)
                                       [iVar4 + (&DAT_63791d80)[*param_10] +
                                                (&DAT_637929a0)[*param_11]]) << 4 |
                           (uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63790960)[*param_10]]];
    param_9 = param_9 + 1;
    while( true ) {
      param_11 = param_11 + 1;
      param_10 = param_10 + 1;
      uVar15 = (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2);
      uVar11 = (uint)*param_1;
      uVar13 = (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1);
      uVar12 = (&DAT_63795aa0)
               [(int)(*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) + uVar13 & 0x1e0 |
                     (int)(*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2) + uVar15) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar11) + (uint)*(byte *)(&DAT_637956a0 + uVar10) &
                0x1e0) << 3];
      uVar14 = (&DAT_63795aa0)
               [(int)(*(byte *)((int)&DAT_637956a0 + local_c * 4 + 1) + uVar13 & 0x1e0 |
                     (int)(*(byte *)((int)&DAT_637956a0 + local_c * 4 + 2) + uVar15) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + local_c) + (uint)*(byte *)(&DAT_637956a0 + uVar10)
                & 0x1e0) << 3];
      param_1 = param_1 + 1;
      *param_2 = uVar12;
      param_2 = param_2 + 1;
      *param_3 = (byte)uVar10;
      param_3 = param_3 + 1;
      *param_4 = uVar14;
      param_4 = param_4 + 1;
      *param_5 = (byte)local_c;
      param_5 = param_5 + 1;
      local_8 = local_8 + -1;
      if (local_8 == 0) break;
      while (local_10 = local_10 - param_13, -1 < local_10) {
        param_1 = param_1 + 1;
        *param_2 = uVar12;
        param_2 = param_2 + 1;
        *param_3 = (byte)uVar10;
        param_3 = param_3 + 1;
        *param_4 = uVar14;
        param_4 = param_4 + 1;
        *param_5 = (byte)local_c;
        param_5 = param_5 + 1;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_63743fda;
        }
      }
      local_10 = local_10 + param_7;
LAB_63743bab:
      iVar3 = (&DAT_63790960)[*param_10];
      iVar18 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
      iVar4 = (&DAT_63792180)[*param_11];
      iVar5 = (&DAT_63791580)[*param_8];
      iVar6 = (&DAT_63791580)[*param_9];
      iVar7 = (&DAT_63791580)[param_8[1]];
      iVar8 = (&DAT_63791580)[param_9[1]];
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbec)[iVar5 + iVar4] << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar18]) << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar5 + iVar3]];
      uVar11 = (uint)bVar1;
      bVar2 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar4] << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar18]) << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar6 + iVar3]];
      uVar17 = (uint)bVar2;
      uVar10 = (uint)(byte)(&DAT_63795aa0)
                           [((uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar4] << 4 |
                            (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar18]) << 4 |
                            (uint)(byte)(&DAT_6378dbe4)[iVar7 + iVar3]];
      local_c = (uint)(byte)(&DAT_63795aa0)
                            [((uint)(byte)(&DAT_6378dbec)[iVar8 + iVar4] << 4 |
                             (uint)(byte)(&DAT_6378dbec)[iVar8 + iVar18]) << 4 |
                             (uint)(byte)(&DAT_6378dbec)[iVar8 + iVar3]];
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      uVar15 = (uint)*param_1;
      uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2);
      uVar13 = (uint)*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1);
      uVar12 = (&DAT_63795aa0)
               [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar13 & 0x1e0 |
                     (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar16) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar11) &
                0x1e0) << 3];
      uVar14 = (&DAT_63795aa0)
               [(int)(*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1) + uVar13 & 0x1e0 |
                     (int)(*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2) + uVar16) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar17) + (uint)*(byte *)(&DAT_637956a0 + uVar11) &
                0x1e0) << 3];
      *param_2 = uVar12;
      *param_3 = bVar1;
      *param_4 = uVar14;
      *param_5 = bVar2;
      while( true ) {
        local_8 = local_8 + -1;
        param_5 = param_5 + 1;
        param_4 = param_4 + 1;
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
        if (local_8 == 0) {
          local_8 = 0;
          goto LAB_63743e48;
        }
        param_1 = param_1 + 1;
        local_10 = local_10 - param_13;
        if (local_10 < 0) break;
        *param_2 = uVar12;
        *param_3 = bVar1;
        *param_4 = uVar14;
        *param_5 = bVar2;
      }
      local_10 = local_10 + param_7;
    }
LAB_63743fda:
    if ((param_12 + param_13 & 1) == 0) goto LAB_63743e48;
  }
  iVar3 = (&DAT_63791580)[*param_8];
  iVar4 = (&DAT_63791580)[*param_9];
  uVar10 = (uint)(byte)(&DAT_63795aa0)
                       [((uint)(byte)(&DAT_6378dbe8)[iVar3 + (&DAT_63792180)[*param_11]] << 4 |
                        (uint)(byte)(&DAT_6378dbe8)
                                    [iVar3 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]
                                    ]) << 4 |
                        (uint)(byte)(&DAT_6378dbe8)[iVar3 + (&DAT_63790960)[*param_10]]];
  uVar15 = (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2);
  local_c = (uint)(byte)(&DAT_63795aa0)
                        [((uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63792180)[*param_11]] << 4 |
                         (uint)(byte)(&DAT_6378dbe8)
                                     [iVar4 + (&DAT_63791d80)[*param_10] +
                                              (&DAT_637929a0)[*param_11]]) << 4 |
                         (uint)(byte)(&DAT_6378dbe8)[iVar4 + (&DAT_63790960)[*param_10]]];
  uVar11 = (uint)*param_1;
  uVar13 = (uint)*(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1);
  uVar12 = (&DAT_63795aa0)
           [(int)(*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1) + uVar13 & 0x1e0 |
                 (int)(*(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2) + uVar15) >> 4) >> 1 |
            ((uint)*(byte *)(&DAT_637956a0 + uVar11) + (uint)*(byte *)(&DAT_637956a0 + uVar10) &
            0x1e0) << 3];
  uVar14 = (&DAT_63795aa0)
           [(int)(*(byte *)((int)&DAT_637956a0 + local_c * 4 + 1) + uVar13 & 0x1e0 |
                 (int)(*(byte *)((int)&DAT_637956a0 + local_c * 4 + 2) + uVar15) >> 4) >> 1 |
            ((uint)*(byte *)(&DAT_637956a0 + local_c) + (uint)*(byte *)(&DAT_637956a0 + uVar10) &
            0x1e0) << 3];
LAB_63743e48:
  param_1 = (byte *)(local_8 + iVar9 / param_13);
  if (param_1 != (byte *)0x0) {
    do {
      *param_2 = uVar12;
      param_2 = param_2 + 1;
      *param_3 = (byte)uVar10;
      param_3 = param_3 + 1;
      *param_4 = uVar14;
      param_4 = param_4 + 1;
      *param_5 = (byte)local_c;
      param_5 = param_5 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != (byte *)0x0);
  }
  return;
}


