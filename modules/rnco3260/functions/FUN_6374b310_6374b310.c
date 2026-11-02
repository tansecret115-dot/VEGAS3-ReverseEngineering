/* Module: rnco3260.dll
   Function: FUN_6374b310
   Address: 6374b310
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6374b310(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
            undefined4 param_6,undefined4 param_7,byte *param_8,byte *param_9,byte *param_10,
            byte *param_11,uint param_12,int param_13)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
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
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint *puVar27;
  uint local_28;
  uint local_1c;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if (param_13 != 0) {
    if (((param_12 & 1) == 0) && (1 < param_13)) {
      bVar1 = *param_11;
      bVar2 = *param_10;
      iVar16 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
      iVar22 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
      iVar26 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
      iVar6 = (&DAT_63791580)[*param_8];
      iVar7 = (&DAT_63791580)[*param_9];
      iVar8 = (&DAT_63791580)[param_8[1]];
      iVar9 = (&DAT_63791580)[param_9[1]];
      uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar26],(&DAT_637903e0)[iVar6 + iVar16]),
                        (&DAT_637903e0)[iVar6 + iVar22]);
      uVar18 = (uint)uVar10;
      uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar7 + iVar26],(&DAT_637903e0)[iVar7 + iVar16]),
                        (&DAT_637903e0)[iVar7 + iVar22]);
      uVar12 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar8 + iVar26],(&DAT_637903e0)[iVar8 + iVar16]),
                        (&DAT_637903e0)[iVar8 + iVar22]);
      uVar17 = (uint)uVar12;
      uVar13 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar9 + iVar26],(&DAT_637903e0)[iVar9 + iVar16]),
                        (&DAT_637903e0)[iVar9 + iVar22]);
      local_10 = (uint)uVar13;
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      *param_3 = uVar18;
      *param_5 = (uint)uVar11;
      param_3[2] = uVar17;
      param_5[2] = local_10;
      uVar23 = ((*param_1 ^ uVar18) >> 1 & 0x7f7f7f) + (*param_1 & uVar18);
      *param_2 = uVar23;
      uVar18 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
      *param_4 = uVar18;
      local_c = ((param_1[2] ^ uVar17) >> 1 & 0x7f7f7f) + (param_1[2] & uVar17);
      param_2[2] = local_c;
      local_1c = ((uint3)((uVar13 ^ uVar12) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar12);
      param_4[2] = local_1c;
      param_2[1] = ((local_c ^ uVar23) >> 1 & 0x7f7f7f) + (local_c & uVar23);
      param_3[1] = ((uint3)((uVar12 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar12 & uVar10);
      param_4[1] = ((local_1c ^ uVar18) >> 1 & 0x7f7f7f) + (local_1c & uVar18);
      param_2 = param_2 + 3;
      param_5[1] = ((uint3)((uVar13 ^ uVar11) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar11);
      param_1 = param_1 + 3;
      param_5 = param_5 + 3;
      param_3 = param_3 + 3;
      param_4 = param_4 + 3;
      local_14 = param_13 - 2;
    }
    else {
      bVar1 = *param_11;
      bVar2 = *param_10;
      iVar6 = (&DAT_63791580)[*param_8];
      iVar7 = (&DAT_63791580)[*param_9];
      uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)
                                 [iVar6 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]],
                                 (&DAT_637903e0)
                                 [iVar6 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                        (&DAT_637903e0)[iVar6 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]]);
      uVar17 = (uint)uVar10;
      uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)
                                 [iVar7 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]],
                                 (&DAT_637903e0)
                                 [iVar7 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                        (&DAT_637903e0)[iVar7 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]]);
      local_10 = (uint)uVar11;
      param_8 = param_8 + 1;
      param_9 = param_9 + 1;
      *param_3 = uVar17;
      *param_5 = local_10;
      local_c = ((*param_1 ^ uVar17) >> 1 & 0x7f7f7f) + (*param_1 & uVar17);
      *param_2 = local_c;
      local_1c = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
      *param_4 = local_1c;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      local_14 = param_13 - 1;
    }
    param_11 = param_11 + 1;
    param_10 = param_10 + 1;
    if (3 < (int)local_14) {
      local_28 = local_14 >> 2;
      do {
        bVar1 = *param_11;
        bVar2 = *param_10;
        iVar16 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
        iVar26 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
        iVar22 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
        iVar6 = (&DAT_63791580)[*param_8];
        iVar7 = (&DAT_63791580)[*param_9];
        iVar8 = (&DAT_63791580)[param_8[1]];
        iVar9 = (&DAT_63791580)[param_9[1]];
        uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar16],(&DAT_637903e0)[iVar6 + iVar26]),
                          (&DAT_637903e0)[iVar6 + iVar22]);
        uVar21 = (uint)uVar10;
        uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar7 + iVar16],(&DAT_637903e0)[iVar7 + iVar26]),
                          (&DAT_637903e0)[iVar7 + iVar22]);
        uVar19 = (uint)uVar11;
        uVar12 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar8 + iVar16],(&DAT_637903e0)[iVar8 + iVar26]),
                          (&DAT_637903e0)[iVar8 + iVar22]);
        uVar20 = (uint)uVar12;
        uVar13 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar9 + iVar16],(&DAT_637903e0)[iVar9 + iVar26]),
                          (&DAT_637903e0)[iVar9 + iVar22]);
        param_3[1] = uVar21;
        param_5[1] = uVar19;
        param_3[3] = uVar20;
        param_5[3] = (uint)uVar13;
        uVar18 = ((param_1[1] ^ uVar21) >> 1 & 0x7f7f7f) + (param_1[1] & uVar21);
        param_2[1] = uVar18;
        uVar23 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
        param_4[1] = uVar23;
        uVar20 = ((param_1[3] ^ uVar20) >> 1 & 0x7f7f7f) + (param_1[3] & uVar20);
        param_2[3] = uVar20;
        uVar24 = ((uint3)((uVar13 ^ uVar12) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar12);
        param_4[3] = uVar24;
        *param_2 = ((local_c ^ uVar18) >> 1 & 0x7f7f7f) + (local_c & uVar18);
        *param_3 = ((uVar17 ^ uVar21) >> 1 & 0x7f7f7f) + (uVar17 & uVar21);
        *param_4 = ((local_1c ^ uVar23) >> 1 & 0x7f7f7f) + (local_1c & uVar23);
        *param_5 = ((local_10 ^ uVar19) >> 1 & 0x7f7f7f) + (local_10 & uVar19);
        param_2[2] = ((uVar20 ^ uVar18) >> 1 & 0x7f7f7f) + (uVar20 & uVar18);
        param_3[2] = ((uint3)((uVar12 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar12 & uVar10);
        param_4[2] = ((uVar24 ^ uVar23) >> 1 & 0x7f7f7f) + (uVar24 & uVar23);
        param_5[2] = ((uint3)((uVar13 ^ uVar11) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar11);
        bVar1 = param_11[1];
        bVar2 = param_10[1];
        iVar16 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
        iVar22 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
        iVar26 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
        iVar6 = (&DAT_63791580)[param_8[2]];
        iVar7 = (&DAT_63791580)[param_9[2]];
        iVar8 = (&DAT_63791580)[param_8[3]];
        iVar9 = (&DAT_63791580)[param_9[3]];
        uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar16],(&DAT_637903e0)[iVar6 + iVar22]),
                          (&DAT_637903e0)[iVar6 + iVar26]);
        uVar18 = (uint)uVar10;
        uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar7 + iVar16],(&DAT_637903e0)[iVar7 + iVar22]),
                          (&DAT_637903e0)[iVar7 + iVar26]);
        uVar14 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar8 + iVar16],(&DAT_637903e0)[iVar8 + iVar22]),
                          (&DAT_637903e0)[iVar8 + iVar26]);
        uVar17 = (uint)uVar14;
        uVar15 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar9 + iVar16],(&DAT_637903e0)[iVar9 + iVar22]),
                          (&DAT_637903e0)[iVar9 + iVar26]);
        local_10 = (uint)uVar15;
        param_8 = param_8 + 4;
        param_9 = param_9 + 4;
        param_10 = param_10 + 2;
        param_11 = param_11 + 2;
        param_3[5] = uVar18;
        param_5[5] = (uint)uVar11;
        param_3[7] = uVar17;
        param_5[7] = local_10;
        uVar18 = ((param_1[5] ^ uVar18) >> 1 & 0x7f7f7f) + (param_1[5] & uVar18);
        param_2[5] = uVar18;
        uVar23 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
        param_4[5] = uVar23;
        local_c = (param_1[7] & uVar17) + ((param_1[7] ^ uVar17) >> 1 & 0x7f7f7f);
        param_2[7] = local_c;
        local_1c = (uint)(uVar15 & uVar14) + ((uint3)((uVar15 ^ uVar14) >> 1) & 0x7f7f7f);
        param_4[7] = local_1c;
        param_2[4] = ((uVar20 ^ uVar18) >> 1 & 0x7f7f7f) + (uVar20 & uVar18);
        param_3[4] = ((uint3)((uVar12 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar12 & uVar10);
        param_4[4] = ((uVar24 ^ uVar23) >> 1 & 0x7f7f7f) + (uVar24 & uVar23);
        param_5[4] = ((uint3)((uVar13 ^ uVar11) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar11);
        param_2[6] = ((local_c ^ uVar18) >> 1 & 0x7f7f7f) + (local_c & uVar18);
        param_3[6] = ((uint3)((uVar14 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar14 & uVar10);
        param_4[6] = ((local_1c ^ uVar23) >> 1 & 0x7f7f7f) + (local_1c & uVar23);
        param_5[6] = ((uint3)((uVar15 ^ uVar11) >> 1) & 0x7f7f7f) + (uint)(uVar15 & uVar11);
        param_1 = param_1 + 8;
        param_2 = param_2 + 8;
        param_3 = param_3 + 8;
        param_5 = param_5 + 8;
        param_4 = param_4 + 8;
        local_14 = local_14 - 4;
        local_28 = local_28 - 1;
      } while (local_28 != 0);
    }
    uVar18 = uVar17;
    puVar27 = param_2;
    if (1 < (int)local_14) {
      bVar1 = *param_11;
      bVar2 = *param_10;
      iVar16 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
      iVar22 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
      iVar26 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
      iVar6 = (&DAT_63791580)[*param_8];
      iVar7 = (&DAT_63791580)[*param_9];
      iVar8 = (&DAT_63791580)[param_8[1]];
      iVar9 = (&DAT_63791580)[param_9[1]];
      uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar6 + iVar16],(&DAT_637903e0)[iVar6 + iVar22]),
                        (&DAT_637903e0)[iVar6 + iVar26]);
      uVar19 = (uint)uVar10;
      uVar11 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar7 + iVar16],(&DAT_637903e0)[iVar7 + iVar22]),
                        (&DAT_637903e0)[iVar7 + iVar26]);
      uVar21 = (uint)uVar11;
      uVar12 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar8 + iVar16],(&DAT_637903e0)[iVar8 + iVar22]),
                        (&DAT_637903e0)[iVar8 + iVar26]);
      uVar18 = (uint)uVar12;
      uVar13 = CONCAT21(CONCAT11((&DAT_637903e0)[iVar9 + iVar16],(&DAT_637903e0)[iVar9 + iVar22]),
                        (&DAT_637903e0)[iVar9 + iVar26]);
      param_8 = param_8 + 2;
      param_9 = param_9 + 2;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      param_3[1] = uVar19;
      param_5[1] = uVar21;
      param_3[3] = uVar18;
      param_5[3] = (uint)uVar13;
      uVar23 = ((param_1[1] ^ uVar19) >> 1 & 0x7f7f7f) + (param_1[1] & uVar19);
      param_2[1] = uVar23;
      uVar25 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
      param_4[1] = uVar25;
      uVar24 = ((param_1[3] ^ uVar18) >> 1 & 0x7f7f7f) + (param_1[3] & uVar18);
      param_2[3] = uVar24;
      uVar20 = ((uint3)((uVar13 ^ uVar12) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar12);
      param_4[3] = uVar20;
      *param_2 = ((local_c ^ uVar23) >> 1 & 0x7f7f7f) + (local_c & uVar23);
      puVar27 = param_2 + 4;
      *param_3 = ((uVar17 ^ uVar19) >> 1 & 0x7f7f7f) + (uVar17 & uVar19);
      *param_4 = ((local_1c ^ uVar25) >> 1 & 0x7f7f7f) + (local_1c & uVar25);
      *param_5 = ((local_10 ^ uVar21) >> 1 & 0x7f7f7f) + (local_10 & uVar21);
      param_2[2] = ((uVar24 ^ uVar23) >> 1 & 0x7f7f7f) + (uVar24 & uVar23);
      param_3[2] = ((uint3)((uVar12 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar12 & uVar10);
      param_4[2] = ((uVar20 ^ uVar25) >> 1 & 0x7f7f7f) + (uVar20 & uVar25);
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
      param_5[2] = ((uint3)((uVar13 ^ uVar11) >> 1) & 0x7f7f7f) + (uint)(uVar13 & uVar11);
      param_4 = param_4 + 4;
      param_5 = param_5 + 4;
      local_14 = local_14 - 2;
      local_1c = uVar20;
      local_10 = (uint)uVar13;
      local_c = uVar24;
    }
    if (0 < (int)local_14) {
      bVar1 = *param_11;
      bVar2 = *param_10;
      iVar6 = (&DAT_63791580)[*param_8];
      iVar7 = (&DAT_63791580)[*param_9];
      uVar10 = CONCAT21(CONCAT11((&DAT_637903e0)
                                 [iVar6 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]],
                                 (&DAT_637903e0)
                                 [iVar6 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]]),
                        (&DAT_637903e0)[iVar6 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]]);
      uVar23 = (uint)uVar10;
      uVar3 = (&DAT_637903e0)[iVar7 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
      uVar4 = (&DAT_637903e0)[iVar7 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]];
      uVar5 = (&DAT_637903e0)[iVar7 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]];
      param_3[1] = uVar23;
      param_3[2] = uVar23;
      uVar11 = CONCAT21(CONCAT11(uVar3,uVar4),uVar5);
      uVar19 = (uint)uVar11;
      param_5[1] = uVar19;
      param_5[2] = uVar19;
      uVar17 = ((param_1[1] ^ uVar23) >> 1 & 0x7f7f7f) + (param_1[1] & uVar23);
      puVar27[1] = uVar17;
      puVar27[2] = uVar17;
      uVar20 = ((uint3)((uVar11 ^ uVar10) >> 1) & 0x7f7f7f) + (uint)(uVar11 & uVar10);
      param_4[1] = uVar20;
      param_4[2] = uVar20;
      *puVar27 = ((local_c ^ uVar17) >> 1 & 0x7f7f7f) + (local_c & uVar17);
      *param_3 = ((uVar18 ^ uVar23) >> 1 & 0x7f7f7f) + (uVar18 & uVar23);
      *param_4 = ((local_1c ^ uVar20) >> 1 & 0x7f7f7f) + (local_1c & uVar20);
      *param_5 = ((local_10 ^ uVar19) >> 1 & 0x7f7f7f) + (local_10 & uVar19);
      return;
    }
    *puVar27 = local_c;
    *param_3 = uVar18;
    *param_4 = local_1c;
    *param_5 = local_10;
  }
  return;
}


