/* Module: vidpcore.dll
   Function: SfDibBarn
   Address: 5de795d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibBarn(void *,struct tagRECT *,long,struct tagRECT *,void *,struct tagRECT
   *,long,struct tagRECT *,void *,struct tagRECT *,long,struct tagRECT *,long,struct tBARNPROP
   &,double) */

long SfDibBarn(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
              tagRECT *param_6,long param_7,tagRECT *param_8,void *param_9,tagRECT *param_10,
              long param_11,tagRECT *param_12,long param_13,tBARNPROP *param_14,double param_15)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  int local_90;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [16];
  
                    /* 0x795d0  13  ?SfDibBarn@@YGJPAXPAUtagRECT@@J101J101J1JAAUtBARNPROP@@N@Z */
  lVar1 = FUN_5debc1e0(local_10,&local_2c,&local_28,local_14,&local_a0,param_1,param_2,param_3,
                       param_4,param_5,param_6,param_7,param_8,param_13);
  if (-1 < lVar1) {
    local_20 = param_6->top << 0xe;
    local_24 = param_6->left << 0xe;
    iVar3 = param_10->left;
    iVar6 = param_10->top;
    local_1c = param_6->right << 0xe;
    local_98 = iVar6 * 0x4000;
    local_9c = iVar3 * 0x4000;
    local_18 = param_6->bottom << 0xe;
    local_94 = param_10->right * 0x4000;
    local_90 = param_10->bottom * 0x4000;
    local_64 = param_10->right - iVar3;
    local_60 = param_10->bottom - iVar6;
    local_68 = local_28;
    local_6c = local_2c;
    local_70 = param_12->top * -0x4000;
    local_74 = param_12->left * -0x4000;
    if (*(int *)param_14 == 0) {
      iVar3 = local_94 + iVar3 * -0x4000;
    }
    else {
      iVar3 = local_90 + iVar6 * -0x4000;
    }
    uVar5 = iVar3 >> 1;
    local_84 = local_9c;
    local_80 = local_98;
    local_7c = local_94;
    local_78 = local_90;
    local_5c = local_9c;
    local_58 = local_98;
    local_54 = local_94;
    local_50 = local_90;
    local_4c = local_9c;
    local_48 = local_98;
    local_44 = local_94;
    local_40 = local_90;
    local_3c = local_9c;
    local_38 = local_98;
    local_34 = local_94;
    local_30 = local_90;
    local_a8 = ftol();
    local_ac = ftol();
    iVar3 = 0x8000 - local_ac;
    if (((local_a8 != 0) || (local_ac != 0)) && (0 < iVar3)) {
      local_ac = local_ac + iVar3;
      local_a8 = local_a8 - iVar3;
      if (local_a8 < 0) {
        local_a8 = 0;
      }
    }
    iVar3 = ftol();
    local_a4 = 0;
    uVar2 = (iVar3 - local_ac) - local_a8;
    uVar2 = ((int)uVar2 < 1) - 1 & uVar2;
    if ((int)uVar5 < (int)uVar2) {
      local_a4 = uVar2 - uVar5;
      uVar2 = uVar5;
    }
    uVar4 = (iVar3 - local_ac) - 0x4000;
    if ((int)uVar5 < (int)uVar4) {
      local_a8 = local_a8 + (uVar5 - uVar4);
      uVar4 = uVar5;
    }
    FUN_5de795a0(&local_84,*(undefined4 *)param_14);
    FUN_5de795a0(&local_5c,*(undefined4 *)param_14);
    FUN_5de795a0(&local_3c,*(undefined4 *)param_14);
    FUN_5de795a0(&local_4c,*(undefined4 *)param_14);
    FUN_5de795a0(&local_9c,*(undefined4 *)param_14);
    local_84 = uVar5 - uVar2;
    local_54 = uVar2 + local_5c;
    local_9c = local_5c + uVar4;
    local_34 = uVar2 + uVar5;
    local_94 = local_44 - uVar4;
    local_4c = local_44 - uVar2;
    local_7c = uVar5;
    local_3c = uVar5;
    FUN_5de795a0(&local_84,*(undefined4 *)param_14);
    FUN_5de795a0(&local_5c,*(undefined4 *)param_14);
    FUN_5de795a0(&local_3c,*(undefined4 *)param_14);
    FUN_5de795a0(&local_4c,*(undefined4 *)param_14);
    FUN_5de795a0(&local_9c,*(undefined4 *)param_14);
    lVar1 = FUN_5df093c0(local_a0,&local_6c,param_3,&local_24,&local_74,param_5,&local_64,param_7,
                         &local_24,param_13,0,0);
    if (((-1 < lVar1) &&
        (lVar1 = FUN_5df093c0(local_a0,&local_6c,param_3,&local_5c,&local_74,param_9,&local_64,
                              param_11,&local_84,param_13,0,0), -1 < lVar1)) &&
       (lVar1 = FUN_5df093c0(local_a0,&local_6c,param_3,&local_4c,&local_74,param_9,&local_64,
                             param_11,&local_3c,param_13,0,0), -1 < lVar1)) {
      FUN_5df09480();
      FUN_5df094c0(4);
      FUN_5df094f0();
      if (*(int *)param_14 == 0) {
        FUN_5df09500(local_98,local_90,local_9c,1);
        uVar7 = 3;
        uVar5 = local_98;
        iVar3 = local_90;
        iVar6 = local_94;
      }
      else {
        FUN_5df09500(local_9c,local_94,local_98,0);
        uVar7 = 2;
        uVar5 = local_9c;
        iVar3 = local_94;
        iVar6 = local_90;
      }
      FUN_5df09500(uVar5,iVar3,iVar6,uVar7);
      if (local_a4 != 0) {
        local_a8 = 0;
      }
      FUN_5df09610(local_a0,&local_6c,param_3,&local_74,local_a8,local_ac,local_a4,param_14 + 0xc,
                   param_13);
      FUN_5df09490();
      lVar1 = 0;
    }
  }
  return lVar1;
}


