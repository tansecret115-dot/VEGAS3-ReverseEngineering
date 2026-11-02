/* Module: rnco3260.dll
   Function: FUN_637394e0
   Address: 637394e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637394e0(byte *param_1,undefined1 *param_2,byte *param_3,undefined1 *param_4,byte *param_5,
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
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  int iVar24;
  undefined1 *puVar25;
  byte *pbVar26;
  int local_30;
  int local_c;
  undefined1 local_6;
  undefined1 local_5;
  
  local_30 = param_7 >> 1;
  iVar19 = param_7 - local_30;
  if ((param_13 + param_12 & 1) != 0) {
    iVar19 = iVar19 + param_7;
  }
  if (param_7 != 0) {
    local_c = param_7 - iVar19 / param_13;
    puVar20 = param_2;
    pbVar22 = param_3;
    puVar25 = param_4;
    pbVar26 = param_5;
    if (local_c < 1) {
LAB_63739a1c:
      iVar13 = (&DAT_63791580)[*param_8];
      iVar14 = (&DAT_63791580)[*param_9];
      bVar1 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[*param_10]];
      bVar2 = (&DAT_637903e0)[iVar13 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]];
      bVar3 = (&DAT_637903e0)[iVar13 + (&DAT_63792180)[*param_11]];
      bVar6 = (&DAT_637903e0)[iVar14 + (&DAT_63790960)[*param_10]];
      bVar4 = (&DAT_637903e0)[iVar14 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]];
      bVar5 = (&DAT_637903e0)[iVar14 + (&DAT_63792180)[*param_11]];
      param_5._3_1_ = (undefined1)((int)((uint)*param_1 + (uint)bVar1) >> 1);
      param_4._3_1_ = (undefined1)((int)((uint)param_1[1] + (uint)bVar2) >> 1);
      param_3._3_1_ = (undefined1)((int)((uint)param_1[2] + (uint)bVar3) >> 1);
      param_2._3_1_ = (undefined1)((int)((uint)bVar6 + (uint)bVar1) >> 1);
      local_5 = (undefined1)((int)((uint)bVar4 + (uint)bVar2) >> 1);
      local_6 = (undefined1)((int)((uint)bVar5 + (uint)bVar3) >> 1);
      puVar21 = puVar20;
      pbVar23 = pbVar22;
    }
    else {
      puVar21 = param_2;
      pbVar23 = param_3;
      if ((param_12 & 1) == 0) goto LAB_637395ea;
      iVar13 = (&DAT_63791580)[*param_8];
      iVar14 = (&DAT_63791580)[*param_9];
      bVar1 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[*param_10]];
      bVar2 = (&DAT_637903e0)[iVar13 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]];
      bVar3 = (&DAT_637903e0)[iVar13 + (&DAT_63792180)[*param_11]];
      bVar4 = (&DAT_637903e0)[iVar14 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]];
      bVar5 = (&DAT_637903e0)[iVar14 + (&DAT_63792180)[*param_11]];
      bVar6 = (&DAT_637903e0)[iVar14 + (&DAT_63790960)[*param_10]];
      param_8 = param_8 + 1;
      param_9 = param_9 + 1;
      while( true ) {
        param_11 = param_11 + 1;
        param_10 = param_10 + 1;
        param_5._3_1_ = (undefined1)((int)((uint)*param_1 + (uint)bVar1) >> 1);
        param_4._3_1_ = (undefined1)((int)((uint)param_1[1] + (uint)bVar2) >> 1);
        param_3._3_1_ = (undefined1)((int)((uint)param_1[2] + (uint)bVar3) >> 1);
        param_2._3_1_ = (undefined1)((int)((uint)bVar6 + (uint)bVar1) >> 1);
        local_5 = (undefined1)((int)((uint)bVar4 + (uint)bVar2) >> 1);
        *puVar20 = param_5._3_1_;
        puVar20[1] = param_4._3_1_;
        puVar20[2] = param_3._3_1_;
        *pbVar22 = bVar1;
        pbVar22[1] = bVar2;
        pbVar22[2] = bVar3;
        *puVar25 = param_2._3_1_;
        local_6 = (undefined1)((int)((uint)bVar5 + (uint)bVar3) >> 1);
        puVar25[2] = local_6;
        puVar25[1] = local_5;
        *pbVar26 = bVar6;
        pbVar26[1] = bVar4;
        pbVar26[2] = bVar5;
        while( true ) {
          local_c = local_c + -1;
          param_1 = param_1 + 3;
          pbVar26 = pbVar26 + 3;
          puVar25 = puVar25 + 3;
          pbVar22 = pbVar22 + 3;
          puVar20 = puVar20 + 3;
          if (local_c == 0) {
            local_c = 0;
            puVar21 = puVar20;
            pbVar23 = pbVar22;
            if ((param_13 + param_12 & 1) == 0) goto LAB_63739b5c;
            goto LAB_63739a1c;
          }
          local_30 = local_30 - param_13;
          if (local_30 < 0) break;
          *puVar20 = param_5._3_1_;
          puVar20[1] = param_4._3_1_;
          puVar20[2] = param_3._3_1_;
          *pbVar22 = bVar1;
          pbVar22[1] = bVar2;
          pbVar22[2] = bVar3;
          *puVar25 = param_2._3_1_;
          puVar25[1] = local_5;
          puVar25[2] = local_6;
          *pbVar26 = bVar6;
          pbVar26[1] = bVar4;
          pbVar26[2] = bVar5;
        }
        local_30 = local_30 + param_7;
        puVar21 = puVar20;
        pbVar23 = pbVar22;
LAB_637395ea:
        iVar13 = (&DAT_63790960)[*param_10];
        iVar24 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
        iVar14 = (&DAT_63792180)[*param_11];
        iVar15 = (&DAT_63791580)[*param_8];
        iVar16 = (&DAT_63791580)[*param_9];
        iVar17 = (&DAT_63791580)[param_8[1]];
        iVar18 = (&DAT_63791580)[param_9[1]];
        bVar7 = (&DAT_637903e0)[iVar15 + iVar13];
        bVar8 = (&DAT_637903e0)[iVar15 + iVar24];
        bVar9 = (&DAT_637903e0)[iVar15 + iVar14];
        bVar10 = (&DAT_637903e0)[iVar16 + iVar13];
        bVar11 = (&DAT_637903e0)[iVar16 + iVar24];
        bVar12 = (&DAT_637903e0)[iVar16 + iVar14];
        bVar1 = (&DAT_637903e0)[iVar17 + iVar13];
        bVar2 = (&DAT_637903e0)[iVar17 + iVar24];
        bVar3 = (&DAT_637903e0)[iVar17 + iVar14];
        bVar6 = (&DAT_637903e0)[iVar18 + iVar13];
        bVar4 = (&DAT_637903e0)[iVar18 + iVar24];
        bVar5 = (&DAT_637903e0)[iVar18 + iVar14];
        param_8 = param_8 + 2;
        puVar20 = puVar21 + 3;
        param_9 = param_9 + 2;
        pbVar22 = pbVar23 + 3;
        param_5._3_1_ = (undefined1)((int)((uint)*param_1 + (uint)bVar7) >> 1);
        param_4._3_1_ = (undefined1)((int)((uint)param_1[1] + (uint)bVar8) >> 1);
        param_3._3_1_ = (undefined1)((int)((uint)param_1[2] + (uint)bVar9) >> 1);
        param_2._3_1_ = (undefined1)((int)((uint)bVar10 + (uint)bVar7) >> 1);
        local_5 = (undefined1)((int)((uint)bVar11 + (uint)bVar8) >> 1);
        *puVar21 = param_5._3_1_;
        puVar21[1] = param_4._3_1_;
        puVar21[2] = param_3._3_1_;
        *pbVar23 = bVar7;
        pbVar23[1] = bVar8;
        pbVar23[2] = bVar9;
        *puVar25 = param_2._3_1_;
        local_6 = (undefined1)((int)((uint)bVar12 + (uint)bVar9) >> 1);
        puVar25[1] = local_5;
        puVar25[2] = local_6;
        puVar25 = puVar25 + 3;
        *pbVar26 = bVar10;
        pbVar26[1] = bVar11;
        pbVar26[2] = bVar12;
        pbVar26 = pbVar26 + 3;
        local_c = local_c + -1;
        puVar21 = puVar20;
        pbVar23 = pbVar22;
        if (local_c == 0) break;
        while( true ) {
          param_1 = param_1 + 3;
          local_30 = local_30 - param_13;
          if (local_30 < 0) break;
          puVar21 = puVar20 + 3;
          pbVar23 = pbVar22 + 3;
          *puVar20 = param_5._3_1_;
          puVar20[1] = param_4._3_1_;
          puVar20[2] = param_3._3_1_;
          *pbVar22 = bVar7;
          pbVar22[1] = bVar8;
          pbVar22[2] = bVar9;
          *puVar25 = param_2._3_1_;
          puVar25[1] = local_5;
          puVar25[2] = local_6;
          *pbVar26 = bVar10;
          pbVar26[1] = bVar11;
          pbVar26[2] = bVar12;
          puVar25 = puVar25 + 3;
          pbVar26 = pbVar26 + 3;
          local_c = local_c + -1;
          puVar20 = puVar21;
          pbVar22 = pbVar23;
          if (local_c == 0) {
            local_c = 0;
            goto LAB_63739b5c;
          }
        }
        local_30 = local_30 + param_7;
      }
    }
LAB_63739b5c:
    for (local_c = local_c + iVar19 / param_13; local_c != 0; local_c = local_c + -1) {
      *puVar21 = param_5._3_1_;
      puVar21[1] = param_4._3_1_;
      puVar21[2] = param_3._3_1_;
      *pbVar23 = bVar1;
      pbVar23[1] = bVar2;
      pbVar23[2] = bVar3;
      *puVar25 = param_2._3_1_;
      puVar25[1] = local_5;
      puVar25[2] = local_6;
      *pbVar26 = bVar6;
      pbVar26[1] = bVar4;
      pbVar26[2] = bVar5;
      puVar21 = puVar21 + 3;
      puVar25 = puVar25 + 3;
      pbVar26 = pbVar26 + 3;
      pbVar23 = pbVar23 + 3;
    }
  }
  return;
}


