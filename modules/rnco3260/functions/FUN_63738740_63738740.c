/* Module: rnco3260.dll
   Function: FUN_63738740
   Address: 63738740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63738740(byte *param_1,undefined1 *param_2,byte *param_3,undefined1 *param_4,byte *param_5,
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
  int iVar17;
  int iVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
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
  int local_14;
  int local_c;
  undefined1 local_8;
  
  local_14 = param_13 >> 1;
  local_c = param_7;
  if (param_7 != 0) {
    pbVar23 = param_3;
    pbVar20 = param_5;
    pbVar25 = param_1;
    puVar27 = param_2;
    if ((param_12 & 1) != 0) goto LAB_63738c8e;
    do {
      local_14 = local_14 - param_7;
      if (local_14 < 0) {
        local_14 = local_14 + param_13;
        local_c = local_c + -1;
        if (local_c == 0) {
          local_c = 1;
          param_3 = pbVar23;
          param_5 = pbVar20;
          param_1 = pbVar25;
          param_2 = puVar27;
          goto LAB_63738c8e;
        }
        iVar17 = (&DAT_63790960)[*param_10];
        iVar24 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
        iVar18 = (&DAT_63792180)[*param_11];
        iVar13 = (&DAT_63791580)[*param_8];
        iVar14 = (&DAT_63791580)[*param_9];
        iVar15 = (&DAT_63791580)[param_8[1]];
        iVar16 = (&DAT_63791580)[param_9[1]];
        param_5 = (byte *)(uint)(byte)(&DAT_637903e0)[iVar13 + iVar17];
        bVar6 = (&DAT_637903e0)[iVar13 + iVar24];
        param_3 = (byte *)(uint)bVar6;
        bVar7 = (&DAT_637903e0)[iVar13 + iVar18];
        bVar8 = (&DAT_637903e0)[iVar14 + iVar17];
        param_2 = (undefined1 *)(uint)bVar8;
        bVar9 = (&DAT_637903e0)[iVar14 + iVar24];
        param_1 = (byte *)(uint)bVar9;
        bVar10 = (&DAT_637903e0)[iVar14 + iVar18];
        bVar11 = (&DAT_637903e0)[iVar15 + iVar17];
        bVar12 = (&DAT_637903e0)[iVar15 + iVar24];
        bVar1 = (&DAT_637903e0)[iVar15 + iVar18];
        bVar2 = (&DAT_637903e0)[iVar16 + iVar17];
        bVar3 = (&DAT_637903e0)[iVar16 + iVar24];
        bVar4 = (&DAT_637903e0)[iVar16 + iVar18];
        local_4c = (uint)bVar4;
        pbVar19 = pbVar23 + 6;
        pbVar21 = pbVar20 + 6;
        *pbVar23 = (&DAT_637903e0)[iVar13 + iVar17];
        pbVar23[1] = bVar6;
        pbVar23[2] = bVar7;
        pbVar23[3] = bVar11;
        pbVar23[4] = bVar12;
        pbVar23[5] = bVar1;
        *pbVar20 = bVar8;
        pbVar20[1] = bVar9;
        pbVar20[2] = bVar10;
        pbVar20[3] = bVar2;
        pbVar20[4] = bVar3;
        pbVar20[5] = bVar4;
        puVar22 = param_2 + (int)param_5;
        pbVar23 = param_1 + (int)param_3;
        pbVar26 = pbVar25 + 6;
        bVar6 = pbVar25[1];
        puVar28 = puVar27 + 6;
        bVar8 = pbVar25[2];
        bVar9 = pbVar25[3];
        bVar4 = pbVar25[4];
        bVar5 = pbVar25[5];
        param_5._0_1_ = (undefined1)((int)(param_5 + *pbVar25) >> 1);
        *puVar27 = param_5._0_1_;
        param_3._0_1_ = (undefined1)((int)(param_3 + bVar6) >> 1);
        puVar27[1] = param_3._0_1_;
        local_8 = (undefined1)((int)((uint)bVar8 + (uint)bVar7) >> 1);
        puVar27[2] = local_8;
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
        pbVar19 = pbVar23 + 3;
        pbVar21 = pbVar20 + 3;
        iVar17 = (&DAT_63791580)[*param_8];
        iVar18 = (&DAT_63791580)[*param_9];
        param_5 = (byte *)(uint)(byte)(&DAT_637903e0)[iVar17 + (&DAT_63790960)[*param_10]];
        bVar6 = (&DAT_637903e0)[iVar17 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]];
        param_3 = (byte *)(uint)bVar6;
        bVar7 = (&DAT_637903e0)[iVar17 + (&DAT_63792180)[*param_11]];
        bVar8 = (&DAT_637903e0)[iVar18 + (&DAT_63790960)[*param_10]];
        param_2 = (undefined1 *)(uint)bVar8;
        bVar9 = (&DAT_637903e0)[iVar18 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]];
        param_1 = (byte *)(uint)bVar9;
        bVar10 = (&DAT_637903e0)[iVar18 + (&DAT_63792180)[*param_11]];
        _param_12 = (uint)bVar10;
        *pbVar23 = (&DAT_637903e0)[iVar17 + (&DAT_63790960)[*param_10]];
        pbVar23[1] = bVar6;
        pbVar23[2] = bVar7;
        *pbVar20 = bVar8;
        pbVar20[1] = bVar9;
        pbVar20[2] = bVar10;
        puVar22 = param_2 + (int)param_5;
        pbVar23 = param_1 + (int)param_3;
        pbVar26 = pbVar25 + 3;
        puVar28 = puVar27 + 3;
        bVar6 = pbVar25[1];
        bVar8 = pbVar25[2];
        param_5._0_1_ = (undefined1)((int)(param_5 + *pbVar25) >> 1);
        *puVar27 = param_5._0_1_;
        param_3._0_1_ = (undefined1)((int)(param_3 + bVar6) >> 1);
        puVar27[2] = (char)((int)((uint)bVar8 + (uint)bVar7) >> 1);
        puVar27[1] = param_3._0_1_;
        param_2._0_1_ = (undefined1)((int)puVar22 >> 1);
        *param_4 = param_2._0_1_;
        param_1._0_1_ = (undefined1)((int)pbVar23 >> 1);
        param_4[1] = param_1._0_1_;
        param_12 = (byte)((int)(_param_12 + bVar7) >> 1);
        param_4[2] = param_12;
        param_4 = param_4 + 3;
      }
      local_14 = local_14 - param_7;
      while( true ) {
        param_11 = param_11 + 1;
        param_10 = param_10 + 1;
        param_9 = param_9 + 2;
        param_8 = param_8 + 2;
        if (local_14 < 0) break;
        local_14 = local_14 - param_7;
        if (local_14 < 0) {
          do {
            param_9 = param_9 + 1;
            param_8 = param_8 + 1;
            local_14 = local_14 + param_13;
            local_c = local_c + -1;
            param_3 = pbVar19;
            param_5 = pbVar21;
            param_1 = pbVar26;
            param_2 = puVar28;
            if (local_c == 0) {
              return;
            }
LAB_63738c8e:
            pbVar19 = param_3 + 3;
            pbVar21 = param_5 + 3;
            iVar17 = (&DAT_63791580)[*param_8];
            iVar18 = (&DAT_63791580)[*param_9];
            bVar6 = (&DAT_637903e0)[iVar17 + (&DAT_63790960)[*param_10]];
            bVar7 = (&DAT_637903e0)
                    [iVar17 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]];
            bVar8 = (&DAT_637903e0)[iVar17 + (&DAT_63792180)[*param_11]];
            bVar9 = (&DAT_637903e0)[iVar18 + (&DAT_63790960)[*param_10]];
            bVar10 = (&DAT_637903e0)
                     [iVar18 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]];
            bVar11 = (&DAT_637903e0)[iVar18 + (&DAT_63792180)[*param_11]];
            *param_3 = bVar6;
            param_3[1] = bVar7;
            param_3[2] = bVar8;
            *param_5 = bVar9;
            local_50 = (uint)bVar11;
            param_5[1] = bVar10;
            param_5[2] = bVar11;
            pbVar26 = param_1 + 3;
            puVar28 = param_2 + 3;
            bVar11 = param_1[1];
            bVar12 = param_1[2];
            local_30 = (undefined1)((int)((uint)*param_1 + (uint)bVar6) >> 1);
            *param_2 = local_30;
            local_34 = (undefined1)((int)((uint)bVar11 + (uint)bVar7) >> 1);
            param_2[2] = (char)((int)((uint)bVar12 + (uint)bVar8) >> 1);
            param_2[1] = local_34;
            local_38 = (undefined1)((int)((uint)bVar9 + (uint)bVar6) >> 1);
            *param_4 = local_38;
            local_3c = (undefined1)((int)((uint)bVar10 + (uint)bVar7) >> 1);
            param_4[1] = local_3c;
            local_50._0_1_ = (undefined1)((int)(local_50 + bVar8) >> 1);
            param_4[2] = (undefined1)local_50;
            param_4 = param_4 + 3;
            param_8 = param_8 + 1;
            param_9 = param_9 + 1;
            local_14 = local_14 - param_7;
            while( true ) {
              param_11 = param_11 + 1;
              param_10 = param_10 + 1;
              if (local_14 < 0) goto LAB_63738e78;
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
LAB_63738e78:
      local_14 = local_14 + param_13;
      local_c = local_c + -1;
      pbVar23 = pbVar19;
      pbVar20 = pbVar21;
      pbVar25 = pbVar26;
      puVar27 = puVar28;
    } while (local_c != 0);
  }
  return;
}


