/* Module: vegas30.exe
   Function: FUN_00498ae0
   Address: 00498ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00499413) */
/* WARNING: Removing unreachable block (ram,0x00499089) */
/* WARNING: Removing unreachable block (ram,0x00498fa5) */
/* WARNING: Removing unreachable block (ram,0x00498eba) */
/* WARNING: Removing unreachable block (ram,0x00498e2a) */
/* WARNING: Removing unreachable block (ram,0x00498e9e) */
/* WARNING: Removing unreachable block (ram,0x00498f89) */
/* WARNING: Removing unreachable block (ram,0x0049980b) */
/* WARNING: Removing unreachable block (ram,0x004997b7) */
/* WARNING: Removing unreachable block (ram,0x00499760) */
/* WARNING: Removing unreachable block (ram,0x004997d1) */
/* WARNING: Removing unreachable block (ram,0x00499887) */
/* WARNING: Removing unreachable block (ram,0x0049943d) */
/* WARNING: Removing unreachable block (ram,0x004990a5) */
/* WARNING: Removing unreachable block (ram,0x004998c9) */

undefined8 FUN_00498ae0(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  longlong lVar23;
  double local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  int local_34;
  undefined8 local_30;
  uint local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  undefined1 local_8 [8];
  
  iVar3 = *(int *)(param_1 + 0xcec);
  if (iVar3 == 0) goto LAB_00499a04;
  iVar8 = *(int *)(param_1 + 0x1ac);
  uVar17 = *(uint *)(param_1 + 0x1a8);
  if ((iVar8 < param_4) || ((iVar8 <= param_4 && (uVar17 <= param_3)))) {
    iVar8 = *(int *)(param_1 + 0x1b4);
    uVar17 = *(uint *)(param_1 + 0x1b0);
    uVar15 = param_3;
    iVar18 = param_4;
    if ((iVar8 <= param_4) && ((iVar8 < param_4 || (uVar17 < param_3)))) goto LAB_00498b36;
  }
  else {
LAB_00498b36:
    uVar15 = uVar17;
    iVar18 = iVar8;
  }
  lVar20 = CONCAT44(iVar18,uVar15);
  if ((uVar15 == *(uint *)(param_1 + 0x198)) && (iVar18 == *(int *)(param_1 + 0x19c))) {
    return CONCAT44(iVar18,uVar15);
  }
  iVar8 = *(int *)(iVar3 + 0x218);
  FUN_005c71f0(*(undefined4 *)(param_1 + 0xbc8),iVar3,0,&local_38,local_8,0);
  piVar4 = *(int **)(param_1 + 0xcd8);
  if (piVar4 == (int *)0x0) {
    param_3 = 0;
  }
  else {
    param_3 = *piVar4;
  }
  lVar21 = CONCAT44(iVar18,uVar15);
  switch(param_2) {
  case 5:
    lVar21 = FUN_00494160(param_1,uVar15,iVar18);
    param_5 = 0;
    if (param_3 != -1 && -1 < (int)(param_3 + 1)) {
      do {
        iVar18 = (int)((ulonglong)lVar21 >> 0x20);
        uVar17 = (uint)lVar21;
        iVar8 = iVar3;
        if (param_5 != param_3) {
          iVar8 = *(int *)(piVar4[2] + param_5 * 4);
        }
        iVar10 = *(int *)(iVar8 + 0x218);
        if (((*(uint *)(iVar8 + 0x10) & 8) == 0) && ((*(uint *)(iVar8 + 0x10) & 0x100000) == 0)) {
          local_40 = (double)CONCAT44((*(int *)(iVar10 + 0x84) - iVar18) -
                                      (uint)(*(uint *)(iVar10 + 0x80) < uVar17),
                                      *(uint *)(iVar10 + 0x80) - uVar17);
          FUN_005c71f0(*(undefined4 *)(param_1 + 0xbc8),iVar8,0,&local_20,&local_10,0);
          if (((uint)local_40 != local_20) || (local_40._4_4_ != iStack_1c)) {
            FUN_005c7320(iVar8,0,&local_40,0);
            uVar15 = *(uint *)(iVar10 + 0x80);
            local_14 = (*(int *)(iVar10 + 0x84) - iVar18) - (uint)(uVar15 < uVar17);
            if (((uint)local_40 != uVar15 - uVar17) || (local_40._4_4_ != local_14)) {
              lVar21 = CONCAT44((*(int *)(iVar10 + 0x84) - local_40._4_4_) -
                                (uint)(uVar15 < (uint)local_40),uVar15 - (uint)local_40);
            }
            local_28 = *(uint *)(iVar8 + 0x20);
            iStack_24 = *(int *)(iVar8 + 0x24);
            FUN_005c7760(iVar8,0,&local_28,2,0);
            InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(iVar10 + 0x20),0);
          }
        }
        param_5 = param_5 + 1;
      } while (param_5 < (int)(param_3 + 1));
    }
    FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
    *(longlong *)(param_1 + 0x198) = lVar21;
    break;
  case 6:
  case 0x19:
  case 0x1b:
  case 0x1c:
    bVar19 = param_2 == 0x19;
    local_58._0_4_ = (uint)(param_2 == 0x1b);
    local_60 = (double)CONCAT44(local_60._4_4_,(uint)(param_2 == 0x1c));
    if (param_5 == 0) {
      if (((!bVar19) &&
          (FUN_005c71f0(*(undefined4 *)(param_1 + 0xbc8),iVar3,0,bVar19,&local_50,1),
          -1 < local_50._4_4_)) && ((0 < local_50._4_4_ || ((uint)local_50 != 0)))) {
        lVar20 = __allrem(*(uint *)(iVar8 + 0x88) + uVar15,
                          *(int *)(iVar8 + 0x8c) + iVar18 +
                          (uint)CARRY4(*(uint *)(iVar8 + 0x88),uVar15),(uint)local_50,local_50._4_4_
                         );
        if ((lVar20 < 0x100000000) && (lVar20 < 0)) {
          lVar20 = lVar20 + CONCAT44(local_50._4_4_,(uint)local_50);
        }
        local_30._0_4_ = (uint)local_50 - (uint)lVar20;
        local_30._4_4_ =
             (local_50._4_4_ - (int)((ulonglong)lVar20 >> 0x20)) -
             (uint)((uint)local_50 < (uint)lVar20);
        if ((-1 < local_30._4_4_) &&
           (lVar20 = __allmul(*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194),2,0),
           CONCAT44(local_30._4_4_,(uint)local_30) <= lVar20)) {
          uVar7 = *(uint *)(iVar8 + 0x90) - (uint)local_30;
          iVar13 = (*(int *)(iVar8 + 0x94) - local_30._4_4_) -
                   (uint)(*(uint *)(iVar8 + 0x90) < (uint)local_30);
          uVar17 = (uint)(uVar7 < uVar15);
          iVar10 = iVar13 - iVar18;
          local_c = iVar10 - uVar17;
          if ((-1 < local_c) &&
             ((local_c != 0 && SBORROW4(iVar13,iVar18) == SBORROW4(iVar10,uVar17) ||
              (1 < uVar7 - uVar15)))) {
            lVar20 = CONCAT44(iVar18 + local_30._4_4_ + (uint)CARRY4(uVar15,(uint)local_30),
                              uVar15 + (uint)local_30);
            goto LAB_00498ec2;
          }
        }
      }
      lVar21 = FUN_004964f0(param_1,iVar3,*(uint *)(iVar8 + 0x80) + uVar15,
                            *(int *)(iVar8 + 0x84) + iVar18 +
                            (uint)CARRY4(*(uint *)(iVar8 + 0x80),uVar15));
      lVar21 = lVar21 - *(longlong *)(iVar8 + 0x80);
      lVar20 = *(longlong *)(param_1 + 0x1a8);
      if ((*(longlong *)(param_1 + 0x1a8) <= lVar21) &&
         (lVar20 = lVar21, *(longlong *)(param_1 + 0x1b0) < lVar21)) {
        lVar20 = *(longlong *)(param_1 + 0x1b0);
      }
    }
LAB_00498ec2:
    puVar9 = (uint *)(iVar8 + 0x80);
    uVar17 = *puVar9;
    local_30._4_4_ = *(int *)(iVar8 + 0x84);
    local_48 = lVar20 + *(longlong *)puVar9;
    uVar15 = *(uint *)(iVar8 + 0x90);
    iVar8 = *(int *)(iVar8 + 0x94);
    iVar18 = iVar8;
    uVar7 = uVar15;
    if ((uint)local_58 == 0) {
      uVar7 = uVar17 - (uint)local_48;
      local_14 = (local_30._4_4_ - (int)((ulonglong)local_48 >> 0x20)) -
                 (uint)(uVar17 < (uint)local_48);
      iVar18 = local_14 + iVar8 + (uint)CARRY4(uVar7,uVar15);
      local_50._4_4_ = iVar8;
      uVar7 = uVar7 + uVar15;
    }
    local_50 = CONCAT44(local_50._4_4_,uVar15);
    local_40 = (double)CONCAT44(iVar18,uVar7);
    if ((iVar18 < 1) && ((iVar18 < 0 || (uVar7 == 0)))) {
      uVar7 = (uVar17 + uVar15) - 1;
      iVar8 = (local_30._4_4_ + iVar8 + (uint)CARRY4(uVar17,uVar15)) - (uint)(uVar17 + uVar15 == 0);
      local_48 = CONCAT44(iVar8,uVar7);
      local_40 = 4.94065645841247e-324;
      lVar20 = CONCAT44((iVar8 - local_30._4_4_) - (uint)(uVar7 < uVar17),uVar7 - uVar17);
    }
    if (param_3 != 0) {
      local_50 = local_48;
      if (*(longlong *)puVar9 < local_48) {
        local_50 = *(longlong *)puVar9;
      }
      _param_3 = local_48;
      if (local_48 < *(longlong *)puVar9) {
        _param_3 = *(longlong *)puVar9;
      }
      if ((uint)local_58 == 0) {
        if (local_60._0_4_ == 0) {
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = *(undefined4 *)(param_1 + 0xcdc);
        }
        FUN_004987a0(piVar4,local_48,local_50,_param_3,lVar20,uVar17,local_30._4_4_,bVar19,uVar16);
      }
      else {
        FUN_00498720(piVar4,lVar20);
      }
      if ((local_60._0_4_ != 0) && (*(int *)(param_1 + 0x1b8) != 0)) {
        iVar8 = *(int *)(*(int *)(param_1 + 0x1b8) + 0x218);
        local_28 = *(uint *)(iVar8 + 0x90);
        iStack_24 = *(int *)(iVar8 + 0x94);
        _param_3 = CONCAT44(*(int *)(iVar8 + 0x84) + iStack_24 +
                            (uint)CARRY4(*(uint *)(iVar8 + 0x80),local_28),
                            *(uint *)(iVar8 + 0x80) + local_28);
        lVar21 = lVar20 + _param_3;
        local_30._0_4_ = (uint)lVar21;
        local_50 = _param_3;
        if (lVar21 < _param_3) {
          local_50 = lVar21;
        }
        if (_param_3 < lVar21) {
          _param_3 = lVar21;
        }
        if (((longlong)local_40 < 0) ||
           ((iVar8 = local_40._4_4_, uVar17 = (uint)local_40, local_40._4_4_ < 1 &&
            ((uint)local_40 < 2)))) {
          uVar17 = 1;
          iVar8 = 0;
        }
        FUN_00498930(piVar4,lVar21,local_50,_param_3,local_28,iStack_24,uVar17,iVar8,0,
                     *(undefined4 *)(param_1 + 0xcdc));
      }
    }
    param_5 = *(int *)(param_1 + 0xce8);
    _param_3 = local_48;
    FUN_005c7760(iVar3,&local_48,&local_40,(-(uint)bVar19 & 0xfffffffd) + 3,&param_5);
    if (local_60._0_4_ != 0) {
      iVar8 = *(int *)(param_1 + 0x1b8);
      if (iVar8 != 0) {
        uVar17 = *(uint *)(*(int *)(iVar8 + 0x218) + 0x90);
        local_20 = uVar17 + (uint)lVar20;
        iStack_1c = *(int *)(*(int *)(iVar8 + 0x218) + 0x94) + (int)((ulonglong)lVar20 >> 0x20) +
                    (uint)CARRY4(uVar17,(uint)lVar20);
        FUN_005c7760(iVar8,0,&local_20,0,0);
      }
      param_5 = FUN_005c9450(*(undefined4 *)(param_1 + 0xbc8),iVar3);
    }
    if (local_48 != _param_3) {
      lVar20 = lVar20 - local_48;
    }
    if (-1 < param_5) {
      *(int *)(param_1 + 0xce8) = param_5;
    }
    FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
    lVar21 = lVar20;
    break;
  case 7:
  case 0x1a:
    uVar17 = *(uint *)(iVar8 + 0x80);
    bVar19 = param_2 == 0x1a;
    uVar7 = uVar17 + *(uint *)(iVar8 + 0x90);
    iStack_1c = *(int *)(iVar8 + 0x84) + *(int *)(iVar8 + 0x94) +
                (uint)CARRY4(uVar17,*(uint *)(iVar8 + 0x90));
    local_58._0_4_ = (uVar7 - uVar17) + uVar15;
    local_58._4_4_ =
         ((iStack_1c - *(int *)(iVar8 + 0x84)) - (uint)(uVar7 < uVar17)) + iVar18 +
         (uint)CARRY4(uVar7 - uVar17,uVar15);
    lVar21 = CONCAT44(local_58._4_4_,(uint)local_58);
    if (param_5 == 0) {
      if (((!bVar19) &&
          (FUN_005c71f0(*(undefined4 *)(param_1 + 0xbc8),iVar3,0,0,&local_30,1), -1 < local_30._4_4_
          )) && ((0 < local_30._4_4_ || ((uint)local_30 != 0)))) {
        iVar10 = __alldiv((uint)local_58 + local_38,
                          local_58._4_4_ + local_34 + (uint)CARRY4((uint)local_58,local_38),
                          (uint)local_30,local_30._4_4_);
        if ((*(uint *)(iVar3 + 0x10) & 0x100) == 0) {
          iVar10 = 1;
        }
        uVar22 = __allmul(iVar10,iVar10 >> 0x1f,(uint)local_30,local_30._4_4_);
        iVar13 = (int)((ulonglong)uVar22 >> 0x20);
        uVar11 = (uint)uVar22 - local_38;
        uVar17 = (uint)((uint)uVar22 < local_38);
        iVar10 = iVar13 - local_34;
        iVar14 = iVar10 - uVar17;
        local_40 = (double)CONCAT44(iVar14,uVar11);
        if (((-1 < iVar14) &&
            ((((iVar14 != 0 && SBORROW4(iVar13,local_34) == SBORROW4(iVar10,uVar17) || (1 < uVar11))
              && (iVar14 <= local_58._4_4_)) &&
             ((iVar14 < local_58._4_4_ || (uVar11 <= (uint)local_58)))))) &&
           (lVar23 = __allmul(*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194),2,0),
           lVar21 = (longlong)local_40,
           CONCAT44(local_58._4_4_,(uint)local_58) <= lVar23 + (longlong)local_40))
        goto LAB_00499805;
      }
      lVar20 = FUN_00496c80(param_1,iVar3,uVar7 + uVar15,
                            iStack_1c + iVar18 + (uint)CARRY4(uVar7,uVar15));
      lVar20 = lVar20 - CONCAT44(iStack_1c,uVar7);
      uVar16 = *(undefined4 *)(param_1 + 0x1a8);
      uVar12 = *(undefined4 *)(param_1 + 0x1ac);
      if (lVar20 < *(longlong *)(param_1 + 0x1a8)) {
LAB_004997d5:
        lVar20 = CONCAT44(uVar12,uVar16);
      }
      else {
        uVar16 = *(undefined4 *)(param_1 + 0x1b0);
        uVar12 = *(undefined4 *)(param_1 + 0x1b4);
        if (*(longlong *)(param_1 + 0x1b0) < lVar20) goto LAB_004997d5;
      }
      uVar17 = *(uint *)(*(int *)(iVar3 + 0x218) + 0x80);
      lVar21 = lVar20 + CONCAT44((iStack_1c - *(int *)(*(int *)(iVar3 + 0x218) + 0x84)) -
                                 (uint)(uVar7 < uVar17),uVar7 - uVar17);
    }
LAB_00499805:
    if (lVar21 < 2) {
      lVar21 = 1;
    }
    local_58 = lVar21;
    if (param_3 != 0) {
      uVar17 = *(uint *)(iVar8 + 0x80);
      _param_3 = lVar21 + *(longlong *)(iVar8 + 0x80);
      local_10 = uVar17 + *(uint *)(iVar8 + 0x90);
      local_40 = (double)CONCAT44(*(int *)(iVar8 + 0x84) + *(int *)(iVar8 + 0x94) +
                                  (uint)CARRY4(uVar17,*(uint *)(iVar8 + 0x90)),local_10);
      local_30 = (longlong)local_40;
      if (_param_3 < (longlong)local_40) {
        local_30 = _param_3;
      }
      lVar23 = (longlong)local_40;
      if ((longlong)local_40 < _param_3) {
        lVar23 = _param_3;
      }
      local_14 = (int)((ulonglong)lVar23 >> 0x20);
      if ((bVar19) && (-1 < local_34)) {
        uVar16 = 1;
      }
      else {
        uVar16 = 0;
      }
      FUN_00498930(piVar4,_param_3,local_30,lVar23,*(undefined4 *)(iVar8 + 0x90),
                   *(undefined4 *)(iVar8 + 0x94),lVar21,uVar16,0);
    }
    FUN_005c7760(iVar3,0,&local_58,2,0);
    if ((bVar19) && (-1 < local_34)) {
      uVar17 = *(uint *)(iVar8 + 0x88) - (uint)local_58;
      param_3 = uVar17 + *(uint *)(iVar8 + 0x90);
      param_4 = ((*(int *)(iVar8 + 0x8c) - local_58._4_4_) -
                (uint)(*(uint *)(iVar8 + 0x88) < (uint)local_58)) + *(int *)(iVar8 + 0x94) +
                (uint)CARRY4(uVar17,*(uint *)(iVar8 + 0x90));
      FUN_005c7320(iVar3,0,&param_3,0);
    }
    FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
    lVar21 = lVar20;
    break;
  case 0x15:
  case 0x16:
    if (((*(int *)(iVar3 + 4) != 2) || (uVar17 = *(uint *)(iVar3 + 0x10) >> 0x1c & 3, uVar17 == 0))
       || (lVar21 = lVar20, uVar17 == 2)) {
      bVar19 = param_2 == 0x15;
      local_40._0_4_ = *(uint *)(iVar8 + 0x80);
      local_40._4_4_ = *(int *)(iVar8 + 0x84);
      local_48._0_4_ = (uint)local_40 + *(uint *)(iVar8 + 0x90);
      local_48._4_4_ =
           local_40._4_4_ + *(int *)(iVar8 + 0x94) +
           (uint)CARRY4((uint)local_40,*(uint *)(iVar8 + 0x90));
      puVar9 = &local_18;
      if (!bVar19) {
        puVar9 = (uint *)&local_58;
      }
      FUN_00498260(iVar3,piVar4,puVar9,-(uint)bVar19 & (uint)&local_58,&local_20,&local_60,1);
      if (bVar19) {
        dVar5 = (double)CONCAT44(local_58._4_4_,(uint)local_58) /
                (double)CONCAT44((local_58._4_4_ - local_14) - (uint)((uint)local_58 < local_18),
                                 (uint)local_58 - local_18);
        if (dVar5 <= local_60) {
          local_60 = dVar5;
        }
        local_28 = (uint)local_58 - (uint)local_40;
        iStack_24 = (local_58._4_4_ - local_40._4_4_) - (uint)((uint)local_58 < (uint)local_40);
        lVar21 = ftol();
        local_28 = *(uint *)(iVar8 + 0x80);
        iVar8 = *(int *)(iVar8 + 0x84) + iVar18 + (uint)CARRY4(local_28,uVar15);
      }
      else {
        local_50._0_4_ = *(uint *)(iVar8 + 0x90);
        local_50._4_4_ = *(int *)(iVar8 + 0x94);
        ftol();
        local_28 = (uint)local_40 - (uint)local_58;
        iStack_24 = (local_40._4_4_ - local_58._4_4_) - (uint)((uint)local_40 < (uint)local_58);
        lVar21 = ftol();
        local_28 = (uint)local_50 + *(uint *)(iVar8 + 0x80);
        iVar8 = local_50._4_4_ + *(int *)(iVar8 + 0x84) +
                (uint)CARRY4((uint)local_50,*(uint *)(iVar8 + 0x80)) + iVar18 +
                (uint)CARRY4(local_28,uVar15);
      }
      lVar6 = CONCAT44(local_48._4_4_,(uint)local_48);
      lVar2 = CONCAT44(local_40._4_4_,(uint)local_40);
      local_30._4_4_ = (int)((ulonglong)lVar21 >> 0x20);
      local_28 = local_28 + uVar15;
      lVar23 = CONCAT44(iVar8,local_28);
      local_50._4_4_ = *(undefined4 *)(param_1 + 0x194);
      plVar1 = (longlong *)(param_1 + 400);
      local_50._0_4_ = *(uint *)plVar1;
      local_10 = (uint)(lVar21 - *plVar1);
      if ((lVar23 < lVar21 - *plVar1) ||
         (local_10 = (uint)(lVar21 + *plVar1), lVar21 + *plVar1 < lVar23)) {
        if (param_5 != 0) goto LAB_00499453;
        if (bVar19) {
          lVar20 = FUN_004964f0(param_1,iVar3,(uint)local_40 + uVar15,
                                local_40._4_4_ + iVar18 + (uint)CARRY4((uint)local_40,uVar15));
          lVar20 = lVar20 - lVar2;
          goto LAB_00499453;
        }
        lVar20 = FUN_00496c80(param_1,iVar3,(uint)local_48 + uVar15,
                              local_48._4_4_ + iVar18 + (uint)CARRY4((uint)local_48,uVar15));
        lVar20 = lVar20 - lVar6;
LAB_004994f3:
        local_30._0_4_ = (uint)local_48 - (uint)local_58;
        local_30._4_4_ = (local_48._4_4_ - local_58._4_4_) - (uint)((uint)local_48 < (uint)local_58)
        ;
        local_28 = (uint)local_30 + (uint)lVar20;
        iStack_24 = local_30._4_4_ + (int)((ulonglong)lVar20 >> 0x20) +
                    (uint)CARRY4((uint)local_30,(uint)lVar20);
        lVar23 = CONCAT44(iStack_24,local_28);
        lVar2 = CONCAT44(local_30._4_4_,(uint)local_30);
        lVar21 = lVar20;
      }
      else {
        lVar20 = (lVar21 - lVar23) + lVar20;
LAB_00499453:
        if (!bVar19) goto LAB_004994f3;
        local_30._0_4_ = (uint)local_58 - (uint)local_40;
        local_30._4_4_ = (local_58._4_4_ - local_40._4_4_) - (uint)((uint)local_58 < (uint)local_40)
        ;
        local_28 = (uint)local_30 - (uint)lVar20;
        iStack_24 = (local_30._4_4_ - (int)((ulonglong)lVar20 >> 0x20)) -
                    (uint)((uint)local_30 < (uint)lVar20);
        lVar23 = CONCAT44(iStack_24,local_28);
        lVar2 = CONCAT44(local_30._4_4_,(uint)local_30);
        lVar21 = lVar20;
      }
      local_40 = (double)lVar23 / (double)lVar2;
      if ((double)CONCAT44(iStack_1c,local_20) <= local_40) {
        if (local_60 < local_40) {
          local_40 = local_60;
        }
      }
      else {
        local_40 = (double)CONCAT44(iStack_1c,local_20);
      }
      iVar18 = 0;
      iVar8 = param_3;
      if (param_3 != -1 && -1 < (int)(param_3 + 1)) {
        do {
          iVar10 = iVar3;
          if (iVar18 != iVar8) {
            iVar10 = *(int *)(piVar4[2] + iVar18 * 4);
          }
          if (((*(uint *)(iVar10 + 0x10) & 8) == 0) && ((*(uint *)(iVar10 + 0x10) & 0x100000) == 0))
          {
            iVar8 = *(int *)(iVar10 + 0x218);
            FUN_00498400(iVar10,bVar19,(uint)local_58,local_58._4_4_,(uint)local_40,local_40._4_4_,
                         *(undefined4 *)(iVar8 + 0x80),*(undefined4 *)(iVar8 + 0x84),
                         *(undefined4 *)(iVar8 + 0x90),*(undefined4 *)(iVar8 + 0x94),
                         *(undefined4 *)(iVar8 + 0x98),*(undefined4 *)(iVar8 + 0x9c));
            iVar8 = param_3;
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < iVar8 + 1);
      }
      FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
    }
  }
  if (((int)lVar21 != *(int *)(param_1 + 0x198)) ||
     ((int)((ulonglong)lVar21 >> 0x20) != *(int *)(param_1 + 0x19c))) {
    *(longlong *)(param_1 + 0x198) = lVar21;
  }
LAB_00499a04:
  return *(undefined8 *)(param_1 + 0x198);
}


