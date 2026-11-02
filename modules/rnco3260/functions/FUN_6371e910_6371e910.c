/* Module: rnco3260.dll
   Function: FUN_6371e910
   Address: 6371e910
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6371e910(byte *param_1,byte *param_2,undefined4 param_3,int param_4,byte *param_5,byte *param_6,
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
  byte bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
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
  uint local_78;
  int local_4c;
  byte local_1c;
  uint local_18;
  byte local_14;
  byte local_10;
  byte local_c;
  byte local_8;
  
  iVar37 = param_4 >> 1;
  local_4c = param_4 * 3 - iVar37;
  if ((param_9 + param_10 & 1) != 0) {
    local_4c = local_4c + param_4 * 2;
  }
  local_4c = local_4c / (param_10 * 2);
  if (param_4 == 0) {
    return;
  }
  pbVar24 = param_1;
  pbVar25 = param_2;
  if (((param_9 & 1) == 0) && (1 < param_10)) {
    iVar35 = (&DAT_63790960)[*param_7];
    iVar36 = (&DAT_63792180)[*param_8];
    iVar20 = (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7];
    iVar13 = (&DAT_63791580)[*param_5];
    iVar14 = (&DAT_63791580)[*param_6];
    iVar15 = (&DAT_63791580)[param_5[1]];
    iVar16 = (&DAT_63791580)[param_6[1]];
    bVar1 = (&DAT_637903e0)[iVar13 + iVar35];
    bVar2 = (&DAT_637903e0)[iVar13 + iVar20];
    bVar3 = (&DAT_637903e0)[iVar13 + iVar36];
    bVar4 = (&DAT_637903e0)[iVar14 + iVar35];
    bVar5 = (&DAT_637903e0)[iVar14 + iVar20];
    bVar32 = (&DAT_637903e0)[iVar14 + iVar36];
    bVar26 = (&DAT_637903e0)[iVar15 + iVar35];
    bVar27 = (&DAT_637903e0)[iVar15 + iVar20];
    bVar28 = (&DAT_637903e0)[iVar15 + iVar36];
    bVar29 = (&DAT_637903e0)[iVar16 + iVar35];
    bVar30 = (&DAT_637903e0)[iVar16 + iVar20];
    bVar31 = (&DAT_637903e0)[iVar16 + iVar36];
    param_5 = param_5 + 2;
    param_6 = param_6 + 2;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    iVar35 = param_4 - local_4c;
    if (0 < iVar35) {
LAB_6371f450:
      *param_1 = bVar1;
      param_1[1] = bVar2;
      param_1[2] = bVar3;
      *param_2 = bVar4;
      param_2[1] = bVar5;
      param_2[2] = bVar32;
      pbVar23 = param_2;
      pbVar21 = param_1;
      iVar36 = iVar35;
      while( true ) {
        pbVar24 = pbVar21 + 3;
        pbVar25 = pbVar23 + 3;
        iVar35 = 0;
        if (iVar36 + -1 == 0) goto LAB_6371f1d4;
        iVar37 = iVar37 + param_10 * -2;
        if (iVar37 < 0) break;
        *pbVar24 = bVar1;
        pbVar21[4] = bVar2;
        pbVar21[5] = bVar3;
        *pbVar25 = bVar4;
        pbVar23[4] = bVar5;
        pbVar23[5] = bVar32;
        pbVar23 = pbVar25;
        pbVar21 = pbVar24;
        iVar36 = iVar36 + -1;
      }
      iVar37 = iVar37 + param_4;
      param_1 = pbVar21 + 6;
      bVar17 = (byte)((int)((uint)bVar27 + (uint)bVar2) >> 1);
      param_2 = pbVar23 + 6;
      bVar18 = (byte)((int)((uint)bVar28 + (uint)bVar3) >> 1);
      bVar19 = (byte)((int)((uint)bVar4 + (uint)bVar29) >> 1);
      bVar33 = (byte)((int)((uint)bVar30 + (uint)bVar5) >> 1);
      bVar34 = (byte)((int)((uint)bVar32 + (uint)bVar31) >> 1);
      pbVar21[4] = bVar17;
      local_18 = (int)((uint)bVar26 + (uint)bVar1) >> 1;
      pbVar21[5] = bVar18;
      *pbVar24 = (byte)local_18;
      *pbVar25 = bVar19;
      iVar36 = iVar36 + -2;
      pbVar23[4] = bVar33;
      pbVar23[5] = bVar34;
      iVar35 = 0;
      pbVar24 = param_1;
      pbVar25 = param_2;
      bVar32 = bVar31;
      bVar1 = bVar26;
      bVar2 = bVar27;
      bVar3 = bVar28;
      bVar4 = bVar29;
      bVar5 = bVar30;
      if (iVar36 != 0) {
        while (iVar37 = iVar37 + param_10 * -2, -1 < iVar37) {
          *param_1 = (byte)local_18;
          param_1[1] = bVar17;
          param_1[2] = bVar18;
          *param_2 = bVar19;
          param_2[1] = bVar33;
          param_2[2] = bVar34;
          param_1 = param_1 + 3;
          param_2 = param_2 + 3;
          iVar36 = iVar36 + -1;
          if (iVar36 == 0) {
            iVar35 = 0;
            pbVar24 = param_1;
            pbVar25 = param_2;
            goto LAB_6371f1d4;
          }
        }
        iVar37 = iVar37 + param_4;
        iVar35 = iVar36;
LAB_6371eb59:
        *param_1 = bVar26;
        param_1[1] = bVar27;
        param_1[2] = bVar28;
        *param_2 = bVar29;
        param_2[1] = bVar30;
        param_2[2] = bVar31;
        pbVar25 = param_2;
        pbVar23 = param_1;
        while( true ) {
          pbVar23 = pbVar23 + 3;
          pbVar25 = pbVar25 + 3;
          if (iVar35 + -1 == 0) goto LAB_6371f00d;
          iVar37 = iVar37 + param_10 * -2;
          if (iVar37 < 0) break;
          *pbVar23 = bVar26;
          pbVar23[1] = bVar27;
          pbVar23[2] = bVar28;
          *pbVar25 = bVar29;
          pbVar25[1] = bVar30;
          pbVar25[2] = bVar31;
          iVar35 = iVar35 + -1;
        }
        iVar37 = iVar37 + param_4;
        iVar36 = (&DAT_63790960)[*param_7];
        iVar38 = (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7];
        iVar13 = (&DAT_63792180)[*param_8];
        iVar14 = (&DAT_63791580)[*param_5];
        iVar15 = (&DAT_63791580)[*param_6];
        iVar16 = (&DAT_63791580)[param_5[1]];
        iVar20 = (&DAT_63791580)[param_6[1]];
        bVar6 = (&DAT_637903e0)[iVar14 + iVar36];
        bVar7 = (&DAT_637903e0)[iVar14 + iVar38];
        bVar8 = (&DAT_637903e0)[iVar14 + iVar13];
        bVar9 = (&DAT_637903e0)[iVar15 + iVar36];
        bVar10 = (&DAT_637903e0)[iVar15 + iVar38];
        bVar11 = (&DAT_637903e0)[iVar15 + iVar13];
        bVar12 = (&DAT_637903e0)[iVar16 + iVar36];
        param_2 = (byte *)(uint)bVar12;
        bVar17 = (&DAT_637903e0)[iVar16 + iVar38];
        param_1 = (byte *)(uint)bVar17;
        bVar18 = (&DAT_637903e0)[iVar16 + iVar13];
        bVar19 = (&DAT_637903e0)[iVar20 + iVar36];
        bVar33 = (&DAT_637903e0)[iVar20 + iVar38];
        local_78 = (uint)bVar19;
        bVar34 = (&DAT_637903e0)[iVar20 + iVar13];
        pbVar21 = pbVar23 + 3;
        bVar26 = (byte)((int)((uint)bVar6 + (uint)bVar26) >> 1);
        bVar27 = (byte)((int)((uint)bVar7 + (uint)bVar27) >> 1);
        bVar28 = (byte)((int)((uint)bVar8 + (uint)bVar28) >> 1);
        bVar29 = (byte)((int)((uint)bVar9 + (uint)bVar29) >> 1);
        bVar30 = (byte)((int)((uint)bVar10 + (uint)bVar30) >> 1);
        bVar31 = (byte)((int)((uint)bVar11 + (uint)bVar31) >> 1);
        *pbVar23 = bVar26;
        pbVar23[1] = bVar27;
        pbVar23[2] = bVar28;
        *pbVar25 = bVar29;
        pbVar25[1] = bVar30;
        pbVar25[2] = bVar31;
        pbVar25 = pbVar25 + 3;
        iVar36 = iVar35 + -2;
        iVar35 = 0;
        pbVar24 = pbVar21;
        bVar32 = bVar31;
        bVar1 = bVar26;
        bVar2 = bVar27;
        bVar3 = bVar28;
        bVar4 = bVar29;
        bVar5 = bVar30;
        if (iVar36 != 0) {
          while (iVar37 = iVar37 + param_10 * -2, -1 < iVar37) {
            pbVar24 = pbVar25 + 3;
            *pbVar21 = bVar26;
            pbVar21[1] = bVar27;
            pbVar21[2] = bVar28;
            *pbVar25 = bVar29;
            pbVar25[1] = bVar30;
            pbVar25[2] = bVar31;
            pbVar21 = pbVar21 + 3;
            iVar36 = iVar36 + -1;
            pbVar25 = pbVar24;
            if (iVar36 == 0) {
              iVar35 = 0;
              pbVar24 = pbVar21;
              goto LAB_6371f1d4;
            }
          }
          pbVar24 = pbVar21 + 3;
          iVar37 = iVar37 + param_4;
          *pbVar21 = bVar6;
          pbVar21[1] = bVar7;
          pbVar21[2] = bVar8;
          *pbVar25 = bVar9;
          pbVar25[1] = bVar10;
          pbVar25[2] = bVar11;
          pbVar25 = pbVar25 + 3;
          iVar36 = iVar36 + -1;
          iVar35 = 0;
          pbVar21 = pbVar25;
          bVar32 = bVar11;
          bVar1 = bVar6;
          bVar2 = bVar7;
          bVar3 = bVar8;
          bVar4 = bVar9;
          bVar5 = bVar10;
          if (iVar36 != 0) {
            while (iVar37 = iVar37 + param_10 * -2, -1 < iVar37) {
              pbVar25 = pbVar21 + 3;
              *pbVar24 = bVar6;
              pbVar24[1] = bVar7;
              pbVar24[2] = bVar8;
              *pbVar21 = bVar9;
              pbVar21[1] = bVar10;
              pbVar21[2] = bVar11;
              pbVar24 = pbVar24 + 3;
              iVar36 = iVar36 + -1;
              pbVar21 = pbVar25;
              if (iVar36 == 0) {
                iVar35 = 0;
                goto LAB_6371f1d4;
              }
            }
            iVar37 = iVar37 + param_4;
            local_18._0_1_ = (byte)((int)(param_2 + bVar6) >> 1);
            *pbVar24 = (byte)local_18;
            local_8 = (byte)((int)(param_1 + bVar7) >> 1);
            pbVar24[1] = local_8;
            local_c = (byte)((int)((uint)bVar8 + (uint)bVar18) >> 1);
            pbVar24[2] = local_c;
            local_10 = (byte)((int)(bVar9 + local_78) >> 1);
            *pbVar21 = local_10;
            local_14 = (byte)((int)((uint)bVar10 + (uint)bVar33) >> 1);
            pbVar21[1] = local_14;
            local_1c = (byte)((int)((uint)bVar11 + (uint)bVar34) >> 1);
            pbVar21[2] = local_1c;
            while( true ) {
              iVar36 = iVar36 + -1;
              pbVar21 = pbVar21 + 3;
              pbVar24 = pbVar24 + 3;
              if (iVar36 == 0) goto LAB_6371f425;
              iVar37 = iVar37 + param_10 * -2;
              if (iVar37 < 0) break;
              *pbVar24 = (byte)local_18;
              pbVar24[1] = local_8;
              pbVar24[2] = local_c;
              *pbVar21 = local_10;
              pbVar21[1] = local_14;
              pbVar21[2] = local_1c;
            }
            iVar37 = iVar37 + param_4;
            *pbVar24 = bVar12;
            pbVar24[1] = bVar17;
            pbVar24[2] = bVar18;
            pbVar21[1] = bVar33;
            *pbVar21 = bVar19;
            pbVar21[2] = bVar34;
            pbVar22 = pbVar24;
            do {
              pbVar25 = pbVar21 + 3;
              pbVar23 = pbVar22 + 3;
              if (iVar36 + -1 == 0) {
                local_18 = (uint)bVar12;
                param_5 = param_5 + 2;
                param_6 = param_6 + 2;
                param_7 = param_7 + 1;
                param_8 = param_8 + 1;
LAB_6371f00d:
                iVar35 = 0;
                pbVar24 = pbVar23;
                bVar32 = bVar31;
                bVar1 = bVar26;
                bVar2 = bVar27;
                bVar3 = bVar28;
                bVar4 = bVar29;
                bVar5 = bVar30;
                if ((param_10 + param_9 & 1) != 0) {
                  iVar35 = local_4c >> 1;
                  local_4c = local_4c - iVar35;
                  if (0 < iVar35) {
                    iVar36 = (&DAT_63791580)[*param_5];
                    iVar13 = (&DAT_63791580)[*param_6];
                    bVar1 = (&DAT_637903e0)[iVar36 + (&DAT_63790960)[*param_7]];
                    bVar2 = (&DAT_637903e0)
                            [iVar36 + (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7]];
                    bVar3 = (&DAT_637903e0)[iVar36 + (&DAT_63792180)[*param_8]];
                    bVar4 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[*param_7]];
                    bVar5 = (&DAT_637903e0)
                            [iVar13 + (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7]];
                    bVar32 = (&DAT_637903e0)[iVar13 + (&DAT_63792180)[*param_8]];
                    local_18._0_1_ = (byte)((int)((uint)bVar1 + (local_18 & 0xff)) >> 1);
                    *pbVar23 = (byte)local_18;
                    local_8 = (byte)((int)((uint)bVar2 + (uint)bVar17) >> 1);
                    pbVar23[1] = local_8;
                    local_c = (byte)((int)((uint)bVar3 + (uint)bVar18) >> 1);
                    pbVar23[2] = local_c;
                    local_10 = (byte)((int)((uint)bVar19 + (uint)bVar4) >> 1);
                    *pbVar25 = local_10;
                    local_14 = (byte)((int)((uint)bVar5 + (uint)bVar33) >> 1);
                    pbVar25[1] = local_14;
                    bVar17 = (byte)((int)((uint)bVar34 + (uint)bVar32) >> 1);
                    pbVar25[2] = bVar17;
                    pbVar21 = pbVar25;
                    while( true ) {
                      iVar35 = iVar35 + -1;
                      pbVar25 = pbVar21 + 3;
                      pbVar24 = pbVar23 + 3;
                      if ((iVar35 == 0) || (iVar37 = iVar37 + param_10 * -2, iVar37 < 0)) break;
                      *pbVar24 = (byte)local_18;
                      pbVar23[4] = local_8;
                      pbVar23[5] = local_c;
                      *pbVar25 = local_10;
                      pbVar21[4] = local_14;
                      pbVar21[5] = bVar17;
                      pbVar23 = pbVar24;
                      pbVar21 = pbVar25;
                    }
                  }
                }
                break;
              }
              iVar37 = iVar37 + param_10 * -2;
              if (iVar37 < 0) goto LAB_6371f20f;
              *pbVar23 = bVar12;
              pbVar22[4] = bVar17;
              pbVar22[5] = bVar18;
              pbVar21[4] = bVar33;
              *pbVar25 = bVar19;
              pbVar21[5] = bVar34;
              pbVar22 = pbVar23;
              pbVar21 = pbVar25;
              iVar36 = iVar36 + -1;
            } while( true );
          }
        }
      }
    }
  }
  else {
    iVar35 = (&DAT_63791580)[*param_5];
    iVar36 = (&DAT_63791580)[*param_6];
    bVar26 = (&DAT_637903e0)[iVar35 + (&DAT_63790960)[*param_7]];
    bVar27 = (&DAT_637903e0)[iVar35 + (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7]];
    bVar29 = (&DAT_637903e0)[iVar36 + (&DAT_63790960)[*param_7]];
    bVar28 = (&DAT_637903e0)[iVar35 + (&DAT_63792180)[*param_8]];
    bVar30 = (&DAT_637903e0)[iVar36 + (&DAT_637929a0)[*param_8] + (&DAT_63791d80)[*param_7]];
    bVar31 = (&DAT_637903e0)[iVar36 + (&DAT_63792180)[*param_8]];
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + 1;
    param_8 = param_8 + 1;
    iVar35 = param_4 - local_4c;
    bVar32 = bVar31;
    bVar1 = bVar26;
    bVar2 = bVar27;
    bVar3 = bVar28;
    bVar4 = bVar29;
    bVar5 = bVar30;
    bVar19 = local_10;
    bVar33 = local_14;
    bVar17 = local_8;
    bVar34 = local_1c;
    bVar18 = local_c;
    if (0 < iVar35) goto LAB_6371eb59;
  }
LAB_6371f1d4:
  for (iVar35 = iVar35 + local_4c; iVar35 != 0; iVar35 = iVar35 + -1) {
    *pbVar24 = bVar1;
    pbVar24[1] = bVar2;
    pbVar24[2] = bVar3;
    *pbVar25 = bVar4;
    pbVar25[1] = bVar5;
    pbVar25[2] = bVar32;
    pbVar24 = pbVar24 + 3;
    pbVar25 = pbVar25 + 3;
  }
  return;
LAB_6371f20f:
  iVar37 = iVar37 + param_4;
  bVar17 = param_7[1];
  iVar35 = (&DAT_63790960)[bVar17];
  bVar19 = param_8[1];
  iVar38 = (&DAT_637929a0)[bVar19] + (&DAT_63791d80)[bVar17];
  iVar13 = (&DAT_63792180)[bVar19];
  iVar14 = (&DAT_63791580)[param_5[2]];
  iVar15 = (&DAT_63791580)[param_6[2]];
  iVar16 = (&DAT_63791580)[param_5[3]];
  iVar20 = (&DAT_63791580)[param_6[3]];
  bVar1 = (&DAT_637903e0)[iVar14 + iVar35];
  bVar2 = (&DAT_637903e0)[iVar14 + iVar38];
  bVar3 = (&DAT_637903e0)[iVar14 + iVar13];
  bVar4 = (&DAT_637903e0)[iVar15 + iVar35];
  bVar5 = (&DAT_637903e0)[iVar15 + iVar38];
  bVar32 = (&DAT_637903e0)[iVar15 + iVar13];
  bVar26 = (&DAT_637903e0)[iVar16 + iVar35];
  bVar27 = (&DAT_637903e0)[iVar16 + iVar38];
  bVar28 = (&DAT_637903e0)[iVar16 + iVar13];
  bVar29 = (&DAT_637903e0)[iVar20 + iVar35];
  bVar30 = (&DAT_637903e0)[iVar20 + iVar38];
  bVar31 = (&DAT_637903e0)[iVar20 + iVar13];
  param_5 = param_5 + 4;
  param_6 = param_6 + 4;
  param_7 = param_7 + 2;
  param_8 = param_8 + 2;
  param_2._0_1_ = (byte)((int)(param_2 + bVar1) >> 1);
  pbVar24 = pbVar22 + 6;
  bVar17 = (byte)((int)(param_1 + bVar2) >> 1);
  bVar18 = (byte)((int)((uint)bVar18 + (uint)bVar3) >> 1);
  bVar33 = (byte)((int)((uint)bVar33 + (uint)bVar5) >> 1);
  bVar34 = (byte)((int)((uint)bVar34 + (uint)bVar32) >> 1);
  *pbVar23 = (byte)param_2;
  pbVar22[4] = bVar17;
  pbVar22[5] = bVar18;
  pbVar21[4] = bVar33;
  bVar19 = (byte)((int)(local_78 + bVar4) >> 1);
  *pbVar25 = bVar19;
  pbVar21[5] = bVar34;
  iVar35 = iVar36 + -2;
  pbVar21 = pbVar21 + 6;
  while( true ) {
    bVar12 = (byte)param_2;
    if (iVar35 == 0) goto LAB_6371f425;
    iVar37 = iVar37 + param_10 * -2;
    if (iVar37 < 0) break;
    *pbVar24 = (byte)param_2;
    pbVar24[1] = bVar17;
    pbVar24[2] = bVar18;
    pbVar21[1] = bVar33;
    *pbVar21 = bVar19;
    pbVar21[2] = bVar34;
    pbVar24 = pbVar24 + 3;
    iVar35 = iVar35 + -1;
    pbVar21 = pbVar21 + 3;
  }
  iVar37 = iVar37 + param_4;
  param_1 = pbVar24;
  param_2 = pbVar21;
  goto LAB_6371f450;
LAB_6371f425:
  param_1._0_1_ = bVar17;
  param_2._0_1_ = bVar12;
  iVar35 = 0;
  pbVar25 = pbVar21;
  bVar32 = bVar34;
  bVar1 = (byte)param_2;
  bVar2 = (byte)param_1;
  bVar3 = bVar18;
  bVar4 = bVar19;
  bVar5 = bVar33;
  goto LAB_6371f1d4;
}


