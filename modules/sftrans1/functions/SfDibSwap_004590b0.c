/* Module: sftrans1.dll
   Function: SfDibSwap
   Address: 004590b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibSwap(void *,struct tagRECT *,long,struct tagRECT *,void *,struct tagRECT
   *,long,struct tagRECT *,void *,struct tagRECT *,long,struct tagRECT *,long,struct tSWAPPROP
   &,double) */

long SfDibSwap(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
              tagRECT *param_6,long param_7,tagRECT *param_8,void *param_9,tagRECT *param_10,
              long param_11,tagRECT *param_12,long param_13,tSWAPPROP *param_14,double param_15)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  float10 extraout_ST0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_80;
  undefined4 local_7c;
  int local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined1 local_10 [16];
  
                    /* 0x590b0  21  ?SfDibSwap@@YGJPAXPAUtagRECT@@J101J101J1JAAUtSWAPPROP@@N@Z */
  FUN_0052dc60();
  iVar3 = FUN_004cdc70(local_10,&local_38,&local_34,&local_3c,&local_7c,param_1,param_2,param_3,
                       param_4,param_5,param_6,param_7,param_8,param_13);
  if (iVar3 < 0) {
    FUN_0052dc70();
    return iVar3;
  }
  iVar3 = FUN_0052dca0(4);
  if (iVar3 < 0) {
    FUN_0052dc70();
    return iVar3;
  }
  local_80 = param_6->left;
  local_90 = param_6->right << 0xe;
  local_94 = param_6->top << 0xe;
  local_8c = param_6->bottom << 0xe;
  uVar8 = local_80 * 0x4000;
  local_74 = param_10->left << 0xe;
  uVar7 = param_10->right * 0x4000;
  local_70 = param_10->top << 0xe;
  local_68 = param_10->bottom << 0xe;
  local_50 = param_6->bottom - param_6->top;
  local_54 = param_6->right - local_80;
  local_64 = local_38;
  local_60 = local_34;
  local_5c = param_8->left * -0x4000;
  local_58 = param_8->top * -0x4000;
  uVar1 = *(ushort *)param_14;
  local_9c = (uint)uVar1;
  uVar4 = local_8c;
  uVar6 = local_94;
  if ((uVar1 != 0) && (uVar1 != 2)) {
    uVar4 = local_90;
    uVar6 = uVar8;
  }
  local_ac = uVar4 - uVar6;
  local_98 = uVar8;
  local_6c = uVar7;
  local_4c = uVar8;
  local_48 = local_94;
  local_44 = local_90;
  local_40 = local_8c;
  local_20 = local_74;
  local_1c = local_70;
  local_18 = uVar7;
  local_14 = local_68;
  local_a4 = ftol();
  local_80 = ftol();
  iVar3 = 0x8000 - local_80;
  if (((local_a4 != 0) || (local_80 != 0)) && (0 < iVar3)) {
    local_80 = local_80 + iVar3;
    local_a4 = local_a4 - iVar3;
    if (local_a4 < 0) {
      local_a4 = 0;
    }
  }
  if (local_80 < 0x4000) {
    local_80 = 0;
  }
  iVar3 = local_80;
  local_a0 = local_a4 + local_80 * 2 + local_ac;
  uVar4 = (uint)(extraout_ST0 < (float10)_DAT_00557838);
  if ((float10)_DAT_00555910 == extraout_ST0) {
    local_a4 = 0;
  }
  iVar5 = ftol();
  iVar5 = iVar5 - iVar3;
  if (iVar5 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = local_ac;
    if (iVar5 <= local_ac) {
      iVar3 = iVar5;
    }
  }
  bVar9 = false;
  bVar2 = false;
  uVar6 = local_3c;
  switch(uVar1) {
  case 0:
    local_94 = local_94 - iVar3;
    local_9c = local_90;
    local_8c = local_8c - iVar3;
    local_70 = local_70 + iVar3;
    local_68 = local_68 + iVar3;
    local_78 = 0;
    if (uVar4 != 0) {
      iVar5 = local_ac - iVar5;
    }
    bVar9 = ((local_70 ^ local_8c) & 0xffffc000) == 0;
    bVar2 = (int)((local_8c & 0xffffc000) + local_a4) < (int)((local_70 - 1 | 0x3fff) + 1);
    uVar6 = uVar4;
    local_ac = iVar5;
    local_a0 = uVar8;
    break;
  case 1:
    local_a0 = local_94;
    local_9c = local_8c;
    uVar8 = uVar8 + iVar3;
    local_90 = local_90 + iVar3;
    local_74 = local_74 - iVar3;
    local_6c = uVar7 - iVar3;
    local_78 = 1;
    if (uVar4 == 0) {
      iVar5 = local_ac - iVar5;
    }
    bVar9 = ((local_6c ^ uVar8) & 0xffffc000) == 0;
    bVar2 = (int)((local_6c & 0xffffc000) + local_a4) < (int)((uVar8 - 1 | 0x3fff) + 1);
    uVar6 = (uint)(uVar4 == 0);
    local_ac = iVar5;
    local_98 = uVar8;
    break;
  case 2:
    local_9c = local_90;
    local_78 = 0;
    local_70 = local_70 - iVar3;
    local_94 = local_94 + iVar3;
    local_8c = local_8c + iVar3;
    local_68 = local_68 - iVar3;
    if (uVar4 == 0) {
      iVar5 = local_ac - iVar5;
    }
    local_ac = iVar5;
    bVar9 = ((local_68 ^ local_94) & 0xffffc000) == 0;
    bVar2 = (int)((local_68 & 0xffffc000) + local_a4) < (int)((local_94 - 1 | 0x3fff) + 1);
    uVar6 = (uint)(uVar4 == 0);
    local_a0 = uVar8;
    break;
  case 3:
    local_a0 = local_94;
    local_90 = local_90 - iVar3;
    uVar8 = uVar8 - iVar3;
    local_74 = local_74 + iVar3;
    local_6c = uVar7 + iVar3;
    local_78 = 1;
    local_9c = local_8c;
    if (uVar4 != 0) {
      iVar5 = local_ac - iVar5;
    }
    local_ac = iVar5;
    bVar9 = ((local_74 ^ local_90) & 0xffffc000) == 0;
    bVar2 = (int)((local_90 & 0xffffc000) + local_a4) < (int)((local_74 - 1 | 0x3fff) + 1);
    uVar6 = uVar4;
    local_98 = uVar8;
  }
  if (local_a4 == 0) {
    if (bVar9) {
      local_2c = local_94 & 0xffffc000;
      local_30 = uVar8 & 0xffffc000;
      local_24 = (local_8c - 1 | 0x3fff) + 1;
      local_28 = (local_90 - 1 | 0x3fff) + 1;
      local_a8 = FUN_0052f4e0(local_7c,&local_64,param_3,&local_30,&local_5c,param_5,&local_54,
                              param_7,&local_4c,param_13,0,0);
      if (local_a8 < 0) goto LAB_004597b9;
    }
  }
  else if (bVar2) {
    FUN_0052dcd0();
    FUN_0052dce0(local_a0,local_9c,((-(uint)(uVar6 != 0) & 2) - 1) * 0x4000 + local_ac,
                 -(uVar6 != 0) & 2U | local_78 != 0);
    FUN_0052ddf0(local_7c,&local_64,param_3,&local_5c,local_a4 + 0x8000,0,0,param_14 + 0xc,param_13)
    ;
  }
  if (((uVar4 != 0) ||
      (local_a8 = FUN_0052f4e0(local_7c,&local_64,param_3,&local_98,&local_5c,param_5,&local_54,
                               param_7,&local_4c,param_13,0,0), -1 < local_a8)) &&
     (local_a8 = FUN_0052f4e0(local_7c,&local_64,param_3,&local_74,&local_5c,param_9,&local_54,
                              param_11,&local_20,param_13,0,0), -1 < local_a8)) {
    if ((uVar4 != 0) &&
       (iVar3 = FUN_0052f4e0(local_7c,&local_64,param_3,&local_98,&local_5c,param_5,&local_54,
                             param_7,&local_4c,param_13,0,0), iVar3 < 0)) {
      FUN_0052dc70();
      return iVar3;
    }
    FUN_0052dcd0();
    FUN_0052dce0(local_a0,local_9c,local_ac,-(uVar6 != 0) & 2U | local_78 != 0);
    FUN_0052ddf0(local_7c,&local_64,param_3,&local_5c,local_a4,local_80,0,param_14 + 0xc,param_13);
    FUN_0052dc70();
    return 0;
  }
LAB_004597b9:
  FUN_0052dc70();
  return local_a8;
}


