/* Module: rnco3260.dll
   Function: FUN_6370aaf0
   Address: 6370aaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370aaf0(byte *param_1,undefined1 *param_2,byte *param_3,undefined4 param_4,byte *param_5,
            uint param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_48;
  undefined1 local_3c;
  byte *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  byte *local_28;
  undefined1 local_1c;
  undefined1 local_18;
  undefined1 local_c;
  int local_8;
  
  if (param_6 != 0) {
    uVar7 = (uint)*param_5;
    pbVar16 = param_5 + 1;
    pbVar15 = param_1 + 6;
    bVar1 = *(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2);
    bVar2 = *(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1);
    bVar3 = *(byte *)(&DAT_637956a0 + uVar7);
    param_5 = (byte *)(uint)bVar2;
    local_48 = (uint)bVar1;
    local_2c = (uint)bVar3;
    local_28 = param_5;
    local_30 = (int)(*param_1 + local_48) >> 1;
    local_34 = (int)(param_5 + param_1[1]) >> 1;
    param_1 = (byte *)((int)(param_1[2] + local_2c) >> 1);
    param_6 = param_6 - 1;
    *param_3 = bVar1;
    param_3[1] = bVar2;
    param_3[2] = bVar3;
    pbVar8 = param_3 + 3;
    param_2[1] = (char)local_34;
    param_2[2] = param_1._0_1_;
    *param_2 = (char)local_30;
    puVar9 = param_2 + 3;
    local_8 = local_34;
    if (1 < (int)param_6) {
      local_5c = param_6 >> 1;
      puVar10 = puVar9;
      local_38 = param_1;
      do {
        uVar7 = (uint)*pbVar16;
        bVar2 = *(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2);
        param_3 = (byte *)(uint)bVar2;
        bVar1 = *(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1);
        param_2 = (undefined1 *)(uint)bVar1;
        bVar3 = *(byte *)(&DAT_637956a0 + uVar7);
        *pbVar8 = (byte)((int)(param_3 + local_48) >> 1);
        param_5._0_1_ = (byte)((int)(local_28 + (int)param_2) >> 1);
        pbVar8[1] = (byte)param_5;
        uVar17 = (uint)bVar3;
        pbVar8[3] = bVar2;
        pbVar8[4] = bVar1;
        pbVar8[2] = (byte)((int)(local_2c + uVar17) >> 1);
        pbVar8[5] = bVar3;
        local_60 = (uint)*pbVar15;
        local_64 = (uint)pbVar15[1];
        local_68 = (uint)pbVar15[2];
        iVar13 = (int)(param_2 + local_64) >> 1;
        iVar12 = (int)(param_3 + local_60) >> 1;
        iVar14 = (int)(local_68 + uVar17) >> 1;
        local_c = (undefined1)(local_30 + iVar12 >> 1);
        puVar10[3] = (char)iVar12;
        local_18 = (undefined1)iVar13;
        *puVar10 = local_c;
        local_8._0_1_ = (undefined1)(local_34 + iVar13 >> 1);
        puVar10[4] = local_18;
        local_1c = (undefined1)iVar14;
        puVar10[1] = (undefined1)local_8;
        param_1._0_1_ = (undefined1)((int)(local_38 + iVar14) >> 1);
        puVar10[5] = local_1c;
        puVar10[2] = param_1._0_1_;
        uVar7 = (uint)pbVar16[1];
        bVar1 = *(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 2);
        bVar2 = *(byte *)((int)&DAT_637956a0 + uVar7 * 4 + 1);
        param_5 = (byte *)(uint)bVar2;
        bVar3 = *(byte *)(&DAT_637956a0 + uVar7);
        local_48 = (uint)bVar1;
        local_28 = param_5;
        local_2c = (uint)bVar3;
        param_3._0_1_ = (byte)((int)(param_3 + local_48) >> 1);
        pbVar8[8] = (byte)((int)(local_2c + uVar17) >> 1);
        pbVar8[9] = bVar1;
        pbVar8[6] = (byte)param_3;
        param_2._0_1_ = (byte)((int)(param_5 + (int)param_2) >> 1);
        pbVar8[10] = bVar2;
        pbVar8[7] = (byte)param_2;
        pbVar8[0xb] = bVar3;
        local_6c = (uint)pbVar15[6];
        local_34 = (int)(param_5 + pbVar15[7]) >> 1;
        local_30 = (int)(local_6c + local_48) >> 1;
        param_1 = (byte *)((int)(pbVar15[8] + local_2c) >> 1);
        puVar10[9] = (char)local_30;
        pbVar15 = pbVar15 + 0xc;
        pbVar8 = pbVar8 + 0xc;
        puVar9 = puVar10 + 0xc;
        local_3c = (undefined1)(local_30 + iVar12 >> 1);
        puVar10[6] = local_3c;
        local_18 = (undefined1)(local_34 + iVar13 >> 1);
        puVar10[7] = local_18;
        local_1c = (undefined1)((int)(param_1 + iVar14) >> 1);
        puVar10[8] = local_1c;
        local_8._0_1_ = (undefined1)local_34;
        puVar10[10] = (undefined1)local_8;
        puVar10[0xb] = param_1._0_1_;
        param_6 = param_6 - 2;
        pbVar16 = pbVar16 + 2;
        local_5c = local_5c - 1;
        puVar10 = puVar9;
        local_38 = param_1;
        local_8 = local_34;
      } while (local_5c != 0);
    }
    if (param_6 != 0) {
      uVar17 = (uint)*pbVar16;
      bVar2 = *(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 2);
      param_3 = (byte *)(uint)bVar2;
      pbVar16 = param_3;
      bVar4 = *(byte *)((int)&DAT_637956a0 + uVar17 * 4 + 1);
      param_6 = (uint)bVar4;
      uVar7 = param_6;
      bVar5 = *(byte *)(&DAT_637956a0 + uVar17);
      param_2 = (undefined1 *)(uint)bVar5;
      *pbVar8 = (byte)((int)(param_3 + bVar1) >> 1);
      param_5._0_1_ = (byte)((int)(param_5 + param_6) >> 1);
      pbVar8[1] = (byte)param_5;
      pbVar8[2] = (byte)((int)(param_2 + bVar3) >> 1);
      pbVar8[3] = bVar2;
      pbVar8[4] = bVar4;
      pbVar8[6] = bVar2;
      pbVar8[5] = bVar5;
      pbVar8[7] = bVar4;
      pbVar8[8] = bVar5;
      param_6 = (uint)*pbVar15;
      param_3 = (byte *)(uint)pbVar15[2];
      param_5 = (byte *)(uint)pbVar15[1];
      uVar6 = (undefined1)((int)(pbVar16 + param_6) >> 1);
      uVar11 = (undefined1)((int)(param_5 + uVar7) >> 1);
      puVar9[3] = uVar6;
      puVar9[4] = uVar11;
      local_c = (undefined1)(local_30 + ((int)(pbVar16 + param_6) >> 1) >> 1);
      *puVar9 = local_c;
      local_8._0_1_ = (undefined1)(local_8 + ((int)(param_5 + uVar7) >> 1) >> 1);
      puVar9[1] = (undefined1)local_8;
      param_1._0_1_ = (undefined1)((int)(param_1 + ((int)(param_3 + (int)param_2) >> 1)) >> 1);
      puVar9[2] = param_1._0_1_;
      param_6._0_1_ = (undefined1)((int)(param_3 + (int)param_2) >> 1);
      puVar9[5] = (undefined1)param_6;
      puVar9[6] = uVar6;
      puVar9[7] = uVar11;
      puVar9[8] = (undefined1)param_6;
      return;
    }
    *pbVar8 = bVar1;
    pbVar8[1] = (byte)param_5;
    pbVar8[2] = bVar3;
    *puVar9 = (char)local_30;
    puVar9[1] = (undefined1)local_8;
    puVar9[2] = param_1._0_1_;
  }
  return;
}


