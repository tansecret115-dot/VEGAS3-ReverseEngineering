/* Module: vegas30.exe
   Function: FUN_00456f60
   Address: 00456f60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004573c0) */
/* WARNING: Removing unreachable block (ram,0x00457420) */
/* WARNING: Removing unreachable block (ram,0x004577f1) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456f60(int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  POINT pt;
  POINT pt_00;
  bool bVar2;
  SHORT SVar3;
  int iVar4;
  DWORD DVar5;
  BOOL BVar6;
  HWND pHVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uStack_28;
  undefined8 uStack_20;
  LONG LStack_14;
  tagRECT tStack_10;
  
  if ((*(int *)(param_1 + 0xb24) != 0) &&
     (piVar1 = *(int **)(param_1 + 0x50 + *(int *)(param_1 + 0xb24) * 4),
     iVar4 = (**(code **)(*piVar1 + 0x1c))(param_1,piVar1,param_2,param_3,param_4), iVar4 != 0)) {
    return;
  }
  SVar3 = GetKeyState(0x10);
  bVar16 = SVar3 < 0;
  SVar3 = GetKeyState(0x11);
  bVar17 = SVar3 < 0;
  SVar3 = GetKeyState(0x12);
  bVar18 = SVar3 < 0;
  uVar14 = (uint)(*(int *)(param_1 + 0xa4) != 0);
  if (param_2 == 0x101) {
    switch(param_3) {
    case 0x10:
    case 0x11:
    case 0x12:
      if ((*(uint *)(param_1 + 0x18) & 0x21000000) != 0) {
        return;
      }
      DVar5 = GetMessagePos();
      LStack_14 = (LONG)(short)(DVar5 >> 0x10);
      GetWindowRect(*(HWND *)(param_1 + 4),&tStack_10);
      pt.y = LStack_14;
      pt.x = (int)(short)DVar5;
      BVar6 = PtInRect(&tStack_10,pt);
      if (BVar6 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0xa4) == 0) {
        FUN_004565c0(param_1,*(undefined4 *)(param_1 + 4),1,0);
      }
      pcVar11 = *(code **)(*(int *)(param_1 + 0xab8) + 0x1c);
      if (pcVar11 == (code *)0x0) {
        return;
      }
      (*pcVar11)(param_1,param_1 + 0xab8,0x101,param_3,param_4);
      return;
    default:
      return;
    case 0x25:
    case 0x27:
      goto switchD_00456ffd_caseD_25;
    }
  }
  if (param_2 != 0x100) {
    return;
  }
  if ((*(uint *)(param_1 + 0x18) & 0x20000000) != 0) {
    if (param_3 == 0x10) {
      return;
    }
    FUN_00459640(param_1);
  }
  switch(param_3) {
  case 8:
    if (uVar14 != 0) {
      return;
    }
    if (!bVar18) {
      FUN_00453f70(param_1);
      return;
    }
    SendMessageA(*(HWND *)(param_1 + 4),0x304,0,0);
    return;
  case 9:
    if (uVar14 != 0) {
      return;
    }
    if ((*(uint *)(param_1 + 0x368) & 0x8000000) != 0) {
      FUN_00459560(param_1,*(uint *)(param_1 + 900) >> 0x10 & 0xf);
    }
    break;
  default:
    pcVar11 = *(code **)(*(int *)(param_1 + 0xab8) + 0x1c);
    if (pcVar11 == (code *)0x0) {
      return;
    }
    goto LAB_00457cfd;
  case 0xd:
    if (*(int *)(param_1 + 0xab0) != 0) {
      (**(code **)(*(int *)(param_1 + 0xab0) + 4))(param_1,1);
    }
    FUN_00456d70(param_1,0);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffff7;
    return;
  case 0x10:
  case 0x11:
  case 0x12:
    if ((*(uint *)(param_1 + 0x18) & 0x1000000) != 0) {
      return;
    }
    DVar5 = GetMessagePos();
    LStack_14 = (LONG)(short)(DVar5 >> 0x10);
    GetWindowRect(*(HWND *)(param_1 + 4),&tStack_10);
    pt_00.y = LStack_14;
    pt_00.x = (int)(short)DVar5;
    BVar6 = PtInRect(&tStack_10,pt_00);
    if (BVar6 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xa4) == 0) {
      FUN_004565c0(param_1,*(undefined4 *)(param_1 + 4),1,0);
    }
    pcVar11 = *(code **)(*(int *)(param_1 + 0xab8) + 0x1c);
    goto LAB_0045767b;
  case 0x1b:
    pHVar7 = GetCapture();
    if (pHVar7 != *(HWND *)(param_1 + 4)) {
      if (*(int *)(param_1 + 0xab0) != 0) {
        (**(code **)(*(int *)(param_1 + 0xab0) + 4))(param_1,0);
      }
      FUN_00456d70(param_1,0);
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffff7;
    }
    piVar1 = *(int **)(param_1 + 0x50 + (*(uint *)(param_1 + 0x174) >> 0x10 & 0xf) * 4);
    (**(code **)(*piVar1 + 0xc))(param_1,piVar1,0x1f,param_3,param_4);
    return;
  case 0x20:
    iVar4 = *(int *)(param_1 + 0xab0);
    if (iVar4 == 0) {
      return;
    }
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffff7;
    if (bVar16) {
      iVar4 = (**(code **)(iVar4 + 4))();
      if (iVar4 == 0) {
        (*(code *)**(undefined4 **)(param_1 + 0xab0))(param_1,1);
        return;
      }
    }
    else {
      iVar4 = (**(code **)(iVar4 + 4))(param_1,DAT_0064aec4);
      if (iVar4 == 0) {
        (*(code *)**(undefined4 **)(param_1 + 0xab0))(param_1,0);
        return;
      }
    }
LAB_00457ca3:
    FUN_00456d70(param_1,0);
    return;
  case 0x21:
  case 0x22:
    if (uVar14 != 0) {
      return;
    }
    FUN_00458050(param_1,(-(uint)(param_3 != 0x21) & 200) - 100,bVar16,1);
    return;
  case 0x23:
  case 0x24:
    if (uVar14 != 0) {
      return;
    }
LAB_00457477:
    if ((param_3 == 0x24) || (param_3 == 0x57)) {
      bVar18 = true;
    }
    else {
      bVar18 = false;
    }
    if ((param_3 == 0x45) || (param_3 == 0x57)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    uVar14 = *(uint *)(param_1 + 0xb78);
    uStack_20._4_4_ = *(int *)(param_1 + 0xb7c);
    if ((bVar17) || (bVar2)) {
      if (bVar18) {
        uVar19 = 0;
      }
      else if (*(int *)(param_1 + 0xbc8) == 0) {
        uVar19 = *(undefined8 *)(param_1 + 0x600);
      }
      else {
        uVar19 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
      }
      uVar14 = 0;
      uStack_20._4_4_ = 0;
      goto LAB_004575bf;
    }
    if (uVar14 == 0 && uStack_20._4_4_ == 0) {
      if ((*(uint *)(param_1 + 0x18) & 0x100) != 0) {
        uVar15 = *(uint *)(param_1 + 0xb50);
        if (uVar15 != 0 || *(int *)(param_1 + 0xb54) != 0) {
          uVar8 = *(uint *)(param_1 + 0xb48);
          if (bVar18) {
            uVar19 = CONCAT44(*(undefined4 *)(param_1 + 0xb4c),uVar8);
          }
          else {
            uVar19 = CONCAT44(*(int *)(param_1 + 0xb4c) + *(int *)(param_1 + 0xb54) +
                              (uint)CARRY4(uVar8,uVar15),uVar8 + uVar15);
          }
          goto LAB_004575bf;
        }
      }
      if (bVar18) {
        uVar19 = *(undefined8 *)(param_1 + 0xb88);
      }
      else {
        iVar4 = *(uint *)(param_1 + 0xb90) + *(uint *)(param_1 + 0xb88);
        uVar19 = CONCAT44((*(int *)(param_1 + 0xb94) + *(int *)(param_1 + 0xb8c) +
                          (uint)CARRY4(*(uint *)(param_1 + 0xb90),*(uint *)(param_1 + 0xb88))) -
                          (uint)(iVar4 == 0),iVar4 + -1);
      }
      goto LAB_004575bf;
    }
    iVar4 = *(int *)(param_1 + 0xb74);
    uVar15 = *(uint *)(param_1 + 0xb70);
    if (bVar18) {
      uVar8 = uVar14 + uVar15;
      iVar10 = uStack_20._4_4_ + iVar4 + (uint)CARRY4(uVar14,uVar15);
      if ((iVar4 <= iVar10) && ((iVar4 < iVar10 || (uVar15 < uVar8)))) {
LAB_00457574:
        uVar8 = uVar15;
        iVar10 = iVar4;
      }
    }
    else {
      uVar8 = uVar14 + uVar15;
      iVar10 = uStack_20._4_4_ + iVar4 + (uint)CARRY4(uVar14,uVar15);
      if ((iVar10 < iVar4) || ((iVar10 <= iVar4 && (uVar8 <= uVar15)))) goto LAB_00457574;
    }
    if ((uVar8 != uVar15) || (uVar19 = CONCAT44(iVar10,uVar8), iVar10 != iVar4)) {
      bVar17 = uVar14 != 0;
      uVar14 = -uVar14;
      uStack_20._4_4_ = -(uStack_20._4_4_ + (uint)bVar17);
      uVar19 = CONCAT44(iVar10,uVar8);
    }
LAB_004575bf:
    FUN_00453340(param_1,uVar19,uVar14,uStack_20._4_4_,-bVar16 & 0x10U | 1);
    FUN_00455090(param_1,0xf);
    return;
  case 0x25:
  case 0x27:
    if (uVar14 != 0) {
      return;
    }
    if (!bVar17) {
      uVar14 = *(uint *)(param_1 + 0x18);
      if (((uVar14 & 2) != 0) && ((uVar14 & 0x10) == 0)) {
        if ((uVar14 & 4) != 0) {
          return;
        }
        *(uint *)(param_1 + 0x18) = uVar14 | 4;
        if (*(int *)(param_1 + 0xab0) == 0) {
          return;
        }
        (**(code **)(*(int *)(param_1 + 0xab0) + 0xc))(param_1,param_3 == 0x27);
        return;
      }
      if (((uVar14 & 2) == 0) || ((uVar14 & 0x10) != 0)) {
        uVar13 = *(undefined4 *)(param_1 + 0xb70);
        uVar12 = *(undefined4 *)(param_1 + 0xb74);
      }
      else {
        uVar13 = *(undefined4 *)(param_1 + 0xb30);
        uVar12 = *(undefined4 *)(param_1 + 0xb34);
      }
      uStack_28._0_4_ = uVar13;
      uStack_28._4_4_ = uVar12;
      uStack_20 = __alldiv(*(undefined4 *)(param_1 + 0xb90),*(undefined4 *)(param_1 + 0xb94),
                           *(int *)(param_1 + 0xb98),*(int *)(param_1 + 0xb98) >> 0x1f);
      if ((bVar18) || (DAT_006476c0 != 0)) {
        FUN_00456c30(param_1,&uStack_28,&uStack_20);
        uVar12 = uStack_28._4_4_;
        uVar13 = (undefined4)uStack_28;
      }
      lVar21 = uStack_20;
      if (uStack_20 < 2) {
        lVar21 = 1;
      }
      lVar20 = __allmul(param_4 & 0xffff,0,lVar21);
      lVar21 = lVar20;
      if (param_3 == 0x25) {
        lVar21 = CONCAT44(-((int)((ulonglong)lVar20 >> 0x20) + (uint)((int)lVar20 != 0)),
                          -(int)lVar20);
      }
      lVar21 = lVar21 + CONCAT44(uVar12,uVar13);
      if ((lVar21 < 0x100000000) && (lVar21 < 0)) {
        uVar13 = 0;
        uStack_28._0_4_ = 0;
      }
      else {
        uVar13 = *(undefined4 *)(param_1 + 0x604);
        uStack_28._0_4_ = *(undefined4 *)(param_1 + 0x600);
        if (lVar21 <= *(longlong *)(param_1 + 0x600)) goto LAB_00457430;
      }
      lVar21 = CONCAT44(uVar13,(undefined4)uStack_28);
LAB_00457430:
      uStack_20 = lVar20;
      uStack_28 = lVar21;
      FUN_00453340(param_1,lVar21,0,0,-bVar16 & 0x10);
      FUN_00455090(param_1,0xf);
      return;
    }
    goto LAB_004572d8;
  case 0x26:
  case 0x28:
    if (uVar14 != 0) {
      return;
    }
    if ((bVar18) && (!bVar17)) {
      if (!bVar16) {
        FUN_004d4d50(DAT_00647630,(-(uint)(param_3 != 0x26) & 2) - 1,0);
        return;
      }
LAB_00457688:
      pcVar11 = *(code **)(*(int *)(param_1 + 0xab4) + 0x34);
      if (pcVar11 == (code *)0x0) {
        FUN_00458c00(param_1,0,(-(uint)(param_3 != 0x26) & 2) - 1);
        return;
      }
      (*pcVar11)(param_1,(-(uint)(param_3 != 0x26) & 2) - 1);
      return;
    }
    if (!bVar16) {
      if (bVar17) {
        if ((*(int *)(param_1 + 0xb78) != 0 || *(int *)(param_1 + 0xb7c) != 0) &&
           (iVar4 = FUN_00458dc0(param_1), iVar4 != 0)) {
          return;
        }
        uStack_28._0_4_ = *(undefined4 *)(param_1 + 0x600);
        lVar21 = *(longlong *)(param_1 + 0x600);
        if (param_3 == 0x26) {
          iVar4 = *(int *)(param_1 + 0xb98);
          uVar19 = __allmul(iVar4,iVar4 >> 0x1f,DAT_0063df80,DAT_0063df84);
          uVar13 = (undefined4)((ulonglong)uVar19 >> 0x20);
          uStack_28._0_4_ = (undefined4)uVar19;
          uVar19 = __allmul(uVar19,0xb,0);
          uVar19 = __alldiv(uVar19,10,0);
          iVar10 = (int)((ulonglong)uVar19 >> 0x20);
          lVar21 = CONCAT44(uVar13,(undefined4)uStack_28);
          if ((*(int *)(param_1 + 0xb94) <= iVar10) &&
             ((*(int *)(param_1 + 0xb94) < iVar10 ||
              (lVar21 = CONCAT44(uVar13,(undefined4)uStack_28),
              *(uint *)(param_1 + 0xb90) < (uint)uVar19)))) {
            lVar21 = __allmul(iVar4,iVar4 >> 0x1f,DAT_0063df88,DAT_0063df8c);
          }
        }
      }
      else {
        if (((bVar18) && (param_3 == 0x26)) && ((*(byte *)(param_1 + 0x1c) & 8) == 0)) {
          return;
        }
        lVar21 = FUN_00454220(param_1,((-(uint)(param_3 != 0x26) & 2) - 1) +
                                      *(int *)(param_1 + 0x608));
      }
      if (((*(uint *)(param_1 + 0x18) & 2) == 0) || ((*(uint *)(param_1 + 0x18) & 0x10) != 0)) {
        LStack_14 = *(int *)(param_1 + 0xb74);
        uVar14 = *(uint *)(param_1 + 0xb70);
      }
      else {
        LStack_14 = *(int *)(param_1 + 0xb34);
        uVar14 = *(uint *)(param_1 + 0xb30);
      }
      uStack_20._0_4_ = *(uint *)(param_1 + 0xb88);
      iVar4 = *(int *)(param_1 + 0xb8c);
      if (lVar21 <= *(int *)(param_1 + 0xb98)) {
        lVar21 = (longlong)*(int *)(param_1 + 0xb98);
      }
      uStack_28._0_4_ = (undefined4)lVar21;
      lVar20 = __alldiv(lVar21,2,0);
      tStack_10.top = (LONG)((ulonglong)lVar20 >> 0x20);
      if (lVar20 + CONCAT44(iVar4,(uint)uStack_20) != CONCAT44(LStack_14,uVar14)) {
        uVar15 = uVar14 - (uint)lVar20;
        uVar8 = uVar15 - (uint)uStack_20;
        iVar10 = (((LStack_14 - tStack_10.top) - (uint)(uVar14 < (uint)lVar20)) - iVar4) -
                 (uint)(uVar15 < (uint)uStack_20);
        if ((iVar10 < 1) && (iVar10 < 0)) {
          iVar9 = -(iVar10 + (uint)(uVar8 != 0));
          if ((iVar4 <= iVar9) && ((iVar4 < iVar9 || ((uint)uStack_20 < -uVar8)))) {
            iVar4 = 0;
            uStack_20._0_4_ = 0;
            goto LAB_00457865;
          }
        }
        bVar16 = CARRY4((uint)uStack_20,uVar8);
        uStack_20._0_4_ = (uint)uStack_20 + uVar8;
        iVar4 = iVar4 + iVar10 + (uint)bVar16;
      }
LAB_00457865:
      FUN_004543c0(param_1,(uint)uStack_20,iVar4,(undefined4)uStack_28,
                   (int)((ulonglong)lVar21 >> 0x20),1);
      FUN_00455090(param_1,0);
      return;
    }
    if (!bVar17) goto LAB_00457688;
    break;
  case 0x2d:
    if (uVar14 != 0) {
      return;
    }
    if (bVar16) {
      SendMessageA(*(HWND *)(param_1 + 4),0x302,0,0);
      return;
    }
    if (bVar17) {
      SendMessageA(*(HWND *)(param_1 + 4),0x301,0,0);
      return;
    }
    break;
  case 0x2e:
    if (uVar14 != 0) {
      return;
    }
    if (bVar16) {
LAB_00457964:
      SendMessageA(*(HWND *)(param_1 + 4),0x300,0,0);
      return;
    }
    if (!bVar17) {
      SendMessageA(*(HWND *)(param_1 + 4),0x303,0,0);
      return;
    }
    break;
  case 0x41:
    if (uVar14 != 0) {
      return;
    }
    if (bVar17) {
      SendMessageA(*(HWND *)(param_1 + 4),0x7f09,(uint)bVar16,0);
      return;
    }
    break;
  case 0x43:
    if (uVar14 != 0) {
      return;
    }
    if ((bVar17) && (!bVar16)) {
      SendMessageA(*(HWND *)(param_1 + 4),0x301,0,0);
      return;
    }
    break;
  case 0x45:
  case 0x57:
    if (uVar14 != 0) {
      return;
    }
    if (!bVar17) goto LAB_00457477;
    break;
  case 0x47:
    if (uVar14 != 0) {
      return;
    }
    if (bVar17) {
      if (!bVar16) {
        FUN_0045f6d0(param_1,1);
        return;
      }
      FUN_0045f6d0(param_1,2);
      return;
    }
    break;
  case 0x4a:
    if ((bVar17 == (DAT_0064aec0 == 0)) && (bVar16 == (DAT_0064aec0 == 0))) {
      FUN_00456d70(param_1,0xffffffff);
      return;
    }
    break;
  case 0x4b:
    if ((bVar17 == (DAT_0064aec0 == 0)) && (bVar16 == (DAT_0064aec0 == 0))) {
      FUN_004583c0(param_1,1);
      goto LAB_00457ca3;
    }
LAB_004572d8:
    pcVar11 = *(code **)(*(int *)(param_1 + 0xab8) + 0x1c);
    goto LAB_0045767b;
  case 0x4c:
    if ((bVar17 == (DAT_0064aec0 == 0)) && (bVar16 == (DAT_0064aec0 == 0))) {
      FUN_00456d70(param_1,1);
      return;
    }
    break;
  case 0x52:
    if (uVar14 != 0) {
      return;
    }
    if ((*(int *)(param_1 + 0xab0) != 0) && (bVar17)) {
      (**(code **)(*(int *)(param_1 + 0xab0) + 0x1c))(param_1,0);
      return;
    }
    break;
  case 0x56:
    if (uVar14 != 0) {
      return;
    }
    if (bVar17) {
      if (bVar16) {
        SendMessageA(*(HWND *)(param_1 + 4),0x7f07,0,0);
        return;
      }
      SendMessageA(*(HWND *)(param_1 + 4),0x302,0,0);
      return;
    }
    break;
  case 0x58:
    if (((uVar14 == 0) && (bVar17)) && (!bVar16)) goto LAB_00457964;
    break;
  case 0x59:
    if (uVar14 != 0) {
      return;
    }
    if (bVar17) {
LAB_004579e6:
      SendMessageA(*(HWND *)(param_1 + 4),0x304,1,uVar14);
      return;
    }
    break;
  case 0x5a:
    if (uVar14 != 0) {
      return;
    }
    if (bVar17) {
      if (!bVar16) {
        SendMessageA(*(HWND *)(param_1 + 4),0x304,0,0);
        return;
      }
      goto LAB_004579e6;
    }
    break;
  case 0x5d:
    if (uVar14 != 0) {
      return;
    }
    SendMessageA(*(HWND *)(param_1 + 4),0x7b,(WPARAM)*(HWND *)(param_1 + 4),-1);
    return;
  case 0x65:
    if (uVar14 != 0) {
      return;
    }
    FUN_00453ef0(param_1);
    return;
  case 0x79:
    if (uVar14 != 0) {
      return;
    }
    if (!bVar16) {
      return;
    }
    SendMessageA(*(HWND *)(param_1 + 4),0x7b,(WPARAM)*(HWND *)(param_1 + 4),-1);
    return;
  case 0x7f:
    FUN_004583c0(param_1,1);
    return;
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
    param_2 = param_3 + -0x7f;
    if (param_2 == 7) {
      param_2 = 8;
    }
    if (bVar17) {
      param_2 = -param_2;
    }
    iVar4 = *(int *)(DAT_00647630 + 0x5d0);
    *(double *)(iVar4 + 0x158) = (double)param_2 * _DAT_006128c8;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
    iVar10 = Transport_IsAnyPlaying();
    if (iVar10 == 0) {
      if (*(int *)(param_1 + 0xbc8) == 0) {
        lVar21 = *(longlong *)(param_1 + 0x600);
      }
      else {
        lVar21 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
      }
      if (lVar21 != 0) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
        FUN_004583a0(param_1,0);
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
      }
    }
    FUN_005fb0e0(*(undefined4 *)(iVar4 + 0x158),*(undefined4 *)(iVar4 + 0x15c),0);
    FUN_004ce070(param_1,*(undefined4 *)(iVar4 + 600),*(undefined4 *)(iVar4 + 0x25c));
    return;
  case 0xdc:
    if (uVar14 != 0) {
      return;
    }
    FUN_00453f40(param_1);
    return;
  }
  pcVar11 = *(code **)(*(int *)(param_1 + 0xab8) + 0x1c);
LAB_0045767b:
  if (pcVar11 != (code *)0x0) {
LAB_00457cfd:
    (*pcVar11)(param_1,param_1 + 0xab8,0x100,param_3,param_4);
  }
  return;
switchD_00456ffd_caseD_25:
  if (bVar17) {
    return;
  }
  if (uVar14 != 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x18) & 4) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
  if (*(int *)(param_1 + 0xab0) == 0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0xab0) + 0x10))(param_1);
  return;
}


