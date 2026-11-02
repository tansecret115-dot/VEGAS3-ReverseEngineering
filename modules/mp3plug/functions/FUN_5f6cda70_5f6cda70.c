/* Module: mp3plug.dll
   Function: FUN_5f6cda70
   Address: 5f6cda70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5f6cda70(uint *param_1)

{
  uint *puVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  undefined **ppuVar8;
  uint uVar9;
  undefined4 *unaff_EBX;
  uint local_ac [4];
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_4c;
  undefined4 uStack_48;
  undefined8 local_34;
  undefined8 local_24;
  uint local_18;
  uint *local_14;
  uint local_10;
  uint *local_c;
  uint *local_8;
  
  local_14 = param_1 + 0x2c;
  puVar1 = param_1 + 0x1e;
  dVar2 = (double)(float)param_1[1];
  local_34._0_4_ = SUB84(dVar2,0);
  local_34._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x1b] = 0;
  local_10 = *local_14;
  uVar9 = local_34._4_4_ >> 0x14 & 0x7ff;
  bVar3 = true;
  if (uVar9 < 0x3ff) {
    local_18 = 0;
  }
  else {
    local_18 = (local_34._4_4_ << 0xb | (uint)local_34 >> 0x15 | 0x80000000) >>
               (0x1eU - (char)uVar9 & 0x1f);
    if ((longlong)dVar2 < 0) {
      local_18 = -local_18;
    }
  }
  if ((((local_18 == local_10 * 2) || (local_18 == local_10 * 3)) || (local_18 == local_10 * 4)) ||
     ((local_18 == local_10 * 6 || (local_18 * 2 == local_10 * 3)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  local_c = puVar1;
  if (param_1[0x24] == 0) {
    if (param_1[0x11] == 0) {
      if (bVar4) {
        param_1[0x31] = (uint)(param_1[0x2d] < *param_1);
        param_1[0x30] = 1;
      }
      else if (local_10 != local_18) goto LAB_5f6cdbda;
      bVar3 = false;
    }
    else if (((param_1[0x2e] == 320000) ||
             (local_c = (uint *)param_1[0x2d], local_8 = puVar1,
             param_1[0x2e] / (uint)local_c < 40000)) && ((bVar4 || (local_10 == local_18)))) {
      param_1[0x31] = (uint)(param_1[0x2d] < *param_1);
      bVar3 = false;
      param_1[0x30] = 1;
    }
  }
  else {
    if (local_10 < 16000) {
      return 0;
    }
    bVar3 = false;
  }
LAB_5f6cdbda:
  local_ac[0] = 0;
  uVar9 = param_1[0x11];
  if (uVar9 == 0) {
    local_ac[1] = 0;
  }
  else if (uVar9 == 1) {
    local_ac[1] = 5;
  }
  else if (uVar9 == 2) {
    local_ac[1] = 9;
  }
  local_4c = param_1[0x2c];
  uStack_48 = 0;
  param_1[7] = param_1[0x2e];
  param_1[2] = (uint)(*puVar1 != 1);
  param_1[6] = (uint)(float)local_4c;
  param_1[3] = 0x47000000;
  param_1[5] = param_1[0x2d];
  param_1[0xc] = 0;
  param_1[10] = param_1[0x23];
  local_34 = dVar2;
  FUN_5f6d1850(param_1 + 0x10,unaff_EBX);
  FUN_5f6d1930((undefined4 *)param_1[0x10],0,local_ac + 1);
  if (param_1[0x22] != 0) {
    FUN_5f6d1930((undefined4 *)param_1[0x10],3,(undefined4 *)0x0);
  }
  uVar9 = param_1[0x1f];
  if (uVar9 == 0) {
    local_ac[2] = 0;
  }
  else if (uVar9 == 1) {
    local_ac[2] = 1;
  }
  else if (uVar9 == 2) {
    local_ac[2] = 2;
  }
  FUN_5f6d1930((undefined4 *)param_1[0x10],4,local_ac + 2);
  if (param_1[0x26] == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 2;
  }
  if (param_1[0x27] == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 4;
  }
  local_ac[0] = uVar5 | local_ac[0] | param_1[0x25] != 0 | uVar9;
  FUN_5f6d1930((undefined4 *)param_1[0x10],6,local_ac);
  if (param_1[0x20] == 0) {
    FUN_5f6d1930((undefined4 *)param_1[0x10],2,(undefined4 *)0x0);
  }
  if (_DAT_5f75c03c < (float)param_1[0x28]) {
    FUN_5f6d1930((undefined4 *)param_1[0x10],8,param_1 + 0x28);
  }
  if (bVar3) {
    ppuVar8 = FUN_5f6d1520((int)param_1,(int *)(param_1 + 5),(int *)param_1[0x10]);
    if (ppuVar8 != (undefined **)0x0) {
      return 0;
    }
    local_4c = param_1[0x2c];
    uStack_48 = 0;
    param_1[6] = (uint)(float)local_4c;
    ppuVar8 = FUN_5f6cfc50((int *)(param_1 + 0xf),param_1,(int *)(param_1 + 5),(int *)param_1[0x10])
    ;
    if (ppuVar8 != (undefined **)0x0) {
      return 0;
    }
    iVar6 = FUN_5f6d0ac0(param_1[0xf],&local_64);
    if (iVar6 == 0) {
      param_1[0x29] = local_60;
      param_1[0x28] = local_64;
      param_1[0x2a] = local_5c;
      param_1[0x2b] = local_58;
    }
    param_1[0x30] = 0;
    param_1[0x31] = 0;
  }
  else {
    local_ac[3] = *local_14;
    local_9c = local_14[2];
    if (param_1[0x31] == 0) {
      local_98 = *param_1;
    }
    else {
      local_98 = 1;
    }
    local_94 = local_14[1];
    local_90 = param_1[0x28];
    local_84 = 0;
    local_78 = param_1[0x23];
    local_8c = (uint)(param_1[0x20] == 0);
    local_80 = (uint)(param_1[0x11] != 0);
    local_74 = (uint)(param_1[0x25] != 0);
    local_70 = (uint)(param_1[0x26] != 0);
    local_6c = (uint)(param_1[0x27] != 0);
    local_68 = 0;
    uVar9 = param_1[0x1f];
    if (uVar9 == 0) {
      local_7c = 0;
    }
    else if (uVar9 == 1) {
      local_7c = 1;
    }
    else if (uVar9 == 2) {
      local_7c = 2;
    }
    if (param_1[0x24] != 0) {
      local_9c = 0;
      local_84 = param_1[0x24];
      local_8c = 1;
    }
    local_88 = (uint)(param_1[0x24] != 0);
    iVar6 = FUN_5f6d22e0(param_1 + 0x12,local_ac + 3);
    if (iVar6 != 0) {
      return 0;
    }
    FUN_5f6d3260(param_1[0x12],param_1 + 0x13);
    param_1[0x29] = param_1[0x14];
    param_1[0x28] = param_1[0x13];
    if (param_1[0x24] != 0) {
      pvVar7 = FUN_5f6d3310(0xf,*local_14,local_14[1]);
      param_1[0x1c] = (uint)pvVar7;
      param_1[0x1d] = 0;
      if (pvVar7 != (void *)0x0) {
        FUN_5f6d3a00(pvVar7,param_1[0x14],param_1[0x24]);
      }
    }
    if (param_1[0x12] != 0) {
      param_1[0x1a] = *param_1 * 0x240;
      pvVar7 = calloc(*param_1 * 0x240,4);
      param_1[0x18] = (uint)pvVar7;
    }
    if (param_1[0x30] != 0) {
      dVar2 = (double)(float)param_1[1];
      local_24._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
      local_24._0_4_ = SUB84(dVar2,0);
      uVar9 = local_24._4_4_ >> 0x14 & 0x7ff;
      if (uVar9 < 0x3ff) {
        local_4c = 0;
      }
      else {
        local_4c = (local_24._4_4_ << 0xb | (uint)local_24 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar9 & 0x1f);
        if ((longlong)dVar2 < 0) {
          local_4c = -local_4c;
        }
      }
      local_24 = dVar2;
      iVar6 = FUN_5f6cd820((int)(param_1 + 0x30),local_4c,*local_14,(float)param_1[0x13]);
      if (iVar6 == 0) {
        FUN_5f6ce3a0((void *)param_1[0x12]);
        return 0;
      }
      if (param_1[0x31] != 0) {
        param_1[0x1a] = local_14[1] * 0x240;
      }
      param_1[0x29] = param_1[0x29] + *(int *)(param_1[0x32] + 0xc);
    }
  }
  return 1;
}


