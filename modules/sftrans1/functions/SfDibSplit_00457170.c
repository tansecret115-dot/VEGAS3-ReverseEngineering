/* Module: sftrans1.dll
   Function: SfDibSplit
   Address: 00457170
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibSplit(void *,struct tagRECT *,long,struct tagRECT *,void *,struct tagRECT
   *,long,struct tagRECT *,void *,struct tagRECT *,long,struct tagRECT *,long,struct tSPLITPROP
   &,double) */

long SfDibSplit(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
               tagRECT *param_6,long param_7,tagRECT *param_8,void *param_9,tagRECT *param_10,
               long param_11,tagRECT *param_12,long param_13,tSPLITPROP *param_14,double param_15)

{
  short sVar1;
  void *pvVar2;
  tagRECT *ptVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int dy;
  float fVar11;
  float fVar12;
  float10 extraout_ST0;
  float10 fVar13;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  tagRECT local_d8;
  tSPLITPROP *local_c8;
  float local_bc;
  uint local_b8;
  undefined4 local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  float local_90;
  float local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  float local_68;
  int local_64;
  int local_60;
  double local_5c;
  undefined4 local_54;
  double local_50;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [16];
  
  lVar4 = param_11;
  ptVar3 = param_10;
                    /* 0x57170  20  ?SfDibSplit@@YGJPAXPAUtagRECT@@J101J101J1JAAUtSPLITPROP@@N@Z */
  pvVar2 = param_5;
  FUN_0052dc60();
  iVar5 = FUN_004cdc70(local_10,&local_48,&local_54,local_14,&local_b4,param_1,param_2,param_3,
                       param_4,param_5,param_6,param_7,param_8,param_13);
  if (iVar5 < 0) {
    FUN_0052dc70();
    return iVar5;
  }
  iVar5 = FUN_0052dca0(4);
  if (iVar5 < 0) {
    FUN_0052dc70();
    return iVar5;
  }
  if (*(short *)param_14 == 1) {
    param_5 = param_9;
    param_9 = pvVar2;
    param_11 = param_7;
    param_10 = param_6;
    param_7 = lVar4;
    param_8 = param_12;
    param_6 = ptVar3;
  }
  local_bc = (float)param_6->left;
  local_90 = (float)param_6->top;
  local_78 = (int)local_bc * 0x4000;
  local_34 = param_10->left << 0xe;
  local_74 = (int)local_90 * 0x4000;
  local_64 = param_6->right - (int)local_bc;
  local_6c = param_6->bottom * 0x4000;
  local_30 = param_10->top << 0xe;
  local_60 = param_6->bottom - (int)local_90;
  local_28 = param_10->bottom << 0xe;
  local_80 = local_48;
  local_7c = local_54;
  local_2c = param_10->right << 0xe;
  local_88 = param_8->left * -0x4000;
  local_98 = *(int *)(param_14 + 0x1c);
  local_94 = *(int *)(param_14 + 0x20);
  local_84 = param_8->top * -0x4000;
  local_70 = param_6->right * 0x4000;
  fVar12 = (float)(local_6c + (int)local_90 * -0x4000);
  fVar11 = (float)(local_70 + (int)local_bc * -0x4000);
  local_c8 = (tSPLITPROP *)fVar12;
  if ((int)fVar11 <= (int)fVar12) {
    local_c8 = (tSPLITPROP *)fVar11;
  }
  local_8c = fVar12;
  local_68 = fVar11;
  local_44 = local_78;
  local_40 = local_74;
  local_3c = local_70;
  local_38 = local_6c;
  local_24 = local_34;
  local_20 = local_30;
  local_1c = local_2c;
  local_18 = local_28;
  local_b8 = ftol();
  local_9c = ftol();
  local_c8 = (tSPLITPROP *)fVar11;
  if ((int)fVar11 <= (int)fVar12) {
    local_c8 = (tSPLITPROP *)fVar12;
  }
  local_50 = (double)local_9c;
  fVar13 = (float10)local_9c / (float10)(int)local_c8;
  local_5c = (double)fVar13;
  local_bc = fVar11;
  local_90 = fVar12;
  if ((fVar13 + (float10)_DAT_00555908) * extraout_ST0 - fVar13 < (float10)_DAT_00555910) {
    uVar8 = 0;
    uVar6 = 0;
    uVar7 = 0;
    local_b0 = 0;
    local_9c = ftol();
    fVar13 = extraout_ST0_01;
  }
  else {
    uVar6 = ftol();
    uVar7 = ftol();
    local_bc = (float)(local_9c + local_b8);
    uVar8 = ftol();
    fVar13 = extraout_ST0_00;
  }
  uVar6 = uVar6 & ((int)uVar6 < 1) - 1;
  local_90 = (float)(uVar7 & ((int)uVar7 < 1) - 1);
  local_50 = (double)CONCAT44(local_50._4_4_,uVar6);
  local_c8 = (tSPLITPROP *)(uVar8 & ((int)uVar8 < 1) - 1);
  local_b0 = ((int)uVar8 < 1) - 1 & uVar8;
  if ((int)local_b8 < 0) {
    local_b8 = 0;
  }
  else {
    uVar7 = (int)(local_c8 + (int)uVar6 / 2) * 2 - 1;
    local_bc = (float)(((int)uVar7 < 1) - 1 & uVar7);
    uVar8 = ((int)local_90 / 2 + local_b0) * 2 - 1;
    if ((int)local_bc < (int)(((int)uVar8 < 1) - 1 & uVar8)) {
      uVar9 = ((int)uVar7 < 1) - 1 & uVar7;
    }
    else {
      uVar9 = ((int)uVar8 < 1) - 1 & uVar8;
    }
    if ((int)uVar9 < (int)local_b8) {
      if ((int)(((int)uVar7 < 1) - 1 & uVar7) < (int)(((int)uVar8 < 1) - 1 & uVar8)) {
        local_b8 = ((int)uVar7 < 1) - 1 & uVar7;
      }
      else {
        local_b8 = ((int)uVar8 < 1) - 1 & uVar8;
      }
    }
  }
  if (-(float10)local_5c < fVar13) {
    iVar10 = FUN_0052f4e0(local_b4,&local_80,param_3,&local_24,&local_88,param_9,&local_64,param_11,
                          &local_34,param_13,0,0);
    iVar5 = local_78;
    if (iVar10 < 0) {
      FUN_0052dc70();
      return iVar10;
    }
    local_ac = local_78;
    local_a8 = local_74;
    iVar10 = ftol();
    local_a4 = iVar10 + iVar5;
    iVar5 = ftol();
    local_68 = (float)(int)local_c8;
    local_bc = (float)-uVar6;
    local_d8.left = local_ac;
    local_d8.bottom = local_74 + iVar5;
    local_d8.top = local_a8;
    local_d8.right = local_a4;
    local_a0 = local_d8.bottom;
    fVar11 = (float)ftol();
    local_bc = (float)(int)local_b0;
    local_c8 = (tSPLITPROP *)-(int)local_90;
    local_8c = fVar11;
    dy = ftol();
    sVar1 = *(short *)(param_14 + 2);
    local_5c = (double)CONCAT44(local_5c._4_4_,dy);
    if (sVar1 == 0) {
      OffsetRect(&local_d8,(int)fVar11,dy);
    }
    else if (sVar1 == 1) {
      local_d8.right = (int)fVar11 + local_a4;
      local_d8.bottom = local_d8.bottom + dy;
      local_a0 = local_a0 + dy;
      local_a4 = local_d8.right;
    }
    else if (sVar1 == 2) {
      local_d8.right = (int)fVar11 + local_a4;
      local_d8.bottom = local_d8.bottom + dy;
    }
    local_b0 = FUN_0052f4e0(local_b4,&local_80,param_3,&local_d8,&local_88,param_5,&local_64,param_7
                            ,&local_ac,param_13,0,0);
    if ((int)local_b0 < 0) {
      FUN_0052dc70();
      return local_b0;
    }
    FUN_0052dcd0();
    FUN_0052dce0(local_d8.top,local_d8.bottom,local_d8.right,3);
    FUN_0052dce0(local_d8.left,local_d8.right,local_d8.bottom,2);
    local_c8 = param_14 + 0xc;
    FUN_0052ddf0(local_b4,&local_80,param_3,&local_88,local_b8,local_9c,0,local_c8,param_13);
    local_d8.left = iVar10 + local_78;
    local_a4 = local_70;
    local_a8 = local_74;
    local_d8.top = local_74;
    local_d8.bottom = iVar5 + local_74;
    local_d8.right = local_70;
    local_ac = local_d8.left;
    local_a0 = local_d8.bottom;
    local_98 = ftol();
    sVar1 = *(short *)(param_14 + 2);
    if (sVar1 == 0) {
      OffsetRect(&local_d8,local_98,local_5c._0_4_);
    }
    else if (sVar1 == 1) {
      local_d8.left = local_98 + local_ac;
      local_d8.bottom = local_d8.bottom + local_5c._0_4_;
      local_a0 = local_a0 + local_5c._0_4_;
      local_ac = local_d8.left;
    }
    else if (sVar1 == 2) {
      local_d8.left = local_98 + local_ac;
      local_d8.bottom = local_d8.bottom + local_5c._0_4_;
    }
    local_b0 = FUN_0052f4e0(local_b4,&local_80,param_3,&local_d8,&local_88,param_5,&local_64,param_7
                            ,&local_ac,param_13,0,0);
    if ((int)local_b0 < 0) {
      FUN_0052dc70();
      return local_b0;
    }
    FUN_0052dcd0();
    FUN_0052dce0(local_d8.top,local_d8.bottom,local_d8.left,1);
    FUN_0052dce0(local_d8.left,local_d8.right,local_d8.bottom,2);
    FUN_0052ddf0(local_b4,&local_80,param_3,&local_88,local_b8,local_9c,0,local_c8,param_13);
    local_ac = local_78;
    local_d8.left = local_78;
    local_d8.top = iVar5 + local_74;
    local_d8.right = iVar10 + local_78;
    local_a0 = local_6c;
    local_d8.bottom = local_6c;
    local_a8 = local_d8.top;
    local_a4 = local_d8.right;
    local_94 = ftol();
    sVar1 = *(short *)(param_14 + 2);
    if (sVar1 == 0) {
      OffsetRect(&local_d8,(int)local_8c,local_94);
    }
    else if (sVar1 == 1) {
      local_d8.right = (int)local_8c + local_a4;
      local_d8.top = local_d8.top + local_94;
      local_a8 = local_a8 + local_94;
      local_a4 = local_d8.right;
    }
    else if (sVar1 == 2) {
      local_d8.right = (int)local_8c + local_a4;
      local_d8.top = local_d8.top + local_94;
    }
    local_b0 = FUN_0052f4e0(local_b4,&local_80,param_3,&local_d8,&local_88,param_5,&local_64,param_7
                            ,&local_ac,param_13,0,0);
    if ((int)local_b0 < 0) {
      FUN_0052dc70();
      return local_b0;
    }
    FUN_0052dcd0();
    FUN_0052dce0(local_d8.top,local_d8.bottom,local_d8.right,3);
    FUN_0052dce0(local_d8.left,local_d8.right,local_d8.top,0);
    FUN_0052ddf0(local_b4,&local_80,param_3,&local_88,local_b8,local_9c,0,local_c8,param_13);
    local_d8.left = iVar10 + local_78;
    local_a4 = local_70;
    local_d8.right = local_70;
    local_d8.top = iVar5 + local_74;
    sVar1 = *(short *)(param_14 + 2);
    local_a0 = local_6c;
    local_d8.bottom = local_6c;
    local_ac = local_d8.left;
    local_a8 = local_d8.top;
    if (sVar1 == 0) {
      OffsetRect(&local_d8,local_98,local_94);
    }
    else if (sVar1 == 1) {
      local_ac = local_98 + local_d8.left;
      local_a8 = local_d8.top + local_94;
      local_d8.left = local_ac;
      local_d8.top = local_d8.top + local_94;
    }
    else if (sVar1 == 2) {
      local_d8.left = local_98 + local_d8.left;
      local_d8.top = local_d8.top + local_94;
    }
    iVar5 = FUN_0052f4e0(local_b4,&local_80,param_3,&local_d8,&local_88,param_5,&local_64,param_7,
                         &local_ac,param_13,0,0);
    if (iVar5 < 0) {
      FUN_0052dc70();
      return iVar5;
    }
    FUN_0052dcd0();
    FUN_0052dce0(local_d8.top,local_d8.bottom,local_d8.left,1);
    FUN_0052dce0(local_d8.left,local_d8.right,local_d8.top,0);
    FUN_0052ddf0(local_b4,&local_80,param_3,&local_88,local_b8,local_9c,0,local_c8,param_13);
  }
  else {
    iVar5 = FUN_0052f4e0(local_b4,&local_80,param_3,&local_44,&local_88,param_5,&local_64,param_7,
                         &local_78,param_13,0,0);
    if (iVar5 < 0) {
      FUN_0052dc70();
      return iVar5;
    }
  }
  FUN_0052dc70();
  return 0;
}


