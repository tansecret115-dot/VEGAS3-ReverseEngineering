/* Module: sftrans1.dll
   Function: SfDibAngularSlide
   Address: 0045b2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibAngularSlide(void *,struct tagRECT *,long,struct tagRECT *,void *,struct
   tagRECT *,long,struct tagRECT *,void *,struct tagRECT *,long,struct tagRECT *,long,struct
   _sfangularslideprops &,double) */

long SfDibAngularSlide(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
                      tagRECT *param_6,long param_7,tagRECT *param_8,void *param_9,tagRECT *param_10
                      ,long param_11,tagRECT *param_12,long param_13,_sfangularslideprops *param_14,
                      double param_15)

{
  void *pvVar1;
  tagRECT *ptVar2;
  long lVar3;
  LONG LVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LONG LVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 extraout_ST1;
  double dVar14;
  ulonglong uVar15;
  tagRECT local_e8;
  int local_d0;
  tagRECT local_cc;
  int local_bc;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  undefined4 local_9c;
  double local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  double local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  double local_30;
  double local_28;
  undefined1 local_1c [4];
  undefined1 local_18 [20];
  
  lVar3 = param_11;
  ptVar2 = param_10;
  pvVar1 = param_5;
                    /* 0x5b2a0  17
                       ?SfDibAngularSlide@@YGJPAXPAUtagRECT@@J101J101J1JAAU_sfangularslideprops@@N@Z
                        */
  FUN_0052dc60();
  iVar5 = FUN_004cdc70(local_18,&local_5c,&local_58,local_1c,&local_9c,param_1,param_2,param_3,
                       param_4,param_5,param_6,param_7,param_8,param_13);
  if (iVar5 < 0) {
    FUN_0052dc70();
    return iVar5;
  }
  iVar5 = FUN_0052dca0();
  if (iVar5 < 0) {
    FUN_0052dc70();
    return iVar5;
  }
  if (*(int *)param_14 != 0) {
    param_15 = _DAT_00555908 - param_15;
    param_5 = param_9;
    param_9 = pvVar1;
    param_11 = param_7;
    param_10 = param_6;
    param_7 = lVar3;
    param_8 = param_12;
    param_6 = ptVar2;
  }
  local_d0 = param_6->top;
  local_64 = param_6->left;
  local_b8 = (double)CONCAT44(local_b8._4_4_,local_64);
  local_88 = param_6->right << 0xe;
  local_90 = local_64 << 0xe;
  local_8c = local_d0 << 0xe;
  local_84 = param_6->bottom << 0xe;
  local_cc.left = param_10->left << 0xe;
  local_cc.top = param_10->top << 0xe;
  local_cc.bottom = param_10->bottom << 0xe;
  local_60 = param_6->bottom - local_d0;
  local_6c = local_58;
  local_70 = local_5c;
  local_cc.right = param_10->right << 0xe;
  local_64 = param_6->right - local_64;
  local_80 = param_8->left * -0x4000;
  local_7c = param_8->top * -0x4000;
  if (_DAT_00555910 <= param_15) {
    if (_DAT_00555908 < param_15) {
      param_15 = 1.0;
    }
  }
  else {
    param_15 = 0.0;
  }
  local_50 = local_cc.left;
  local_4c = local_cc.top;
  local_48 = local_cc.right;
  local_44 = local_cc.bottom;
  local_40 = local_90;
  local_3c = local_8c;
  local_38 = local_88;
  local_34 = local_84;
  iVar6 = FUN_0052f4e0(local_9c,&local_70,param_3,&local_40,&local_80,param_5,&local_64,param_7,
                       &local_90,param_13,0,0);
  iVar5 = local_90;
  if (iVar6 < 0) {
    FUN_0052dc70();
    return iVar6;
  }
  dVar14 = _DAT_00555908 - param_15;
  iVar6 = local_88 - local_90;
  local_b0 = *(double *)(param_14 + 8) * _DAT_0055d680;
  iVar10 = local_84 - local_8c;
  local_d0 = iVar10;
  if (iVar6 <= iVar10) {
    local_d0 = iVar6;
  }
  local_bc = ftol();
  local_d0 = ftol();
  LVar8 = local_cc.left;
  iVar7 = 0x8000 - local_d0;
  if (((local_bc != 0) || (local_d0 != 0)) && (0 < iVar7)) {
    local_d0 = local_d0 + iVar7;
    local_bc = local_bc - iVar7;
    if (local_bc < 0) {
      local_bc = 0;
    }
  }
  local_78 = (double)CONCAT44(local_78._4_4_,iVar6);
  local_54 = iVar5 - iVar6 / 2;
  local_a8 = (double)CONCAT44(local_a8._4_4_,local_8c - iVar10 / 2);
  if (iVar6 <= iVar10) {
    iVar6 = iVar10;
  }
  fVar11 = (float10)local_d0 / (float10)iVar6;
  local_28 = (double)fVar11;
  fVar11 = (fVar11 + (float10)_DAT_00555908) * (float10)dVar14 - fVar11;
  local_b8 = (double)fVar11;
  local_30 = (double)(((float10)*(double *)(param_14 + 0x30) - (float10)_DAT_00555908) * fVar11 +
                     (float10)_DAT_00555908);
  fVar12 = (float10)fsin((float10)local_b0);
  fVar12 = ABS(fVar12);
  fVar13 = (float10)fcos((float10)local_b0);
  local_98 = (double)fVar13;
  local_b0 = (double)ABS(fVar13);
  if (fVar12 <= (float10)local_b0) {
    fVar12 = (float10)local_b0;
  }
  if (((byte)param_14[0x28] & 1) == 0) {
    fVar11 = fVar11 / fVar12;
  }
  local_68 = iVar10;
  if (fVar11 < (float10)_DAT_00555910) {
    local_e8.left = local_cc.left;
    local_e8.top = local_cc.top;
    local_e8.right = local_cc.right;
    local_e8.bottom = local_cc.bottom;
    iVar5 = ftol();
    InflateRect(&local_e8,iVar5,iVar5);
  }
  else {
    local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
    local_b8._0_4_ = local_cc.right - local_cc.left;
    iVar5 = ftol();
    LVar4 = local_cc.top;
    local_b8 = (double)CONCAT44(local_b8._4_4_,local_cc.bottom - local_cc.top);
    iVar5 = iVar5 + LVar8;
    local_cc.right = iVar5;
    local_e8.bottom = ftol();
    local_b0 = (double)local_bc;
    local_e8.bottom = local_e8.bottom + LVar4;
    local_e8.left = LVar8;
    local_e8.top = LVar4;
    local_78 = (double)((float10)_DAT_00555908 - extraout_ST1);
    local_e8.right = iVar5;
    local_cc.bottom = local_e8.bottom;
    iVar5 = ftol();
    iVar6 = ftol();
    local_98 = (double)local_68;
    iVar10 = (iVar5 - iVar6) + local_90;
    iVar5 = ftol();
    iVar6 = ftol();
    iVar5 = (iVar5 - iVar6) + local_8c;
    OffsetRect(&local_e8,iVar10,iVar5);
    OffsetRect(&local_cc,iVar10,iVar5);
  }
  FUN_0052f4e0(local_9c,&local_70,param_3,&local_cc,&local_80,param_9,&local_64,param_11,&local_50,
               param_13,0,0);
  FUN_0052dcd0();
  iVar5 = local_d0;
  if ((local_d0 != 0) || (local_30 < _DAT_00555908)) {
    FUN_0052dce0(local_e8.top,local_e8.bottom,local_e8.right,3);
    FUN_0052dce0(local_e8.top,local_e8.bottom,local_e8.left,1);
    FUN_0052dce0(local_e8.left,local_e8.right,local_e8.top,0);
    uVar15 = CONCAT44(2,local_e8.bottom);
    uVar9 = local_e8.left;
    LVar8 = local_e8.right;
  }
  else {
    local_a8 = *(double *)(param_14 + 8);
    if (local_a8 < _DAT_00555910) {
      dVar14 = floor((-local_a8 - _DAT_0055d670) * _DAT_0055d668);
      local_a8 = (dVar14 + _DAT_00555908) * _DAT_00557d68 + local_a8;
    }
    fVar13 = (float10)_CIfmod();
    LVar8 = local_e8.bottom;
    if ((fVar13 == (float10)_DAT_00555910) || ((float10)_DAT_00557d68 <= fVar13)) {
      if (local_e8.bottom <= local_cc.bottom) {
        LVar8 = local_cc.bottom;
      }
      uVar9 = local_e8.top;
      if (local_cc.top <= local_e8.top) {
        uVar9 = local_cc.top;
      }
      uVar15 = CONCAT44(3,local_e8.right);
    }
    else if ((float10)_DAT_0055d660 <= fVar13) {
      uVar9 = local_e8.left;
      if (fVar13 == (float10)_DAT_0055d660) {
        LVar8 = local_e8.right;
        if (local_e8.right <= local_cc.right) {
          LVar8 = local_cc.right;
        }
        if (local_cc.left <= local_e8.left) {
          uVar9 = local_cc.left;
        }
        uVar15 = CONCAT44(2,local_e8.bottom);
      }
      else {
        if (fVar13 < (float10)_DAT_00557d70) {
          LVar8 = local_cc.bottom;
          if (local_cc.bottom < local_e8.bottom) {
            LVar8 = local_e8.bottom;
          }
          uVar9 = local_e8.top;
          if (local_cc.top <= local_e8.top) {
            uVar9 = local_cc.top;
          }
          FUN_0052dce0(uVar9,LVar8,local_e8.left,1);
          LVar8 = local_e8.right;
          if (local_e8.right <= local_cc.right) {
            LVar8 = local_cc.right;
          }
          uVar9 = local_e8.left;
          if (local_cc.left <= local_e8.left) {
            uVar9 = local_cc.left;
          }
          FUN_0052dce0(uVar9,LVar8,local_e8.bottom,2);
          goto LAB_0045bbae;
        }
        if (fVar13 == (float10)_DAT_00557d70) {
          uVar15 = CONCAT44(1,local_e8.left);
          uVar9 = local_e8.top;
        }
        else if ((float10)_DAT_0055d658 <= fVar13) {
          if (fVar13 != (float10)_DAT_0055d658) {
            LVar8 = local_cc.bottom;
            if (local_cc.bottom < local_e8.bottom) {
              LVar8 = local_e8.bottom;
            }
            uVar9 = local_e8.top;
            if (local_cc.top <= local_e8.top) {
              uVar9 = local_cc.top;
            }
            FUN_0052dce0(uVar9,LVar8,local_e8.right,3);
            LVar8 = local_cc.right;
            if (local_cc.right < local_e8.right) {
              LVar8 = local_e8.right;
            }
            uVar9 = local_e8.left;
            if (local_cc.left <= local_e8.left) {
              uVar9 = local_cc.left;
            }
            goto LAB_0045bb0d;
          }
          LVar8 = local_cc.right;
          if (local_cc.right < local_e8.right) {
            LVar8 = local_e8.right;
          }
          if (local_cc.left <= local_e8.left) {
            uVar9 = local_cc.left;
          }
          uVar15 = (ulonglong)(uint)local_e8.top;
        }
        else {
          LVar8 = local_cc.bottom;
          if (local_cc.bottom < local_e8.bottom) {
            LVar8 = local_e8.bottom;
          }
          uVar9 = local_e8.top;
          if (local_cc.top <= local_e8.top) {
            uVar9 = local_cc.top;
          }
          FUN_0052dce0(uVar9,LVar8,local_e8.left,1);
          LVar8 = local_cc.right;
          if (local_cc.right < local_e8.right) {
            LVar8 = local_e8.right;
          }
          uVar9 = local_e8.left;
          if (local_e8.left < local_cc.left) {
LAB_0045bb0d:
            uVar15 = (ulonglong)(uint)local_e8.top;
          }
          else {
            uVar15 = (ulonglong)(uint)local_e8.top;
            uVar9 = local_cc.left;
          }
        }
      }
    }
    else {
      LVar8 = local_cc.bottom;
      if (local_cc.bottom < local_e8.bottom) {
        LVar8 = local_e8.bottom;
      }
      uVar9 = local_e8.top;
      if (local_cc.top <= local_e8.top) {
        uVar9 = local_cc.top;
      }
      FUN_0052dce0(uVar9,LVar8,local_e8.right,3);
      LVar8 = local_cc.right;
      if (local_cc.right < local_e8.right) {
        LVar8 = local_e8.right;
      }
      uVar9 = local_e8.left;
      if (local_cc.left <= local_e8.left) {
        uVar9 = local_cc.left;
      }
      uVar15 = CONCAT44(2,local_e8.bottom);
    }
  }
  FUN_0052dce0(uVar9,LVar8,uVar15);
LAB_0045bbae:
  FUN_0052ddf0(local_9c,&local_70,param_3,&local_80,local_bc,iVar5,0,param_14 + 0x18,param_13);
  FUN_0052dc70();
  return 0;
}


