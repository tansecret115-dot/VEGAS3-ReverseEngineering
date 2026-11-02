/* Module: rnco3260.dll
   Function: FUN_63707360
   Address: 63707360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63707360(byte *param_1,undefined1 *param_2,byte *param_3,undefined4 param_4,uint *param_5,
            uint param_6)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  uint *puVar15;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  byte local_40;
  undefined1 local_38;
  int local_34;
  byte *local_30;
  int local_2c;
  uint *local_28;
  uint local_24;
  undefined1 local_20;
  undefined1 local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  byte local_c;
  int local_8;
  
  if (param_6 != 0) {
    uVar1 = *param_5;
    puVar15 = param_5 + 1;
    bVar3 = (byte)(uVar1 >> 0x10);
    bVar4 = (byte)(uVar1 >> 8);
    param_5 = (uint *)(uint)bVar4;
    local_24 = (uint)bVar3;
    local_28 = param_5;
    local_30 = (byte *)((int)((uint)param_1[1] + (int)param_5) >> 1);
    local_34 = (int)((uint)param_1[2] + (uVar1 & 0xff)) >> 1;
    local_2c = (int)(*param_1 + local_24) >> 1;
    pbVar13 = param_1 + 6;
    local_18 = param_6 - 1;
    local_14 = uVar1 & 0xff;
    *param_3 = bVar3;
    param_3[2] = (byte)uVar1;
    param_3[1] = bVar4;
    param_1._0_1_ = SUB41(local_30,0);
    param_2[1] = param_1._0_1_;
    local_8._0_1_ = (undefined1)local_34;
    param_2[2] = (undefined1)local_8;
    uVar5 = (undefined1)local_2c;
    *param_2 = uVar5;
    pbVar6 = param_3 + 3;
    puVar7 = param_2 + 3;
    param_1 = local_30;
    local_10 = local_2c;
    local_8 = local_34;
    if (1 < (int)local_18) {
      local_54 = local_18 >> 1;
      do {
        uVar1 = *puVar15;
        bVar3 = (byte)(uVar1 >> 0x10);
        param_3 = (byte *)(uint)bVar3;
        bVar4 = (byte)(uVar1 >> 8);
        param_2 = (undefined1 *)(uint)bVar4;
        uVar14 = uVar1 & 0xff;
        pbVar6[2] = (byte)((int)(local_14 + uVar14) >> 1);
        pbVar6[3] = bVar3;
        *pbVar6 = (byte)((int)(param_3 + local_24) >> 1);
        param_5._0_1_ = (byte)((int)(param_2 + (int)local_28) >> 1);
        pbVar6[4] = bVar4;
        local_40 = (byte)uVar1;
        pbVar6[1] = (byte)param_5;
        pbVar6[5] = local_40;
        local_58 = (uint)*pbVar13;
        local_5c = (uint)pbVar13[1];
        local_60 = (uint)pbVar13[2];
        iVar11 = (int)(param_2 + local_5c) >> 1;
        iVar9 = (int)(param_3 + local_58) >> 1;
        iVar12 = (int)(local_60 + uVar14) >> 1;
        puVar7[3] = (char)iVar9;
        local_1c = (undefined1)iVar11;
        local_10._0_1_ = (undefined1)(iVar9 + local_2c >> 1);
        *puVar7 = (undefined1)local_10;
        param_1._0_1_ = (undefined1)((int)(local_30 + iVar11) >> 1);
        puVar7[4] = local_1c;
        local_20 = (undefined1)iVar12;
        puVar7[1] = param_1._0_1_;
        local_8._0_1_ = (undefined1)(iVar12 + local_34 >> 1);
        puVar7[5] = local_20;
        puVar7[2] = (undefined1)local_8;
        uVar1 = puVar15[1];
        local_14 = uVar1 & 0xff;
        bVar3 = (byte)(uVar1 >> 0x10);
        pbVar6[0xb] = (byte)uVar1;
        bVar4 = (byte)(uVar1 >> 8);
        param_5 = (uint *)(uint)bVar4;
        local_24 = (uint)bVar3;
        local_28 = param_5;
        param_3._0_1_ = (byte)((int)(param_3 + local_24) >> 1);
        pbVar6[6] = (byte)param_3;
        param_2._0_1_ = (byte)((int)(param_2 + (int)param_5) >> 1);
        pbVar6[7] = (byte)param_2;
        param_6._3_1_ = (byte)((int)(uVar14 + (uVar1 & 0xff)) >> 1);
        pbVar6[8] = param_6._3_1_;
        pbVar6[9] = bVar3;
        pbVar6[10] = bVar4;
        local_64 = (uint)pbVar13[6];
        param_1 = (byte *)((int)((uint)pbVar13[7] + (int)param_5) >> 1);
        local_2c = (int)(local_64 + local_24) >> 1;
        uVar5 = (undefined1)local_2c;
        local_34 = (int)((uint)pbVar13[8] + (uVar1 & 0xff)) >> 1;
        puVar7[9] = uVar5;
        pbVar13 = pbVar13 + 0xc;
        pbVar6 = pbVar6 + 0xc;
        local_38 = (undefined1)(iVar9 + local_2c >> 1);
        puVar7[6] = local_38;
        local_1c = (undefined1)((int)(param_1 + iVar11) >> 1);
        puVar7[7] = local_1c;
        local_20 = (undefined1)(iVar12 + local_34 >> 1);
        puVar7[8] = local_20;
        puVar7[10] = param_1._0_1_;
        local_8._0_1_ = (undefined1)local_34;
        puVar7[0xb] = (undefined1)local_8;
        puVar15 = puVar15 + 2;
        local_18 = local_18 - 2;
        puVar7 = puVar7 + 0xc;
        local_54 = local_54 - 1;
        local_30 = param_1;
        local_10 = local_2c;
        local_8 = local_34;
      } while (local_54 != 0);
    }
    if (local_18 != 0) {
      uVar1 = *puVar15;
      pbVar6[5] = (byte)uVar1;
      bVar4 = (byte)(uVar1 >> 0x10);
      param_6 = (uint)bVar4;
      uVar14 = param_6;
      pbVar6[8] = (byte)uVar1;
      bVar10 = (byte)(uVar1 >> 8);
      param_3 = (byte *)(uint)bVar10;
      pbVar2 = param_3;
      local_c = (byte)((int)(bVar3 + param_6) >> 1);
      *pbVar6 = local_c;
      param_5._0_1_ = (byte)((int)((int)param_5 + (int)param_3) >> 1);
      pbVar6[1] = (byte)param_5;
      local_14._0_1_ = (byte)((int)(local_14 + (uVar1 & 0xff)) >> 1);
      pbVar6[2] = (byte)local_14;
      pbVar6[3] = bVar4;
      pbVar6[4] = bVar10;
      pbVar6[6] = bVar4;
      pbVar6[7] = bVar10;
      param_6 = (uint)*pbVar13;
      param_3 = (byte *)(uint)pbVar13[2];
      param_5 = (uint *)(uint)pbVar13[1];
      iVar9 = (int)(param_6 + uVar14) >> 1;
      uVar5 = (undefined1)iVar9;
      iVar11 = (int)((int)param_5 + (int)pbVar2) >> 1;
      uVar8 = (undefined1)iVar11;
      puVar7[3] = uVar5;
      puVar7[4] = uVar8;
      puVar7[6] = uVar5;
      puVar7[7] = uVar8;
      local_10._0_1_ = (undefined1)(iVar9 + local_10 >> 1);
      *puVar7 = (undefined1)local_10;
      param_1._0_1_ = (undefined1)((int)(param_1 + iVar11) >> 1);
      puVar7[1] = param_1._0_1_;
      local_8._0_1_ = (undefined1)(local_8 + ((int)(param_3 + (uVar1 & 0xff)) >> 1) >> 1);
      puVar7[2] = (undefined1)local_8;
      param_6._0_1_ = (undefined1)((int)(param_3 + (uVar1 & 0xff)) >> 1);
      puVar7[5] = (undefined1)param_6;
      puVar7[8] = (undefined1)param_6;
      return;
    }
    *pbVar6 = bVar3;
    pbVar6[1] = (byte)param_5;
    pbVar6[2] = (byte)local_14;
    *puVar7 = uVar5;
    puVar7[1] = param_1._0_1_;
    puVar7[2] = (undefined1)local_8;
  }
  return;
}


