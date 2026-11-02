/* Module: rnco3260.dll
   Function: FUN_63706610
   Address: 63706610
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63706610(byte *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4,uint *param_5,
            uint param_6)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  uint *puVar15;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined1 local_4c;
  uint local_48;
  undefined1 local_3c;
  int local_38;
  int local_34;
  uint *local_30;
  uint local_24;
  undefined1 local_20;
  uint local_1c;
  uint local_18;
  byte *local_14;
  undefined1 local_10;
  int local_c;
  int local_8;
  
  if (param_6 != 0) {
    uVar1 = *param_5;
    puVar15 = param_5 + 1;
    bVar3 = (byte)(uVar1 >> 8);
    param_5 = (uint *)(uint)bVar3;
    bVar4 = (byte)(uVar1 >> 0x10);
    local_18 = uVar1 & 0xff;
    local_1c = (uint)bVar4;
    local_30 = param_5;
    local_14 = (byte *)((int)((uint)*param_1 + (uVar1 & 0xff)) >> 1);
    local_38 = (int)(param_1[2] + local_1c) >> 1;
    local_34 = (int)((uint)param_1[1] + (int)param_5) >> 1;
    pbVar13 = param_1 + 6;
    local_24 = param_6 - 1;
    uVar5 = SUB41(local_14,0);
    *param_3 = (char)uVar1;
    param_3[1] = bVar3;
    param_3[2] = bVar4;
    puVar6 = param_3 + 3;
    param_2[1] = (char)local_34;
    local_8._0_1_ = (undefined1)local_38;
    param_2[2] = (undefined1)local_8;
    *param_2 = uVar5;
    puVar7 = param_2 + 3;
    local_c = local_34;
    local_8 = local_38;
    if (1 < (int)local_24) {
      local_48 = local_24 >> 1;
      param_1 = local_14;
      do {
        uVar1 = *puVar15;
        bVar4 = (byte)(uVar1 >> 8);
        param_6 = (uint)bVar4;
        bVar3 = (byte)(uVar1 >> 0x10);
        param_3 = (undefined1 *)(uint)bVar3;
        uVar14 = uVar1 & 0xff;
        *puVar6 = (char)((int)(local_18 + uVar14) >> 1);
        param_5._0_1_ = (undefined1)((int)((int)local_30 + param_6) >> 1);
        puVar6[1] = param_5._0_1_;
        local_4c = (undefined1)uVar1;
        puVar6[3] = local_4c;
        puVar6[4] = bVar4;
        puVar6[2] = (char)((int)(param_3 + local_1c) >> 1);
        puVar6[5] = bVar3;
        local_50 = (uint)*pbVar13;
        local_54 = (uint)pbVar13[1];
        local_58 = (uint)pbVar13[2];
        iVar11 = (int)(local_54 + param_6) >> 1;
        iVar9 = (int)(local_50 + uVar14) >> 1;
        iVar12 = (int)(param_3 + local_58) >> 1;
        local_14._0_1_ = (undefined1)((int)(param_1 + iVar9) >> 1);
        puVar7[3] = (char)iVar9;
        param_2._0_1_ = (undefined1)iVar11;
        *puVar7 = local_14._0_1_;
        local_c._0_1_ = (undefined1)(local_34 + iVar11 >> 1);
        puVar7[4] = param_2._0_1_;
        local_20 = (undefined1)iVar12;
        puVar7[1] = (undefined1)local_c;
        local_8._0_1_ = (undefined1)(local_38 + iVar12 >> 1);
        puVar7[5] = local_20;
        puVar7[2] = (undefined1)local_8;
        uVar1 = puVar15[1];
        bVar3 = (byte)(uVar1 >> 8);
        param_5 = (uint *)(uint)bVar3;
        bVar4 = (byte)(uVar1 >> 0x10);
        local_18 = uVar1 & 0xff;
        puVar6[9] = (char)uVar1;
        local_30 = param_5;
        puVar6[10] = bVar3;
        local_1c = (uint)bVar4;
        puVar6[0xb] = bVar4;
        param_1._3_1_ = (undefined1)((int)(uVar14 + (uVar1 & 0xff)) >> 1);
        puVar6[6] = param_1._3_1_;
        param_6._0_1_ = (undefined1)((int)(param_6 + (int)param_5) >> 1);
        puVar6[7] = (undefined1)param_6;
        param_3._0_1_ = (undefined1)((int)(param_3 + local_1c) >> 1);
        puVar6[8] = param_3._0_1_;
        local_5c = (uint)pbVar13[6];
        local_34 = (int)((uint)pbVar13[7] + (int)param_5) >> 1;
        param_1 = (byte *)((int)(local_5c + (uVar1 & 0xff)) >> 1);
        uVar5 = SUB41(param_1,0);
        local_38 = (int)(pbVar13[8] + local_1c) >> 1;
        puVar7[9] = uVar5;
        pbVar13 = pbVar13 + 0xc;
        local_3c = (undefined1)((int)(param_1 + iVar9) >> 1);
        puVar7[6] = local_3c;
        param_2._0_1_ = (undefined1)(iVar11 + local_34 >> 1);
        puVar7[7] = param_2._0_1_;
        local_20 = (undefined1)(iVar12 + local_38 >> 1);
        puVar7[8] = local_20;
        local_c._0_1_ = (undefined1)local_34;
        puVar7[10] = (undefined1)local_c;
        local_8._0_1_ = (undefined1)local_38;
        puVar7[0xb] = (undefined1)local_8;
        puVar15 = puVar15 + 2;
        local_24 = local_24 - 2;
        puVar6 = puVar6 + 0xc;
        puVar7 = puVar7 + 0xc;
        local_48 = local_48 - 1;
        local_14 = param_1;
        local_c = local_34;
        local_8 = local_38;
      } while (local_48 != 0);
    }
    if (local_24 != 0) {
      uVar1 = *puVar15;
      bVar3 = (byte)(uVar1 >> 8);
      param_1 = (byte *)(uint)bVar3;
      pbVar2 = param_1;
      bVar10 = (byte)(uVar1 >> 0x10);
      param_6 = (uint)bVar10;
      uVar14 = param_6;
      puVar6[3] = (char)uVar1;
      puVar6[6] = (char)uVar1;
      local_18._0_1_ = (undefined1)((int)(local_18 + (uVar1 & 0xff)) >> 1);
      *puVar6 = (undefined1)local_18;
      param_5._0_1_ = (undefined1)((int)((int)param_5 + (int)param_1) >> 1);
      puVar6[1] = param_5._0_1_;
      local_10 = (undefined1)((int)(bVar4 + param_6) >> 1);
      puVar6[2] = local_10;
      puVar6[4] = bVar3;
      puVar6[5] = bVar10;
      puVar6[7] = bVar3;
      puVar6[8] = bVar10;
      param_1 = (byte *)(uint)*pbVar13;
      param_5 = (uint *)(uint)pbVar13[2];
      param_6 = (uint)pbVar13[1];
      iVar9 = (int)((int)param_5 + uVar14) >> 1;
      uVar5 = (undefined1)((int)(param_1 + (uVar1 & 0xff)) >> 1);
      uVar8 = (undefined1)((int)(pbVar2 + param_6) >> 1);
      puVar7[3] = uVar5;
      puVar7[4] = uVar8;
      puVar7[6] = uVar5;
      local_14._0_1_ = (undefined1)((int)(local_14 + ((int)(param_1 + (uVar1 & 0xff)) >> 1)) >> 1);
      *puVar7 = local_14._0_1_;
      local_c._0_1_ = (undefined1)(((int)(pbVar2 + param_6) >> 1) + local_c >> 1);
      puVar7[1] = (undefined1)local_c;
      local_8._0_1_ = (undefined1)(iVar9 + local_8 >> 1);
      puVar7[2] = (undefined1)local_8;
      param_1._0_1_ = (undefined1)iVar9;
      puVar7[5] = param_1._0_1_;
      puVar7[7] = uVar8;
      puVar7[8] = param_1._0_1_;
      return;
    }
    *puVar6 = (undefined1)local_18;
    puVar6[1] = param_5._0_1_;
    puVar6[2] = bVar4;
    *puVar7 = uVar5;
    puVar7[1] = (undefined1)local_c;
    puVar7[2] = (undefined1)local_8;
  }
  return;
}


