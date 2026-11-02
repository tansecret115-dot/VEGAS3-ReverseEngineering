/* Module: rnco3260.dll
   Function: FUN_63709350
   Address: 63709350
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63709350(byte *param_1,undefined1 *param_2,byte *param_3,int param_4,ushort *param_5,int param_6
            )

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte bVar11;
  undefined1 uVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  uint local_2c;
  uint local_28;
  ushort *local_24;
  uint local_1c;
  int local_c;
  
  iVar3 = param_6;
  iVar7 = (param_4 * 2 - (param_4 >> 1)) / (param_6 * 2);
  if (param_4 == 0) {
    return;
  }
  uVar1 = *param_5;
  bVar4 = (char)uVar1 << 3;
  param_6 = (int)bVar4;
  bVar11 = (byte)(uVar1 >> 8) & 0xf8;
  local_24 = param_5 + 1;
  bVar5 = (byte)(uVar1 >> 3) & 0xfc;
  local_c = param_4 - iVar7;
  local_1c = (uint)bVar5;
  pbVar10 = param_3;
  if (local_c != 0) {
    local_28 = local_1c;
    local_2c = (uint)bVar11;
    pbVar20 = param_1;
    param_3 = (byte *)(param_4 >> 1);
    do {
      iVar15 = (int)((uint)*pbVar20 + param_6) >> 1;
      param_5 = (ushort *)(iVar15 << 0x18);
      puVar2 = param_5;
      iVar16 = (int)(pbVar20[1] + local_28) >> 1;
      param_1 = (byte *)(iVar16 << 0x18);
      pbVar22 = param_1;
      bVar4 = pbVar20[2];
      do {
        pbVar21 = pbVar20;
        pbVar10[1] = bVar5;
        *pbVar10 = (byte)param_6;
        pbVar10[2] = bVar11;
        param_5._3_1_ = (undefined1)iVar15;
        *param_2 = param_5._3_1_;
        param_1._3_1_ = (undefined1)iVar16;
        param_2[1] = param_1._3_1_;
        uVar12 = (undefined1)((int)(bVar4 + local_2c) >> 1);
        param_2[2] = uVar12;
        pbVar20 = pbVar21 + 3;
        pbVar10 = pbVar10 + 3;
        param_2 = param_2 + 3;
        local_c = local_c + -1;
        param_5 = puVar2;
        param_1 = pbVar22;
        if (local_c == 0) goto joined_r0x637096e1;
        param_3 = param_3 + iVar3 * -2;
      } while (-1 < (int)param_3);
      param_3 = param_3 + param_4;
      uVar1 = *local_24;
      bVar13 = (char)uVar1 << 3;
      bVar6 = (byte)(uVar1 >> 8) & 0xf8;
      bVar14 = (byte)(uVar1 >> 3) & 0xfc;
      uVar8 = (uint)bVar13;
      iVar15 = (int)(uVar8 + param_6) >> 1;
      param_6._0_1_ = (byte)iVar15;
      uVar9 = (uint)bVar14;
      uVar17 = (uint)bVar6;
      iVar18 = (int)(uVar17 + local_2c) >> 1;
      bVar11 = (byte)iVar18;
      iVar16 = (int)(uVar9 + local_28) >> 1;
      iVar15 = (int)(iVar15 + (uint)*pbVar20) >> 1;
      bVar5 = (byte)iVar16;
      param_5 = (ushort *)(iVar15 << 0x18);
      puVar2 = param_5;
      iVar16 = (int)((uint)pbVar21[4] + iVar16) >> 1;
      param_1 = (byte *)(iVar16 << 0x18);
      pbVar22 = param_1;
      bVar4 = pbVar21[5];
      do {
        pbVar21 = pbVar20;
        pbVar10[1] = bVar5;
        *pbVar10 = (byte)param_6;
        pbVar10[2] = bVar11;
        param_5._3_1_ = (undefined1)iVar15;
        *param_2 = param_5._3_1_;
        param_1._3_1_ = (undefined1)iVar16;
        param_2[1] = param_1._3_1_;
        uVar12 = (undefined1)((int)((uint)bVar4 + iVar18) >> 1);
        param_2[2] = uVar12;
        pbVar20 = pbVar21 + 3;
        pbVar10 = pbVar10 + 3;
        param_2 = param_2 + 3;
        local_c = local_c + -1;
        param_5 = puVar2;
        param_1 = pbVar22;
        if (local_c == 0) goto joined_r0x637096e1;
        param_3 = param_3 + iVar3 * -2;
      } while (-1 < (int)param_3);
      param_3 = param_3 + param_4;
      iVar16 = (int)(*pbVar20 + uVar8) >> 1;
      iVar15 = (int)(pbVar21[4] + uVar9) >> 1;
      uVar12 = (undefined1)((int)(pbVar21[5] + uVar17) >> 1);
      do {
        pbVar22 = pbVar20;
        pbVar20 = pbVar22 + 3;
        *pbVar10 = bVar13;
        pbVar10[1] = bVar14;
        pbVar10[2] = bVar6;
        param_5._3_1_ = (undefined1)iVar16;
        param_2[1] = (char)iVar15;
        *param_2 = param_5._3_1_;
        param_2[2] = uVar12;
        pbVar10 = pbVar10 + 3;
        param_2 = param_2 + 3;
        local_c = local_c + -1;
        if (local_c == 0) goto LAB_637096be;
        param_3 = param_3 + iVar3 * -2;
      } while (-1 < (int)param_3);
      param_3 = param_3 + param_4;
      uVar1 = local_24[1];
      local_24 = local_24 + 2;
      param_6 = (int)(byte)((char)uVar1 << 3);
      bVar11 = (byte)(uVar1 >> 8) & 0xf8;
      bVar5 = (byte)(uVar1 >> 3) & 0xfc;
      iVar15 = (int)(param_6 + uVar8) >> 1;
      local_1c = (uint)bVar5;
      bVar13 = (byte)iVar15;
      local_28 = local_1c;
      iVar18 = (int)(local_1c + uVar9) >> 1;
      bVar14 = (byte)iVar18;
      local_2c = (uint)bVar11;
      iVar19 = (int)(local_2c + uVar17) >> 1;
      bVar6 = (byte)iVar19;
      iVar16 = (int)(iVar15 + (uint)*pbVar20) >> 1;
      iVar15 = (int)((uint)pbVar22[4] + iVar18) >> 1;
      bVar4 = pbVar22[5];
      do {
        pbVar20 = pbVar20 + 3;
        *pbVar10 = bVar13;
        pbVar10[1] = bVar14;
        pbVar10[2] = bVar6;
        param_5._3_1_ = (undefined1)iVar16;
        *param_2 = param_5._3_1_;
        param_1._3_1_ = (undefined1)iVar15;
        param_2[1] = param_1._3_1_;
        uVar12 = (undefined1)((int)((uint)bVar4 + iVar19) >> 1);
        param_2[2] = uVar12;
        pbVar10 = pbVar10 + 3;
        param_2 = param_2 + 3;
        local_c = local_c + -1;
        if (local_c == 0) goto LAB_637096be;
        param_3 = param_3 + iVar3 * -2;
      } while (-1 < (int)param_3);
      param_3 = param_3 + param_4;
    } while( true );
  }
  param_6._0_1_ = bVar4;
  uVar12 = param_2._3_1_;
joined_r0x637096e1:
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    pbVar10[1] = bVar5;
    *pbVar10 = (byte)param_6;
    pbVar10[2] = bVar11;
    *param_2 = param_5._3_1_;
    param_2[1] = param_1._3_1_;
    param_2[2] = uVar12;
    param_2 = param_2 + 3;
    pbVar10 = pbVar10 + 3;
  }
  return;
LAB_637096be:
  param_5 = (ushort *)(iVar16 << 0x18);
  param_1 = (byte *)(iVar15 << 0x18);
  param_6._0_1_ = bVar13;
  bVar11 = bVar6;
  bVar5 = bVar14;
  goto joined_r0x637096e1;
}


