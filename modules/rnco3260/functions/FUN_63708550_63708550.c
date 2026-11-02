/* Module: rnco3260.dll
   Function: FUN_63708550
   Address: 63708550
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63708550(byte *param_1,undefined1 *param_2,byte *param_3,int param_4,byte *param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  undefined1 uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint local_24;
  byte *local_20;
  int local_c;
  
  iVar2 = param_6;
  pbVar16 = param_5;
  iVar9 = (param_4 * 2 - (param_4 >> 1)) / (param_6 * 2);
  if (param_4 == 0) {
    return;
  }
  bVar6 = *param_5;
  local_20 = param_5 + 3;
  param_6 = (int)bVar6;
  pbVar18 = param_5 + 1;
  param_5 = (byte *)(uint)*pbVar18;
  bVar5 = pbVar16[2];
  local_c = param_4 - iVar9;
  pbVar16 = param_3;
  if (local_c != 0) {
    local_24 = (uint)bVar5;
    pbVar18 = param_1;
    param_3 = (byte *)(param_4 >> 1);
    do {
      bVar6 = pbVar18[1];
      param_1 = (byte *)(((int)(param_5 + bVar6) >> 1) << 0x18);
      pbVar20 = param_1;
      bVar7 = pbVar18[2];
      uVar17 = (undefined1)((int)((uint)*pbVar18 + param_6) >> 1);
      do {
        pbVar19 = pbVar18;
        pbVar18 = pbVar19 + 3;
        *pbVar16 = (byte)param_6;
        pbVar16[1] = (byte)param_5;
        pbVar16[2] = bVar5;
        param_1._3_1_ = (undefined1)((int)(param_5 + bVar6) >> 1);
        param_2[1] = param_1._3_1_;
        *param_2 = uVar17;
        uVar3 = (undefined1)((int)(bVar7 + local_24) >> 1);
        param_2[2] = uVar3;
        pbVar16 = pbVar16 + 3;
        param_2 = param_2 + 3;
        local_c = local_c + -1;
        param_1 = pbVar20;
        if (local_c == 0) goto joined_r0x63708895;
        param_3 = param_3 + iVar2 * -2;
      } while (-1 < (int)param_3);
      param_3 = param_3 + param_4;
      bVar6 = *local_20;
      bVar7 = local_20[1];
      bVar8 = local_20[2];
      uVar10 = (uint)bVar6;
      iVar11 = (int)(uVar10 + param_6) >> 1;
      param_6._0_1_ = (byte)iVar11;
      uVar12 = (uint)bVar7;
      bVar4 = (byte)((int)(param_5 + uVar12) >> 1);
      uVar13 = (uint)bVar8;
      iVar14 = (int)(uVar13 + local_24) >> 1;
      bVar5 = (byte)iVar14;
      iVar15 = (int)((uint)pbVar19[4] + ((int)(param_5 + uVar12) >> 1)) >> 1;
      param_1 = (byte *)(iVar15 << 0x18);
      pbVar20 = param_1;
      bVar1 = pbVar19[5];
      uVar17 = (undefined1)((int)((uint)*pbVar18 + iVar11) >> 1);
      do {
        pbVar19 = pbVar18;
        pbVar18 = pbVar19 + 3;
        *pbVar16 = (byte)param_6;
        pbVar16[1] = bVar4;
        pbVar16[2] = bVar5;
        param_1._3_1_ = (undefined1)iVar15;
        param_2[1] = param_1._3_1_;
        *param_2 = uVar17;
        uVar3 = (undefined1)((int)((uint)bVar1 + iVar14) >> 1);
        param_2[2] = uVar3;
        pbVar16 = pbVar16 + 3;
        param_2 = param_2 + 3;
        local_c = local_c + -1;
        param_5._0_1_ = bVar4;
        param_1 = pbVar20;
        if (local_c == 0) goto joined_r0x63708895;
        param_3 = param_3 + iVar2 * -2;
      } while (-1 < (int)param_3);
      param_3 = param_3 + param_4;
      iVar11 = (int)(pbVar19[4] + uVar12) >> 1;
      bVar5 = pbVar19[5];
      uVar17 = (undefined1)((int)(*pbVar18 + uVar10) >> 1);
      do {
        pbVar20 = pbVar18;
        pbVar18 = pbVar20 + 3;
        *pbVar16 = bVar6;
        pbVar16[1] = bVar7;
        pbVar16[2] = bVar8;
        param_1._3_1_ = (undefined1)iVar11;
        param_2[1] = param_1._3_1_;
        *param_2 = uVar17;
        uVar3 = (undefined1)((int)(bVar5 + uVar13) >> 1);
        param_2[2] = uVar3;
        pbVar16 = pbVar16 + 3;
        param_2 = param_2 + 3;
        local_c = local_c + -1;
        if (local_c == 0) goto LAB_63708875;
        param_3 = param_3 + iVar2 * -2;
      } while (-1 < (int)param_3);
      param_3 = param_3 + param_4;
      param_6 = (int)local_20[3];
      param_5 = (byte *)(uint)local_20[4];
      bVar5 = local_20[5];
      iVar14 = (int)(param_6 + uVar10) >> 1;
      bVar6 = (byte)iVar14;
      bVar7 = (byte)((int)(param_5 + uVar12) >> 1);
      local_24 = (uint)bVar5;
      iVar15 = (int)(local_24 + uVar13) >> 1;
      bVar8 = (byte)iVar15;
      iVar11 = (int)((uint)pbVar20[4] + ((int)(param_5 + uVar12) >> 1)) >> 1;
      bVar1 = pbVar20[5];
      uVar17 = (undefined1)((int)((uint)*pbVar18 + iVar14) >> 1);
      do {
        pbVar18 = pbVar18 + 3;
        *pbVar16 = bVar6;
        pbVar16[1] = bVar7;
        pbVar16[2] = bVar8;
        param_1._3_1_ = (undefined1)iVar11;
        param_2[1] = param_1._3_1_;
        *param_2 = uVar17;
        uVar3 = (undefined1)((int)((uint)bVar1 + iVar15) >> 1);
        param_2[2] = uVar3;
        pbVar16 = pbVar16 + 3;
        param_2 = param_2 + 3;
        local_c = local_c + -1;
        if (local_c == 0) goto LAB_63708875;
        param_3 = param_3 + iVar2 * -2;
      } while (-1 < (int)param_3);
      param_3 = param_3 + param_4;
      local_20 = local_20 + 6;
    } while( true );
  }
  param_5._0_1_ = *pbVar18;
  param_6._0_1_ = bVar6;
  uVar3 = param_2._3_1_;
  uVar17 = param_4._3_1_;
joined_r0x63708895:
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pbVar16 = (byte)param_6;
    pbVar16[1] = (byte)param_5;
    pbVar16[2] = bVar5;
    *param_2 = uVar17;
    param_2[1] = param_1._3_1_;
    param_2[2] = uVar3;
    pbVar16 = pbVar16 + 3;
    param_2 = param_2 + 3;
  }
  return;
LAB_63708875:
  param_1 = (byte *)(iVar11 << 0x18);
  param_5._0_1_ = bVar7;
  param_6._0_1_ = bVar6;
  bVar5 = bVar8;
  goto joined_r0x63708895;
}


