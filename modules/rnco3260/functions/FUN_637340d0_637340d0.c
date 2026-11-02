/* Module: rnco3260.dll
   Function: FUN_637340d0
   Address: 637340d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637340d0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
            undefined4 param_6,undefined4 param_7,byte *param_8,byte *param_9,byte *param_10,
            byte *param_11,uint param_12,int param_13)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint3 uVar10;
  uint3 uVar11;
  uint3 uVar12;
  uint3 uVar13;
  uint3 uVar14;
  uint3 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint local_2c;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_c;
  
  if (param_13 != 0) {
    if (((param_12 & 1) == 0) && (1 < param_13)) {
      iVar4 = (&DAT_63790960)[*param_10];
      iVar5 = (&DAT_63792180)[*param_11];
      iVar22 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
      iVar6 = (&DAT_63791580)[*param_8];
      iVar7 = (&DAT_63791580)[*param_9];
      iVar8 = (&DAT_63791580)[param_8[1]];
      iVar9 = (&DAT_63791580)[param_9[1]];
      uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar5],(&DAT_637903e0)[iVar6 + iVar22]),
                        (&DAT_637903e0)[iVar6 + iVar4]);
      uVar17 = (uint)uVar10;
      uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar7 + iVar5],(&DAT_637903e0)[iVar7 + iVar22]),
                        (&DAT_637903e0)[iVar7 + iVar4]);
      uVar12 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar8 + iVar5],(&DAT_637903e0)[iVar8 + iVar22]),
                        (&DAT_637903e0)[iVar8 + iVar4]);
      uVar16 = (uint)uVar12;
      uVar13 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar9 + iVar5],(&DAT_637903e0)[iVar9 + iVar22]),
                        (&DAT_637903e0)[iVar9 + iVar4]);
      local_c = (uint)uVar13;
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      *param_3 = uVar17;
      *param_5 = (uint)uVar11;
      param_3[2] = uVar16;
      param_5[2] = local_c;
      uVar23 = ((*param_1 ^ uVar17) >> 1 & 0x7f7f7f) + (*param_1 & uVar17);
      *param_2 = uVar23;
      uVar17 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
      *param_4 = uVar17;
      local_14 = ((param_1[2] ^ uVar16) >> 1 & 0x7f7f7f) + (param_1[2] & uVar16);
      param_2[2] = local_14;
      local_1c = ((uint3)((uVar13 ^ uVar12) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar12);
      param_4[2] = local_1c;
      param_2[1] = ((local_14 ^ uVar23) >> 1 & 0x7f7f7f) + (local_14 & uVar23);
      param_3[1] = ((uint3)((uVar12 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar12 & uVar10);
      param_4[1] = ((local_1c ^ uVar17) >> 1 & 0x7f7f7f) + (local_1c & uVar17);
      param_5[1] = ((uint3)((uVar13 ^ uVar11) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar11);
      param_1 = param_1 + 3;
      param_2 = param_2 + 3;
      param_3 = param_3 + 3;
      param_5 = param_5 + 3;
      param_4 = param_4 + 3;
      local_18 = param_13 - 2;
    }
    else {
      iVar4 = (&DAT_63791580)[*param_8];
      iVar5 = (&DAT_63791580)[*param_9];
      uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + (&DAT_63792180)[*param_11]],
                                 (&DAT_637903e0)
                                 [iVar4 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]),
                        (&DAT_637903e0)[iVar4 + (&DAT_63790960)[*param_10]]);
      uVar16 = (uint)uVar10;
      uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar5 + (&DAT_63792180)[*param_11]],
                                 (&DAT_637903e0)
                                 [iVar5 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]),
                        (&DAT_637903e0)[iVar5 + (&DAT_63790960)[*param_10]]);
      local_c = (uint)uVar11;
      param_8 = param_8 + 1;
      param_9 = param_9 + 1;
      *param_3 = uVar16;
      *param_5 = local_c;
      local_14 = ((*param_1 ^ uVar16) >> 1 & 0x7f7f7f) + (*param_1 & uVar16);
      *param_2 = local_14;
      local_1c = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
      *param_4 = local_1c;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      local_18 = param_13 - 1;
    }
    param_11 = param_11 + 1;
    param_10 = param_10 + 1;
    if (3 < (int)local_18) {
      local_2c = local_18 >> 2;
      do {
        iVar4 = (&DAT_63790960)[*param_10];
        iVar5 = (&DAT_63792180)[*param_11];
        iVar22 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
        iVar6 = (&DAT_63791580)[*param_8];
        iVar7 = (&DAT_63791580)[*param_9];
        iVar8 = (&DAT_63791580)[param_8[1]];
        iVar9 = (&DAT_63791580)[param_9[1]];
        uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar5],(&DAT_637903e0)[iVar6 + iVar22]),
                          (&DAT_637903e0)[iVar6 + iVar4]);
        uVar20 = (uint)uVar10;
        uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar7 + iVar5],(&DAT_637903e0)[iVar7 + iVar22]),
                          (&DAT_637903e0)[iVar7 + iVar4]);
        uVar18 = (uint)uVar11;
        uVar12 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar8 + iVar5],(&DAT_637903e0)[iVar8 + iVar22]),
                          (&DAT_637903e0)[iVar8 + iVar4]);
        uVar19 = (uint)uVar12;
        uVar13 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar9 + iVar5],(&DAT_637903e0)[iVar9 + iVar22]),
                          (&DAT_637903e0)[iVar9 + iVar4]);
        param_3[1] = uVar20;
        param_5[1] = uVar18;
        param_3[3] = uVar19;
        param_5[3] = (uint)uVar13;
        uVar17 = ((param_1[1] ^ uVar20) >> 1 & 0x7f7f7f) + (param_1[1] & uVar20);
        param_2[1] = uVar17;
        uVar23 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
        param_4[1] = uVar23;
        uVar19 = ((param_1[3] ^ uVar19) >> 1 & 0x7f7f7f) + (param_1[3] & uVar19);
        param_2[3] = uVar19;
        uVar24 = ((uint3)((uVar13 ^ uVar12) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar12);
        param_4[3] = uVar24;
        *param_2 = ((local_14 ^ uVar17) >> 1 & 0x7f7f7f) + (local_14 & uVar17);
        *param_3 = ((uVar16 ^ uVar20) >> 1 & 0x7f7f7f) + (uVar16 & uVar20);
        *param_4 = ((local_1c ^ uVar23) >> 1 & 0x7f7f7f) + (local_1c & uVar23);
        *param_5 = ((local_c ^ uVar18) >> 1 & 0x7f7f7f) + (local_c & uVar18);
        param_2[2] = ((uVar19 ^ uVar17) >> 1 & 0x7f7f7f) + (uVar19 & uVar17);
        param_3[2] = ((uint3)((uVar12 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar12 & uVar10);
        param_4[2] = ((uVar24 ^ uVar23) >> 1 & 0x7f7f7f) + (uVar24 & uVar23);
        param_5[2] = ((uint3)((uVar13 ^ uVar11) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar11);
        iVar4 = (&DAT_63790960)[param_10[1]];
        iVar22 = (&DAT_63791d80)[param_10[1]] + (&DAT_637929a0)[param_11[1]];
        iVar5 = (&DAT_63792180)[param_11[1]];
        iVar6 = (&DAT_63791580)[param_8[2]];
        iVar7 = (&DAT_63791580)[param_9[2]];
        iVar8 = (&DAT_63791580)[param_8[3]];
        iVar9 = (&DAT_63791580)[param_9[3]];
        uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar5],(&DAT_637903e0)[iVar6 + iVar22]),
                          (&DAT_637903e0)[iVar6 + iVar4]);
        uVar17 = (uint)uVar10;
        uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar7 + iVar5],(&DAT_637903e0)[iVar7 + iVar22]),
                          (&DAT_637903e0)[iVar7 + iVar4]);
        uVar14 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar8 + iVar5],(&DAT_637903e0)[iVar8 + iVar22]),
                          (&DAT_637903e0)[iVar8 + iVar4]);
        uVar16 = (uint)uVar14;
        uVar15 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar9 + iVar5],(&DAT_637903e0)[iVar9 + iVar22]),
                          (&DAT_637903e0)[iVar9 + iVar4]);
        local_c = (uint)uVar15;
        param_8 = param_8 + 4;
        param_9 = param_9 + 4;
        param_10 = param_10 + 2;
        param_11 = param_11 + 2;
        param_3[5] = uVar17;
        param_5[5] = (uint)uVar11;
        param_3[7] = uVar16;
        param_5[7] = local_c;
        uVar17 = ((param_1[5] ^ uVar17) >> 1 & 0x7f7f7f) + (param_1[5] & uVar17);
        param_2[5] = uVar17;
        uVar23 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
        param_4[5] = uVar23;
        local_14 = (param_1[7] & uVar16) + ((param_1[7] ^ uVar16) >> 1 & 0x7f7f7f);
        param_2[7] = local_14;
        local_1c = (uint)(uVar15 & uVar14) + ((uint3)((uVar15 ^ uVar14) >> 1) & 0x7f7f7f);
        param_4[7] = local_1c;
        param_2[4] = ((uVar19 ^ uVar17) >> 1 & 0x7f7f7f) + (uVar19 & uVar17);
        param_3[4] = ((uint3)((uVar12 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar12 & uVar10);
        param_4[4] = ((uVar24 ^ uVar23) >> 1 & 0x7f7f7f) + (uVar24 & uVar23);
        param_5[4] = ((uint3)((uVar13 ^ uVar11) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar11);
        param_2[6] = ((local_14 ^ uVar17) >> 1 & 0x7f7f7f) + (local_14 & uVar17);
        param_3[6] = ((uint3)((uVar14 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar14 & uVar10);
        param_4[6] = ((local_1c ^ uVar23) >> 1 & 0x7f7f7f) + (local_1c & uVar23);
        param_5[6] = ((uint3)((uVar15 ^ uVar11) >> 1) & 0x7f7f7f) + (uint)(uVar15 & uVar11);
        param_1 = param_1 + 8;
        param_2 = param_2 + 8;
        param_3 = param_3 + 8;
        param_5 = param_5 + 8;
        param_4 = param_4 + 8;
        local_18 = local_18 - 4;
        local_2c = local_2c - 1;
      } while (local_2c != 0);
    }
    uVar17 = uVar16;
    if (1 < (int)local_18) {
      iVar4 = (&DAT_63790960)[*param_10];
      iVar5 = (&DAT_63792180)[*param_11];
      iVar22 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
      iVar6 = (&DAT_63791580)[*param_8];
      iVar7 = (&DAT_63791580)[*param_9];
      iVar8 = (&DAT_63791580)[param_8[1]];
      iVar9 = (&DAT_63791580)[param_9[1]];
      uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar5],(&DAT_637903e0)[iVar6 + iVar22]),
                        (&DAT_637903e0)[iVar6 + iVar4]);
      uVar20 = (uint)uVar10;
      uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar7 + iVar5],(&DAT_637903e0)[iVar7 + iVar22]),
                        (&DAT_637903e0)[iVar7 + iVar4]);
      uVar18 = (uint)uVar11;
      uVar12 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar8 + iVar5],(&DAT_637903e0)[iVar8 + iVar22]),
                        (&DAT_637903e0)[iVar8 + iVar4]);
      uVar17 = (uint)uVar12;
      uVar13 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar9 + iVar5],(&DAT_637903e0)[iVar9 + iVar22]),
                        (&DAT_637903e0)[iVar9 + iVar4]);
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      param_3[1] = uVar20;
      param_5[1] = uVar18;
      param_3[3] = uVar17;
      param_5[3] = (uint)uVar13;
      uVar24 = ((param_1[1] ^ uVar20) >> 1 & 0x7f7f7f) + (param_1[1] & uVar20);
      param_2[1] = uVar24;
      uVar23 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
      param_4[1] = uVar23;
      uVar21 = ((param_1[3] ^ uVar17) >> 1 & 0x7f7f7f) + (param_1[3] & uVar17);
      param_2[3] = uVar21;
      uVar19 = ((uint3)((uVar13 ^ uVar12) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar12);
      param_4[3] = uVar19;
      *param_2 = ((local_14 ^ uVar24) >> 1 & 0x7f7f7f) + (local_14 & uVar24);
      *param_3 = ((uVar16 ^ uVar20) >> 1 & 0x7f7f7f) + (uVar16 & uVar20);
      *param_4 = ((local_1c ^ uVar23) >> 1 & 0x7f7f7f) + (local_1c & uVar23);
      *param_5 = ((local_c ^ uVar18) >> 1 & 0x7f7f7f) + (local_c & uVar18);
      param_2[2] = ((uVar21 ^ uVar24) >> 1 & 0x7f7f7f) + (uVar21 & uVar24);
      param_3[2] = ((uint3)((uVar12 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar12 & uVar10);
      param_4[2] = ((uVar19 ^ uVar23) >> 1 & 0x7f7f7f) + (uVar19 & uVar23);
      param_5[2] = ((uint3)((uVar13 ^ uVar11) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar11);
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
      param_3 = param_3 + 4;
      param_5 = param_5 + 4;
      param_4 = param_4 + 4;
      local_18 = local_18 - 2;
      local_1c = uVar19;
      local_14 = uVar21;
      local_c = (uint)uVar13;
    }
    if (0 < (int)local_18) {
      iVar4 = (&DAT_63791580)[*param_8];
      iVar5 = (&DAT_63791580)[*param_9];
      uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar4 + (&DAT_63792180)[*param_11]],
                                 (&DAT_637903e0)
                                 [iVar4 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]]),
                        (&DAT_637903e0)[iVar4 + (&DAT_63790960)[*param_10]]);
      uVar23 = (uint)uVar10;
      uVar1 = (&DAT_637903e0)[iVar5 + (&DAT_63792180)[*param_11]];
      uVar2 = (&DAT_637903e0)[iVar5 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]];
      uVar3 = (&DAT_637903e0)[iVar5 + (&DAT_63790960)[*param_10]];
      param_3[1] = uVar23;
      param_3[2] = uVar23;
      uVar11 = CONCAT21(CONCAT11(uVar1,uVar2),uVar3);
      uVar18 = (uint)uVar11;
      param_5[1] = uVar18;
      param_5[2] = uVar18;
      uVar16 = ((param_1[1] ^ uVar23) >> 1 & 0x7f7f7f) + (param_1[1] & uVar23);
      param_2[1] = uVar16;
      param_2[2] = uVar16;
      uVar19 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
      param_4[1] = uVar19;
      param_4[2] = uVar19;
      *param_2 = ((local_14 ^ uVar16) >> 1 & 0x7f7f7f) + (local_14 & uVar16);
      *param_3 = ((uVar17 ^ uVar23) >> 1 & 0x7f7f7f) + (uVar17 & uVar23);
      *param_4 = ((local_1c ^ uVar19) >> 1 & 0x7f7f7f) + (local_1c & uVar19);
      *param_5 = ((local_c ^ uVar18) >> 1 & 0x7f7f7f) + (local_c & uVar18);
      return;
    }
    *param_2 = local_14;
    *param_3 = uVar17;
    *param_4 = local_1c;
    *param_5 = local_c;
  }
  return;
}


