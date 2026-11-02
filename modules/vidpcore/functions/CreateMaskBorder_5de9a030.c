/* Module: vidpcore.dll
   Function: CreateMaskBorder
   Address: 5de9a030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall CreateMaskBorder(struct tagRECT *,struct tagRECT *,unsigned char *,struct tagRECT
   *,long,unsigned char *,struct tagRECT *,long,long,double,double,int,struct tIRISINFO *) */

long CreateMaskBorder(tagRECT *param_1,tagRECT *param_2,uchar *param_3,tagRECT *param_4,long param_5
                     ,uchar *param_6,tagRECT *param_7,long param_8,long param_9,double param_10,
                     double param_11,int param_12,tIRISINFO *param_13)

{
  double dVar1;
  double dVar2;
  undefined1 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 in_stack_00000028;
  int *local_84;
  int *local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  double local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28 [5];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
                    /* 0x9a030  9  ?CreateMaskBorder@@YGJPAUtagRECT@@0PAE0J10JJNNHPAUtIRISINFO@@@Z
                        */
  local_70 = *(int *)(param_12 + 0x24);
  if (local_70 < 1) {
    local_70 = 1;
  }
  *(int *)(param_12 + 0x24) = local_70;
  local_74 = *(int *)(param_12 + 0x28);
  if (local_74 < 1) {
    local_74 = 1;
  }
  *(int *)(param_12 + 0x28) = local_74;
  local_40 = (double)(param_1->right - param_1->left) / (double)local_70;
  local_48 = (double)(param_1->bottom - param_1->top) / (double)local_74;
  dVar1 = local_48;
  if (local_48 < local_40) {
    dVar1 = local_40;
  }
  local_50 = (double)*(float *)(param_12 + 8) * dVar1 * _DAT_5df1c7e8;
  iVar8 = param_1->top - param_2->top;
  local_58 = (double)*(float *)(param_12 + 0xc) * dVar1 * _DAT_5df1c7e8;
  local_30 = (double)(param_1->left - param_2->left);
  local_60 = (double)CONCAT44(local_60._4_4_,iVar8);
  local_38 = (double)iVar8;
  lVar4 = FUN_5debb890(param_3,param_4,param_5,param_4,param_9,0,0,0,0,0,0,0,0);
  if (-1 < lVar4) {
    if (param_9 == 4) {
      local_74 = -1;
      local_80 = &local_74;
    }
    else {
      local_80 = local_28;
      local_28[2] = 0x3f800000;
      local_28[1] = 0x3f800000;
      local_28[0] = 0x3f800000;
      local_28[3] = 0x3f800000;
    }
    if (_DAT_5df18838 < local_58) {
      lVar4 = FUN_5debb890(param_6,param_7,param_8,param_7,param_9,0,0,0,0,0,0,0,0);
      if (lVar4 < 0) {
        return lVar4;
      }
      if (param_9 == 4) {
        uVar3 = ftol();
        local_70._0_3_ = CONCAT12(uVar3,(undefined2)local_70);
        uVar3 = ftol();
        local_70._0_2_ = CONCAT11(uVar3,(undefined1)local_70);
        uVar3 = ftol();
        local_70 = CONCAT31(local_70._1_3_,uVar3);
        uVar3 = ftol();
        local_84 = &local_70;
        local_70 = CONCAT13(uVar3,(undefined3)local_70);
      }
      else {
        local_28[4] = *(undefined4 *)(param_12 + 0x14);
        local_14 = *(undefined4 *)(param_12 + 0x18);
        local_10 = *(undefined4 *)(param_12 + 0x1c);
        local_c = *(undefined4 *)(param_12 + 0x20);
        local_84 = local_28 + 4;
      }
    }
    local_30 = (double)(*(float *)param_12 * (float)local_40 + (float)param_1->left +
                       (float)local_30);
    local_38 = (double)(*(float *)(param_12 + 4) * (float)local_48 + (float)param_1->top +
                       (float)local_38);
    if ((_DAT_5df18838 < local_58) && (local_58 < local_50)) {
      local_50 = local_58;
    }
    local_78 = 0;
    if (0 < *(int *)(param_12 + 0x28)) {
      do {
        if (lVar4 < 0) {
          return lVar4;
        }
        local_7c = 0;
        if (0 < *(int *)(param_12 + 0x24)) {
          do {
            if (lVar4 < 0) break;
            dVar1 = local_40;
            dVar2 = local_48;
            if (param_11._4_4_ == 0) {
              dVar1 = local_40 - local_30;
              if (local_40 - local_30 < local_30) {
                dVar1 = local_30;
              }
              dVar2 = local_48 - local_38;
              if (local_48 - local_38 < local_38) {
                dVar2 = local_38;
              }
              dVar2 = dVar2 / (double)CONCAT44(param_10._0_4_,in_stack_00000028);
            }
            dVar1 = SQRT(dVar1 * dVar1 + dVar2 * dVar2);
            local_60 = (dVar1 + local_50) * (double)CONCAT44(param_11._0_4_,param_10._4_4_);
            if (_DAT_5df18838 < local_58) {
              local_60 = (local_58 + local_50 + local_58 + local_50 + dVar1) *
                         (double)CONCAT44(param_11._0_4_,param_10._4_4_);
            }
            dVar1 = local_50;
            if (local_60 < local_50) {
              dVar1 = local_60;
            }
            local_60 = local_60 - dVar1;
            uVar5 = ftol();
            uVar6 = ftol();
            local_60 = (double)CONCAT44(local_60._4_4_,uVar6);
            local_64 = ftol();
            local_64 = ((int)local_64 < 0) - 1 & local_64;
            local_68 = ftol();
            local_68 = ((int)local_68 < 0) - 1 & local_68;
            local_6c = ftol();
            uVar7 = ftol();
            uVar6 = *(undefined4 *)(param_12 + 0x2c);
            switch(uVar6) {
            case 0:
            case 1:
            case 2:
              lVar4 = FUN_5de9c320(param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                                   param_10._4_4_,param_11,(undefined4)local_30,local_30._4_4_,
                                   (undefined4)local_38,local_38._4_4_,(undefined4)local_40,
                                   local_40._4_4_,(undefined4)local_48,local_48._4_4_,
                                   in_stack_00000028,param_10._0_4_,local_7c,local_78,
                                   (undefined4)local_50,local_50._4_4_,local_80,(undefined4)local_58
                                   ,local_58._4_4_,local_84,uVar6);
              break;
            default:
              lVar4 = FUN_5de9a8b0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                                   param_10._4_4_,param_11,(undefined4)local_30,local_30._4_4_,
                                   (undefined4)local_38,local_38._4_4_,(undefined4)local_40,
                                   local_40._4_4_,(undefined4)local_48,local_48._4_4_,
                                   in_stack_00000028,param_10._0_4_,local_7c,local_78,
                                   (undefined4)local_50,local_50._4_4_,local_80,(undefined4)local_58
                                   ,local_58._4_4_,local_84);
              break;
            case 4:
              lVar4 = FUN_5de9be80(param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                                   param_10._4_4_,param_11,(undefined4)local_30,local_30._4_4_,
                                   (undefined4)local_38,local_38._4_4_,(undefined4)local_40,
                                   local_40._4_4_,(undefined4)local_48,local_48._4_4_,
                                   in_stack_00000028,param_10._0_4_,local_7c,local_78,
                                   (undefined4)local_50,local_50._4_4_,local_80,(undefined4)local_58
                                   ,local_58._4_4_,local_84);
              break;
            case 5:
              lVar4 = FUN_5de9bc50(param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                                   param_10._4_4_,param_11,(undefined4)local_30,local_30._4_4_,
                                   (undefined4)local_38,local_38._4_4_,(undefined4)local_40,
                                   local_40._4_4_,(undefined4)local_48,local_48._4_4_,
                                   in_stack_00000028,param_10._0_4_,local_7c,local_78,
                                   (undefined4)local_50,local_50._4_4_,local_80,(undefined4)local_58
                                   ,local_58._4_4_,local_84);
              break;
            case 6:
            case 7:
            case 8:
            case 9:
              lVar4 = FUN_5de9c090(param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                                   (undefined4)local_50,local_50._4_4_,local_80,(undefined4)local_58
                                   ,local_58._4_4_,local_84,uVar5,local_60._0_4_,local_64,local_68,
                                   local_6c,uVar7,uVar6);
              break;
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
              lVar4 = FUN_5de9c1b0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                                   (undefined4)local_50,local_50._4_4_,local_80,(undefined4)local_58
                                   ,local_58._4_4_,local_84,uVar5,local_60._0_4_,local_64,local_68,
                                   local_6c,uVar7,uVar6);
            }
            local_7c = local_7c + 1;
          } while (local_7c < *(int *)(param_12 + 0x24));
        }
        local_78 = local_78 + 1;
      } while (local_78 < *(int *)(param_12 + 0x28));
    }
    if ((-1 < lVar4) && (_DAT_5df205cc < *(float *)(param_12 + 8))) {
      if (_DAT_5df18838 < local_58) {
        iVar8 = FUN_5dec94c0(param_6,param_7,param_8,param_7,param_6,param_7,param_8,param_7,
                             (undefined4)local_50,local_50._4_4_,(undefined4)local_50,local_50._4_4_
                             ,3,param_9);
        if (iVar8 < 0) {
          return iVar8;
        }
      }
      local_38 = local_50 - _DAT_5df18830;
      if (local_38 < _DAT_5df18838) {
        local_38 = 0.0;
      }
      local_30._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
      uVar6 = local_30._4_4_;
      local_30._0_4_ = SUB84(local_38,0);
      uVar5 = (undefined4)local_30;
      local_30 = local_38;
      lVar4 = FUN_5dec94c0(param_3,param_4,param_5,param_4,param_3,param_4,param_5,param_4,uVar5,
                           uVar6,uVar5,uVar6,3,param_9);
      return lVar4;
    }
  }
  return lVar4;
}


