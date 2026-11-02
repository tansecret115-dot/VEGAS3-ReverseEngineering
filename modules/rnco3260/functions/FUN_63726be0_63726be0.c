/* Module: rnco3260.dll
   Function: FUN_63726be0
   Address: 63726be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63726be0(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,byte *param_5,
            byte *param_6,byte *param_7,byte *param_8,uint param_9,uint param_10)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint3 uVar7;
  uint3 uVar8;
  uint3 uVar9;
  uint3 uVar10;
  uint3 uVar11;
  uint3 uVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  uint local_18;
  uint local_10;
  uint local_8;
  
  if (param_10 != 0) {
    if (((param_9 & 1) == 0) && (1 < (int)param_10)) {
      bVar1 = *param_8;
      bVar2 = *param_7;
      iVar18 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
      iVar21 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
      iVar13 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      iVar5 = (&DAT_63791580)[param_5[1]];
      iVar6 = (&DAT_63791580)[param_6[1]];
      uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar21],(&DAT_637903e0)[iVar3 + iVar18]),
                       (&DAT_637903e0)[iVar3 + iVar13]);
      uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar21],(&DAT_637903e0)[iVar4 + iVar18]),
                       (&DAT_637903e0)[iVar4 + iVar13]);
      uVar9 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar5 + iVar21],(&DAT_637903e0)[iVar5 + iVar18]),
                       (&DAT_637903e0)[iVar5 + iVar13]);
      local_8 = (uint)uVar9;
      param_5 = param_5 + 2;
      uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar21],(&DAT_637903e0)[iVar6 + iVar18]),
                        (&DAT_637903e0)[iVar6 + iVar13]);
      local_10 = (uint)uVar10;
      param_6 = param_6 + 2;
      *param_1 = (uint)uVar7;
      puVar14 = param_1 + 3;
      *param_2 = (uint)uVar8;
      param_1[2] = local_8;
      param_1[1] = ((uint3)((uVar9 ^ uVar7) >> 1) & 0x7f7f7f) + (uint)(uVar9 & uVar7);
      param_2[1] = ((uint3)((uVar10 ^ uVar8) >> 1) & 0x7f7f7f) + (uint)(uVar10 & uVar8);
      param_2[2] = local_10;
      puVar19 = param_2 + 3;
      param_10 = param_10 - 2;
    }
    else {
      bVar1 = *param_8;
      bVar2 = *param_7;
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      local_8 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                        [iVar3 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]],
                                        (&DAT_637903e0)
                                        [iVar3 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                               (&DAT_637903e0)
                               [iVar3 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]]);
      local_10 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                         [iVar4 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]],
                                         (&DAT_637903e0)
                                         [iVar4 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                                (&DAT_637903e0)
                                [iVar4 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]]);
      param_5 = param_5 + 1;
      param_6 = param_6 + 1;
      *param_1 = local_8;
      *param_2 = local_10;
      puVar14 = param_1 + 1;
      puVar19 = param_2 + 1;
      param_10 = param_10 - 1;
    }
    param_8 = param_8 + 1;
    param_7 = param_7 + 1;
    if (3 < (int)param_10) {
      local_18 = param_10 >> 2;
      puVar15 = puVar14;
      puVar20 = puVar19;
      do {
        bVar1 = *param_8;
        bVar2 = *param_7;
        iVar21 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
        iVar18 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
        iVar13 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
        iVar3 = (&DAT_63791580)[*param_5];
        iVar4 = (&DAT_63791580)[*param_6];
        iVar5 = (&DAT_63791580)[param_5[1]];
        iVar6 = (&DAT_63791580)[param_6[1]];
        uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar13],(&DAT_637903e0)[iVar3 + iVar18]),
                         (&DAT_637903e0)[iVar3 + iVar21]);
        uVar17 = (uint)uVar7;
        uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar13],(&DAT_637903e0)[iVar4 + iVar18]),
                         (&DAT_637903e0)[iVar4 + iVar21]);
        uVar16 = (uint)uVar8;
        uVar9 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar5 + iVar13],(&DAT_637903e0)[iVar5 + iVar18]),
                         (&DAT_637903e0)[iVar5 + iVar21]);
        uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar13],(&DAT_637903e0)[iVar6 + iVar18]),
                          (&DAT_637903e0)[iVar6 + iVar21]);
        puVar15[1] = uVar17;
        *puVar15 = ((local_8 ^ uVar17) >> 1 & 0x7f7f7f) + (local_8 & uVar17);
        puVar20[1] = uVar16;
        *puVar20 = ((local_10 ^ uVar16) >> 1 & 0x7f7f7f) + (local_10 & uVar16);
        puVar15[3] = (uint)uVar9;
        puVar15[2] = ((uint3)((uVar9 ^ uVar7) >> 1) & 0x7f7f7f) + (uint)(uVar9 & uVar7);
        puVar20[3] = (uint)uVar10;
        puVar20[2] = ((uint3)((uVar10 ^ uVar8) >> 1) & 0x7f7f7f) + (uint)(uVar10 & uVar8);
        bVar1 = param_8[1];
        bVar2 = param_7[1];
        iVar21 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
        iVar18 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
        iVar13 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
        iVar3 = (&DAT_63791580)[param_5[2]];
        iVar4 = (&DAT_63791580)[param_6[2]];
        iVar5 = (&DAT_63791580)[param_5[3]];
        iVar6 = (&DAT_63791580)[param_6[3]];
        uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar13],(&DAT_637903e0)[iVar3 + iVar18]),
                         (&DAT_637903e0)[iVar3 + iVar21]);
        uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar13],(&DAT_637903e0)[iVar4 + iVar18]),
                         (&DAT_637903e0)[iVar4 + iVar21]);
        uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar5 + iVar13],(&DAT_637903e0)[iVar5 + iVar18]),
                          (&DAT_637903e0)[iVar5 + iVar21]);
        local_8 = (uint)uVar11;
        uVar12 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar13],(&DAT_637903e0)[iVar6 + iVar18]),
                          (&DAT_637903e0)[iVar6 + iVar21]);
        local_10 = (uint)uVar12;
        param_5 = param_5 + 4;
        param_6 = param_6 + 4;
        param_7 = param_7 + 2;
        param_8 = param_8 + 2;
        puVar15[5] = (uint)uVar7;
        puVar15[4] = ((uint3)((uVar9 ^ uVar7) >> 1) & 0x7f7f7f) + (uint)(uVar9 & uVar7);
        puVar14 = puVar15 + 8;
        puVar19 = puVar20 + 8;
        puVar20[5] = (uint)uVar8;
        puVar20[4] = ((uint3)((uVar10 ^ uVar8) >> 1) & 0x7f7f7f) + (uint)(uVar10 & uVar8);
        puVar15[7] = local_8;
        puVar15[6] = ((uint3)((uVar11 ^ uVar7) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar7);
        puVar20[6] = ((uint3)((uVar12 ^ uVar8) >> 1) & 0x7f7f7f) + (uint)(uVar12 & uVar8);
        puVar20[7] = local_10;
        param_10 = param_10 - 4;
        local_18 = local_18 - 1;
        puVar15 = puVar14;
        puVar20 = puVar19;
      } while (local_18 != 0);
    }
    puVar15 = puVar14;
    puVar20 = puVar19;
    if (1 < (int)param_10) {
      bVar1 = *param_8;
      bVar2 = *param_7;
      iVar21 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
      iVar18 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
      iVar13 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      iVar5 = (&DAT_63791580)[param_5[1]];
      iVar6 = (&DAT_63791580)[param_6[1]];
      uVar7 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar3 + iVar13],(&DAT_637903e0)[iVar3 + iVar18]),
                       (&DAT_637903e0)[iVar3 + iVar21]);
      uVar17 = (uint)uVar7;
      uVar8 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + iVar13],(&DAT_637903e0)[iVar4 + iVar18]),
                       (&DAT_637903e0)[iVar4 + iVar21]);
      uVar16 = (uint)uVar8;
      uVar9 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar5 + iVar13],(&DAT_637903e0)[iVar5 + iVar18]),
                       (&DAT_637903e0)[iVar5 + iVar21]);
      uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar13],(&DAT_637903e0)[iVar6 + iVar18]),
                        (&DAT_637903e0)[iVar6 + iVar21]);
      param_5 = param_5 + 2;
      param_6 = param_6 + 2;
      param_7 = param_7 + 1;
      param_8 = param_8 + 1;
      puVar14[1] = uVar17;
      puVar15 = puVar14 + 4;
      *puVar14 = ((local_8 ^ uVar17) >> 1 & 0x7f7f7f) + (local_8 & uVar17);
      puVar20 = puVar19 + 4;
      puVar19[1] = uVar16;
      *puVar19 = ((local_10 ^ uVar16) >> 1 & 0x7f7f7f) + (local_10 & uVar16);
      puVar14[3] = (uint)uVar9;
      puVar14[2] = ((uint3)((uVar9 ^ uVar7) >> 1) & 0x7f7f7f) + (uint)(uVar9 & uVar7);
      puVar19[2] = ((uint3)((uVar10 ^ uVar8) >> 1) & 0x7f7f7f) + (uint)(uVar10 & uVar8);
      puVar19[3] = (uint)uVar10;
      param_10 = param_10 - 2;
      local_10 = (uint)uVar10;
      local_8 = (uint)uVar9;
    }
    if (0 < (int)param_10) {
      bVar1 = *param_8;
      bVar2 = *param_7;
      iVar3 = (&DAT_63791580)[*param_5];
      iVar4 = (&DAT_63791580)[*param_6];
      uVar17 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                       [iVar3 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]],
                                       (&DAT_637903e0)
                                       [iVar3 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                              (&DAT_637903e0)
                              [iVar3 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]]);
      uVar16 = (uint)CONCAT21(CONCAT11((&DAT_637903e0)
                                       [iVar4 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]],
                                       (&DAT_637903e0)
                                       [iVar4 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                              (&DAT_637903e0)
                              [iVar4 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]]);
      puVar15[1] = uVar17;
      puVar15[2] = uVar17;
      *puVar15 = ((local_8 ^ uVar17) >> 1 & 0x7f7f7f) + (local_8 & uVar17);
      puVar20[1] = uVar16;
      puVar20[2] = uVar16;
      *puVar20 = ((local_10 ^ uVar16) >> 1 & 0x7f7f7f) + (local_10 & uVar16);
      return;
    }
    *puVar15 = local_8;
    *puVar20 = local_10;
  }
  return;
}


