/* Module: rnco3260.dll
   Function: FUN_6374cff0
   Address: 6374cff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6374cff0(byte *param_1,undefined1 *param_2,byte *param_3,undefined1 *param_4,byte *param_5,
            undefined4 param_6,int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11
            ,byte param_12,int param_13)

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
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  int iVar20;
  int iVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  int iVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  uint local_50;
  uint local_4c;
  undefined1 local_3c;
  undefined1 local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined1 local_24;
  undefined1 local_20;
  int local_18;
  int local_10;
  undefined1 local_c;
  
  local_18 = param_13 >> 1;
  local_10 = param_7;
  if (param_7 != 0) {
    pbVar23 = param_3;
    pbVar18 = param_5;
    pbVar25 = param_1;
    puVar27 = param_2;
    if ((param_12 & 1) != 0) goto LAB_6374d566;
    do {
      local_18 = local_18 - param_7;
      if (local_18 < 0) {
        local_18 = local_18 + param_13;
        local_10 = local_10 + -1;
        if (local_10 == 0) {
          local_10 = 1;
          param_3 = pbVar23;
          param_5 = pbVar18;
          param_1 = pbVar25;
          param_2 = puVar27;
          goto LAB_6374d566;
        }
        bVar6 = *param_10;
        bVar7 = *param_11;
        iVar24 = (&DAT_63790960)[bVar6] + (&DAT_63790d60)[bVar7];
        iVar20 = (&DAT_637929a0)[bVar7] + (&DAT_63791d80)[bVar6];
        iVar21 = (&DAT_63791980)[bVar6] + (&DAT_63792180)[bVar7];
        iVar15 = (&DAT_63791580)[*param_8];
        iVar16 = (&DAT_63791580)[*param_9];
        iVar13 = (&DAT_63791580)[param_8[1]];
        iVar14 = (&DAT_63791580)[param_9[1]];
        param_5 = (byte *)(uint)(byte)(&DAT_637903e0)[iVar15 + iVar24];
        bVar6 = (&DAT_637903e0)[iVar15 + iVar20];
        param_3 = (byte *)(uint)bVar6;
        bVar7 = (&DAT_637903e0)[iVar15 + iVar21];
        bVar8 = (&DAT_637903e0)[iVar16 + iVar24];
        param_2 = (undefined1 *)(uint)bVar8;
        bVar9 = (&DAT_637903e0)[iVar16 + iVar20];
        param_1 = (byte *)(uint)bVar9;
        bVar10 = (&DAT_637903e0)[iVar16 + iVar21];
        bVar11 = (&DAT_637903e0)[iVar13 + iVar24];
        bVar12 = (&DAT_637903e0)[iVar13 + iVar20];
        bVar1 = (&DAT_637903e0)[iVar13 + iVar21];
        bVar2 = (&DAT_637903e0)[iVar14 + iVar24];
        bVar3 = (&DAT_637903e0)[iVar14 + iVar20];
        bVar4 = (&DAT_637903e0)[iVar14 + iVar21];
        local_4c = (uint)bVar4;
        pbVar17 = pbVar23 + 6;
        pbVar19 = pbVar18 + 6;
        *pbVar23 = (&DAT_637903e0)[iVar15 + iVar24];
        pbVar23[1] = bVar6;
        pbVar23[2] = bVar7;
        pbVar23[3] = bVar11;
        pbVar23[4] = bVar12;
        pbVar23[5] = bVar1;
        *pbVar18 = bVar8;
        pbVar18[1] = bVar9;
        pbVar18[2] = bVar10;
        pbVar18[3] = bVar2;
        pbVar18[4] = bVar3;
        pbVar18[5] = bVar4;
        puVar22 = param_2 + (int)param_5;
        pbVar23 = param_1 + (int)param_3;
        pbVar26 = pbVar25 + 6;
        puVar28 = puVar27 + 6;
        bVar6 = pbVar25[1];
        bVar8 = pbVar25[2];
        bVar9 = pbVar25[3];
        bVar4 = pbVar25[4];
        bVar5 = pbVar25[5];
        param_5._0_1_ = (undefined1)((int)(param_5 + *pbVar25) >> 1);
        *puVar27 = param_5._0_1_;
        param_3._0_1_ = (undefined1)((int)(param_3 + bVar6) >> 1);
        puVar27[1] = param_3._0_1_;
        local_c = (undefined1)((int)((uint)bVar8 + (uint)bVar7) >> 1);
        puVar27[2] = local_c;
        local_20 = (undefined1)((int)((uint)bVar9 + (uint)bVar11) >> 1);
        puVar27[3] = local_20;
        local_24 = (undefined1)((int)((uint)bVar4 + (uint)bVar12) >> 1);
        puVar27[5] = (char)((int)((uint)bVar5 + (uint)bVar1) >> 1);
        puVar27[4] = local_24;
        param_2._0_1_ = (undefined1)((int)puVar22 >> 1);
        *param_4 = param_2._0_1_;
        param_1._0_1_ = (undefined1)((int)pbVar23 >> 1);
        param_4[1] = param_1._0_1_;
        param_12 = (byte)((int)((uint)bVar10 + (uint)bVar7) >> 1);
        param_4[2] = param_12;
        local_28 = (undefined1)((int)((uint)bVar2 + (uint)bVar11) >> 1);
        param_4[3] = local_28;
        local_2c = (undefined1)((int)((uint)bVar3 + (uint)bVar12) >> 1);
        param_4[4] = local_2c;
        local_4c._0_1_ = (undefined1)((int)(local_4c + bVar1) >> 1);
        param_4[5] = (undefined1)local_4c;
        param_4 = param_4 + 6;
      }
      else {
        pbVar17 = pbVar23 + 3;
        pbVar19 = pbVar18 + 3;
        bVar6 = *param_10;
        bVar7 = *param_11;
        iVar15 = (&DAT_63791580)[*param_8];
        iVar16 = (&DAT_63791580)[*param_9];
        param_5 = (byte *)(uint)(byte)(&DAT_637903e0)
                                      [iVar15 + (&DAT_63790960)[bVar6] + (&DAT_63790d60)[bVar7]];
        bVar8 = (&DAT_637903e0)[iVar15 + (&DAT_637929a0)[bVar7] + (&DAT_63791d80)[bVar6]];
        param_3 = (byte *)(uint)bVar8;
        bVar9 = (&DAT_637903e0)[iVar15 + (&DAT_63791980)[bVar6] + (&DAT_63792180)[bVar7]];
        bVar10 = (&DAT_637903e0)[iVar16 + (&DAT_63790960)[bVar6] + (&DAT_63790d60)[bVar7]];
        param_2 = (undefined1 *)(uint)bVar10;
        bVar11 = (&DAT_637903e0)[iVar16 + (&DAT_637929a0)[bVar7] + (&DAT_63791d80)[bVar6]];
        param_1 = (byte *)(uint)bVar11;
        bVar12 = (&DAT_637903e0)[iVar16 + (&DAT_63791980)[bVar6] + (&DAT_63792180)[bVar7]];
        _param_12 = (uint)bVar12;
        *pbVar23 = (&DAT_637903e0)[iVar15 + (&DAT_63790960)[bVar6] + (&DAT_63790d60)[bVar7]];
        pbVar23[1] = bVar8;
        pbVar23[2] = bVar9;
        *pbVar18 = bVar10;
        pbVar18[1] = bVar11;
        pbVar18[2] = bVar12;
        pbVar26 = pbVar25 + 3;
        puVar22 = param_2 + (int)param_5;
        pbVar23 = param_1 + (int)param_3;
        puVar28 = puVar27 + 3;
        bVar6 = pbVar25[1];
        bVar7 = pbVar25[2];
        param_5._0_1_ = (undefined1)((int)(param_5 + *pbVar25) >> 1);
        *puVar27 = param_5._0_1_;
        param_3._0_1_ = (undefined1)((int)(param_3 + bVar6) >> 1);
        puVar27[2] = (char)((int)((uint)bVar7 + (uint)bVar9) >> 1);
        puVar27[1] = param_3._0_1_;
        param_2._0_1_ = (undefined1)((int)puVar22 >> 1);
        *param_4 = param_2._0_1_;
        param_1._0_1_ = (undefined1)((int)pbVar23 >> 1);
        param_4[1] = param_1._0_1_;
        param_12 = (byte)((int)(_param_12 + bVar9) >> 1);
        param_4[2] = param_12;
        param_4 = param_4 + 3;
      }
      local_18 = local_18 - param_7;
      while( true ) {
        param_11 = param_11 + 1;
        param_10 = param_10 + 1;
        param_9 = param_9 + 2;
        param_8 = param_8 + 2;
        if (local_18 < 0) break;
        local_18 = local_18 - param_7;
        if (local_18 < 0) {
          do {
            param_9 = param_9 + 1;
            param_8 = param_8 + 1;
            local_18 = local_18 + param_13;
            local_10 = local_10 + -1;
            param_3 = pbVar17;
            param_5 = pbVar19;
            param_1 = pbVar26;
            param_2 = puVar28;
            if (local_10 == 0) {
              return;
            }
LAB_6374d566:
            pbVar17 = param_3 + 3;
            pbVar19 = param_5 + 3;
            bVar6 = *param_10;
            bVar7 = *param_11;
            iVar15 = (&DAT_63791580)[*param_8];
            iVar16 = (&DAT_63791580)[*param_9];
            bVar8 = (&DAT_637903e0)[iVar15 + (&DAT_63790960)[bVar6] + (&DAT_63790d60)[bVar7]];
            bVar9 = (&DAT_637903e0)[iVar15 + (&DAT_637929a0)[bVar7] + (&DAT_63791d80)[bVar6]];
            bVar10 = (&DAT_637903e0)[iVar15 + (&DAT_63791980)[bVar6] + (&DAT_63792180)[bVar7]];
            bVar11 = (&DAT_637903e0)[iVar16 + (&DAT_63790960)[bVar6] + (&DAT_63790d60)[bVar7]];
            bVar12 = (&DAT_637903e0)[iVar16 + (&DAT_637929a0)[bVar7] + (&DAT_63791d80)[bVar6]];
            bVar6 = (&DAT_637903e0)[iVar16 + (&DAT_63791980)[bVar6] + (&DAT_63792180)[bVar7]];
            *param_3 = bVar8;
            param_3[1] = bVar9;
            param_3[2] = bVar10;
            *param_5 = bVar11;
            local_50 = (uint)bVar6;
            param_5[1] = bVar12;
            param_5[2] = bVar6;
            pbVar26 = param_1 + 3;
            puVar28 = param_2 + 3;
            bVar6 = param_1[1];
            bVar7 = param_1[2];
            local_30 = (undefined1)((int)((uint)*param_1 + (uint)bVar8) >> 1);
            *param_2 = local_30;
            local_34 = (undefined1)((int)((uint)bVar6 + (uint)bVar9) >> 1);
            param_2[2] = (char)((int)((uint)bVar7 + (uint)bVar10) >> 1);
            param_2[1] = local_34;
            local_38 = (undefined1)((int)((uint)bVar11 + (uint)bVar8) >> 1);
            *param_4 = local_38;
            local_3c = (undefined1)((int)((uint)bVar12 + (uint)bVar9) >> 1);
            param_4[1] = local_3c;
            local_50._0_1_ = (undefined1)((int)(local_50 + bVar10) >> 1);
            param_4[2] = (undefined1)local_50;
            param_4 = param_4 + 3;
            param_8 = param_8 + 1;
            param_9 = param_9 + 1;
            local_18 = local_18 - param_7;
            while( true ) {
              param_11 = param_11 + 1;
              param_10 = param_10 + 1;
              if (local_18 < 0) goto LAB_6374d762;
              local_18 = local_18 - param_7;
              if (local_18 < 0) break;
              param_8 = param_8 + 2;
              param_9 = param_9 + 2;
              local_18 = local_18 - param_7;
            }
          } while( true );
        }
        local_18 = local_18 - param_7;
      }
LAB_6374d762:
      local_18 = local_18 + param_13;
      local_10 = local_10 + -1;
      pbVar23 = pbVar17;
      pbVar18 = pbVar19;
      pbVar25 = pbVar26;
      puVar27 = puVar28;
    } while (local_10 != 0);
  }
  return;
}


