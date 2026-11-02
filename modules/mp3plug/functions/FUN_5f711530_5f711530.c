/* Module: mp3plug.dll
   Function: FUN_5f711530
   Address: 5f711530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_5f711530(int param_1,int param_2,undefined2 *param_3,char param_4,uint *param_5)

{
  double dVar1;
  char cVar2;
  undefined2 *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  undefined4 local_1c8 [3];
  int local_1bc;
  int local_1b8;
  int local_1b0;
  uint local_1ac;
  int local_188;
  int local_17c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_13c;
  int local_134;
  int local_130;
  int local_11c;
  int local_118;
  int local_104;
  int local_100;
  char local_f0;
  int local_ec;
  int local_e8;
  char local_d8;
  int local_d4;
  int local_d0;
  char local_c0;
  int local_bc [4];
  int local_ac [4];
  uint local_9c;
  uint local_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 local_78;
  undefined8 local_68;
  char local_5c;
  char local_58;
  int local_54;
  char local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  undefined2 *local_24;
  uint *local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_5f711cc0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdf8;
  local_2c = param_2;
  local_28 = param_1;
  ExceptionList = &local_10;
  FUN_5f713560(local_1c8,param_1,param_2,'\x01');
  local_8 = 0;
  local_54 = -1;
  local_5c = '\x01';
  FUN_5f713b30(&local_134);
  FUN_5f713b30(&local_11c);
  FUN_5f713b30(&local_104);
  FUN_5f713b30(&local_ec);
  FUN_5f713b30(&local_d4);
  FUN_5f713ba0(local_bc,4);
  local_8 = 1;
  FUN_5f713ba0(local_ac,4);
  local_8 = 2;
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  FUN_5f7141c0((int)local_1c8);
  local_58 = '\x01';
  local_24 = param_3;
  local_50 = param_4;
  do {
    uVar5 = FUN_5f713740(local_1c8);
    uVar6 = uVar5 & 0xc0000000;
    if ((uVar6 == 0) || (uVar6 == 0x40000000)) {
      if (local_58 != '\0') {
        local_54 = local_13c;
        local_58 = '\0';
      }
      FUN_5f713b50(&local_134,local_158);
      FUN_5f713b50(&local_11c,local_154);
      FUN_5f713b50(&local_104,local_150);
      FUN_5f713b50(&local_ec,local_17c);
      FUN_5f713b50(&local_d4,local_188);
      FUN_5f713c90(local_bc,(int)(local_14c + ((uint)(local_14c >> 2) >> 0x1d)) >> 3);
      FUN_5f713c90(local_ac,local_150);
      iVar7 = local_14c - local_1b0;
      local_1b0 = local_1b0 + iVar7;
      local_1b8 = local_1b8 - iVar7;
      local_1ac = iVar7 + local_1ac & local_1bc - 1U;
    }
    else if (uVar6 == 0xc0000000) {
      local_5c = '\0';
    }
    puVar3 = local_24;
    cVar2 = local_5c;
  } while ((local_5c != '\0') && (uVar5 != 0x81010004));
  if ((local_58 == '\0') && (local_5c != '\0')) {
    local_38 = 0;
    if ((local_f0 == '\0') || (local_d8 != '\0')) {
      iVar7 = FUN_5f713dc0(local_bc);
      if (iVar7 == 0) {
        local_40 = 1;
      }
      else {
        local_40 = FUN_5f713dc0(local_bc);
      }
      iVar7 = FUN_5f713d20(local_bc);
      if (iVar7 == 0) {
        local_3c = 1;
      }
      else {
        local_3c = FUN_5f713d20(local_bc);
      }
    }
    else {
      local_3c = 1;
      local_40 = 1;
    }
    if (local_d8 != '\0') {
      if (local_ec == 0) {
        local_e8 = 0;
      }
      else {
        local_e8 = local_e8 / local_ec;
      }
      if (local_e8 == 0) {
        local_38 = 2;
      }
      else {
        local_38 = 1;
      }
    }
    if (local_c0 != '\0') {
      if (local_d4 == 0) {
        local_d0 = 0;
      }
      else {
        local_d0 = local_d0 / local_d4;
      }
      if (local_d0 == 0) {
        uVar5 = 0x20;
      }
      else {
        uVar5 = 0x10;
      }
      local_38 = local_38 | uVar5;
    }
    iVar7 = FUN_5f713d20(local_ac);
    if (iVar7 < 1) {
      if (local_104 == 0) {
        local_30 = 0;
      }
      else {
        local_30 = local_100 / local_104;
      }
    }
    else {
      local_34 = FUN_5f713dc0(local_ac);
      iVar7 = FUN_5f713d20(local_ac);
      local_30 = local_34 / iVar7;
    }
    iVar7 = FUN_5f713d20(local_ac);
    if (iVar7 == 0) {
      local_38 = local_38 | 0x100;
    }
    *puVar3 = 0x55;
    if (local_134 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (undefined2)(local_130 / local_134);
    }
    puVar3[1] = uVar9;
    if (local_11c == 0) {
      local_118 = 0;
    }
    else {
      local_118 = local_118 / local_11c;
    }
    *(int *)(puVar3 + 2) = local_118;
    puVar3[6] = 1;
    puVar3[9] = 1;
    puVar3[7] = 0;
    puVar3[0xe] = 0;
    puVar3[8] = 0xc;
    *(uint *)(puVar3 + 10) = local_38;
    *(int *)(puVar3 + 4) = (int)(local_30 + ((uint)((int)local_30 >> 2) >> 0x1d)) >> 3;
    puVar3[0xc] = (short)local_40;
    puVar3[0xd] = (short)local_3c;
    if (param_5 != (uint *)0x0) {
      *param_5 = local_30;
    }
    if ((puVar3[0xc] == 1) && (local_50 != '\0')) {
      if (*(int *)(puVar3 + 2) < 0x5dc1) {
        iVar7 = 0x48;
      }
      else {
        iVar7 = 0x90;
      }
      dVar1 = (double)iVar7 * ((double)(int)local_30 / (double)*(int *)(puVar3 + 2));
      local_68._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
      local_68._0_4_ = SUB84(dVar1,0);
      uVar5 = local_68._4_4_ >> 0x14 & 0x7ff;
      if (uVar5 < 0x3ff) {
        local_90 = 0;
      }
      else {
        local_20 = param_5;
        local_90 = (local_68._4_4_ << 0xb | (uint)local_68 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar5 & 0x1f);
        if ((longlong)dVar1 < 0) {
          local_90 = -local_90;
        }
      }
      puVar3[0xc] = (short)local_90 * puVar3[0xd];
      local_68 = dVar1;
    }
    iVar7 = (int)(((uint)(local_54 >> 2) >> 0x1d) + local_54) >> 3;
    if (local_54 == iVar7 * 8) {
      local_44 = local_28 + iVar7;
      local_48 = local_2c - iVar7;
      local_9c = 0;
      local_98 = 0;
      uVar8 = FUN_5f711330(&local_9c,local_48);
      cVar4 = (char)uVar8;
      if (cVar4 == '\0') {
        uVar8 = FUN_5f711400((int)puVar3,local_48);
        cVar4 = (char)uVar8;
      }
      if (((cVar4 != '\0') && (local_9c != 0)) && (local_98 != 0)) {
        if (*(uint *)(puVar3 + 2) < 0x5dc1) {
          local_4c = 0x240;
        }
        else {
          local_4c = 0x480;
        }
        uStack_8c = 0;
        dVar1 = (double)((_DAT_5f7646e8 /
                         ((float)local_9c *
                          (float)local_4c * (_DAT_5f7646d8 / (float)*(uint *)(puVar3 + 2)) *
                         _DAT_5f7646e4)) * (float)local_98);
        local_78._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        local_78._0_4_ = SUB84(dVar1,0);
        uVar5 = local_78._4_4_ >> 0x14 & 0x7ff;
        if (uVar5 < 0x3ff) {
          local_90 = 0;
        }
        else {
          local_90 = (local_78._4_4_ << 0xb | (uint)local_78 >> 0x15 | 0x80000000) >>
                     (0x1eU - (char)uVar5 & 0x1f);
          if ((longlong)dVar1 < 0) {
            local_90 = -local_90;
          }
        }
        *(uint *)(puVar3 + 10) = *(uint *)(puVar3 + 10) | 0x100;
        *(int *)(puVar3 + 4) = (int)(((uint)((int)local_90 >> 2) >> 0x1d) + local_90) >> 3;
        local_78 = dVar1;
        local_20 = param_5;
        if (param_5 != (uint *)0x0) {
          *param_5 = local_90;
        }
      }
    }
  }
  iVar7 = local_54;
  if (cVar2 == '\0') {
    iVar7 = -1;
  }
  local_8 = 1;
  FUN_5f713c20((int)local_ac);
  local_8 = 0;
  FUN_5f713c20((int)local_bc);
  local_8 = 0xffffffff;
  FUN_5f713650(local_1c8);
  ExceptionList = local_10;
  return iVar7;
}


