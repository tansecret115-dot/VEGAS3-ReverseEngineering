/* Module: rnco3260.dll
   Function: FUN_637080a0
   Address: 637080a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637080a0(byte *param_1,undefined1 *param_2,byte *param_3,undefined4 param_4,byte *param_5,
            uint param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  undefined1 uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  byte *local_44;
  int local_40;
  undefined1 local_30;
  uint local_28;
  byte *local_24;
  uint local_20;
  undefined1 local_1c;
  undefined1 local_18;
  int local_10;
  byte local_c;
  int local_8;
  
  pbVar15 = param_5;
  if (param_6 != 0) {
    bVar1 = *param_5;
    bVar2 = param_5[2];
    bVar3 = param_5[1];
    local_20 = (uint)bVar1;
    param_5 = (byte *)(uint)bVar3;
    local_28 = (uint)bVar2;
    pbVar15 = pbVar15 + 3;
    local_24 = param_5;
    pbVar16 = param_1 + 6;
    local_48 = (int)(param_1[2] + local_28) >> 1;
    local_40 = (int)(*param_1 + local_20) >> 1;
    param_1 = (byte *)((int)(param_5 + param_1[1]) >> 1);
    param_6 = param_6 - 1;
    local_8._0_1_ = (undefined1)local_40;
    *param_3 = bVar1;
    param_3[1] = bVar3;
    param_3[2] = bVar2;
    pbVar8 = param_3 + 3;
    param_2[1] = (char)param_1;
    local_10._0_1_ = (undefined1)local_48;
    param_2[2] = (undefined1)local_10;
    *param_2 = (undefined1)local_8;
    puVar9 = param_2 + 3;
    local_10 = local_48;
    iVar12 = local_40;
    if (1 < (int)param_6) {
      local_4c = param_6 >> 1;
      local_44 = param_1;
      do {
        bVar3 = *pbVar15;
        param_3 = (byte *)(uint)bVar3;
        bVar1 = pbVar15[1];
        param_2 = (undefined1 *)(uint)bVar1;
        bVar2 = pbVar15[2];
        uVar11 = (uint)bVar2;
        local_c = (byte)((int)(param_3 + local_20) >> 1);
        pbVar8[2] = (byte)((int)(uVar11 + local_28) >> 1);
        pbVar8[3] = bVar3;
        *pbVar8 = local_c;
        param_5._0_1_ = (byte)((int)(param_2 + (int)local_24) >> 1);
        pbVar8[4] = bVar1;
        pbVar8[1] = (byte)param_5;
        pbVar8[5] = bVar2;
        local_50 = (uint)*pbVar16;
        local_54 = (uint)pbVar16[1];
        local_58 = (uint)pbVar16[2];
        iVar12 = (int)(param_3 + local_50) >> 1;
        iVar13 = (int)(param_2 + local_54) >> 1;
        iVar14 = (int)(local_58 + uVar11) >> 1;
        local_8._0_1_ = (undefined1)(iVar12 + local_40 >> 1);
        puVar9[2] = (char)(iVar14 + local_48 >> 1);
        local_18 = (undefined1)iVar12;
        *puVar9 = (undefined1)local_8;
        param_1._0_1_ = (undefined1)((int)(local_44 + iVar13) >> 1);
        puVar9[3] = local_18;
        local_1c = (undefined1)iVar13;
        puVar9[1] = param_1._0_1_;
        puVar9[4] = local_1c;
        local_30 = (undefined1)iVar14;
        puVar9[5] = local_30;
        bVar1 = pbVar15[3];
        bVar3 = pbVar15[4];
        param_5 = (byte *)(uint)bVar3;
        bVar2 = pbVar15[5];
        local_20 = (uint)bVar1;
        local_24 = param_5;
        local_28 = (uint)bVar2;
        param_3._0_1_ = (byte)((int)(param_3 + local_20) >> 1);
        pbVar8[8] = (byte)((int)(local_28 + uVar11) >> 1);
        pbVar8[9] = bVar1;
        pbVar8[6] = (byte)param_3;
        param_2._0_1_ = (byte)((int)(param_5 + (int)param_2) >> 1);
        pbVar8[10] = bVar3;
        pbVar8[7] = (byte)param_2;
        pbVar8[0xb] = bVar2;
        local_5c = (uint)pbVar16[6];
        local_40 = (int)(local_5c + local_20) >> 1;
        param_1 = (byte *)((int)(param_5 + pbVar16[7]) >> 1);
        local_48 = (int)(pbVar16[8] + local_28) >> 1;
        pbVar15 = pbVar15 + 6;
        pbVar16 = pbVar16 + 0xc;
        local_18 = (undefined1)(local_40 + iVar12 >> 1);
        pbVar8 = pbVar8 + 0xc;
        puVar9[6] = local_18;
        local_1c = (undefined1)((int)(param_1 + iVar13) >> 1);
        puVar9[7] = local_1c;
        puVar9[10] = param_1._0_1_;
        local_10._0_1_ = (undefined1)local_48;
        puVar9[0xb] = (undefined1)local_10;
        puVar9[8] = (char)(local_48 + iVar14 >> 1);
        local_8._0_1_ = (undefined1)local_40;
        param_6 = param_6 - 2;
        puVar9[9] = (undefined1)local_8;
        puVar9 = puVar9 + 0xc;
        local_4c = local_4c - 1;
        local_44 = param_1;
        local_10 = local_48;
        iVar12 = local_40;
      } while (local_4c != 0);
    }
    local_8 = iVar12;
    if (param_6 != 0) {
      bVar3 = *pbVar15;
      param_3 = (byte *)(uint)bVar3;
      pbVar6 = param_3;
      bVar4 = pbVar15[1];
      param_6 = (uint)bVar4;
      uVar11 = param_6;
      bVar5 = pbVar15[2];
      param_2 = (undefined1 *)(uint)bVar5;
      *pbVar8 = (byte)((int)(param_3 + bVar1) >> 1);
      param_5._0_1_ = (byte)((int)(param_5 + param_6) >> 1);
      pbVar8[1] = (byte)param_5;
      pbVar8[2] = (byte)((int)(param_2 + bVar2) >> 1);
      pbVar8[3] = bVar3;
      pbVar8[4] = bVar4;
      pbVar8[6] = bVar3;
      pbVar8[5] = bVar5;
      pbVar8[7] = bVar4;
      pbVar8[8] = bVar5;
      param_6 = (uint)*pbVar16;
      param_3 = (byte *)(uint)pbVar16[2];
      param_5 = (byte *)(uint)pbVar16[1];
      uVar7 = (undefined1)((int)(pbVar6 + param_6) >> 1);
      uVar10 = (undefined1)((int)(param_5 + uVar11) >> 1);
      local_8._0_1_ = (undefined1)(((int)(pbVar6 + param_6) >> 1) + local_8 >> 1);
      *puVar9 = (undefined1)local_8;
      param_1._0_1_ = (undefined1)((int)(param_1 + ((int)(param_5 + uVar11) >> 1)) >> 1);
      puVar9[1] = param_1._0_1_;
      local_10._0_1_ = (undefined1)(((int)(param_3 + (int)param_2) >> 1) + local_10 >> 1);
      puVar9[2] = (undefined1)local_10;
      param_6._0_1_ = (undefined1)((int)(param_3 + (int)param_2) >> 1);
      puVar9[3] = uVar7;
      puVar9[4] = uVar10;
      puVar9[5] = (undefined1)param_6;
      puVar9[6] = uVar7;
      puVar9[7] = uVar10;
      puVar9[8] = (undefined1)param_6;
      return;
    }
    *pbVar8 = bVar1;
    pbVar8[1] = (byte)param_5;
    pbVar8[2] = bVar2;
    *puVar9 = (undefined1)local_8;
    puVar9[1] = param_1._0_1_;
    puVar9[2] = (undefined1)local_10;
  }
  return;
}


