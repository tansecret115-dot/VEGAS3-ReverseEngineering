/* Module: vidpcore.dll
   Function: SfDibSqueeze
   Address: 5de80550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibSqueeze(void *,struct tagRECT *,long,struct tagRECT *,void *,struct tagRECT
   *,long,struct tagRECT *,void *,struct tagRECT *,long,struct tagRECT *,long,struct
   tSQUEEZEPROP,double) */

long SfDibSqueeze(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6,undefined4 param_7,int *param_8,undefined4 param_9,
                 int *param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined2 param_14,int param_15)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 in_stack_00000058;
  uint uVar7;
  undefined4 uVar8;
  uint local_d4;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [16];
  
                    /* 0x80550  20  ?SfDibSqueeze@@YGJPAXPAUtagRECT@@J101J101J1JUtSQUEEZEPROP@@N@Z
                        */
  iVar1 = FUN_5debc1e0(local_10,&local_48,&local_4c,local_14,&local_c4,param_1,param_2,param_3,
                       param_4,param_5,param_6,param_7,param_8,param_13);
  if (iVar1 < 0) {
    return iVar1;
  }
  local_a4 = *param_8 * -0x4000;
  local_a0 = param_8[1] * -0x4000;
  local_ac = *param_6;
  local_c0 = param_6[1];
  local_b8 = param_10[1] << 0xe;
  local_b0 = param_10[3] << 0xe;
  local_a8 = 0;
  local_bc = *param_10 << 0xe;
  local_88 = local_c0 * 0x4000;
  local_b4 = param_10[2] << 0xe;
  local_94 = param_6[2] - local_ac;
  local_90 = param_6[3] - local_c0;
  local_9c = local_48;
  local_98 = local_4c;
  local_80 = param_6[3] * 0x4000;
  local_8c = local_ac * 0x4000;
  local_84 = param_6[2] * 0x4000;
  uVar5 = local_d4;
  switch(param_14) {
  case 0:
  case 2:
    uVar5 = local_80 + local_c0 * -0x4000;
    break;
  case 1:
    uVar5 = (int)(local_80 + local_c0 * -0x4000) >> 1;
    break;
  case 3:
  case 5:
    uVar5 = local_84 + local_ac * -0x4000;
    break;
  case 4:
    uVar5 = (int)(local_84 + local_ac * -0x4000) >> 1;
  }
  local_7c = local_8c;
  local_78 = local_88;
  local_74 = local_84;
  local_70 = local_80;
  local_6c = local_bc;
  local_68 = local_b8;
  local_64 = local_b4;
  local_60 = local_b0;
  local_44 = local_8c;
  local_40 = local_88;
  local_3c = local_84;
  local_38 = local_80;
  local_34 = local_8c;
  local_30 = local_88;
  local_2c = local_84;
  local_28 = local_80;
  local_24 = local_8c;
  local_20 = local_88;
  local_1c = local_84;
  local_18 = local_80;
  local_d4 = ftol();
  local_c0 = ftol();
  iVar1 = 0x8000 - local_c0;
  if (((local_d4 != 0) || (local_c0 != 0)) && (0 < iVar1)) {
    local_c0 = local_c0 + iVar1;
    local_d4 = local_d4 - iVar1;
    if ((int)local_d4 < 0) {
      local_d4 = 0;
    }
  }
  if (local_c0 < 0x4000) {
    local_c0 = 0;
  }
  iVar1 = local_c0;
  local_ac = local_d4 + local_c0 * 2 + uVar5;
  local_ac = ftol();
  uVar4 = local_ac - iVar1;
  uVar6 = uVar4 - local_d4;
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  else if ((int)uVar5 < (int)uVar4) {
    uVar4 = uVar5;
  }
  if ((int)uVar6 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar5;
    if ((int)uVar6 <= (int)uVar5) {
      uVar3 = uVar6;
    }
  }
  uVar2 = ((int)uVar6 < 0) - 1 & uVar6;
  FUN_5df09480();
  FUN_5df094c0(4);
  FUN_5df094f0();
  iVar1 = local_b8;
  uVar7 = local_b0;
  switch(param_14) {
  case 0:
    uVar8 = 2;
    iVar1 = local_bc;
    uVar7 = local_b4;
    local_b0 = uVar3;
    local_88 = uVar4;
    break;
  case 1:
    local_b8 = uVar5 - uVar3;
    local_80 = uVar5 - uVar4;
    local_b0 = uVar3 + uVar5;
    local_38 = uVar5;
    FUN_5df09500(local_bc,local_b4,uVar5 - uVar2,0);
    local_78 = uVar4 + uVar5;
    local_30 = uVar5;
    FUN_5df09500(local_bc,local_b4,uVar2 + uVar5,2);
    local_a8 = 1;
    goto switchD_5de8088c_default;
  case 2:
    local_80 = uVar5 - uVar4;
    local_b8 = uVar5 - uVar3;
    uVar6 = uVar5 - uVar6;
    uVar8 = 0;
    iVar1 = local_bc;
    uVar7 = local_b4;
    break;
  case 3:
    uVar8 = 3;
    local_b4 = uVar3;
    local_8c = uVar4;
    break;
  case 4:
    local_bc = uVar5 - uVar3;
    local_84 = uVar5 - uVar4;
    local_b4 = uVar3 + uVar5;
    local_3c = uVar5;
    FUN_5df09500(local_b8,local_b0,uVar5 - uVar2,1);
    local_7c = uVar4 + uVar5;
    local_34 = uVar5;
    FUN_5df09500(local_b8,local_b0,uVar2 + uVar5,3);
    local_a8 = 1;
    goto switchD_5de8088c_default;
  case 5:
    local_84 = uVar5 - uVar4;
    local_bc = uVar5 - uVar3;
    uVar6 = uVar5 - uVar6;
    uVar8 = 1;
    break;
  default:
    goto switchD_5de8088c_default;
  }
  FUN_5df09500(iVar1,uVar7,uVar6,uVar8);
switchD_5de8088c_default:
  if (param_15 == 0) {
    iVar1 = FUN_5df093c0(local_c4,&local_9c,param_3,&local_24,&local_a4,param_5,&local_94,param_7,
                         &local_24,param_13,0,0);
    if (iVar1 < 0) {
      FUN_5df09490();
      return iVar1;
    }
  }
  else {
    local_58 = local_88 & 0xffffc000;
    local_5c = local_8c & 0xffffc000;
    local_50 = (local_80 - 1 | 0x3fff) + 1;
    local_54 = (local_84 - 1 | 0x3fff) + 1;
    local_c8 = FUN_5df093c0(local_c4,&local_9c,param_3,&local_5c,&local_a4,param_5,&local_94,param_7
                            ,&local_44,param_13,1,0);
    if (local_c8 < 0) {
LAB_5de80b59:
      FUN_5df09490();
      return local_c8;
    }
    if (local_a8 != 0) {
      local_58 = local_78 & 0xffffc000;
      local_5c = local_7c & 0xffffc000;
      local_50 = (local_70 - 1 | 0x3fff) + 1;
      local_54 = (local_74 - 1 | 0x3fff) + 1;
      local_c8 = FUN_5df093c0(local_c4,&local_9c,param_3,&local_5c,&local_a4,param_5,&local_94,
                              param_7,&local_34,param_13,1,0);
      if (local_c8 < 0) goto LAB_5de80b59;
    }
    local_c8 = FUN_5df093c0(local_c4,&local_9c,param_3,&local_8c,&local_a4,param_5,&local_94,param_7
                            ,&local_44,param_13,1,0);
    if (local_c8 < 0) goto LAB_5de80b59;
    if ((local_a8 != 0) &&
       (iVar1 = FUN_5df093c0(local_c4,&local_9c,param_3,&local_7c,&local_a4,param_5,&local_94,
                             param_7,&local_34,param_13,1,0), iVar1 < 0)) goto LAB_5de80c9f;
  }
  iVar1 = FUN_5df093c0(local_c4,&local_9c,param_3,&local_bc,&local_a4,param_9,&local_94,param_11,
                       &local_6c,param_13,1,0);
  if (-1 < iVar1) {
    if ((local_a8 != 0) && (iVar1 = (local_c0 - local_ac) + local_d4, 0 < iVar1)) {
      local_d4 = local_d4 - iVar1;
    }
    iVar1 = local_c0 - local_ac;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else {
      local_d4 = 0;
    }
    FUN_5df09610(local_c4,&local_9c,param_3,&local_a4,local_d4,local_c0,iVar1,&stack0x00000048,
                 param_13);
    FUN_5df09490();
    return 0;
  }
LAB_5de80c9f:
  FUN_5df09490();
  return iVar1;
}


