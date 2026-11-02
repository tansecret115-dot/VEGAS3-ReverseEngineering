/* Module: vidpcore.dll
   Function: SfDibWipe
   Address: 5de85380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibWipe(void *,struct tagRECT *,long,struct tagRECT *,void *,void
   *,long,long,struct tagRECT *,struct tagRECT *,long,double,double,double,int) */

long SfDibWipe(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
              void *param_6,long param_7,long param_8,tagRECT *param_9,tagRECT *param_10,
              long param_11,double param_12,double param_13,double param_14,int param_15)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  float fVar14;
  byte *pbVar15;
  byte *pbVar16;
  float10 extraout_ST0;
  float10 fVar17;
  float10 fVar18;
  undefined4 in_stack_00000030;
  undefined8 local_100;
  undefined4 local_f8;
  float local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  double local_d4;
  byte local_cc;
  undefined3 uStack_cb;
  uint local_c8;
  byte local_c4;
  undefined3 uStack_c3;
  byte local_c0;
  undefined3 uStack_bf;
  int local_bc;
  byte local_b8;
  undefined3 uStack_b7;
  byte local_b4;
  undefined3 uStack_b3;
  byte local_b0;
  undefined3 uStack_af;
  int local_ac;
  int local_a8;
  byte local_a4;
  undefined3 uStack_a3;
  byte local_a0;
  undefined3 uStack_9f;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  double local_64;
  undefined1 local_5c [4];
  int local_58;
  undefined1 local_4c [64];
  undefined1 local_c [12];
  
                    /* 0x85380  21  ?SfDibWipe@@YGJPAXPAUtagRECT@@J100JJ11JNNNH@Z */
  FUN_5debc1e0(local_5c,&local_d8,&local_e8,&local_e4,&local_f0,param_1,param_2,param_3,param_4,
               param_5,param_9,param_7,param_10,param_11);
  iVar8 = FUN_5debc1e0(local_5c,&local_d8,&local_e8,&local_dc,&local_f0,param_1,param_2,param_3,
                       param_4,param_6,param_9,param_8,param_10,param_11);
  if (-1 < iVar8) {
    local_a8 = iVar8;
    if (DAT_5df42a04 == 0) {
      FUN_5de85140(&DAT_5df42904);
      FUN_5de85290(&DAT_5df42804);
      DAT_5df42a04 = 1;
    }
    local_bc = ftol();
    local_c8 = (uint)((float10)_DAT_5df18830 <= extraout_ST0);
    if (((double)CONCAT44(param_13._0_4_,param_12._4_4_) <= _DAT_5df2ada0) ||
       (_DAT_5df2ad98 <= (double)CONCAT44(param_13._0_4_,param_12._4_4_))) {
      if ((_DAT_5df2ad90 < (double)CONCAT44(param_13._0_4_,param_12._4_4_)) &&
         ((double)CONCAT44(param_13._0_4_,param_12._4_4_) < _DAT_5df2ad88)) {
        param_12._4_4_ = 0xa3d70a4;
        param_13._0_4_ = 0x4070dfd7;
      }
    }
    else {
      param_12._4_4_ = 0x28f5c28f;
      param_13._0_4_ = 0x40567f5c;
    }
    fVar17 = (float10)(double)CONCAT44(param_13._0_4_,param_12._4_4_) * (float10)_DAT_5df2ad80;
    iVar9 = param_9->bottom - param_9->top;
    local_100 = (double)fVar17;
    fVar18 = (float10)fcos(fVar17);
    iVar11 = param_9->right - param_9->left;
    local_8c = 0;
    local_88 = 0xbf800000;
    local_84 = 0;
    local_80 = 0x3f800000;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    local_90 = 0x3f800000;
    local_d4 = (double)fVar18;
    fVar17 = (float10)fsin(fVar17);
    local_64 = (double)fVar17;
    FUN_5ded2830(local_4c);
    if (_DAT_5df2ad78 <= (double)CONCAT44(param_13._0_4_,param_12._4_4_)) {
      if (_DAT_5df2ad70 <= (double)CONCAT44(param_13._0_4_,param_12._4_4_)) {
        if (_DAT_5df2ad68 <= (double)CONCAT44(param_13._0_4_,param_12._4_4_)) {
          FUN_5ded25c0(0,0,0x3f800000,(float)local_100,local_4c);
          fVar17 = (float10)fptan((float10)_DAT_5df2ad60 - (float10)local_100);
          fVar17 = ((float10)(double)CONCAT44(param_12._0_4_,in_stack_00000030) / (float10)local_d4
                    + (float10)iVar11 + fVar17 * (float10)iVar9) *
                   (float10)(double)CONCAT44(param_14._0_4_,param_13._4_4_) -
                   fVar17 * (float10)iVar9;
        }
        else {
          FUN_5ded25c0(0,0,0x3f800000,(float)local_100,local_4c);
          fVar17 = (float10)fptan((float10)local_100);
          fVar17 = fVar17 * (float10)iVar9 + (float10)iVar11;
          fVar17 = fVar17 - (fVar17 - (float10)(double)CONCAT44(param_12._0_4_,in_stack_00000030) /
                                      (float10)local_d4) *
                            (float10)(double)CONCAT44(param_14._0_4_,param_13._4_4_);
        }
      }
      else {
        FUN_5ded25c0(0,0,0x3f800000,(float)local_100,local_4c);
        fVar17 = (float10)fptan((float10)local_100);
        fVar17 = (float10)iVar11 -
                 (((float10)iVar11 - fVar17 * (float10)iVar9) -
                 (float10)(double)CONCAT44(param_12._0_4_,in_stack_00000030) / (float10)local_d4) *
                 (float10)(double)CONCAT44(param_14._0_4_,param_13._4_4_);
      }
    }
    else {
      FUN_5ded25c0(0,0,0x3f800000,(float)local_100,local_4c);
      fVar17 = (float10)fptan((float10)local_100);
      fVar17 = ((float10)(double)CONCAT44(param_12._0_4_,in_stack_00000030) / (float10)local_d4 +
                fVar17 * (float10)iVar9 + (float10)iVar11) *
               (float10)(double)CONCAT44(param_14._0_4_,param_13._4_4_);
    }
    FUN_5ded26f0((float)fVar17,0,0,local_4c);
    FUN_5ded2900(&local_8c,local_4c);
    FUN_5ded2900(&local_9c,local_4c);
    local_100 = 0.0;
    local_f8 = 0;
    FUN_5ded2450(&local_8c,&local_9c,local_7c);
    FUN_5ded2450(&local_100,&local_9c,local_c);
    FUN_5ded2480(local_7c,local_c,local_70);
    fVar17 = (float10)FUN_5ded24e0(local_70);
    local_f4 = (float)fVar17;
    FUN_5ded24e0(local_7c);
    fVar14 = 0.0;
    local_f4 = 0.0;
    if (0 < local_e8) {
      local_ac = ftol();
      do {
        local_ec = local_58 + (int)fVar14;
        iVar9 = ftol();
        local_ec = 0;
        if (0 < local_d8) {
          local_e0 = iVar9 + 0x2000;
          pbVar12 = (byte *)(local_dc + 3);
          pbVar15 = (byte *)(local_f0 + 2);
          pbVar16 = (byte *)(local_e4 + 3);
          do {
            if (iVar9 < local_bc) {
              if (iVar9 < -0x2000) {
                if (param_14._4_4_ == 0) {
                  uVar10 = *(undefined4 *)(pbVar16 + -3);
                  goto LAB_5de85cf9;
                }
                iVar8 = (0xff - (uint)*pbVar16) * (uint)pbVar15[-2] + 0x7f;
                pbVar15[-2] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + pbVar16[-3];
                iVar8 = (0xff - (uint)*pbVar16) * (uint)pbVar15[-1] + 0x7f;
                pbVar15[-1] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + pbVar16[-2];
                iVar8 = (0xff - (uint)*pbVar16) * (uint)*pbVar15 + 0x7f;
                *pbVar15 = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + pbVar16[-1];
                iVar8 = (0xff - (uint)*pbVar16) * (uint)pbVar15[1] + 0x7f;
                pbVar15[1] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + *pbVar16;
              }
              else {
                if ((iVar9 < 0x2000) && (local_c8 == 0)) {
                  bVar1 = (&DAT_5df42a03)[-(local_e0 >> 6)];
                }
                else {
                  iVar8 = ftol();
                  bVar1 = (&DAT_5df42804)[iVar8];
                }
                uVar4 = local_100;
                if (param_14._4_4_ == 0) {
                  bVar2 = pbVar16[-3];
                  _local_b0 = CONCAT31(uStack_af,bVar2);
                  uVar3 = (uint)bVar1;
                  iVar8 = ((uint)pbVar12[-3] - (uint)bVar2) * uVar3;
                  pbVar15[-2] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + bVar2;
                  bVar1 = pbVar16[-2];
                  _local_b4 = CONCAT31(uStack_b3,bVar1);
                  iVar8 = ((uint)pbVar12[-2] - (uint)bVar1) * uVar3;
                  pbVar15[-1] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + bVar1;
                  bVar1 = pbVar16[-1];
                  _local_a0 = CONCAT31(uStack_9f,bVar1);
                  iVar8 = ((uint)pbVar12[-1] - (uint)bVar1) * uVar3;
                  *pbVar15 = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + bVar1;
                  bVar1 = *pbVar16;
                  _local_a4 = CONCAT31(uStack_a3,bVar1);
                  iVar8 = ((uint)*pbVar12 - (uint)bVar1) * uVar3;
                  pbVar15[1] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + bVar1;
                }
                else {
                  bVar2 = pbVar16[-3];
                  _local_cc = CONCAT31(uStack_cb,bVar2);
                  uVar3 = (uint)bVar1;
                  iVar8 = ((uint)pbVar12[-3] - (uint)bVar2) * uVar3;
                  bVar1 = pbVar16[-2];
                  _local_c0 = CONCAT31(uStack_bf,bVar1);
                  iVar11 = ((uint)pbVar12[-2] - (uint)bVar1) * uVar3;
                  cVar5 = (char)(iVar11 + (iVar11 >> 0x1f & 0xffU) >> 8) + bVar1;
                  bVar1 = pbVar16[-1];
                  _local_b8 = CONCAT31(uStack_b7,bVar1);
                  iVar11 = ((uint)pbVar12[-1] - (uint)bVar1) * uVar3;
                  cVar6 = (char)(iVar11 + (iVar11 >> 0x1f & 0xffU) >> 8) + bVar1;
                  bVar1 = *pbVar16;
                  _local_c4 = CONCAT31(uStack_c3,bVar1);
                  iVar11 = ((uint)*pbVar12 - (uint)bVar1) * uVar3;
                  cVar7 = (char)(iVar11 + (iVar11 >> 0x1f & 0xffU) >> 8) + bVar1;
                  local_100._4_4_ = SUB84(uVar4,4);
                  local_100._0_4_ =
                       CONCAT13(cVar7,CONCAT12(cVar6,CONCAT11(cVar5,(undefined1)local_100)));
                  iVar13 = 0xff - (local_100._3_4_ & 0xff);
                  iVar11 = (uint)pbVar15[-2] * iVar13 + 0x7f;
                  pbVar15[-2] = (char)(iVar11 + (iVar11 >> 0x1f & 0xffU) >> 8) +
                                (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + bVar2;
                  iVar8 = (uint)pbVar15[-1] * iVar13 + 0x7f;
                  pbVar15[-1] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + cVar5;
                  iVar8 = (uint)*pbVar15 * iVar13 + 0x7f;
                  *pbVar15 = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + cVar6;
                  iVar8 = (uint)pbVar15[1] * iVar13 + 0x7f;
                  pbVar15[1] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + cVar7;
                }
              }
            }
            else if (param_14._4_4_ == 0) {
              uVar10 = *(undefined4 *)(pbVar12 + -3);
LAB_5de85cf9:
              *(undefined4 *)(pbVar15 + -2) = uVar10;
            }
            else {
              iVar8 = (0xff - (uint)*pbVar12) * (uint)pbVar15[-2] + 0x7f;
              pbVar15[-2] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + pbVar12[-3];
              iVar8 = (0xff - (uint)*pbVar12) * (uint)pbVar15[-1] + 0x7f;
              pbVar15[-1] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + pbVar12[-2];
              iVar8 = (0xff - (uint)*pbVar12) * (uint)*pbVar15 + 0x7f;
              *pbVar15 = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + pbVar12[-1];
              iVar8 = (0xff - (uint)*pbVar12) * (uint)pbVar15[1] + 0x7f;
              pbVar15[1] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + *pbVar12;
            }
            iVar9 = iVar9 + local_ac;
            local_e0 = local_e0 + local_ac;
            local_ec = local_ec + 1;
            pbVar16 = pbVar16 + 4;
            pbVar12 = pbVar12 + 4;
            pbVar15 = pbVar15 + 4;
            iVar8 = local_a8;
            fVar14 = local_f4;
          } while (local_ec < local_d8);
        }
        local_f0 = local_f0 + param_3;
        local_dc = local_dc + param_8;
        local_e4 = local_e4 + param_7;
        fVar14 = (float)((int)fVar14 + 1);
        local_f4 = fVar14;
      } while ((int)fVar14 < local_e8);
    }
  }
  return iVar8;
}


