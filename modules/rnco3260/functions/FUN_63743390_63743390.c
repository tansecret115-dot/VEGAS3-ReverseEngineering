/* Module: rnco3260.dll
   Function: FUN_63743390
   Address: 63743390
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63743390(byte *param_1,undefined1 *param_2,byte *param_3,undefined1 *param_4,byte *param_5,
            undefined4 param_6,uint param_7,byte *param_8,byte *param_9,byte *param_10,
            byte *param_11,byte param_12)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
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
  uint local_14;
  uint local_8;
  
  local_8 = param_7;
  if (((param_12 & 1) != 0) && (param_7 != 0)) {
    bVar1 = *param_10;
    bVar2 = *param_11;
    iVar7 = (&DAT_63791580)[*param_8];
    iVar8 = (&DAT_63791580)[*param_9];
    uVar13 = (uint)(byte)(&DAT_63795aa0)
                         [((uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63792180)[bVar2]] << 4 |
                          (uint)(byte)(&DAT_6378dbe8)
                                      [iVar7 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]) <<
                          4 | (uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63790960)[bVar1]]];
    param_8 = param_8 + 1;
    param_9 = param_9 + 1;
    bVar3 = (&DAT_63795aa0)
            [((uint)(byte)(&DAT_6378dbe8)[iVar8 + (&DAT_63792180)[bVar2]] << 4 |
             (uint)(byte)(&DAT_6378dbe8)[iVar8 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]])
             << 4 | (uint)(byte)(&DAT_6378dbe8)[iVar8 + (&DAT_63790960)[bVar1]]];
    uVar15 = (uint)bVar3;
    param_10 = param_10 + 1;
    param_11 = param_11 + 1;
    *param_3 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63792180)[bVar2]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]]
                ) << 4 | (uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63790960)[bVar1]]];
    param_3 = param_3 + 1;
    *param_5 = bVar3;
    param_5 = param_5 + 1;
    uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1);
    uVar17 = (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2);
    uVar4 = (&DAT_63795aa0)
            [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0 |
                  (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar17) >> 4) >> 1 |
             ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar13) &
             0x1e0) << 3];
    uVar15 = (uint)*param_1;
    param_1 = param_1 + 1;
    *param_2 = (&DAT_63795aa0)
               [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0 |
                     (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar17) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar13) &
                0x1e0) << 3];
    param_2 = param_2 + 1;
    *param_4 = uVar4;
    param_4 = param_4 + 1;
    local_8 = param_7 - 1;
  }
  if (1 < (int)local_8) {
    local_14 = local_8 >> 1;
    do {
      iVar7 = (&DAT_63790960)[*param_10];
      iVar8 = (&DAT_63792180)[*param_11];
      iVar14 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
      iVar9 = (&DAT_63791580)[*param_8];
      iVar10 = (&DAT_63791580)[*param_9];
      iVar11 = (&DAT_63791580)[param_8[1]];
      iVar12 = (&DAT_63791580)[param_9[1]];
      uVar15 = (uint)(byte)(&DAT_63795aa0)
                           [((uint)(byte)(&DAT_6378dbec)[iVar9 + iVar8] << 4 |
                            (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar14]) << 4 |
                            (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar7]];
      bVar1 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar8] << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar14]) << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar10 + iVar7]];
      uVar16 = (uint)bVar1;
      bVar2 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbe4)[iVar11 + iVar8] << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar11 + iVar14]) << 4 |
               (uint)(byte)(&DAT_6378dbe4)[iVar11 + iVar7]];
      uVar17 = (uint)bVar2;
      bVar3 = (&DAT_63795aa0)
              [((uint)(byte)(&DAT_6378dbec)[iVar12 + iVar8] << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar12 + iVar14]) << 4 |
               (uint)(byte)(&DAT_6378dbec)[iVar12 + iVar7]];
      uVar13 = (uint)bVar3;
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      *param_3 = (&DAT_63795aa0)
                 [((uint)(byte)(&DAT_6378dbec)[iVar9 + iVar8] << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar14]) << 4 |
                  (uint)(byte)(&DAT_6378dbec)[iVar9 + iVar7]];
      param_3[1] = bVar2;
      param_3 = param_3 + 2;
      *param_5 = bVar1;
      param_5[1] = bVar3;
      uVar18 = (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1);
      uVar19 = (uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2);
      param_5 = param_5 + 2;
      uVar4 = (&DAT_63795aa0)
              [(int)(*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 1) + uVar18 & 0x1e0 |
                    (int)(*(byte *)((int)&DAT_637956a0 + uVar16 * 4 + 2) + uVar19) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar16) + (uint)*(byte *)(&DAT_637956a0 + uVar15) &
               0x1e0) << 3];
      uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1);
      uVar20 = (uint)*(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2);
      uVar5 = (&DAT_63795aa0)
              [(int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) + uVar16 & 0x1e0 |
                    (int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) + uVar20) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar13) + (uint)*(byte *)(&DAT_637956a0 + uVar17) &
               0x1e0) << 3];
      uVar13 = (uint)*param_1;
      uVar21 = (uint)param_1[1];
      uVar6 = (&DAT_63795aa0)
              [(int)(*(byte *)((int)&DAT_637956a0 + uVar21 * 4 + 1) + uVar16 & 0x1e0 |
                    (int)(*(byte *)((int)&DAT_637956a0 + uVar21 * 4 + 2) + uVar20) >> 4) >> 1 |
               ((uint)*(byte *)(&DAT_637956a0 + uVar21) + (uint)*(byte *)(&DAT_637956a0 + uVar17) &
               0x1e0) << 3];
      param_1 = param_1 + 2;
      *param_2 = (&DAT_63795aa0)
                 [(int)((int)(*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2) + uVar19) >> 4 |
                       *(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1) + uVar18 & 0x1e0) >> 1 |
                  ((uint)*(byte *)(&DAT_637956a0 + uVar13) + (uint)*(byte *)(&DAT_637956a0 + uVar15)
                  & 0x1e0) << 3];
      param_2[1] = uVar6;
      param_2 = param_2 + 2;
      *param_4 = uVar4;
      param_4[1] = uVar5;
      param_4 = param_4 + 2;
      local_8 = local_8 - 2;
      local_14 = local_14 - 1;
    } while (local_14 != 0);
  }
  if (local_8 != 0) {
    iVar7 = (&DAT_63791580)[*param_8];
    iVar8 = (&DAT_63791580)[*param_9];
    uVar13 = (uint)(byte)(&DAT_63795aa0)
                         [((uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63792180)[*param_11]] << 4 |
                          (uint)(byte)(&DAT_6378dbe8)
                                      [iVar7 + (&DAT_63791d80)[*param_10] +
                                               (&DAT_637929a0)[*param_11]]) << 4 |
                          (uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63790960)[*param_10]]];
    bVar1 = (&DAT_63795aa0)
            [((uint)(byte)(&DAT_6378dbe8)[iVar8 + (&DAT_63792180)[*param_11]] << 4 |
             (uint)(byte)(&DAT_6378dbe8)
                         [iVar8 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 4 |
             (uint)(byte)(&DAT_6378dbe8)[iVar8 + (&DAT_63790960)[*param_10]]];
    uVar15 = (uint)bVar1;
    *param_3 = (&DAT_63795aa0)
               [((uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63792180)[*param_11]] << 4 |
                (uint)(byte)(&DAT_6378dbe8)
                            [iVar7 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]) << 4
                | (uint)(byte)(&DAT_6378dbe8)[iVar7 + (&DAT_63790960)[*param_10]]];
    *param_5 = bVar1;
    uVar16 = (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 1);
    uVar17 = (uint)*(byte *)((int)&DAT_637956a0 + uVar13 * 4 + 2);
    uVar4 = (&DAT_63795aa0)
            [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0 |
                  (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar17) >> 4) >> 1 |
             ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar13) &
             0x1e0) << 3];
    uVar15 = (uint)*param_1;
    *param_2 = (&DAT_63795aa0)
               [(int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1) + uVar16 & 0x1e0 |
                     (int)(*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2) + uVar17) >> 4) >> 1 |
                ((uint)*(byte *)(&DAT_637956a0 + uVar15) + (uint)*(byte *)(&DAT_637956a0 + uVar13) &
                0x1e0) << 3];
    *param_4 = uVar4;
  }
  return;
}


