/* Module: rnco3260.dll
   Function: FUN_63709ca0
   Address: 63709ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63709ca0(byte *param_1,undefined1 *param_2,byte *param_3,undefined4 param_4,ushort *param_5,
            uint param_6)

{
  ushort uVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 uVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte bVar10;
  byte bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  ushort *puVar19;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_48;
  undefined1 local_3c;
  byte *local_38;
  ushort *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  undefined1 local_1c;
  undefined1 local_18;
  undefined1 local_c;
  byte local_8;
  
  if (param_6 != 0) {
    uVar1 = *param_5;
    puVar19 = param_5 + 1;
    bVar10 = *param_1;
    bVar6 = (char)uVar1 << 3;
    bVar3 = (byte)(uVar1 >> 7) & 0xf8;
    pbVar18 = param_1 + 6;
    bVar7 = (byte)(uVar1 >> 2) & 0xf8;
    local_48 = (uint)bVar6;
    local_28 = (uint)bVar7;
    param_5 = (ushort *)((int)(param_1[1] + local_28) >> 1);
    local_2c = (uint)bVar3;
    param_1 = (byte *)((int)(param_1[2] + local_2c) >> 1);
    local_30 = (int)(bVar10 + local_48) >> 1;
    param_6 = param_6 - 1;
    param_3[1] = bVar7;
    param_3[2] = bVar3;
    *param_3 = bVar6;
    param_2[1] = param_5._0_1_;
    param_2[2] = param_1._0_1_;
    *param_2 = (char)local_30;
    pbVar5 = param_3 + 3;
    puVar8 = param_2 + 3;
    if (1 < (int)param_6) {
      local_5c = param_6 >> 1;
      puVar9 = puVar8;
      local_38 = param_1;
      local_34 = param_5;
      do {
        uVar1 = *puVar19;
        bVar3 = (char)uVar1 << 3;
        param_3 = (byte *)(uint)bVar3;
        bVar6 = (byte)(uVar1 >> 2) & 0xf8;
        param_2 = (undefined1 *)(uint)bVar6;
        bVar10 = (byte)(uVar1 >> 7) & 0xf8;
        uVar13 = (uint)bVar10;
        pbVar5[2] = (byte)((int)(uVar13 + local_2c) >> 1);
        pbVar5[3] = bVar3;
        *pbVar5 = (byte)((int)(param_3 + local_48) >> 1);
        local_8 = (byte)((int)(param_2 + local_28) >> 1);
        pbVar5[4] = bVar6;
        pbVar5[1] = local_8;
        pbVar5[5] = bVar10;
        local_60 = (uint)*pbVar18;
        local_64 = (uint)pbVar18[1];
        local_68 = (uint)pbVar18[2];
        iVar16 = (int)(param_2 + local_64) >> 1;
        iVar14 = (int)(param_3 + local_60) >> 1;
        iVar17 = (int)(local_68 + uVar13) >> 1;
        puVar9[3] = (char)iVar14;
        local_18 = (undefined1)iVar16;
        puVar9[4] = local_18;
        local_1c = (undefined1)iVar17;
        local_c = (undefined1)(iVar14 + local_30 >> 1);
        puVar9[5] = local_1c;
        *puVar9 = local_c;
        param_5._0_1_ = (undefined1)(iVar16 + (int)local_34 >> 1);
        puVar9[1] = param_5._0_1_;
        param_1._0_1_ = (undefined1)((int)(local_38 + iVar17) >> 1);
        puVar9[2] = param_1._0_1_;
        uVar1 = puVar19[1];
        bVar6 = (char)uVar1 << 3;
        bVar3 = (byte)(uVar1 >> 7) & 0xf8;
        local_48 = (uint)bVar6;
        bVar7 = (byte)(uVar1 >> 2) & 0xf8;
        local_28 = (uint)bVar7;
        local_2c = (uint)bVar3;
        param_3._0_1_ = (byte)((int)(param_3 + local_48) >> 1);
        pbVar5[8] = (byte)((int)(local_2c + uVar13) >> 1);
        pbVar5[9] = bVar6;
        pbVar5[6] = (byte)param_3;
        param_2._0_1_ = (byte)((int)(param_2 + local_28) >> 1);
        pbVar5[10] = bVar7;
        pbVar5[7] = (byte)param_2;
        pbVar5[0xb] = bVar3;
        local_6c = (uint)pbVar18[6];
        param_5 = (ushort *)((int)(pbVar18[7] + local_28) >> 1);
        local_30 = (int)(local_6c + local_48) >> 1;
        param_1 = (byte *)((int)(pbVar18[8] + local_2c) >> 1);
        puVar9[9] = (char)local_30;
        pbVar18 = pbVar18 + 0xc;
        pbVar5 = pbVar5 + 0xc;
        puVar8 = puVar9 + 0xc;
        local_3c = (undefined1)(local_30 + iVar14 >> 1);
        puVar9[6] = local_3c;
        local_18 = (undefined1)((int)param_5 + iVar16 >> 1);
        puVar9[7] = local_18;
        local_1c = (undefined1)((int)(param_1 + iVar17) >> 1);
        puVar9[8] = local_1c;
        puVar9[10] = param_5._0_1_;
        puVar9[0xb] = param_1._0_1_;
        puVar19 = puVar19 + 2;
        param_6 = param_6 - 2;
        local_5c = local_5c - 1;
        puVar9 = puVar8;
        local_38 = param_1;
        local_34 = param_5;
      } while (local_5c != 0);
    }
    if (param_6 != 0) {
      uVar1 = *puVar19;
      bVar10 = (char)uVar1 << 3;
      param_3 = (byte *)(uint)bVar10;
      pbVar2 = param_3;
      bVar11 = (byte)(uVar1 >> 2) & 0xf8;
      param_6 = (uint)bVar11;
      uVar13 = param_6;
      bVar15 = (byte)(uVar1 >> 7) & 0xf8;
      param_2 = (undefined1 *)(uint)bVar15;
      puVar9 = param_2;
      *pbVar5 = (byte)((int)(param_3 + bVar6) >> 1);
      local_8 = (byte)((int)(bVar7 + param_6) >> 1);
      pbVar5[1] = local_8;
      pbVar5[2] = (byte)((int)(param_2 + bVar3) >> 1);
      pbVar5[3] = bVar10;
      pbVar5[4] = bVar11;
      pbVar5[6] = bVar10;
      pbVar5[5] = bVar15;
      pbVar5[7] = bVar11;
      pbVar5[8] = bVar15;
      param_6 = (uint)*pbVar18;
      param_2 = (undefined1 *)(uint)pbVar18[2];
      param_3 = (byte *)(uint)pbVar18[1];
      uVar4 = (undefined1)((int)(pbVar2 + param_6) >> 1);
      uVar12 = (undefined1)((int)(param_3 + uVar13) >> 1);
      puVar8[3] = uVar4;
      puVar8[4] = uVar12;
      puVar8[6] = uVar4;
      local_c = (undefined1)(((int)(pbVar2 + param_6) >> 1) + local_30 >> 1);
      *puVar8 = local_c;
      param_5._0_1_ = (undefined1)(((int)(param_3 + uVar13) >> 1) + (int)param_5 >> 1);
      puVar8[1] = param_5._0_1_;
      param_1._0_1_ = (undefined1)((int)(param_1 + ((int)(param_2 + (int)puVar9) >> 1)) >> 1);
      puVar8[2] = param_1._0_1_;
      param_6._0_1_ = (undefined1)((int)(param_2 + (int)puVar9) >> 1);
      puVar8[5] = (undefined1)param_6;
      puVar8[7] = uVar12;
      puVar8[8] = (undefined1)param_6;
      return;
    }
    *pbVar5 = bVar6;
    pbVar5[1] = bVar7;
    pbVar5[2] = bVar3;
    *puVar8 = (char)local_30;
    puVar8[1] = param_5._0_1_;
    puVar8[2] = param_1._0_1_;
  }
  return;
}


