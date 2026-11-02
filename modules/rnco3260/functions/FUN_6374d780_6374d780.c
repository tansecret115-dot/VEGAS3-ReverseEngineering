/* Module: rnco3260.dll
   Function: FUN_6374d780
   Address: 6374d780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6374d780(byte *param_1,undefined1 *param_2,byte *param_3,undefined1 *param_4,byte *param_5,
            undefined4 param_6,uint param_7,byte *param_8,byte *param_9,byte *param_10,
            byte *param_11,byte param_12)

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
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  int iVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  uint local_3c;
  uint local_34;
  uint local_24;
  uint local_20;
  undefined1 local_1c;
  undefined1 local_18;
  undefined1 local_14;
  undefined1 local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = param_7;
  pbVar16 = param_3;
  pbVar18 = param_5;
  pbVar26 = param_1;
  puVar28 = param_2;
  if (((param_12 & 1) != 0) && (param_7 != 0)) {
    bVar1 = *param_11;
    bVar2 = *param_10;
    iVar24 = (&DAT_63791580)[*param_8];
    bVar3 = (&DAT_637903e0)[iVar24 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
    iVar13 = (&DAT_63791580)[*param_9];
    bVar4 = (&DAT_637903e0)[iVar24 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]];
    bVar5 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
    bVar6 = (&DAT_637903e0)[iVar24 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]];
    bVar7 = (&DAT_637903e0)[iVar13 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]];
    bVar1 = (&DAT_637903e0)[iVar13 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]];
    param_8 = param_8 + 1;
    param_9 = param_9 + 1;
    param_10 = param_10 + 1;
    param_11 = param_11 + 1;
    local_20 = (uint)bVar7;
    *param_3 = bVar3;
    param_3[1] = bVar4;
    param_3[2] = bVar6;
    param_5[1] = bVar7;
    param_5[2] = bVar1;
    local_24 = (uint)bVar6;
    *param_5 = bVar5;
    iVar24 = bVar1 + local_24;
    bVar1 = param_1[1];
    bVar2 = param_1[2];
    param_12 = (byte)((int)((uint)*param_1 + (uint)bVar3) >> 1);
    *param_2 = param_12;
    local_8._0_1_ = (undefined1)((int)((uint)bVar1 + (uint)bVar4) >> 1);
    param_2[1] = (undefined1)local_8;
    local_24._0_1_ = (undefined1)((int)(bVar2 + local_24) >> 1);
    param_2[2] = (undefined1)local_24;
    *param_4 = (char)((int)((uint)bVar5 + (uint)bVar3) >> 1);
    local_20._0_1_ = (undefined1)((int)(local_20 + bVar4) >> 1);
    param_4[1] = (undefined1)local_20;
    local_c = (undefined1)(iVar24 >> 1);
    param_4[2] = local_c;
    param_4 = param_4 + 3;
    local_8 = param_7 - 1;
    pbVar16 = param_3 + 3;
    pbVar18 = param_5 + 3;
    pbVar26 = param_1 + 3;
    puVar28 = param_2 + 3;
  }
  if (1 < (int)local_8) {
    local_3c = local_8 >> 1;
    pbVar23 = pbVar16;
    pbVar17 = pbVar18;
    pbVar25 = pbVar26;
    puVar27 = puVar28;
    do {
      bVar1 = *param_11;
      bVar2 = *param_10;
      iVar19 = (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1];
      iVar20 = (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1];
      iVar21 = (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1];
      iVar24 = (&DAT_63791580)[*param_8];
      iVar13 = (&DAT_63791580)[*param_9];
      iVar14 = (&DAT_63791580)[param_8[1]];
      iVar15 = (&DAT_63791580)[param_9[1]];
      param_2 = (undefined1 *)(uint)(byte)(&DAT_637903e0)[iVar24 + iVar19];
      bVar1 = (&DAT_637903e0)[iVar24 + iVar20];
      param_1 = (byte *)(uint)bVar1;
      bVar2 = (&DAT_637903e0)[iVar24 + iVar21];
      bVar3 = (&DAT_637903e0)[iVar13 + iVar19];
      bVar4 = (&DAT_637903e0)[iVar13 + iVar20];
      bVar5 = (&DAT_637903e0)[iVar13 + iVar21];
      bVar6 = (&DAT_637903e0)[iVar14 + iVar19];
      bVar7 = (&DAT_637903e0)[iVar14 + iVar20];
      bVar8 = (&DAT_637903e0)[iVar14 + iVar21];
      bVar9 = (&DAT_637903e0)[iVar15 + iVar19];
      bVar10 = (&DAT_637903e0)[iVar15 + iVar20];
      bVar11 = (&DAT_637903e0)[iVar15 + iVar21];
      local_34 = (uint)bVar11;
      param_8 = param_8 + 2;
      pbVar16 = pbVar23 + 6;
      param_9 = param_9 + 2;
      pbVar18 = pbVar17 + 6;
      param_10 = param_10 + 1;
      param_11 = param_11 + 1;
      *pbVar23 = (&DAT_637903e0)[iVar24 + iVar19];
      pbVar23[1] = bVar1;
      pbVar23[2] = bVar2;
      pbVar23[3] = bVar6;
      pbVar23[4] = bVar7;
      pbVar23[5] = bVar8;
      *pbVar17 = bVar3;
      pbVar17[1] = bVar4;
      pbVar17[2] = bVar5;
      pbVar17[3] = bVar9;
      pbVar17[4] = bVar10;
      pbVar17[5] = bVar11;
      puVar22 = param_2 + bVar3;
      pbVar23 = param_1 + bVar4;
      pbVar26 = pbVar25 + 6;
      puVar28 = puVar27 + 6;
      bVar1 = pbVar25[1];
      bVar3 = pbVar25[2];
      bVar4 = pbVar25[3];
      bVar11 = pbVar25[4];
      bVar12 = pbVar25[5];
      param_2._0_1_ = (undefined1)((int)(param_2 + *pbVar25) >> 1);
      *puVar27 = param_2._0_1_;
      param_1._0_1_ = (undefined1)((int)(param_1 + bVar1) >> 1);
      puVar27[1] = param_1._0_1_;
      param_12 = (byte)((int)((uint)bVar3 + (uint)bVar2) >> 1);
      puVar27[2] = param_12;
      local_c = (undefined1)((int)((uint)bVar4 + (uint)bVar6) >> 1);
      puVar27[3] = local_c;
      local_10 = (undefined1)((int)((uint)bVar11 + (uint)bVar7) >> 1);
      puVar27[5] = (char)((int)((uint)bVar12 + (uint)bVar8) >> 1);
      puVar27[4] = local_10;
      local_14 = (undefined1)((int)puVar22 >> 1);
      *param_4 = local_14;
      local_18 = (undefined1)((int)pbVar23 >> 1);
      param_4[1] = local_18;
      local_1c = (undefined1)((int)((uint)bVar5 + (uint)bVar2) >> 1);
      param_4[2] = local_1c;
      local_20._0_1_ = (undefined1)((int)((uint)bVar9 + (uint)bVar6) >> 1);
      param_4[3] = (undefined1)local_20;
      local_24._0_1_ = (undefined1)((int)((uint)bVar10 + (uint)bVar7) >> 1);
      param_4[4] = (undefined1)local_24;
      local_34._0_1_ = (undefined1)((int)(local_34 + bVar8) >> 1);
      param_4[5] = (undefined1)local_34;
      param_4 = param_4 + 6;
      local_8 = local_8 - 2;
      local_3c = local_3c - 1;
      pbVar23 = pbVar16;
      pbVar17 = pbVar18;
      pbVar25 = pbVar26;
      puVar27 = puVar28;
    } while (local_3c != 0);
  }
  if (local_8 != 0) {
    bVar1 = *param_11;
    bVar2 = *param_10;
    iVar24 = (&DAT_63791580)[*param_8];
    iVar13 = (&DAT_63791580)[*param_9];
    param_8 = (byte *)(uint)(byte)(&DAT_637903e0)
                                  [iVar24 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
    bVar3 = (&DAT_637903e0)[iVar24 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]];
    param_3 = (byte *)(uint)bVar3;
    bVar4 = (&DAT_637903e0)[iVar24 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]];
    param_9 = (byte *)(uint)bVar4;
    bVar5 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
    param_10 = (byte *)(uint)bVar5;
    bVar6 = (&DAT_637903e0)[iVar13 + (&DAT_63791d80)[bVar2] + (&DAT_637929a0)[bVar1]];
    param_5 = (byte *)(uint)bVar6;
    bVar7 = (&DAT_637903e0)[iVar13 + (&DAT_63791980)[bVar2] + (&DAT_63792180)[bVar1]];
    *pbVar16 = (&DAT_637903e0)[iVar24 + (&DAT_63790960)[bVar2] + (&DAT_63790d60)[bVar1]];
    pbVar16[1] = bVar3;
    pbVar16[2] = bVar4;
    *pbVar18 = bVar5;
    pbVar18[1] = bVar6;
    pbVar18[2] = bVar7;
    param_11 = (byte *)(uint)bVar7;
    pbVar16 = param_10 + (int)param_8;
    pbVar18 = param_11 + (int)param_9;
    bVar1 = pbVar26[2];
    param_8._0_1_ = (undefined1)((int)(param_8 + *pbVar26) >> 1);
    puVar28[1] = (char)((int)(param_3 + pbVar26[1]) >> 1);
    param_9._0_1_ = (undefined1)((int)(param_9 + bVar1) >> 1);
    puVar28[2] = param_9._0_1_;
    *puVar28 = param_8._0_1_;
    *param_4 = (char)((int)pbVar16 >> 1);
    param_11._0_1_ = (undefined1)((int)pbVar18 >> 1);
    param_4[1] = (char)((int)(param_5 + (int)param_3) >> 1);
    param_4[2] = param_11._0_1_;
  }
  return;
}


