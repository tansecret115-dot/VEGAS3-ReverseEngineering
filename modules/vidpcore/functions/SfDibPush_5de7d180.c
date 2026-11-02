/* Module: vidpcore.dll
   Function: SfDibPush
   Address: 5de7d180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibPush(void *,struct tagRECT *,long,struct tagRECT *,void *,struct tagRECT
   *,long,struct tagRECT *,void *,struct tagRECT *,long,struct tagRECT *,long,struct tPUSHPROP
   &,double) */

long SfDibPush(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
              tagRECT *param_6,long param_7,tagRECT *param_8,void *param_9,tagRECT *param_10,
              long param_11,tagRECT *param_12,long param_13,tPUSHPROP *param_14,double param_15)

{
  short sVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10 [16];
  
                    /* 0x7d180  19  ?SfDibPush@@YGJPAXPAUtagRECT@@J101J101J1JAAUtPUSHPROP@@N@Z */
  lVar2 = FUN_5debc1e0(local_10,&local_34,&local_38,&local_6c,&local_80,param_1,param_2,param_3,
                       param_4,param_5,param_6,param_7,param_8,param_13);
  if (-1 < lVar2) {
    local_88 = param_6->right << 0xe;
    local_8c = param_6->top << 0xe;
    local_84 = param_6->bottom << 0xe;
    uVar8 = param_6->left * 0x4000;
    local_74 = param_10->right << 0xe;
    local_58 = param_6->right - param_6->left;
    local_78 = param_10->top << 0xe;
    local_70 = param_10->bottom << 0xe;
    local_54 = param_6->bottom - param_6->top;
    local_5c = local_38;
    local_60 = local_34;
    local_7c = param_10->left << 0xe;
    local_68 = param_8->left * -0x4000;
    local_64 = param_8->top * -0x4000;
    sVar1 = *(short *)param_14;
    local_98 = CONCAT22((short)((uint)param_8 >> 0x10),sVar1);
    uVar3 = local_8c;
    iVar10 = local_84;
    if ((sVar1 != 0) && (sVar1 != 2)) {
      uVar3 = uVar8;
      iVar10 = local_88;
    }
    iVar10 = iVar10 - uVar3;
    local_90 = uVar8;
    local_48 = uVar8;
    local_44 = local_8c;
    local_40 = local_88;
    local_3c = local_84;
    local_20 = local_7c;
    local_1c = local_78;
    local_18 = local_74;
    local_14 = local_70;
    local_a0 = ftol();
    local_9c = ftol();
    iVar4 = 0x8000 - local_9c;
    if (((local_a0 != 0) || (local_9c != 0)) && (0 < iVar4)) {
      local_9c = local_9c + iVar4;
      local_a0 = local_a0 - iVar4;
      if (local_a0 < 0) {
        local_a0 = 0;
      }
    }
    if (local_9c < 0x4000) {
      local_9c = 0;
    }
    local_94 = local_a0 + local_9c * 2 + iVar10;
    iVar4 = ftol();
    iVar4 = iVar4 - local_9c;
    iVar6 = iVar4 - local_a0;
    if (iVar4 < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar10;
      if (iVar4 <= iVar10) {
        iVar5 = iVar4;
      }
    }
    if (iVar6 < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar10;
      if (iVar6 <= iVar10) {
        iVar4 = iVar6;
      }
    }
    iVar4 = iVar4 - iVar10;
    iVar7 = local_6c;
    iVar9 = local_6c;
    iVar11 = local_6c;
    switch(sVar1) {
    case 0:
      local_8c = local_8c - iVar5;
      local_84 = local_84 - iVar5;
      local_78 = local_78 - iVar4;
      local_70 = local_70 - iVar4;
      local_98 = 0;
      iVar7 = local_88;
      iVar9 = 0;
      iVar11 = iVar10 - iVar6;
      local_94 = uVar8;
      break;
    case 1:
      local_94 = local_8c;
      uVar8 = uVar8 + iVar5;
      local_88 = local_88 + iVar5;
      local_7c = local_7c + iVar4;
      local_74 = local_74 + iVar4;
      local_98 = 1;
      iVar7 = local_84;
      iVar9 = 1;
      iVar11 = iVar6;
      local_90 = uVar8;
      break;
    case 2:
      local_8c = local_8c + iVar5;
      local_84 = local_84 + iVar5;
      local_78 = local_78 + iVar4;
      local_70 = local_70 + iVar4;
      local_98 = 0;
      iVar7 = local_88;
      iVar9 = 1;
      iVar11 = iVar6;
      local_94 = uVar8;
      break;
    case 3:
      uVar8 = uVar8 - iVar5;
      local_88 = local_88 - iVar5;
      local_7c = local_7c - iVar4;
      local_74 = local_74 - iVar4;
      local_94 = local_8c;
      local_98 = 1;
      iVar7 = local_84;
      iVar9 = 0;
      iVar11 = iVar10 - iVar6;
      local_90 = uVar8;
    }
    if ((*(float *)(param_14 + 8) == _DAT_5df205cc) && (*(int *)(param_14 + 4) != 0)) {
      local_2c = local_8c & 0xffffc000;
      local_30 = uVar8 & 0xffffc000;
      local_24 = (local_84 - 1U | 0x3fff) + 1;
      local_28 = (local_88 - 1U | 0x3fff) + 1;
      lVar2 = FUN_5df093c0(local_80,&local_60,param_3,&local_30,&local_68,param_5,&local_58,param_7,
                           &local_48,param_13,0,0);
      if (lVar2 < 0) {
        return lVar2;
      }
    }
    if (*(int *)(param_14 + 4) == 0) {
      iVar10 = FUN_5df093c0(local_80,&local_60,param_3,&local_48,&local_68,param_5,&local_58,param_7
                            ,&local_48,param_13,0,0);
      if (iVar10 < 0) {
        return iVar10;
      }
    }
    else {
      lVar2 = FUN_5df093c0(local_80,&local_60,param_3,&local_90,&local_68,param_5,&local_58,param_7,
                           &local_48,param_13,0,0);
      if (lVar2 < 0) {
        return lVar2;
      }
    }
    lVar2 = FUN_5df093c0(local_80,&local_60,param_3,&local_7c,&local_68,param_9,&local_58,param_11,
                         &local_20,param_13,0,0);
    if (-1 < lVar2) {
      FUN_5df09480();
      FUN_5df094c0(4);
      FUN_5df094f0();
      FUN_5df09500(local_94,iVar7,iVar11,-(iVar9 != 0) & 2U | local_98 != 0);
      FUN_5df09610(local_80,&local_60,param_3,&local_68,local_a0,local_9c,0,param_14 + 0x10,param_13
                  );
      FUN_5df09490();
      lVar2 = 0;
    }
  }
  return lVar2;
}


