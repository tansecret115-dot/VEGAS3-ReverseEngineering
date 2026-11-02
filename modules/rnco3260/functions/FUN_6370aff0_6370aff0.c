/* Module: rnco3260.dll
   Function: FUN_6370aff0
   Address: 6370aff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370aff0(byte *param_1,undefined1 *param_2,byte *param_3,int param_4,byte *param_5,int param_6)

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
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  undefined1 uVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint local_24;
  byte *local_20;
  int local_c;
  
  iVar2 = param_6;
  pbVar16 = param_3;
  iVar9 = (param_4 * 2 - (param_4 >> 1)) / (param_6 * 2);
  if (param_4 == 0) {
    return;
  }
  uVar11 = (uint)*param_5;
  bVar6 = *(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2);
  param_3 = (byte *)(uint)bVar6;
  bVar7 = *(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1);
  bVar5 = *(byte *)(&DAT_637956a0 + uVar11);
  param_6 = (int)bVar7;
  local_20 = param_5 + 1;
  local_c = param_4 - iVar9;
  puVar18 = param_2;
  if (local_c != 0) {
    local_24 = (uint)bVar5;
    param_2 = (undefined1 *)(param_4 >> 1);
    do {
      iVar10 = (int)((uint)param_1[1] + param_6) >> 1;
      param_5 = (byte *)(iVar10 << 0x18);
      pbVar20 = param_5;
      bVar6 = param_1[2];
      uVar17 = (undefined1)((int)(param_3 + *param_1) >> 1);
      do {
        pbVar19 = param_1;
        param_1 = pbVar19 + 3;
        *pbVar16 = (byte)param_3;
        pbVar16[1] = (byte)param_6;
        pbVar16[2] = bVar5;
        param_5._3_1_ = (undefined1)iVar10;
        puVar18[1] = param_5._3_1_;
        *puVar18 = uVar17;
        uVar3 = (undefined1)((int)(bVar6 + local_24) >> 1);
        puVar18[2] = uVar3;
        pbVar16 = pbVar16 + 3;
        puVar18 = puVar18 + 3;
        local_c = local_c + -1;
        param_5 = pbVar20;
        if (local_c == 0) goto joined_r0x6370b36f;
        param_2 = param_2 + iVar2 * -2;
      } while (-1 < (int)param_2);
      param_2 = param_2 + param_4;
      uVar11 = (uint)*local_20;
      bVar6 = *(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 2);
      bVar7 = *(byte *)((int)&DAT_637956a0 + uVar11 * 4 + 1);
      bVar8 = *(byte *)(&DAT_637956a0 + uVar11);
      uVar11 = (uint)bVar6;
      bVar4 = (byte)((int)(param_3 + uVar11) >> 1);
      uVar12 = (uint)bVar7;
      iVar10 = (int)(uVar12 + param_6) >> 1;
      param_6._0_1_ = (byte)iVar10;
      uVar13 = (uint)bVar8;
      iVar14 = (int)(uVar13 + local_24) >> 1;
      bVar5 = (byte)iVar14;
      iVar10 = (int)((uint)pbVar19[4] + iVar10) >> 1;
      param_5 = (byte *)(iVar10 << 0x18);
      pbVar20 = param_5;
      bVar1 = pbVar19[5];
      uVar17 = (undefined1)((int)(((int)(param_3 + uVar11) >> 1) + (uint)*param_1) >> 1);
      do {
        pbVar19 = param_1;
        param_1 = pbVar19 + 3;
        *pbVar16 = bVar4;
        pbVar16[1] = (byte)param_6;
        pbVar16[2] = bVar5;
        param_5._3_1_ = (undefined1)iVar10;
        puVar18[1] = param_5._3_1_;
        *puVar18 = uVar17;
        uVar3 = (undefined1)((int)((uint)bVar1 + iVar14) >> 1);
        puVar18[2] = uVar3;
        pbVar16 = pbVar16 + 3;
        puVar18 = puVar18 + 3;
        local_c = local_c + -1;
        param_3._0_1_ = bVar4;
        param_5 = pbVar20;
        if (local_c == 0) goto joined_r0x6370b36f;
        param_2 = param_2 + iVar2 * -2;
      } while (-1 < (int)param_2);
      param_2 = param_2 + param_4;
      iVar10 = (int)(pbVar19[4] + uVar12) >> 1;
      bVar5 = pbVar19[5];
      uVar17 = (undefined1)((int)(*param_1 + uVar11) >> 1);
      do {
        pbVar20 = param_1;
        param_1 = pbVar20 + 3;
        *pbVar16 = bVar6;
        pbVar16[1] = bVar7;
        pbVar16[2] = bVar8;
        param_5._3_1_ = (undefined1)iVar10;
        puVar18[1] = param_5._3_1_;
        *puVar18 = uVar17;
        uVar3 = (undefined1)((int)(bVar5 + uVar13) >> 1);
        puVar18[2] = uVar3;
        pbVar16 = pbVar16 + 3;
        puVar18 = puVar18 + 3;
        local_c = local_c + -1;
        if (local_c == 0) goto LAB_6370b34f;
        param_2 = param_2 + iVar2 * -2;
      } while (-1 < (int)param_2);
      param_2 = param_2 + param_4;
      uVar15 = (uint)local_20[1];
      local_20 = local_20 + 2;
      param_3 = (byte *)(uint)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 2);
      bVar5 = *(byte *)(&DAT_637956a0 + uVar15);
      param_6 = (int)*(byte *)((int)&DAT_637956a0 + uVar15 * 4 + 1);
      bVar6 = (byte)((int)(param_3 + uVar11) >> 1);
      iVar10 = (int)(param_6 + uVar12) >> 1;
      bVar7 = (byte)iVar10;
      local_24 = (uint)bVar5;
      iVar14 = (int)(local_24 + uVar13) >> 1;
      bVar8 = (byte)iVar14;
      iVar10 = (int)((uint)pbVar20[4] + iVar10) >> 1;
      bVar1 = pbVar20[5];
      uVar17 = (undefined1)((int)(((int)(param_3 + uVar11) >> 1) + (uint)*param_1) >> 1);
      do {
        param_1 = param_1 + 3;
        *pbVar16 = bVar6;
        pbVar16[1] = bVar7;
        pbVar16[2] = bVar8;
        param_5._3_1_ = (undefined1)iVar10;
        puVar18[1] = param_5._3_1_;
        *puVar18 = uVar17;
        uVar3 = (undefined1)((int)((uint)bVar1 + iVar14) >> 1);
        puVar18[2] = uVar3;
        pbVar16 = pbVar16 + 3;
        puVar18 = puVar18 + 3;
        local_c = local_c + -1;
        if (local_c == 0) goto LAB_6370b34f;
        param_2 = param_2 + iVar2 * -2;
      } while (-1 < (int)param_2);
      param_2 = param_2 + param_4;
    } while( true );
  }
  param_6._0_1_ = bVar7;
  param_3._0_1_ = bVar6;
  uVar3 = param_1._3_1_;
  uVar17 = param_4._3_1_;
joined_r0x6370b36f:
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pbVar16 = (byte)param_3;
    pbVar16[1] = (byte)param_6;
    pbVar16[2] = bVar5;
    *puVar18 = uVar17;
    puVar18[1] = param_5._3_1_;
    puVar18[2] = uVar3;
    pbVar16 = pbVar16 + 3;
    puVar18 = puVar18 + 3;
  }
  return;
LAB_6370b34f:
  param_5 = (byte *)(iVar10 << 0x18);
  param_6._0_1_ = bVar7;
  param_3._0_1_ = bVar6;
  bVar5 = bVar8;
  goto joined_r0x6370b36f;
}


