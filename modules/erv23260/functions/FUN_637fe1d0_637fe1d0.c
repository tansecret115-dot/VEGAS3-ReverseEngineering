/* Module: erv23260.dll
   Function: FUN_637fe1d0
   Address: 637fe1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_637fe1d0(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
                 int param_7,int param_8,undefined4 param_9,int param_10,int param_11,uint param_12,
                 int param_13)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  byte *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = (param_4 - 0x10) * param_5 + param_1;
  param_2 = ((param_4 >> 1) - 8) * param_5 + param_2;
  local_4c = param_5 * 0x10 + param_3;
  local_54 = local_4c >> 1;
  local_10 = param_6 + -1;
  param_6 = 0;
  local_1c = (param_4 >> 4) * (param_3 >> 4) - param_7 * local_10;
  param_3 = ((param_4 >> 4) - 1) * (param_3 >> 4);
  local_24 = param_5 * 8;
  local_58 = param_5 >> 1;
  iVar5 = param_5 * -2;
  iVar6 = local_58 + iVar5;
  local_38 = param_5 * 6;
  iVar7 = local_24 + 8;
  iVar9 = local_38 + 8;
  iVar1 = iVar5 + 8;
  local_44 = iVar5;
  local_20 = param_12;
  while (-1 < local_10) {
    if (local_1c - param_8 == param_6) {
      local_18 = (uint)(local_10 == 0);
    }
    else {
      local_18 = 0;
    }
    bVar2 = true;
    if (0 < param_8) {
      local_14 = (byte *)(param_3 + param_10);
      iVar8 = local_c + iVar1;
      iVar10 = iVar6 + param_2;
      local_2c = iVar5 - iVar1;
      local_50 = local_38 - iVar1;
      local_40 = iVar9 - iVar1;
      local_48 = 8 - iVar1;
      local_30 = local_24 - iVar1;
      local_34 = iVar7 - iVar1;
      local_5c = iVar5 - iVar6;
      local_3c = local_58 - iVar6;
      param_3 = param_3 + param_8;
      local_28 = param_8;
      do {
        local_bc = local_2c + iVar8;
        local_ac = local_50 + iVar8;
        local_a4 = local_40 + iVar8;
        local_64 = local_3c + iVar10;
        local_9c = local_5c + iVar10;
        local_8c = local_c;
        local_84 = local_48 + iVar8;
        local_7c = local_30 + iVar8;
        local_74 = local_34 + iVar8;
        param_4 = 0;
        param_1 = 0;
        if ((*local_14 & 0x1f) == 0) {
          uVar4 = 0;
          if (!bVar2) {
            param_4 = local_14[-1] & 0x1f;
          }
          if (local_18 == 0) {
            param_1 = local_14[-param_8] & 0x1f;
          }
        }
        else {
          uVar4 = *local_14 & 0x1f;
          if (!bVar2) {
            param_4 = uVar4;
          }
          if (local_18 == 0) {
            param_1 = uVar4;
          }
        }
        uVar3 = local_20;
        if ((param_12 != 0) && (uVar3 = uVar4, uVar4 == 0)) {
          if ((!bVar2) && (param_4 == 0)) {
            param_4 = local_20;
          }
          uVar4 = local_20;
          uVar3 = local_20;
          if ((local_18 == 0) && (param_1 == 0)) {
            param_1 = local_20;
          }
        }
        local_20 = uVar3;
        local_a8 = (int)*(char *)(uVar4 + param_13);
        local_88 = (int)*(char *)(param_4 + param_13);
        local_b8 = (int)*(char *)(param_1 + param_13);
        local_90 = local_b8;
        local_60 = local_88;
        if (param_11 != 0) {
          local_90 = (int)*(char *)(*(int *)(&DAT_6382f588 + param_1 * 4) + param_13);
          local_60 = (int)*(char *)(*(int *)(&DAT_6382f588 + param_4 * 4) + param_13);
        }
        local_b4 = iVar8;
        local_b0 = local_b8;
        local_a0 = local_a8;
        local_98 = local_90;
        local_94 = iVar10;
        local_80 = local_a8;
        local_78 = local_88;
        local_70 = local_a8;
        local_6c = param_2;
        local_68 = local_60;
        local_8 = local_88;
        FUN_637fe560((int)&local_bc,param_5);
        local_14 = local_14 + 1;
        local_c = local_c + 0x10;
        iVar8 = iVar8 + 0x10;
        param_2 = param_2 + 8;
        iVar10 = iVar10 + 8;
        local_28 = local_28 + -1;
        bVar2 = false;
        iVar5 = local_44;
      } while (local_28 != 0);
    }
    param_6 = param_6 + param_8;
    local_c = local_c - local_4c;
    param_2 = param_2 - local_54;
    param_3 = param_3 + param_8 * -2;
    if (local_1c <= param_6) {
      param_6 = 0;
      local_10 = local_10 + -1;
      local_1c = param_7;
    }
  }
  return;
}


