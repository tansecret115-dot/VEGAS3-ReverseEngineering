/* Module: rnco3260.dll
   Function: FUN_63738ea0
   Address: 63738ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63738ea0(byte *param_1,undefined1 *param_2,byte *param_3,undefined1 *param_4,byte *param_5,
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
  int iVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  int iVar22;
  int iVar23;
  byte *pbVar24;
  byte *pbVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint local_3c;
  uint local_34;
  uint local_24;
  undefined1 local_20;
  undefined1 local_1c;
  undefined1 local_18;
  undefined1 local_14;
  undefined1 local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = param_7;
  pbVar18 = param_3;
  pbVar25 = param_1;
  puVar27 = param_2;
  if (((param_12 & 1) != 0) && (param_7 != 0)) {
    iVar22 = (&DAT_63791580)[*param_8];
    iVar13 = (&DAT_63791580)[*param_9];
    bVar1 = (&DAT_637903e0)[iVar22 + (&DAT_63790960)[*param_10]];
    bVar2 = (&DAT_637903e0)[iVar22 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]];
    bVar3 = (&DAT_637903e0)[iVar22 + (&DAT_63792180)[*param_11]];
    bVar4 = (&DAT_637903e0)[iVar13 + (&DAT_63792180)[*param_11]];
    bVar5 = (&DAT_637903e0)[iVar13 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11]];
    bVar6 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[*param_10]];
    param_8 = param_8 + 1;
    param_9 = param_9 + 1;
    param_10 = param_10 + 1;
    param_11 = param_11 + 1;
    local_3c = (uint)bVar6;
    *param_3 = bVar1;
    param_3[2] = bVar3;
    param_3[1] = bVar2;
    *param_5 = bVar6;
    param_5[1] = bVar5;
    param_5[2] = bVar4;
    local_24 = (uint)bVar2;
    iVar22 = bVar5 + local_24;
    param_5 = param_5 + 3;
    bVar2 = param_1[1];
    bVar5 = param_1[2];
    param_12 = (byte)((int)((uint)*param_1 + (uint)bVar1) >> 1);
    *param_2 = param_12;
    local_24._0_1_ = (undefined1)((int)(bVar2 + local_24) >> 1);
    param_2[1] = (undefined1)local_24;
    local_8._0_1_ = (undefined1)((int)((uint)bVar5 + (uint)bVar3) >> 1);
    param_2[2] = (undefined1)local_8;
    *param_4 = (char)((int)(local_3c + bVar1) >> 1);
    local_c = (undefined1)(iVar22 >> 1);
    param_4[1] = local_c;
    local_10 = (undefined1)((int)((uint)bVar4 + (uint)bVar3) >> 1);
    param_4[2] = local_10;
    param_4 = param_4 + 3;
    local_8 = param_7 - 1;
    pbVar18 = param_3 + 3;
    pbVar25 = param_1 + 3;
    puVar27 = param_2 + 3;
  }
  if (1 < (int)local_8) {
    local_3c = local_8 >> 1;
    pbVar21 = pbVar18;
    pbVar19 = param_5;
    pbVar24 = pbVar25;
    puVar26 = puVar27;
    do {
      iVar22 = (&DAT_63790960)[*param_10];
      iVar23 = (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[*param_11];
      iVar13 = (&DAT_63792180)[*param_11];
      iVar14 = (&DAT_63791580)[*param_8];
      iVar15 = (&DAT_63791580)[*param_9];
      iVar16 = (&DAT_63791580)[param_8[1]];
      iVar17 = (&DAT_63791580)[param_9[1]];
      param_2 = (undefined1 *)(uint)(byte)(&DAT_637903e0)[iVar14 + iVar22];
      bVar1 = (&DAT_637903e0)[iVar14 + iVar23];
      param_1 = (byte *)(uint)bVar1;
      bVar2 = (&DAT_637903e0)[iVar14 + iVar13];
      bVar3 = (&DAT_637903e0)[iVar15 + iVar22];
      bVar4 = (&DAT_637903e0)[iVar15 + iVar23];
      bVar5 = (&DAT_637903e0)[iVar15 + iVar13];
      bVar6 = (&DAT_637903e0)[iVar16 + iVar22];
      bVar7 = (&DAT_637903e0)[iVar16 + iVar23];
      bVar8 = (&DAT_637903e0)[iVar16 + iVar13];
      bVar9 = (&DAT_637903e0)[iVar17 + iVar22];
      bVar10 = (&DAT_637903e0)[iVar17 + iVar23];
      bVar11 = (&DAT_637903e0)[iVar17 + iVar13];
      param_8 = param_8 + 2;
      local_34 = (uint)bVar11;
      param_9 = param_9 + 2;
      pbVar18 = pbVar21 + 6;
      param_10 = param_10 + 1;
      param_5 = pbVar19 + 6;
      param_11 = param_11 + 1;
      *pbVar21 = (&DAT_637903e0)[iVar14 + iVar22];
      pbVar21[1] = bVar1;
      pbVar21[2] = bVar2;
      pbVar21[3] = bVar6;
      pbVar21[4] = bVar7;
      pbVar21[5] = bVar8;
      *pbVar19 = bVar3;
      pbVar19[1] = bVar4;
      pbVar19[2] = bVar5;
      pbVar19[3] = bVar9;
      pbVar19[4] = bVar10;
      pbVar19[5] = bVar11;
      puVar20 = param_2 + bVar3;
      pbVar21 = param_1 + bVar4;
      pbVar25 = pbVar24 + 6;
      bVar1 = pbVar24[1];
      puVar27 = puVar26 + 6;
      bVar3 = pbVar24[2];
      bVar4 = pbVar24[3];
      bVar11 = pbVar24[4];
      bVar12 = pbVar24[5];
      param_2._0_1_ = (undefined1)((int)(param_2 + *pbVar24) >> 1);
      *puVar26 = param_2._0_1_;
      param_1._0_1_ = (undefined1)((int)(param_1 + bVar1) >> 1);
      puVar26[1] = param_1._0_1_;
      param_12 = (byte)((int)((uint)bVar3 + (uint)bVar2) >> 1);
      puVar26[2] = param_12;
      local_10 = (undefined1)((int)((uint)bVar4 + (uint)bVar6) >> 1);
      puVar26[3] = local_10;
      local_c = (undefined1)((int)((uint)bVar11 + (uint)bVar7) >> 1);
      puVar26[5] = (char)((int)((uint)bVar12 + (uint)bVar8) >> 1);
      puVar26[4] = local_c;
      local_14 = (undefined1)((int)puVar20 >> 1);
      *param_4 = local_14;
      local_18 = (undefined1)((int)pbVar21 >> 1);
      param_4[1] = local_18;
      local_1c = (undefined1)((int)((uint)bVar5 + (uint)bVar2) >> 1);
      param_4[2] = local_1c;
      local_20 = (undefined1)((int)((uint)bVar9 + (uint)bVar6) >> 1);
      param_4[3] = local_20;
      local_24._0_1_ = (undefined1)((int)((uint)bVar10 + (uint)bVar7) >> 1);
      param_4[4] = (undefined1)local_24;
      local_34._0_1_ = (undefined1)((int)(local_34 + bVar8) >> 1);
      param_4[5] = (undefined1)local_34;
      param_4 = param_4 + 6;
      local_8 = local_8 - 2;
      local_3c = local_3c - 1;
      pbVar21 = pbVar18;
      pbVar19 = param_5;
      pbVar24 = pbVar25;
      puVar26 = puVar27;
    } while (local_3c != 0);
  }
  if (local_8 != 0) {
    bVar1 = *param_11;
    iVar22 = (&DAT_63791580)[*param_8];
    iVar13 = (&DAT_63791580)[*param_9];
    param_8 = (byte *)(uint)(byte)(&DAT_637903e0)[iVar22 + (&DAT_63790960)[*param_10]];
    bVar2 = (&DAT_637903e0)[iVar22 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[bVar1]];
    param_3 = (byte *)(uint)bVar2;
    bVar3 = (&DAT_637903e0)[iVar22 + (&DAT_63792180)[bVar1]];
    param_9 = (byte *)(uint)bVar3;
    bVar4 = (&DAT_637903e0)[iVar13 + (&DAT_63790960)[*param_10]];
    param_7 = (uint)bVar4;
    bVar5 = (&DAT_637903e0)[iVar13 + (&DAT_63791d80)[*param_10] + (&DAT_637929a0)[bVar1]];
    param_11 = (byte *)(uint)bVar5;
    bVar1 = (&DAT_637903e0)[iVar13 + (&DAT_63792180)[bVar1]];
    *pbVar18 = (&DAT_637903e0)[iVar22 + (&DAT_63790960)[*param_10]];
    pbVar18[1] = bVar2;
    pbVar18[2] = bVar3;
    *param_5 = bVar4;
    param_5[1] = bVar5;
    param_5[2] = bVar1;
    param_10 = (byte *)(uint)bVar1;
    pbVar18 = param_8 + param_7;
    pbVar21 = param_10 + (int)param_9;
    bVar1 = pbVar25[2];
    param_8._0_1_ = (undefined1)((int)(param_8 + *pbVar25) >> 1);
    puVar27[1] = (char)((int)(param_3 + pbVar25[1]) >> 1);
    param_9._0_1_ = (undefined1)((int)(param_9 + bVar1) >> 1);
    puVar27[2] = param_9._0_1_;
    *puVar27 = param_8._0_1_;
    *param_4 = (char)((int)pbVar18 >> 1);
    param_10._0_1_ = (undefined1)((int)pbVar21 >> 1);
    param_4[1] = (char)((int)(param_11 + (int)param_3) >> 1);
    param_4[2] = param_10._0_1_;
  }
  return;
}


