/* Module: rnco3260.dll
   Function: FUN_63707840
   Address: 63707840
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63707840(byte *param_1,undefined1 *param_2,byte *param_3,int param_4,uint *param_5,int param_6)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  undefined1 uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 uVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  uint *local_20;
  byte local_1c;
  uint local_c;
  int local_8;
  
  iVar4 = param_6;
  pbVar10 = param_3;
  iVar7 = (param_4 * 2 - (param_4 >> 1)) / (param_6 * 2);
  if (param_4 == 0) {
    return;
  }
  uVar2 = *param_5;
  local_c._0_1_ = (byte)uVar2;
  param_3 = (byte *)(uVar2 >> 0x10 & 0xff);
  pbVar20 = param_3;
  param_3._0_1_ = (byte)(uVar2 >> 0x10);
  param_6 = uVar2 >> 8 & 0xff;
  iVar8 = param_6;
  param_6._0_1_ = (byte)(uVar2 >> 8);
  local_20 = param_5 + 1;
  local_8 = param_4 - iVar7;
  puVar19 = param_2;
  puVar6 = (undefined1 *)(param_4 >> 1);
  if (local_8 != 0) {
    do {
      param_6 = iVar8;
      param_3 = pbVar20;
      param_2 = puVar6;
      local_c = uVar2 & 0xff;
      uVar5 = local_c;
      local_c._0_1_ = (byte)uVar2;
      bVar1 = param_1[2];
      iVar8 = (int)((uint)param_1[1] + param_6) >> 1;
      param_5 = (uint *)(iVar8 << 0x18);
      puVar3 = param_5;
      uVar11 = (undefined1)((int)(param_3 + *param_1) >> 1);
      do {
        pbVar20 = param_1;
        param_1 = pbVar20 + 3;
        *pbVar10 = (byte)param_3;
        pbVar10[1] = (byte)param_6;
        pbVar10[2] = (byte)local_c;
        param_5._3_1_ = (undefined1)iVar8;
        puVar19[1] = param_5._3_1_;
        *puVar19 = uVar11;
        uVar18 = (undefined1)((int)(bVar1 + uVar5) >> 1);
        puVar19[2] = uVar18;
        pbVar10 = pbVar10 + 3;
        puVar19 = puVar19 + 3;
        local_8 = local_8 + -1;
        param_5 = puVar3;
        if (local_8 == 0) goto joined_r0x63707b92;
        param_2 = param_2 + iVar4 * -2;
      } while (-1 < (int)param_2);
      param_2 = param_2 + param_4;
      uVar9 = *local_20;
      bVar12 = (byte)(uVar9 >> 0x10);
      bVar13 = (byte)(uVar9 >> 8);
      uVar15 = (uint)bVar12;
      local_1c = (byte)uVar9;
      uVar9 = uVar9 & 0xff;
      bVar14 = (byte)((int)(param_3 + uVar15) >> 1);
      uVar16 = (uint)bVar13;
      iVar17 = (int)(uVar16 + param_6) >> 1;
      param_6._0_1_ = (byte)iVar17;
      iVar8 = (int)(uVar9 + uVar5) >> 1;
      local_c._0_1_ = (byte)iVar8;
      bVar1 = pbVar20[5];
      iVar17 = (int)((uint)pbVar20[4] + iVar17) >> 1;
      param_5 = (uint *)(iVar17 << 0x18);
      puVar3 = param_5;
      uVar11 = (undefined1)((int)(((int)(param_3 + uVar15) >> 1) + (uint)*param_1) >> 1);
      do {
        pbVar20 = param_1;
        param_1 = pbVar20 + 3;
        *pbVar10 = bVar14;
        pbVar10[1] = (byte)param_6;
        pbVar10[2] = (byte)local_c;
        param_5._3_1_ = (undefined1)iVar17;
        puVar19[1] = param_5._3_1_;
        *puVar19 = uVar11;
        uVar18 = (undefined1)((int)((uint)bVar1 + iVar8) >> 1);
        puVar19[2] = uVar18;
        pbVar10 = pbVar10 + 3;
        puVar19 = puVar19 + 3;
        local_8 = local_8 + -1;
        param_3._0_1_ = bVar14;
        param_5 = puVar3;
        if (local_8 == 0) goto joined_r0x63707b92;
        param_2 = param_2 + iVar4 * -2;
      } while (-1 < (int)param_2);
      param_2 = param_2 + param_4;
      bVar1 = pbVar20[5];
      iVar8 = (int)(pbVar20[4] + uVar16) >> 1;
      uVar11 = (undefined1)((int)(*param_1 + uVar15) >> 1);
      do {
        pbVar20 = param_1;
        param_1 = pbVar20 + 3;
        *pbVar10 = bVar12;
        pbVar10[1] = bVar13;
        pbVar10[2] = local_1c;
        param_5._3_1_ = (undefined1)iVar8;
        puVar19[1] = param_5._3_1_;
        *puVar19 = uVar11;
        uVar18 = (undefined1)((int)(bVar1 + uVar9) >> 1);
        puVar19[2] = uVar18;
        pbVar10 = pbVar10 + 3;
        puVar19 = puVar19 + 3;
        local_8 = local_8 + -1;
        if (local_8 == 0) goto LAB_63707b72;
        param_2 = param_2 + iVar4 * -2;
      } while (-1 < (int)param_2);
      param_2 = param_2 + param_4;
      uVar2 = local_20[1];
      local_20 = local_20 + 2;
      param_3 = (byte *)(uVar2 >> 0x10 & 0xff);
      param_6 = uVar2 >> 8 & 0xff;
      bVar12 = (byte)((int)(param_3 + uVar15) >> 1);
      iVar8 = (int)(param_6 + uVar16) >> 1;
      iVar17 = (int)((uVar2 & 0xff) + uVar9) >> 1;
      bVar13 = (byte)iVar8;
      local_1c = (byte)iVar17;
      bVar1 = pbVar20[5];
      iVar8 = (int)((uint)pbVar20[4] + iVar8) >> 1;
      uVar11 = (undefined1)((int)(((int)(param_3 + uVar15) >> 1) + (uint)*param_1) >> 1);
      do {
        param_1 = param_1 + 3;
        *pbVar10 = bVar12;
        pbVar10[1] = bVar13;
        pbVar10[2] = local_1c;
        param_5._3_1_ = (undefined1)iVar8;
        puVar19[1] = param_5._3_1_;
        *puVar19 = uVar11;
        uVar18 = (undefined1)((int)((uint)bVar1 + iVar17) >> 1);
        puVar19[2] = uVar18;
        pbVar10 = pbVar10 + 3;
        puVar19 = puVar19 + 3;
        local_8 = local_8 + -1;
        if (local_8 == 0) goto LAB_63707b72;
        param_2 = param_2 + iVar4 * -2;
      } while (-1 < (int)param_2);
      puVar6 = param_2 + param_4;
      pbVar20 = param_3;
      iVar8 = param_6;
    } while( true );
  }
  uVar18 = param_1._3_1_;
  uVar11 = param_4._3_1_;
joined_r0x63707b92:
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pbVar10 = (byte)param_3;
    pbVar10[1] = (byte)param_6;
    pbVar10[2] = (byte)local_c;
    *puVar19 = uVar11;
    puVar19[1] = param_5._3_1_;
    puVar19[2] = uVar18;
    pbVar10 = pbVar10 + 3;
    puVar19 = puVar19 + 3;
  }
  return;
LAB_63707b72:
  local_c._0_1_ = local_1c;
  param_5 = (uint *)(iVar8 << 0x18);
  param_6._0_1_ = bVar13;
  param_3._0_1_ = bVar12;
  goto joined_r0x63707b92;
}


