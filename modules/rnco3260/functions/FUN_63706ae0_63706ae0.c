/* Module: rnco3260.dll
   Function: FUN_63706ae0
   Address: 63706ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63706ae0(byte *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,uint *param_5,
            int param_6)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  undefined1 uVar18;
  int iVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  uint *local_20;
  undefined1 local_1c;
  uint local_c;
  int local_8;
  
  iVar4 = param_6;
  puVar17 = param_3;
  iVar11 = (param_4 * 2 - (param_4 >> 1)) / (param_6 * 2);
  if (param_4 == 0) {
    return;
  }
  uVar2 = *param_5;
  local_c._0_1_ = (undefined1)uVar2;
  param_6 = uVar2 >> 0x10 & 0xff;
  iVar13 = param_6;
  param_6._0_1_ = (byte)(uVar2 >> 0x10);
  local_20 = param_5 + 1;
  local_8 = param_4 - iVar11;
  param_3 = (undefined1 *)(uVar2 >> 8 & 0xff);
  puVar6 = param_3;
  param_3._0_1_ = (byte)(uVar2 >> 8);
  puVar20 = param_2;
  puVar5 = (undefined1 *)(param_4 >> 1);
  if (local_8 != 0) {
    do {
      param_6 = iVar13;
      param_3 = puVar6;
      param_2 = puVar5;
      local_c = uVar2 & 0xff;
      uVar14 = local_c;
      local_c._0_1_ = (undefined1)uVar2;
      bVar1 = param_1[1];
      param_5 = (uint *)(((int)(param_3 + bVar1) >> 1) << 0x18);
      puVar3 = param_5;
      bVar9 = param_1[2];
      uVar7 = (undefined1)((int)(*param_1 + uVar14) >> 1);
      do {
        pbVar21 = param_1;
        param_1 = pbVar21 + 3;
        *puVar17 = (undefined1)local_c;
        puVar17[1] = (byte)param_3;
        puVar17[2] = (byte)param_6;
        param_5._3_1_ = (undefined1)((int)(param_3 + bVar1) >> 1);
        puVar20[1] = param_5._3_1_;
        *puVar20 = uVar7;
        uVar18 = (undefined1)((int)((uint)bVar9 + param_6) >> 1);
        puVar20[2] = uVar18;
        puVar17 = puVar17 + 3;
        puVar20 = puVar20 + 3;
        local_8 = local_8 + -1;
        param_5 = puVar3;
        if (local_8 == 0) goto joined_r0x63706e2e;
        param_2 = param_2 + iVar4 * -2;
      } while (-1 < (int)param_2);
      param_2 = param_2 + param_4;
      uVar12 = *local_20;
      bVar9 = (byte)(uVar12 >> 8);
      local_1c = (undefined1)uVar12;
      bVar10 = (byte)(uVar12 >> 0x10);
      uVar12 = uVar12 & 0xff;
      iVar13 = (int)(uVar12 + uVar14) >> 1;
      local_c._0_1_ = (undefined1)iVar13;
      uVar14 = (uint)bVar9;
      bVar8 = (byte)((int)(param_3 + uVar14) >> 1);
      uVar15 = (uint)bVar10;
      iVar16 = (int)(uVar15 + param_6) >> 1;
      param_6._0_1_ = (byte)iVar16;
      iVar19 = (int)((uint)pbVar21[4] + ((int)(param_3 + uVar14) >> 1)) >> 1;
      param_5 = (uint *)(iVar19 << 0x18);
      puVar3 = param_5;
      bVar1 = pbVar21[5];
      uVar7 = (undefined1)((int)((uint)*param_1 + iVar13) >> 1);
      do {
        pbVar21 = param_1;
        param_1 = pbVar21 + 3;
        *puVar17 = (undefined1)local_c;
        puVar17[1] = bVar8;
        puVar17[2] = (byte)param_6;
        param_5._3_1_ = (undefined1)iVar19;
        puVar20[1] = param_5._3_1_;
        *puVar20 = uVar7;
        uVar18 = (undefined1)((int)((uint)bVar1 + iVar16) >> 1);
        puVar20[2] = uVar18;
        puVar17 = puVar17 + 3;
        puVar20 = puVar20 + 3;
        local_8 = local_8 + -1;
        param_3._0_1_ = bVar8;
        param_5 = puVar3;
        if (local_8 == 0) goto joined_r0x63706e2e;
        param_2 = param_2 + iVar4 * -2;
      } while (-1 < (int)param_2);
      param_2 = param_2 + param_4;
      iVar13 = (int)(pbVar21[4] + uVar14) >> 1;
      bVar1 = pbVar21[5];
      uVar7 = (undefined1)((int)(*param_1 + uVar12) >> 1);
      do {
        pbVar21 = param_1;
        param_1 = pbVar21 + 3;
        *puVar17 = local_1c;
        puVar17[1] = bVar9;
        puVar17[2] = bVar10;
        param_5._3_1_ = (undefined1)iVar13;
        puVar20[1] = param_5._3_1_;
        *puVar20 = uVar7;
        uVar18 = (undefined1)((int)(bVar1 + uVar15) >> 1);
        puVar20[2] = uVar18;
        puVar17 = puVar17 + 3;
        puVar20 = puVar20 + 3;
        local_8 = local_8 + -1;
        if (local_8 == 0) goto LAB_63706e0e;
        param_2 = param_2 + iVar4 * -2;
      } while (-1 < (int)param_2);
      param_2 = param_2 + param_4;
      uVar2 = local_20[1];
      local_20 = local_20 + 2;
      param_3 = (undefined1 *)(uVar2 >> 8 & 0xff);
      param_6 = uVar2 >> 0x10 & 0xff;
      iVar19 = (int)((uVar2 & 0xff) + uVar12) >> 1;
      local_1c = (undefined1)iVar19;
      bVar9 = (byte)((int)(param_3 + uVar14) >> 1);
      iVar16 = (int)(param_6 + uVar15) >> 1;
      bVar10 = (byte)iVar16;
      iVar13 = (int)((uint)pbVar21[4] + ((int)(param_3 + uVar14) >> 1)) >> 1;
      bVar1 = pbVar21[5];
      uVar7 = (undefined1)((int)((uint)*param_1 + iVar19) >> 1);
      do {
        param_1 = param_1 + 3;
        *puVar17 = local_1c;
        puVar17[1] = bVar9;
        puVar17[2] = bVar10;
        param_5._3_1_ = (undefined1)iVar13;
        puVar20[1] = param_5._3_1_;
        *puVar20 = uVar7;
        uVar18 = (undefined1)((int)((uint)bVar1 + iVar16) >> 1);
        puVar20[2] = uVar18;
        puVar17 = puVar17 + 3;
        puVar20 = puVar20 + 3;
        local_8 = local_8 + -1;
        if (local_8 == 0) goto LAB_63706e0e;
        param_2 = param_2 + iVar4 * -2;
      } while (-1 < (int)param_2);
      puVar5 = param_2 + param_4;
      puVar6 = param_3;
      iVar13 = param_6;
    } while( true );
  }
  uVar18 = param_1._3_1_;
  uVar7 = param_4._3_1_;
joined_r0x63706e2e:
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar17 = (undefined1)local_c;
    puVar17[1] = (byte)param_3;
    puVar17[2] = (byte)param_6;
    *puVar20 = uVar7;
    puVar20[1] = param_5._3_1_;
    puVar20[2] = uVar18;
    puVar17 = puVar17 + 3;
    puVar20 = puVar20 + 3;
  }
  return;
LAB_63706e0e:
  local_c._0_1_ = local_1c;
  param_5 = (uint *)(iVar13 << 0x18);
  param_6._0_1_ = bVar10;
  param_3._0_1_ = bVar9;
  goto joined_r0x63706e2e;
}


