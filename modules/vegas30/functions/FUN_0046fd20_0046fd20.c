/* Module: vegas30.exe
   Function: FUN_0046fd20
   Address: 0046fd20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0046fd20(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  short *psVar1;
  short *psVar2;
  float fVar3;
  short sVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  short *psVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  longlong lVar23;
  DWORD DVar24;
  undefined1 uVar25;
  CHAR local_fc [80];
  uint local_ac;
  int iStack_a8;
  undefined4 local_a4;
  int iStack_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  int iStack_78;
  undefined4 local_74;
  uint uStack_70;
  DWORD local_6c;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  uint local_48;
  int local_44;
  int *local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  int *local_14;
  undefined8 local_10;
  uint local_8;
  
  iVar19 = param_3;
  iVar6 = (int)param_2;
  local_68._4_4_ = *(int **)((int)param_2 + 0x48);
  local_9c = *(int *)((int)param_2 + 0x20);
  local_98 = *(undefined4 *)((int)param_2 + 0x24);
  local_94 = *(int *)((int)param_2 + 0x28);
  local_90 = *(undefined4 *)((int)param_2 + 0x2c);
  iVar8 = local_68._4_4_[param_4 * 0x16 + 8];
  local_40 = local_68._4_4_ + param_4 * 0x16;
  iStack_78 = iVar8;
  local_6c = GetSysColor(0xd);
  bVar5 = 0;
  if (iVar8 == 0) {
    return 0;
  }
  if ((*(uint *)(param_3 + 0x58) & 0x100) != 0) {
    param_6 = 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  local_14 = *(int **)(iVar8 + 0x60);
  if (local_14 == (int *)0x0) {
    if ((*(uint *)(*(int *)(iVar8 + 8) + 0x134) >> 5 & 1) != 0) {
      return 0;
    }
    uStack_70 = *(uint *)(iVar8 + 0x8c) & 1;
    if (uStack_70 != 0) {
      return 0;
    }
    iVar7 = FUN_005f6aa0();
    if (iVar7 != 0) {
LAB_0046fde6:
      _SfLoadString_16(DAT_00647204,0x4e31 - (uint)bVar5,local_fc,0x50);
      iVar8 = lstrlenA(local_fc);
      FUN_00465760(param_1,&local_9c,param_3,*local_68._4_4_,local_fc,iVar8);
      return 0;
    }
    local_14 = *(int **)(iVar8 + 0x60);
    if (local_14 == (int *)0x0) {
      bVar5 = 1;
      local_14 = (int *)0x0;
      goto LAB_0046fde6;
    }
  }
  if (param_4 == 0) {
    iVar7 = *local_68._4_4_;
  }
  else {
    iVar7 = local_68._4_4_[1];
  }
  iVar16 = *(int *)(iVar7 + 0x218);
  local_84 = *(double *)(iVar16 + 0x18);
  if ((*(int *)(iVar16 + 0x1c) < 1) && (*(int *)(iVar16 + 0x1c) < 0)) {
    return 0;
  }
  iStack_a0 = iVar7;
  local_3c = ftol();
  local_48 = *(uint *)(iVar7 + 0x10);
  uVar9 = local_48 >> 0x1c & 3;
  if (uVar9 < 3) {
    if ((uVar9 == 2) || (uVar9 == 0)) {
      local_60 = *(double *)(iVar7 + 0x28);
      goto LAB_0046feab;
    }
    if (uVar9 != 1) goto LAB_0046feab;
  }
  else if (uVar9 != 0xffffffff) goto LAB_0046feab;
  local_60 = (double)_DAT_006106d0;
LAB_0046feab:
  uVar9 = *(uint *)(*(int *)(iVar8 + 0x2c) + 4);
  local_24 = (double)(ulonglong)uVar9;
  iVar7 = *(int *)(iVar16 + 0x28) - *(int *)(iVar16 + 0x20);
  local_50 = (double)(longlong)local_24;
  iVar16 = iVar7 >> 0x1f;
  local_2c = (double)CONCAT44(local_2c._4_4_,iVar7);
  uStack_70 = uVar9;
  local_24 = (double)ftol();
  uVar22 = ftol();
  iVar7 = (int)((ulonglong)uVar22 >> 0x20);
  if ((iVar16 < iVar7) || ((iVar16 <= iVar7 && ((uint)local_2c < (uint)uVar22)))) {
    local_1c._4_4_ = 0;
  }
  else {
    local_1c._4_4_ = 1;
  }
  local_68._4_4_ = (int *)(local_48 >> 0x14 & 1);
  local_8 = (uint)*(ushort *)(*(int *)(iVar8 + 0x2c) + 2);
  if ((local_48 & 0x100000) == 0) {
    if (((local_48 & 0x100) != 0) || (local_44 = 0, *(int *)(iVar8 + 0x6c) != 0)) {
      local_44 = 1;
    }
  }
  else {
    local_44 = 0;
  }
  uVar18 = local_40[6] + *(uint *)((int)param_2 + 8);
  iVar8 = local_40[7] + *(int *)((int)param_2 + 0xc) +
          (uint)CARRY4(local_40[6],*(uint *)((int)param_2 + 8));
  local_24 = (double)(ulonglong)(uVar9 - 1);
  local_ac = uVar18;
  iStack_a8 = iVar8;
  local_24 = (double)ftol();
  local_10 = ftol();
  if (local_1c._4_4_ == 0) {
    local_50 = (double)ftol();
    uVar22 = ftol();
    local_50 = (double)ftol();
    local_60 = (double)ftol();
    iVar8 = local_94 - local_9c;
    local_34._4_4_ = iVar8;
    if (((local_48 & 0x100) != 0) && (local_10 != 0)) {
      uVar22 = __allrem(uVar22,local_10);
    }
    FUN_0060ac30();
    if ((local_8 == 2) && (local_40[10] != 1000)) {
      uStack_70 = 1;
    }
    else {
      uStack_70 = 0;
    }
    if (DAT_006476e4 == 0) {
      local_1c._4_4_ = 0;
      local_10._4_4_ = (short *)&stack0xfffffef8;
      (**(code **)(*local_14 + 0x34))
                (local_14,uVar22,(undefined4)local_60,local_60._4_4_,&stack0xfffffef8,iVar8,
                 (int)&local_1c + 4);
      psVar12 = local_10._4_4_;
      iVar6 = local_1c._4_4_;
      if (local_1c._4_4_ < iVar8) {
        if (local_44 == 0) {
          uVar9 = (local_34._4_4_ - local_1c._4_4_) * local_8 * 4;
          psVar12 = local_10._4_4_ + local_1c._4_4_ * local_8 * 2;
LAB_00470b0e:
          for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            psVar12[0] = 0;
            psVar12[1] = 0;
            psVar12 = psVar12 + 2;
          }
          for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined1 *)psVar12 = 0;
            psVar12 = (short *)((int)psVar12 + 1);
          }
        }
        else {
          local_84 = (double)(longlong)local_60;
          iVar8 = local_34._4_4_ - local_1c._4_4_;
          local_60 = (double)iVar8 * local_84;
          local_24 = (double)(longlong)local_34._4_4_;
          local_2c = (double)(longlong)local_34._4_4_;
          local_44 = iVar8;
          local_50 = (double)__alldiv(local_34._4_4_,local_34._4_4_ >> 0x1f,2,0);
          uVar22 = ftol();
          while (0 < iVar8) {
            psVar12 = psVar12 + iVar6 * local_8 * 2;
            (**(code **)(*local_14 + 0x34))(local_14,0,0,uVar22,psVar12,iVar8,(int)&local_1c + 4);
            iVar6 = local_1c._4_4_;
            if (local_1c._4_4_ < 1) {
              uVar9 = iVar8 * local_8 * 4;
              goto LAB_00470b0e;
            }
            iVar8 = iVar8 - local_1c._4_4_;
            local_60 = (double)iVar8 * local_84;
            local_2c = local_24;
            local_44 = iVar8;
            local_50 = (double)__alldiv((int)local_24,local_24._4_4_,2,0);
            uVar22 = ftol();
          }
        }
      }
    }
    else {
      if (((local_40[9] == 0) && (uStack_70 == 0)) && ((local_40[0x1a] & 0x200U) == 0)) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      local_10._4_4_ = (short *)&stack0xfffffef8;
      local_10._4_4_ =
           (short *)FUN_00471c40(iStack_a0,iStack_78,&stack0xfffffef8,uVar13,local_9c,iVar8);
    }
    if (uStack_70 != 0) {
      switch(local_40[10]) {
      case 0x3e9:
        psVar12 = local_10._4_4_ + 2;
        psVar11 = local_10._4_4_;
        iVar8 = local_34._4_4_;
        if (0 < local_34._4_4_) {
          do {
            uVar13 = *(undefined4 *)psVar12;
            psVar12 = psVar12 + 4;
            *(undefined4 *)psVar11 = uVar13;
            iVar8 = iVar8 + -1;
            psVar11 = psVar11 + 2;
          } while (iVar8 != 0);
        }
        local_8 = 1;
        break;
      case 0x3ea:
        psVar12 = local_10._4_4_;
        psVar11 = local_10._4_4_;
        iVar8 = local_34._4_4_;
        if (0 < local_34._4_4_) {
          do {
            *(undefined4 *)psVar12 = *(undefined4 *)psVar11;
            iVar8 = iVar8 + -1;
            psVar12 = psVar12 + 2;
            psVar11 = psVar11 + 4;
          } while (iVar8 != 0);
        }
        local_8 = 1;
        break;
      case 0x3eb:
        psVar12 = local_10._4_4_;
        iVar8 = local_34._4_4_;
        if (0 < local_34._4_4_) {
          do {
            psVar12[1] = 0;
            *psVar12 = 0;
            iVar8 = iVar8 + -1;
            psVar12 = psVar12 + 4;
          } while (iVar8 != 0);
        }
        local_8 = 2;
        break;
      case 0x3ec:
        psVar12 = local_10._4_4_ + 2;
        iVar8 = local_34._4_4_;
        if (0 < local_34._4_4_) {
          do {
            psVar12[1] = 0;
            *psVar12 = 0;
            psVar12 = psVar12 + 4;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        local_8 = 2;
        break;
      case 0x3ed:
        if (0 < local_34._4_4_) {
          psVar12 = local_10._4_4_ + 1;
          psVar11 = local_10._4_4_;
          iVar8 = local_34._4_4_;
          do {
            psVar11[1] = (short)((int)psVar12[2] + (int)*psVar12 >> 1);
            psVar1 = psVar12 + -1;
            psVar2 = psVar12 + 1;
            psVar12 = psVar12 + 4;
            *psVar11 = (short)((int)*psVar1 + (int)*psVar2 >> 1);
            iVar8 = iVar8 + -1;
            psVar11 = psVar11 + 2;
          } while (iVar8 != 0);
        }
        local_8 = 1;
        break;
      case 0x3ee:
        psVar12 = local_10._4_4_;
        iVar8 = local_34._4_4_;
        if (0 < local_34._4_4_) {
          do {
            uVar13 = *(undefined4 *)psVar12;
            *(undefined4 *)psVar12 = *(undefined4 *)(psVar12 + 2);
            *(undefined4 *)(psVar12 + 2) = uVar13;
            iVar8 = iVar8 + -1;
            psVar12 = psVar12 + 4;
          } while (iVar8 != 0);
        }
        local_8 = 2;
      }
    }
    if (((local_40[0x1a] & 0x200U) != 0) &&
       (iVar8 = local_34._4_4_ * local_8, psVar12 = local_10._4_4_, 0 < iVar8)) {
      do {
        sVar4 = *psVar12;
        *psVar12 = -1 - psVar12[1];
        psVar12[1] = -1 - sVar4;
        iVar8 = iVar8 + -1;
        psVar12 = psVar12 + 2;
      } while (iVar8 != 0);
    }
    param_3 = *(int *)(param_3 + 0x1c);
    if (param_3 == 0) {
      param_3 = 0x8000;
    }
    if ((local_34._4_4_ == 0) || (local_40[9] == 0)) {
      fVar3 = *(float *)(iStack_a0 + 0x60);
      if ((DAT_00647748 != 0) && ((*(uint *)(iStack_a0 + 0x10) & 0x200) != 0)) {
        fVar3 = fVar3 * *(float *)(iStack_a0 + 100);
      }
      if ((float)_DAT_00612998 < fVar3) {
        param_3 = ftol();
      }
      else {
        param_3 = 0x7fffffff;
      }
    }
    else {
      FUN_00471740(local_10._4_4_,local_34._4_4_,local_8,param_2,param_4);
    }
    if (param_7 == 0) {
      uVar13 = *(undefined4 *)(&DAT_0063e298 + param_5 * 8);
      if (local_68._4_4_ != (int *)0x0) {
        uVar13 = 0xff;
      }
      if ((DAT_0064aee8 != 0) && (param_6 != 0)) {
        uVar13 = FUN_0046fcf0(uVar13,0xffffff,0x80);
      }
      if (param_8 != 0) {
        uVar13 = FUN_00460550(uVar13,3);
      }
      if ((DAT_0064aee8 == 0) && (param_6 != 0)) {
        uVar13 = FUN_0046fcf0(uVar13,local_6c,DAT_0064aed0);
      }
      piVar17 = &local_9c;
      uVar9 = local_8;
      psVar12 = local_10._4_4_;
    }
    else {
      if (DAT_0064aee8 == 0) {
        puVar20 = (undefined4 *)(&DAT_0063e298 + param_5 * 8);
        uVar13 = *puVar20;
        DVar24 = local_6c;
        uVar25 = DAT_0064aed0;
      }
      else {
        uVar13 = *(undefined4 *)(&DAT_0063e298 + param_5 * 8);
        puVar20 = (undefined4 *)(&DAT_0063e298 + param_5 * 8);
        DVar24 = 0xffffff;
        uVar25 = 0x80;
      }
      uVar13 = FUN_0046fcf0(uVar13,DVar24,uVar25);
      uVar21 = *puVar20;
      if (local_68._4_4_ != (int *)0x0) {
        uVar13 = 0xff;
        uVar21 = 0xff;
      }
      uVar15 = uVar13;
      if ((DAT_0064aee8 != 0) && (param_6 != 0)) {
        uVar15 = FUN_0046fcf0(uVar13,0xffffff,0x80);
        uVar21 = uVar13;
      }
      if (param_8 != 0) {
        uVar15 = FUN_00460550(uVar15,3);
        uVar21 = FUN_00460550(uVar21,3);
      }
      uVar13 = uVar15;
      if ((DAT_0064aee8 == 0) && (param_6 != 0)) {
        uVar13 = FUN_0046fcf0(uVar21,local_6c,DAT_0064aed4);
        uVar21 = uVar15;
      }
      uVar9 = local_8;
      local_54 = local_98;
      local_58 = local_9c;
      local_50._0_4_ = *(int *)((int)param_2 + 0x3c);
      local_50._4_4_ = local_90;
      if ((int)local_50 != local_9c && -1 < (int)local_50 - local_9c) {
        FUN_00471420(param_1,&local_58,local_8,local_10._4_4_,param_3,uVar21);
      }
      local_50._0_4_ = local_94;
      local_58 = *(int *)((int)param_2 + 0x40);
      if (local_94 != local_58 && -1 < local_94 - local_58) {
        FUN_00471420(param_1,&local_58,uVar9,local_10._4_4_ + (local_58 - local_9c) * uVar9 * 2,
                     param_3,uVar21);
      }
      local_58 = *(int *)((int)param_2 + 0x3c);
      iVar8 = *(int *)((int)param_2 + 0x40);
      local_50 = (double)CONCAT44(local_50._4_4_,iVar8);
      if (iVar8 == local_58 || iVar8 - local_58 < 0) {
        return 1;
      }
      piVar17 = &local_58;
      psVar12 = local_10._4_4_ + (local_58 - local_9c) * uVar9 * 2;
    }
    FUN_00471420(param_1,piVar17,uVar9,psVar12,param_3,uVar13);
  }
  else {
    local_24 = (double)ftol();
    lVar23 = ftol();
    local_24 = (double)CONCAT44(*(int *)((int)param_2 + 0x1c) + iVar8 +
                                (uint)CARRY4(*(uint *)((int)param_2 + 0x18),uVar18),
                                *(uint *)((int)param_2 + 0x18) + uVar18);
    local_3c = lVar23;
    local_24 = (double)ftol();
    local_24 = (double)ftol();
    if (uVar9 == 0) {
      local_1c = 0;
    }
    else {
      local_1c = ftol();
    }
    lVar23 = ftol();
    local_84 = (double)(lVar23 - CONCAT44(iVar8,uVar18));
    if (uVar9 == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = ftol();
    }
    local_2c = (double)*(int *)(param_3 + 0x40);
    iStack_78 = *(undefined4 *)(param_3 + 0x3c);
    uVar13 = *(undefined4 *)(param_3 + 0x38);
    uVar9 = *(uint *)((int)param_2 + 0x10);
    iVar8 = *(int *)((int)param_2 + 0x14);
    local_7c = uVar13;
    local_1c = uVar22;
    uVar22 = ftol();
    uVar18 = (uint)uVar22 - *(uint *)(param_3 + 0x30);
    uVar10 = uVar18 - local_ac;
    local_1c._0_4_ = uVar10 + uVar9;
    local_1c._4_4_ =
         (((((int)((ulonglong)uVar22 >> 0x20) - *(int *)(param_3 + 0x34)) -
           (uint)((uint)uVar22 < *(uint *)(param_3 + 0x30))) - iStack_a8) -
         (uint)(uVar18 < local_ac)) + iVar8 + (uint)CARRY4(uVar10,uVar9);
    local_34 = (double)CONCAT44(local_1c._4_4_,(int)local_1c) * local_2c;
    local_1c = __alldiv(uVar13,iStack_78,2,0);
    iVar7 = ftol();
    iVar7 = iVar7 + *(int *)(param_3 + 0x44);
    if (iVar7 < -0x4000) {
      local_34 = (double)CONCAT44(0xffffc000,(undefined4)local_34);
    }
    else {
      local_34 = (double)CONCAT44(0x3fff,(undefined4)local_34);
      if (iVar7 < 0x4000) {
        local_34 = (double)CONCAT44(iVar7,(undefined4)local_34);
      }
    }
    local_1c._4_4_ = *(undefined4 *)(param_3 + 0x3c);
    local_84 = (double)((longlong)local_84 +
                       CONCAT44((iVar8 - *(int *)(param_3 + 0x34)) -
                                (uint)(uVar9 < *(uint *)(param_3 + 0x30)),
                                uVar9 - *(uint *)(param_3 + 0x30)));
    local_84 = (double)(longlong)local_84 * local_2c;
    local_1c._0_4_ = uVar13;
    local_2c = (double)__alldiv(uVar13,local_1c._4_4_,2,0);
    iVar8 = ftol();
    iVar8 = iVar8 + *(int *)(param_3 + 0x44);
    if (iVar8 < -0x4000) {
      iStack_78 = -0x4000;
    }
    else {
      iStack_78 = 0x3fff;
      if (iVar8 < 0x4000) {
        iStack_78 = iVar8;
      }
    }
    local_1c._4_4_ = (int)local_24 - (int)local_3c;
    iVar8 = local_1c._4_4_ + 1;
    lVar23 = local_3c;
    if (((local_48 & 0x100) != 0) && (local_10 != 0)) {
      lVar23 = __allrem(local_3c,local_10);
    }
    local_3c._0_4_ = (int)lVar23;
    uVar13 = (int)local_3c;
    iVar7 = local_8 * 4;
    local_3c = lVar23;
    FUN_0060ac30();
    local_48 = 0;
    local_10._4_4_ = (short *)&stack0xfffffef8;
    (**(code **)(*local_14 + 0x34))
              (local_14,uVar13,local_3c._4_4_,iVar8,iVar8 >> 0x1f,&stack0xfffffef8,iVar8,&local_48);
    if ((int)local_48 < iVar8) {
      if (local_44 == 0) {
        uVar9 = (iVar8 - local_48) * iVar7;
        psVar12 = local_10._4_4_ + local_48 * local_8 * 2;
LAB_004702a3:
        for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          psVar12[0] = 0;
          psVar12[1] = 0;
          psVar12 = psVar12 + 2;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined1 *)psVar12 = 0;
          psVar12 = (short *)((int)psVar12 + 1);
        }
      }
      else {
        psVar12 = local_10._4_4_;
        for (iVar7 = iVar8 - local_48; 0 < iVar7; iVar7 = iVar7 - local_48) {
          psVar12 = psVar12 + local_48 * local_8 * 2;
          (**(code **)(*local_14 + 0x34))(local_14,0,0,iVar7,iVar7 >> 0x1f,psVar12,iVar7,&local_48);
          if ((int)local_48 < 1) {
            uVar9 = iVar7 * local_8 * 4;
            goto LAB_004702a3;
          }
        }
      }
    }
    if ((local_8 == 2) && (local_40[10] != 1000)) {
      switch(local_40[10]) {
      case 0x3e9:
        psVar12 = local_10._4_4_ + 2;
        psVar11 = local_10._4_4_;
        iVar7 = iVar8;
        if (0 < iVar8) {
          do {
            uVar13 = *(undefined4 *)psVar12;
            psVar12 = psVar12 + 4;
            *(undefined4 *)psVar11 = uVar13;
            iVar7 = iVar7 + -1;
            psVar11 = psVar11 + 2;
          } while (iVar7 != 0);
        }
        local_8 = 1;
        break;
      case 0x3ea:
        psVar12 = local_10._4_4_;
        psVar11 = local_10._4_4_;
        iVar7 = iVar8;
        if (0 < iVar8) {
          do {
            *(undefined4 *)psVar12 = *(undefined4 *)psVar11;
            iVar7 = iVar7 + -1;
            psVar12 = psVar12 + 2;
            psVar11 = psVar11 + 4;
          } while (iVar7 != 0);
        }
        local_8 = 1;
        break;
      case 0x3eb:
        psVar12 = local_10._4_4_;
        iVar7 = iVar8;
        if (0 < iVar8) {
          do {
            psVar12[1] = 0;
            *psVar12 = 0;
            iVar7 = iVar7 + -1;
            psVar12 = psVar12 + 4;
          } while (iVar7 != 0);
        }
        local_8 = 2;
        break;
      case 0x3ec:
        psVar12 = local_10._4_4_ + 2;
        iVar7 = iVar8;
        if (0 < iVar8) {
          do {
            psVar12[1] = 0;
            *psVar12 = 0;
            psVar12 = psVar12 + 4;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        local_8 = 2;
        break;
      case 0x3ed:
        if (0 < iVar8) {
          psVar12 = local_10._4_4_ + 1;
          psVar11 = local_10._4_4_;
          iVar7 = iVar8;
          do {
            psVar11[1] = (short)((int)psVar12[2] + (int)*psVar12 >> 1);
            psVar1 = psVar12 + -1;
            psVar2 = psVar12 + 1;
            psVar12 = psVar12 + 4;
            *psVar11 = (short)((int)*psVar1 + (int)*psVar2 >> 1);
            iVar7 = iVar7 + -1;
            psVar11 = psVar11 + 2;
          } while (iVar7 != 0);
        }
        local_8 = 1;
        break;
      case 0x3ee:
        psVar12 = local_10._4_4_;
        iVar7 = iVar8;
        if (0 < iVar8) {
          do {
            uVar13 = *(undefined4 *)psVar12;
            *(undefined4 *)psVar12 = *(undefined4 *)(psVar12 + 2);
            *(undefined4 *)(psVar12 + 2) = uVar13;
            iVar7 = iVar7 + -1;
            psVar12 = psVar12 + 4;
          } while (iVar7 != 0);
        }
        local_8 = 2;
      }
    }
    if (((local_40[0x1a] & 0x200U) != 0) &&
       (iVar7 = iVar8 * local_8, psVar12 = local_10._4_4_, 0 < iVar7)) {
      do {
        sVar4 = *psVar12;
        *psVar12 = -1 - psVar12[1];
        psVar12[1] = -1 - sVar4;
        iVar7 = iVar7 + -1;
        psVar12 = psVar12 + 2;
      } while (iVar7 != 0);
    }
    local_14 = *(int **)(param_3 + 0x1c);
    if (local_14 == (int *)0x0) {
      local_14 = (int *)0x8000;
    }
    if ((iVar8 == 0) || (local_40[9] == 0)) {
      fVar3 = *(float *)(iStack_a0 + 0x60);
      if ((DAT_00647748 != 0) && ((*(uint *)(iStack_a0 + 0x10) & 0x200) != 0)) {
        fVar3 = fVar3 * *(float *)(iStack_a0 + 100);
      }
      if ((float)_DAT_00612998 < fVar3) {
        local_14 = (int *)ftol();
      }
      else {
        local_14 = (int *)0x7fffffff;
      }
    }
    else {
      FUN_00471740(local_10._4_4_,iVar8,local_8,param_2,param_4);
    }
    if (param_7 == 0) {
      uVar13 = *(undefined4 *)(&DAT_0063e298 + param_5 * 8);
      if (local_68._4_4_ != (int *)0x0) {
        uVar13 = 0xff;
      }
      if ((DAT_0064aee8 != 0) && (param_6 != 0)) {
        uVar13 = FUN_0046fcf0(uVar13,0xffffff,0x80);
      }
      if (param_8 != 0) {
        uVar13 = FUN_00460550(uVar13,3);
      }
      if ((DAT_0064aee8 == 0) && (param_6 != 0)) {
        uVar13 = FUN_0046fcf0(uVar13,local_6c,DAT_0064aed0);
      }
      FUN_00470f70(param_1,&local_9c,local_1c._4_4_,local_8,local_10._4_4_,local_14,uVar13,
                   local_34._4_4_,iStack_78 - local_34._4_4_);
      return 1;
    }
    if (DAT_0064aee8 == 0) {
      param_2 = (undefined4 *)(&DAT_0063e298 + param_5 * 8);
      param_3 = FUN_0046fcf0(*param_2,local_6c,DAT_0064aed0);
    }
    else {
      param_2 = (undefined4 *)(&DAT_0063e298 + param_5 * 8);
      param_3 = FUN_0046fcf0(*(undefined4 *)(&DAT_0063e298 + param_5 * 8),0xffffff,0x80);
    }
    param_2 = (undefined4 *)*param_2;
    if (local_68._4_4_ != (int *)0x0) {
      param_3 = 0xff;
      param_2 = (undefined4 *)0xff;
    }
    if ((DAT_0064aee8 != 0) && (param_6 != 0)) {
      uVar13 = FUN_0046fcf0(param_3,0xffffff,0x80);
      param_2 = (undefined4 *)param_3;
      param_3 = uVar13;
    }
    if (param_8 != 0) {
      param_3 = FUN_00460550(param_3,3);
      param_2 = (undefined4 *)FUN_00460550(param_2,3);
    }
    if ((DAT_0064aee8 == 0) && (param_6 != 0)) {
      uVar13 = FUN_0046fcf0(param_2,local_6c,DAT_0064aed4);
      param_2 = (undefined4 *)param_3;
      param_3 = uVar13;
    }
    iVar7 = iStack_78 - local_34._4_4_;
    iVar8 = MulDiv(*(int *)(iVar6 + 0x3c) - local_34._4_4_,local_1c._4_4_,iVar7);
    if (uStack_70 == 0) {
      local_68 = 0;
    }
    else {
      local_2c = (double)(local_3c + iVar8);
      local_68 = ftol();
    }
    local_a4 = *(undefined4 *)(iVar19 + 0x38);
    iStack_a0 = *(undefined4 *)(iVar19 + 0x3c);
    uVar22 = ftol();
    uVar9 = (uint)uVar22 - *(uint *)(iVar19 + 0x30);
    uVar18 = uVar9 - local_ac;
    local_2c = (double)CONCAT44((((((int)((ulonglong)uVar22 >> 0x20) - *(int *)(iVar19 + 0x34)) -
                                  (uint)((uint)uVar22 < *(uint *)(iVar19 + 0x30))) - iStack_a8) -
                                (uint)(uVar9 < local_ac)) + *(int *)(iVar6 + 0x14) +
                                (uint)CARRY4(uVar18,*(uint *)(iVar6 + 0x10)),
                                uVar18 + *(uint *)(iVar6 + 0x10));
    local_24 = (double)(longlong)local_2c * (double)*(int *)(iVar19 + 0x40);
    local_2c = (double)__alldiv(local_a4,iStack_a0,2,0);
    iVar16 = ftol();
    iVar16 = iVar16 + *(int *)(iVar19 + 0x44);
    if (iVar16 < -0x4000) {
      param_6 = -0x4000;
    }
    else {
      param_6 = 0x3fff;
      if (iVar16 < 0x4000) {
        param_6 = iVar16;
      }
    }
    iVar16 = MulDiv(*(int *)(iVar6 + 0x40) - local_34._4_4_,local_1c._4_4_,iVar7);
    if (uStack_70 == 0) {
      uVar22 = 0;
    }
    else {
      local_2c = (double)(local_3c + iVar16);
      uVar22 = ftol();
    }
    local_74 = *(undefined4 *)(iVar19 + 0x38);
    uStack_70 = *(undefined4 *)(iVar19 + 0x3c);
    local_3c = uVar22;
    uVar22 = ftol();
    uVar9 = (uint)uVar22 - *(uint *)(iVar19 + 0x30);
    uVar18 = uVar9 - local_ac;
    local_50 = (double)CONCAT44((((((int)((ulonglong)uVar22 >> 0x20) - *(int *)(iVar19 + 0x34)) -
                                  (uint)((uint)uVar22 < *(uint *)(iVar19 + 0x30))) - iStack_a8) -
                                (uint)(uVar9 < local_ac)) + *(int *)(iVar6 + 0x14) +
                                (uint)CARRY4(uVar18,*(uint *)(iVar6 + 0x10)),
                                uVar18 + *(uint *)(iVar6 + 0x10));
    local_2c = (double)(longlong)local_50 * (double)*(int *)(iVar19 + 0x40);
    local_50 = (double)__alldiv(local_74,uStack_70,2,0);
    iVar14 = ftol();
    iVar14 = iVar14 + *(int *)(iVar19 + 0x44);
    if (iVar14 < -0x4000) {
      iVar19 = -0x4000;
    }
    else {
      iVar19 = 0x3fff;
      if (iVar14 < 0x4000) {
        iVar19 = iVar14;
      }
    }
    FUN_00470f70(param_1,&local_9c,local_1c._4_4_,local_8,local_10._4_4_,local_14,param_2,
                 local_34._4_4_,iVar7);
    local_88 = local_98;
    local_8c = *(undefined4 *)(iVar6 + 0x3c);
    local_84 = (double)CONCAT44(local_90,*(undefined4 *)(iVar6 + 0x40));
    if (param_6 < iVar19) {
      FUN_00470f70(param_1,&local_8c,iVar16 - iVar8,local_8,local_10._4_4_ + iVar8 * local_8 * 2,
                   local_14,param_3,param_6,iVar19 - param_6);
      return 1;
    }
  }
  return 1;
}


