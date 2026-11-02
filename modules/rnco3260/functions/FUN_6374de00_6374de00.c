/* Module: rnco3260.dll
   Function: FUN_6374de00
   Address: 6374de00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6374de00(byte *param_1,undefined1 *param_2,byte *param_3,undefined1 *param_4,byte *param_5,
            undefined4 param_6,int param_7,byte *param_8,byte *param_9,byte *param_10,byte *param_11
            ,uint param_12,int param_13)

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
  undefined1 *puVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined1 *puVar25;
  byte *pbVar26;
  int local_30;
  int local_c;
  undefined1 local_6;
  undefined1 local_5;
  
  local_30 = param_7 >> 1;
  iVar17 = param_7 - local_30;
  if ((param_13 + param_12 & 1) != 0) {
    iVar17 = iVar17 + param_7;
  }
  if (param_7 != 0) {
    local_c = param_7 - iVar17 / param_13;
    puVar18 = param_2;
    pbVar20 = param_3;
    puVar25 = param_4;
    pbVar26 = param_5;
    if (local_c < 1) {
LAB_6374e35d:
      bVar2 = *param_10;
      bVar7 = *param_11;
      iVar13 = (&DAT_63791580)[*param_8];
      iVar14 = (&DAT_63791580)[*param_9];
      bVar3 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar7]];
      bVar4 = (&DAT_637903e0)[iVar13 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar7]];
      bVar6 = (&DAT_637903e0)[iVar13 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar7]];
      bVar5 = (&DAT_637903e0)[iVar14 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar7]];
      bVar1 = (&DAT_637903e0)[iVar14 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar7]];
      bVar7 = (&DAT_637903e0)[iVar14 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar7]];
      param_5._3_1_ = (undefined1)((int)((uint)*param_1 + (uint)bVar3) >> 1);
      param_4._3_1_ = (undefined1)((int)((uint)param_1[1] + (uint)bVar4) >> 1);
      param_3._3_1_ = (undefined1)((int)((uint)param_1[2] + (uint)bVar6) >> 1);
      param_2._3_1_ = (undefined1)((int)((uint)bVar5 + (uint)bVar3) >> 1);
      local_5 = (undefined1)((int)((uint)bVar1 + (uint)bVar4) >> 1);
      local_6 = (undefined1)((int)((uint)bVar7 + (uint)bVar6) >> 1);
      puVar19 = puVar18;
      pbVar21 = pbVar20;
    }
    else {
      puVar19 = param_2;
      if ((param_12 & 1) == 0) goto LAB_6374df1a;
      bVar1 = *param_10;
      bVar2 = *param_11;
      iVar13 = (&DAT_63791580)[*param_8];
      bVar3 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]];
      iVar14 = (&DAT_63791580)[*param_9];
      bVar4 = (&DAT_637903e0)[iVar13 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]];
      bVar5 = (&DAT_637903e0)[iVar14 + (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2]];
      bVar6 = (&DAT_637903e0)[iVar13 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]];
      bVar7 = (&DAT_637903e0)[iVar14 + (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2]];
      bVar1 = (&DAT_637903e0)[iVar14 + (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2]];
      param_8 = param_8 + 1;
      param_9 = param_9 + 1;
      while( true ) {
        param_11 = param_11 + 1;
        param_10 = param_10 + 1;
        param_5._3_1_ = (undefined1)((int)((uint)*param_1 + (uint)bVar3) >> 1);
        param_4._3_1_ = (undefined1)((int)((uint)param_1[1] + (uint)bVar4) >> 1);
        param_3._3_1_ = (undefined1)((int)((uint)param_1[2] + (uint)bVar6) >> 1);
        param_2._3_1_ = (undefined1)((int)((uint)bVar5 + (uint)bVar3) >> 1);
        local_5 = (undefined1)((int)((uint)bVar1 + (uint)bVar4) >> 1);
        *puVar18 = param_5._3_1_;
        puVar18[1] = param_4._3_1_;
        puVar18[2] = param_3._3_1_;
        *pbVar20 = bVar3;
        pbVar20[1] = bVar4;
        pbVar20[2] = bVar6;
        *puVar25 = param_2._3_1_;
        local_6 = (undefined1)((int)((uint)bVar7 + (uint)bVar6) >> 1);
        puVar25[2] = local_6;
        puVar25[1] = local_5;
        *pbVar26 = bVar5;
        pbVar26[1] = bVar1;
        pbVar26[2] = bVar7;
        while( true ) {
          local_c = local_c + -1;
          param_1 = param_1 + 3;
          pbVar26 = pbVar26 + 3;
          puVar25 = puVar25 + 3;
          pbVar20 = pbVar20 + 3;
          puVar18 = puVar18 + 3;
          if (local_c == 0) {
            local_c = 0;
            puVar19 = puVar18;
            pbVar21 = pbVar20;
            if ((param_13 + param_12 & 1) == 0) goto LAB_6374e4ac;
            goto LAB_6374e35d;
          }
          local_30 = local_30 - param_13;
          if (local_30 < 0) break;
          *puVar18 = param_5._3_1_;
          puVar18[1] = param_4._3_1_;
          puVar18[2] = param_3._3_1_;
          *pbVar20 = bVar3;
          pbVar20[1] = bVar4;
          pbVar20[2] = bVar6;
          *puVar25 = param_2._3_1_;
          puVar25[1] = local_5;
          puVar25[2] = local_6;
          *pbVar26 = bVar5;
          pbVar26[1] = bVar1;
          pbVar26[2] = bVar7;
        }
        local_30 = local_30 + param_7;
        puVar19 = puVar18;
LAB_6374df1a:
        bVar1 = *param_10;
        bVar2 = *param_11;
        iVar22 = (&DAT_63790960)[bVar1] + (&DAT_63790d60)[bVar2];
        iVar23 = (&DAT_63791d80)[bVar1] + (&DAT_637929a0)[bVar2];
        iVar24 = (&DAT_63791980)[bVar1] + (&DAT_63792180)[bVar2];
        iVar13 = (&DAT_63791580)[*param_8];
        iVar14 = (&DAT_63791580)[*param_9];
        iVar15 = (&DAT_63791580)[param_8[1]];
        iVar16 = (&DAT_63791580)[param_9[1]];
        bVar2 = (&DAT_637903e0)[iVar13 + iVar22];
        bVar8 = (&DAT_637903e0)[iVar13 + iVar23];
        bVar9 = (&DAT_637903e0)[iVar13 + iVar24];
        bVar10 = (&DAT_637903e0)[iVar14 + iVar22];
        bVar11 = (&DAT_637903e0)[iVar14 + iVar23];
        bVar12 = (&DAT_637903e0)[iVar14 + iVar24];
        bVar3 = (&DAT_637903e0)[iVar15 + iVar22];
        bVar4 = (&DAT_637903e0)[iVar15 + iVar23];
        bVar6 = (&DAT_637903e0)[iVar15 + iVar24];
        bVar5 = (&DAT_637903e0)[iVar16 + iVar22];
        bVar1 = (&DAT_637903e0)[iVar16 + iVar23];
        bVar7 = (&DAT_637903e0)[iVar16 + iVar24];
        param_8 = param_8 + 2;
        puVar18 = puVar19 + 3;
        param_9 = param_9 + 2;
        param_5._3_1_ = (undefined1)((int)((uint)*param_1 + (uint)bVar2) >> 1);
        param_4._3_1_ = (undefined1)((int)((uint)param_1[1] + (uint)bVar8) >> 1);
        param_3._3_1_ = (undefined1)((int)((uint)param_1[2] + (uint)bVar9) >> 1);
        param_2._3_1_ = (undefined1)((int)((uint)bVar10 + (uint)bVar2) >> 1);
        local_5 = (undefined1)((int)((uint)bVar11 + (uint)bVar8) >> 1);
        *puVar19 = param_5._3_1_;
        puVar19[1] = param_4._3_1_;
        puVar19[2] = param_3._3_1_;
        *pbVar20 = bVar2;
        pbVar20[1] = bVar8;
        pbVar20[2] = bVar9;
        *puVar25 = param_2._3_1_;
        local_6 = (undefined1)((int)((uint)bVar12 + (uint)bVar9) >> 1);
        pbVar20 = pbVar20 + 3;
        puVar25[2] = local_6;
        puVar25[1] = local_5;
        *pbVar26 = bVar10;
        puVar25 = puVar25 + 3;
        pbVar26[1] = bVar11;
        pbVar26[2] = bVar12;
        pbVar26 = pbVar26 + 3;
        local_c = local_c + -1;
        puVar19 = puVar18;
        pbVar21 = pbVar20;
        if (local_c == 0) break;
        while( true ) {
          param_1 = param_1 + 3;
          local_30 = local_30 - param_13;
          if (local_30 < 0) break;
          puVar19 = puVar18 + 3;
          pbVar21 = pbVar20 + 3;
          *puVar18 = param_5._3_1_;
          puVar18[1] = param_4._3_1_;
          puVar18[2] = param_3._3_1_;
          *pbVar20 = bVar2;
          pbVar20[1] = bVar8;
          pbVar20[2] = bVar9;
          *puVar25 = param_2._3_1_;
          puVar25[1] = local_5;
          puVar25[2] = local_6;
          *pbVar26 = bVar10;
          pbVar26[1] = bVar11;
          pbVar26[2] = bVar12;
          puVar25 = puVar25 + 3;
          pbVar26 = pbVar26 + 3;
          local_c = local_c + -1;
          puVar18 = puVar19;
          pbVar20 = pbVar21;
          if (local_c == 0) {
            local_c = 0;
            goto LAB_6374e4ac;
          }
        }
        local_30 = local_30 + param_7;
      }
    }
LAB_6374e4ac:
    for (local_c = local_c + iVar17 / param_13; local_c != 0; local_c = local_c + -1) {
      *puVar19 = param_5._3_1_;
      puVar19[1] = param_4._3_1_;
      puVar19[2] = param_3._3_1_;
      *pbVar21 = bVar3;
      pbVar21[1] = bVar4;
      pbVar21[2] = bVar6;
      *puVar25 = param_2._3_1_;
      puVar25[1] = local_5;
      puVar25[2] = local_6;
      *pbVar26 = bVar5;
      pbVar26[1] = bVar1;
      pbVar26[2] = bVar7;
      puVar19 = puVar19 + 3;
      puVar25 = puVar25 + 3;
      pbVar26 = pbVar26 + 3;
      pbVar21 = pbVar21 + 3;
    }
  }
  return;
}


