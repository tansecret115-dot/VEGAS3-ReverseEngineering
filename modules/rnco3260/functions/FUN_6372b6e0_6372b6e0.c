/* Module: rnco3260.dll
   Function: FUN_6372b6e0
   Address: 6372b6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6372b6e0(byte *param_1,byte *param_2,undefined4 param_3,int param_4,byte *param_5,byte *param_6,
            byte *param_7,byte *param_8,uint param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  uint local_7c;
  int local_4c;
  byte local_1c;
  uint local_18;
  byte local_14;
  byte local_10;
  byte local_c;
  byte local_8;
  
  iVar39 = param_4 >> 1;
  local_4c = param_4 * 3 - iVar39;
  if ((param_9 + param_10 & 1) != 0) {
    local_4c = local_4c + param_4 * 2;
  }
  local_4c = local_4c / (param_10 * 2);
  if (param_4 == 0) {
    return;
  }
  pbVar20 = param_1;
  pbVar21 = param_2;
  if (((param_9 & 1) == 0) && (1 < param_10)) {
    bVar14 = *param_7;
    bVar31 = *param_8;
    iVar16 = (&DAT_63790d60)[bVar31] + (&DAT_63790960)[bVar14];
    iVar36 = (&DAT_637929a0)[bVar31] + (&DAT_63791d80)[bVar14];
    iVar17 = (&DAT_63792180)[bVar31] + (&DAT_63791980)[bVar14];
    iVar37 = (&DAT_63791580)[*param_5];
    iVar38 = (&DAT_63791580)[*param_6];
    iVar12 = (&DAT_63791580)[param_5[1]];
    iVar13 = (&DAT_63791580)[param_6[1]];
    bVar1 = (&DAT_637903e0)[iVar37 + iVar16];
    bVar2 = (&DAT_637903e0)[iVar37 + iVar36];
    bVar3 = (&DAT_637903e0)[iVar37 + iVar17];
    bVar4 = (&DAT_637903e0)[iVar38 + iVar16];
    bVar5 = (&DAT_637903e0)[iVar38 + iVar36];
    bVar30 = (&DAT_637903e0)[iVar38 + iVar17];
    bVar24 = (&DAT_637903e0)[iVar12 + iVar16];
    bVar25 = (&DAT_637903e0)[iVar12 + iVar36];
    bVar26 = (&DAT_637903e0)[iVar12 + iVar17];
    bVar27 = (&DAT_637903e0)[iVar13 + iVar16];
    bVar29 = (&DAT_637903e0)[iVar13 + iVar17];
    bVar28 = (&DAT_637903e0)[iVar13 + iVar36];
    param_5 = param_5 + 2;
    param_6 = param_6 + 2;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    iVar37 = param_4 - local_4c;
    if (0 < iVar37) {
LAB_6372c259:
      *param_1 = bVar1;
      param_1[1] = bVar2;
      param_1[2] = bVar3;
      *param_2 = bVar4;
      param_2[1] = bVar5;
      param_2[2] = bVar30;
      pbVar19 = param_2;
      pbVar23 = param_1;
      iVar38 = iVar37;
      while( true ) {
        pbVar20 = pbVar23 + 3;
        pbVar21 = pbVar19 + 3;
        iVar37 = 0;
        if (iVar38 + -1 == 0) goto LAB_6372bfd1;
        iVar39 = iVar39 + param_10 * -2;
        if (iVar39 < 0) break;
        *pbVar20 = bVar1;
        pbVar23[4] = bVar2;
        pbVar23[5] = bVar3;
        *pbVar21 = bVar4;
        pbVar19[4] = bVar5;
        pbVar19[5] = bVar30;
        pbVar19 = pbVar21;
        pbVar23 = pbVar20;
        iVar38 = iVar38 + -1;
      }
      iVar39 = iVar39 + param_4;
      bVar14 = (byte)((int)((uint)bVar2 + (uint)bVar25) >> 1);
      bVar31 = (byte)((int)((uint)bVar3 + (uint)bVar26) >> 1);
      param_1 = pbVar23 + 6;
      bVar32 = (byte)((int)((uint)bVar27 + (uint)bVar4) >> 1);
      param_2 = pbVar19 + 6;
      bVar33 = (byte)((int)((uint)bVar28 + (uint)bVar5) >> 1);
      bVar34 = (byte)((int)((uint)bVar30 + (uint)bVar29) >> 1);
      pbVar23[4] = bVar14;
      local_18 = (int)((uint)bVar1 + (uint)bVar24) >> 1;
      pbVar23[5] = bVar31;
      *pbVar20 = (byte)local_18;
      *pbVar21 = bVar32;
      iVar38 = iVar38 + -2;
      pbVar19[4] = bVar33;
      pbVar19[5] = bVar34;
      iVar37 = 0;
      pbVar20 = param_1;
      pbVar21 = param_2;
      bVar30 = bVar29;
      bVar1 = bVar24;
      bVar2 = bVar25;
      bVar3 = bVar26;
      bVar4 = bVar27;
      bVar5 = bVar28;
      if (iVar38 != 0) {
        while (iVar39 = iVar39 + param_10 * -2, -1 < iVar39) {
          *param_1 = (byte)local_18;
          param_1[1] = bVar14;
          param_1[2] = bVar31;
          *param_2 = bVar32;
          param_2[1] = bVar33;
          param_2[2] = bVar34;
          param_1 = param_1 + 3;
          param_2 = param_2 + 3;
          iVar38 = iVar38 + -1;
          if (iVar38 == 0) {
            iVar37 = 0;
            pbVar20 = param_1;
            pbVar21 = param_2;
            goto LAB_6372bfd1;
          }
        }
        iVar39 = iVar39 + param_4;
        iVar37 = iVar38;
LAB_6372b94c:
        *param_1 = bVar24;
        param_1[1] = bVar25;
        param_1[2] = bVar26;
        *param_2 = bVar27;
        param_2[1] = bVar28;
        param_2[2] = bVar29;
        pbVar23 = param_2;
        pbVar19 = param_1;
        while( true ) {
          pbVar19 = pbVar19 + 3;
          pbVar23 = pbVar23 + 3;
          if (iVar37 + -1 == 0) goto LAB_6372bdfe;
          iVar39 = iVar39 + param_10 * -2;
          if (iVar39 < 0) break;
          *pbVar19 = bVar24;
          pbVar19[1] = bVar25;
          pbVar19[2] = bVar26;
          *pbVar23 = bVar27;
          pbVar23[1] = bVar28;
          pbVar23[2] = bVar29;
          iVar37 = iVar37 + -1;
        }
        iVar39 = iVar39 + param_4;
        bVar14 = *param_7;
        bVar31 = *param_8;
        iVar36 = (&DAT_63790d60)[bVar31] + (&DAT_63790960)[bVar14];
        iVar35 = (&DAT_637929a0)[bVar31] + (&DAT_63791d80)[bVar14];
        iVar17 = (&DAT_63792180)[bVar31] + (&DAT_63791980)[bVar14];
        iVar38 = (&DAT_63791580)[*param_5];
        iVar12 = (&DAT_63791580)[*param_6];
        iVar13 = (&DAT_63791580)[param_5[1]];
        iVar16 = (&DAT_63791580)[param_6[1]];
        bVar6 = (&DAT_637903e0)[iVar38 + iVar36];
        bVar7 = (&DAT_637903e0)[iVar38 + iVar35];
        bVar8 = (&DAT_637903e0)[iVar38 + iVar17];
        bVar9 = (&DAT_637903e0)[iVar12 + iVar36];
        bVar10 = (&DAT_637903e0)[iVar12 + iVar35];
        bVar11 = (&DAT_637903e0)[iVar12 + iVar17];
        bVar15 = (&DAT_637903e0)[iVar13 + iVar36];
        local_7c = (uint)bVar15;
        bVar14 = (&DAT_637903e0)[iVar13 + iVar35];
        param_2 = (byte *)(uint)bVar14;
        bVar31 = (&DAT_637903e0)[iVar13 + iVar17];
        param_1 = (byte *)(uint)bVar31;
        bVar32 = (&DAT_637903e0)[iVar16 + iVar36];
        bVar33 = (&DAT_637903e0)[iVar16 + iVar35];
        pbVar18 = pbVar19 + 3;
        pbVar21 = pbVar23 + 3;
        bVar34 = (&DAT_637903e0)[iVar16 + iVar17];
        bVar24 = (byte)((int)((uint)bVar24 + (uint)bVar6) >> 1);
        bVar25 = (byte)((int)((uint)bVar25 + (uint)bVar7) >> 1);
        bVar26 = (byte)((int)((uint)bVar26 + (uint)bVar8) >> 1);
        bVar27 = (byte)((int)((uint)bVar27 + (uint)bVar9) >> 1);
        bVar28 = (byte)((int)((uint)bVar28 + (uint)bVar10) >> 1);
        bVar29 = (byte)((int)((uint)bVar29 + (uint)bVar11) >> 1);
        *pbVar19 = bVar24;
        pbVar19[1] = bVar25;
        pbVar19[2] = bVar26;
        *pbVar23 = bVar27;
        pbVar23[1] = bVar28;
        pbVar23[2] = bVar29;
        iVar38 = iVar37 + -2;
        iVar37 = 0;
        pbVar20 = pbVar18;
        bVar30 = bVar29;
        bVar1 = bVar24;
        bVar2 = bVar25;
        bVar3 = bVar26;
        bVar4 = bVar27;
        bVar5 = bVar28;
        if (iVar38 != 0) {
          while (iVar39 = iVar39 + param_10 * -2, -1 < iVar39) {
            pbVar20 = pbVar21 + 3;
            *pbVar18 = bVar24;
            pbVar18[1] = bVar25;
            pbVar18[2] = bVar26;
            *pbVar21 = bVar27;
            pbVar21[1] = bVar28;
            pbVar21[2] = bVar29;
            pbVar18 = pbVar18 + 3;
            iVar38 = iVar38 + -1;
            pbVar21 = pbVar20;
            if (iVar38 == 0) {
              iVar37 = 0;
              pbVar20 = pbVar18;
              goto LAB_6372bfd1;
            }
          }
          pbVar20 = pbVar18 + 3;
          iVar39 = iVar39 + param_4;
          *pbVar18 = bVar6;
          pbVar18[1] = bVar7;
          pbVar18[2] = bVar8;
          *pbVar21 = bVar9;
          pbVar21[1] = bVar10;
          pbVar21[2] = bVar11;
          pbVar21 = pbVar21 + 3;
          iVar38 = iVar38 + -1;
          iVar37 = 0;
          pbVar18 = pbVar21;
          bVar30 = bVar11;
          bVar1 = bVar6;
          bVar2 = bVar7;
          bVar3 = bVar8;
          bVar4 = bVar9;
          bVar5 = bVar10;
          if (iVar38 != 0) {
            while (iVar39 = iVar39 + param_10 * -2, -1 < iVar39) {
              pbVar21 = pbVar18 + 3;
              *pbVar20 = bVar6;
              pbVar20[1] = bVar7;
              pbVar20[2] = bVar8;
              *pbVar18 = bVar9;
              pbVar18[1] = bVar10;
              pbVar18[2] = bVar11;
              pbVar20 = pbVar20 + 3;
              iVar38 = iVar38 + -1;
              pbVar18 = pbVar21;
              if (iVar38 == 0) {
                iVar37 = 0;
                goto LAB_6372bfd1;
              }
            }
            iVar39 = iVar39 + param_4;
            local_18._0_1_ = (byte)((int)(bVar6 + local_7c) >> 1);
            *pbVar20 = (byte)local_18;
            local_8 = (byte)((int)(param_2 + bVar7) >> 1);
            pbVar20[1] = local_8;
            local_c = (byte)((int)(param_1 + bVar8) >> 1);
            pbVar20[2] = local_c;
            local_10 = (byte)((int)((uint)bVar9 + (uint)bVar32) >> 1);
            *pbVar18 = local_10;
            local_14 = (byte)((int)((uint)bVar10 + (uint)bVar33) >> 1);
            pbVar18[1] = local_14;
            local_1c = (byte)((int)((uint)bVar11 + (uint)bVar34) >> 1);
            pbVar18[2] = local_1c;
            while( true ) {
              iVar38 = iVar38 + -1;
              pbVar18 = pbVar18 + 3;
              pbVar20 = pbVar20 + 3;
              if (iVar38 == 0) goto LAB_6372c22e;
              iVar39 = iVar39 + param_10 * -2;
              if (iVar39 < 0) break;
              *pbVar20 = (byte)local_18;
              pbVar20[1] = local_8;
              pbVar20[2] = local_c;
              *pbVar18 = local_10;
              pbVar18[1] = local_14;
              pbVar18[2] = local_1c;
            }
            *pbVar20 = bVar15;
            iVar39 = iVar39 + param_4;
            pbVar20[1] = bVar14;
            pbVar20[2] = bVar31;
            *pbVar18 = bVar32;
            pbVar18[1] = bVar33;
            pbVar18[2] = bVar34;
            pbVar21 = pbVar20;
            pbVar22 = pbVar18;
            do {
              pbVar23 = pbVar22 + 3;
              pbVar19 = pbVar21 + 3;
              if (iVar38 + -1 == 0) {
                local_18 = (uint)bVar15;
                param_5 = param_5 + 2;
                param_6 = param_6 + 2;
                param_7 = param_7 + 1;
                param_8 = param_8 + 1;
LAB_6372bdfe:
                iVar37 = 0;
                pbVar20 = pbVar19;
                pbVar21 = pbVar23;
                bVar30 = bVar29;
                bVar1 = bVar24;
                bVar2 = bVar25;
                bVar3 = bVar26;
                bVar4 = bVar27;
                bVar5 = bVar28;
                if ((param_10 + param_9 & 1) != 0) {
                  iVar37 = local_4c >> 1;
                  local_4c = local_4c - iVar37;
                  if (0 < iVar37) {
                    bVar30 = *param_7;
                    bVar28 = *param_8;
                    iVar38 = (&DAT_63791580)[*param_5];
                    iVar12 = (&DAT_63791580)[*param_6];
                    bVar1 = (&DAT_637903e0)
                            [iVar38 + (&DAT_63790d60)[bVar28] + (&DAT_63790960)[bVar30]];
                    bVar2 = (&DAT_637903e0)
                            [iVar38 + (&DAT_637929a0)[bVar28] + (&DAT_63791d80)[bVar30]];
                    bVar3 = (&DAT_637903e0)
                            [iVar38 + (&DAT_63792180)[bVar28] + (&DAT_63791980)[bVar30]];
                    bVar4 = (&DAT_637903e0)
                            [iVar12 + (&DAT_63790d60)[bVar28] + (&DAT_63790960)[bVar30]];
                    bVar5 = (&DAT_637903e0)
                            [iVar12 + (&DAT_637929a0)[bVar28] + (&DAT_63791d80)[bVar30]];
                    bVar30 = (&DAT_637903e0)
                             [iVar12 + (&DAT_63792180)[bVar28] + (&DAT_63791980)[bVar30]];
                    local_18._0_1_ = (byte)((int)((local_18 & 0xff) + (uint)bVar1) >> 1);
                    *pbVar19 = (byte)local_18;
                    local_8 = (byte)((int)((uint)bVar14 + (uint)bVar2) >> 1);
                    pbVar19[1] = local_8;
                    local_c = (byte)((int)((uint)bVar31 + (uint)bVar3) >> 1);
                    pbVar19[2] = local_c;
                    local_10 = (byte)((int)((uint)bVar4 + (uint)bVar32) >> 1);
                    *pbVar23 = local_10;
                    local_14 = (byte)((int)((uint)bVar5 + (uint)bVar33) >> 1);
                    pbVar23[1] = local_14;
                    bVar14 = (byte)((int)((uint)bVar34 + (uint)bVar30) >> 1);
                    pbVar23[2] = bVar14;
                    while( true ) {
                      iVar37 = iVar37 + -1;
                      pbVar21 = pbVar23 + 3;
                      pbVar20 = pbVar19 + 3;
                      if ((iVar37 == 0) || (iVar39 = iVar39 + param_10 * -2, iVar39 < 0)) break;
                      *pbVar20 = (byte)local_18;
                      pbVar19[4] = local_8;
                      pbVar19[5] = local_c;
                      *pbVar21 = local_10;
                      pbVar23[4] = local_14;
                      pbVar23[5] = bVar14;
                      pbVar19 = pbVar20;
                      pbVar23 = pbVar21;
                    }
                  }
                }
                break;
              }
              iVar39 = iVar39 + param_10 * -2;
              if (iVar39 < 0) goto LAB_6372c00c;
              *pbVar19 = bVar15;
              pbVar21[4] = bVar14;
              pbVar21[5] = bVar31;
              *pbVar23 = bVar32;
              pbVar22[4] = bVar33;
              pbVar22[5] = bVar34;
              pbVar21 = pbVar19;
              pbVar22 = pbVar23;
              iVar38 = iVar38 + -1;
            } while( true );
          }
        }
      }
    }
  }
  else {
    bVar14 = *param_7;
    bVar31 = *param_8;
    iVar37 = (&DAT_63791580)[*param_5];
    iVar38 = (&DAT_63791580)[*param_6];
    bVar24 = (&DAT_637903e0)[iVar37 + (&DAT_63790d60)[bVar31] + (&DAT_63790960)[bVar14]];
    bVar25 = (&DAT_637903e0)[iVar37 + (&DAT_637929a0)[bVar31] + (&DAT_63791d80)[bVar14]];
    bVar28 = (&DAT_637903e0)[iVar38 + (&DAT_637929a0)[bVar31] + (&DAT_63791d80)[bVar14]];
    bVar26 = (&DAT_637903e0)[iVar37 + (&DAT_63792180)[bVar31] + (&DAT_63791980)[bVar14]];
    bVar27 = (&DAT_637903e0)[iVar38 + (&DAT_63790d60)[bVar31] + (&DAT_63790960)[bVar14]];
    bVar29 = (&DAT_637903e0)[iVar38 + (&DAT_63792180)[bVar31] + (&DAT_63791980)[bVar14]];
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    iVar37 = param_4 - local_4c;
    bVar30 = bVar29;
    bVar1 = bVar24;
    bVar2 = bVar25;
    bVar3 = bVar26;
    bVar4 = bVar27;
    bVar5 = bVar28;
    bVar14 = local_8;
    bVar31 = local_c;
    bVar32 = local_10;
    bVar33 = local_14;
    bVar34 = local_1c;
    if (0 < iVar37) goto LAB_6372b94c;
  }
LAB_6372bfd1:
  for (iVar37 = iVar37 + local_4c; iVar37 != 0; iVar37 = iVar37 + -1) {
    *pbVar20 = bVar1;
    pbVar20[1] = bVar2;
    pbVar20[2] = bVar3;
    *pbVar21 = bVar4;
    pbVar21[1] = bVar5;
    pbVar21[2] = bVar30;
    pbVar20 = pbVar20 + 3;
    pbVar21 = pbVar21 + 3;
  }
  return;
LAB_6372c00c:
  iVar39 = iVar39 + param_4;
  bVar14 = param_7[1];
  bVar31 = param_8[1];
  iVar17 = (&DAT_637929a0)[bVar31] + (&DAT_63791d80)[bVar14];
  iVar35 = (&DAT_63790d60)[bVar31] + (&DAT_63790960)[bVar14];
  iVar36 = (&DAT_63792180)[bVar31] + (&DAT_63791980)[bVar14];
  iVar37 = (&DAT_63791580)[param_5[2]];
  iVar12 = (&DAT_63791580)[param_6[2]];
  iVar13 = (&DAT_63791580)[param_5[3]];
  iVar16 = (&DAT_63791580)[param_6[3]];
  bVar1 = (&DAT_637903e0)[iVar37 + iVar35];
  bVar2 = (&DAT_637903e0)[iVar37 + iVar17];
  bVar3 = (&DAT_637903e0)[iVar37 + iVar36];
  bVar4 = (&DAT_637903e0)[iVar12 + iVar35];
  bVar5 = (&DAT_637903e0)[iVar12 + iVar17];
  bVar30 = (&DAT_637903e0)[iVar12 + iVar36];
  bVar24 = (&DAT_637903e0)[iVar13 + iVar35];
  bVar25 = (&DAT_637903e0)[iVar13 + iVar17];
  bVar26 = (&DAT_637903e0)[iVar13 + iVar36];
  bVar27 = (&DAT_637903e0)[iVar16 + iVar35];
  bVar28 = (&DAT_637903e0)[iVar16 + iVar17];
  bVar29 = (&DAT_637903e0)[iVar16 + iVar36];
  param_5 = param_5 + 4;
  param_6 = param_6 + 4;
  param_7 = param_7 + 2;
  param_8 = param_8 + 2;
  pbVar20 = pbVar21 + 6;
  bVar14 = (byte)((int)(param_2 + bVar2) >> 1);
  pbVar18 = pbVar22 + 6;
  bVar31 = (byte)((int)(param_1 + bVar3) >> 1);
  bVar32 = (byte)((int)((uint)bVar4 + (uint)bVar32) >> 1);
  bVar33 = (byte)((int)((uint)bVar5 + (uint)bVar33) >> 1);
  bVar34 = (byte)((int)((uint)bVar30 + (uint)bVar34) >> 1);
  pbVar21[4] = bVar14;
  pbVar21[5] = bVar31;
  bVar15 = (byte)((int)(bVar1 + local_7c) >> 1);
  *pbVar19 = bVar15;
  *pbVar23 = bVar32;
  iVar37 = iVar38 + -2;
  pbVar22[4] = bVar33;
  pbVar22[5] = bVar34;
  while( true ) {
    if (iVar37 == 0) goto LAB_6372c22e;
    iVar39 = iVar39 + param_10 * -2;
    if (iVar39 < 0) break;
    *pbVar20 = bVar15;
    pbVar20[1] = bVar14;
    pbVar20[2] = bVar31;
    *pbVar18 = bVar32;
    pbVar18[1] = bVar33;
    pbVar18[2] = bVar34;
    pbVar20 = pbVar20 + 3;
    pbVar18 = pbVar18 + 3;
    iVar37 = iVar37 + -1;
  }
  iVar39 = iVar39 + param_4;
  param_1 = pbVar20;
  param_2 = pbVar18;
  goto LAB_6372c259;
LAB_6372c22e:
  param_1._0_1_ = bVar31;
  param_2._0_1_ = bVar14;
  iVar37 = 0;
  pbVar21 = pbVar18;
  bVar30 = bVar34;
  bVar1 = bVar15;
  bVar2 = (byte)param_2;
  bVar3 = (byte)param_1;
  bVar4 = bVar32;
  bVar5 = bVar33;
  goto LAB_6372bfd1;
}


