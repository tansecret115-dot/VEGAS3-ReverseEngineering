/* Module: vegas30k.dll
   Function: _SfDibCopyInterlace@40
   Address: 010e1120
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDibCopyInterlace_40
              (int *param_1,int *param_2,int *param_3,int param_4,int *param_5,int *param_6,
              int *param_7,int param_8,undefined4 param_9,uint param_10)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  HGLOBAL pvVar4;
  int iVar5;
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
  int *local_78;
  int local_74;
  undefined1 local_70 [4];
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *local_54;
  int *local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  LPCVOID local_c [2];
  uint local_4;
  
                    /* 0xe1120  841  _SfDibCopyInterlace@40 */
  local_94 = (-(uint)((param_10 & 0x1000000) != 0) & 0x3fff) + 1;
  if (param_3 == (int *)0x0) {
    local_a8 = param_1[1] * local_94;
    local_b0 = 0;
    local_ac = 0;
    local_a4 = param_1[2] * local_94;
  }
  else {
    local_b0 = *param_3;
    local_a8 = param_3[2];
    local_ac = param_3[1];
    local_a4 = param_3[3];
  }
  if (param_7 == (int *)0x0) {
    local_a0 = 0;
    local_9c = 0;
    local_98 = param_5[1] * local_94;
    local_94 = param_5[2] * local_94;
  }
  else {
    local_a0 = *param_7;
    local_98 = param_7[2];
    local_94 = param_7[3];
    local_9c = param_7[1];
  }
  if ((param_10 & 0x1000000) != 0) {
    local_ac = (int)(local_ac + (local_ac >> 0x1f & 0x3fffU)) >> 0xe;
    local_a4 = (int)(local_a4 + (local_a4 >> 0x1f & 0x3fffU)) >> 0xe;
    local_b0 = (int)(local_b0 + (local_b0 >> 0x1f & 0x3fffU)) >> 0xe;
    local_a8 = (int)(local_a8 + (local_a8 >> 0x1f & 0x3fffU)) >> 0xe;
    local_9c = (int)(local_9c + (local_9c >> 0x1f & 0x3fffU)) >> 0xe;
    local_94 = (int)(local_94 + (local_94 >> 0x1f & 0x3fffU)) >> 0xe;
    local_a0 = (int)(local_a0 + (local_a0 >> 0x1f & 0x3fffU)) >> 0xe;
    local_98 = (int)(local_98 + (local_98 >> 0x1f & 0x3fffU)) >> 0xe;
  }
  local_90 = 0;
  local_8c = _SfGetPixelType_4(param_5);
  if (local_8c < 0x10) {
    return -0x7fffbfff;
  }
  if (0x20 < local_8c) {
    return -0x7fffbfff;
  }
  if (param_6 == (int *)0x0) {
    if (param_5[4] == 0) {
      if (((param_5[8] != 0) || (uVar1 = *(ushort *)((int)param_5 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_010e12e2;
      iVar5 = *param_5 + (1 << ((byte)uVar1 & 0x1f)) * 4;
    }
    else {
      if (param_5[4] == 3) {
        param_6 = param_5 + 0xd;
        goto LAB_010e12ed;
      }
LAB_010e12e2:
      iVar5 = *param_5 + param_5[8] * 4;
    }
    param_6 = (int *)(iVar5 + (int)param_5);
  }
LAB_010e12ed:
  if (param_8 == 0) {
    uVar2 = (uint)*(ushort *)((int)param_5 + 0xe) * param_5[1] + 0x1f;
    param_8 = (int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  }
  local_80 = local_94 - local_9c;
  local_7c = local_98 - local_a0;
  if (local_7c < 1) {
    return 0;
  }
  if (local_80 < 1) {
    return 0;
  }
  local_84 = param_8;
  local_78 = param_6;
  local_88 = _SfGetPixelType_4(param_1);
  if ((local_88 < 0x10) || (0x20 < local_88)) {
    return -0x7fffbfff;
  }
  if (param_2 != (int *)0x0) goto LAB_010e13a9;
  if (param_1[4] == 0) {
    if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_010e139f;
    iVar5 = *param_1 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_1[4] == 3) {
      param_2 = param_1 + 0xd;
      goto LAB_010e13a9;
    }
LAB_010e139f:
    iVar5 = *param_1 + param_1[8] * 4;
  }
  param_2 = (int *)(iVar5 + (int)param_1);
LAB_010e13a9:
  if (param_4 == 0) {
    uVar2 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
    param_4 = (int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  }
  iVar5 = local_a8 - local_b0;
  local_74 = local_a4 - local_ac;
  if ((0 < iVar5) && (0 < local_74)) {
    local_6c = iVar5;
    if ((local_88 == 0x17) || (local_88 == 0x18)) {
      iVar3 = _SfDibCreateColorQuantizer_8(local_c,param_1);
      if (iVar3 != 0) {
        return iVar3;
      }
      local_90 = 1;
    }
    local_68 = 0;
    if ((local_7c == iVar5) && (local_80 == local_74)) {
      local_64 = local_68;
      local_60 = local_68;
      local_5c = local_68;
      local_58 = local_68;
      local_8c = _SfGetPixelBitsPerChannel_8(local_8c,local_70);
      iVar5 = _SfGetPixelBitsPerChannel_8(local_88,local_70);
      local_48 = iVar5 * local_b0;
      local_54 = param_1;
      local_4c = (int)param_2 +
                 ((int)(local_48 + ((int)local_48 >> 0x1f & 7U)) >> 3) +
                 (param_1[2] - local_a4) * param_4;
      local_48 = local_48 & 0x80000007;
      if ((int)local_48 < 0) {
        local_48 = (local_48 - 1 | 0xfffffff8) + 1;
      }
      local_44 = &local_b0;
      local_40 = local_6c;
      local_3c = local_74;
      if (param_1[8] == 0) {
        local_34 = 0;
      }
      else {
        local_34 = *param_1 + (int)param_1;
      }
      local_24 = local_8c * local_a0;
      local_2c = local_78;
      local_30 = param_5;
      local_28 = (int)local_78 +
                 ((int)(local_24 + ((int)local_24 >> 0x1f & 7U)) >> 3) +
                 (param_5[2] - local_94) * local_84;
      local_24 = local_24 & 0x80000007;
      if ((int)local_24 < 0) {
        local_24 = (local_24 - 1 | 0xfffffff8) + 1;
      }
      local_18 = local_80;
      local_20 = &local_a0;
      local_1c = local_7c;
      local_14 = local_84;
      if (param_5[8] == 0) {
        local_10 = 0;
      }
      else {
        local_10 = *param_5 + (int)param_5;
      }
      local_4 = param_10;
      local_50 = param_2;
      local_38 = param_4;
      iVar5 = FUN_010e0c20(&local_68,param_9);
    }
    else {
      local_68 = 1;
      iVar5 = -0x7fffbfff;
    }
    if (local_90 != 0) {
      pvVar4 = GlobalHandle(local_c[0]);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(local_c[0]);
      GlobalFree(pvVar4);
    }
    return iVar5;
  }
  return 0;
}


