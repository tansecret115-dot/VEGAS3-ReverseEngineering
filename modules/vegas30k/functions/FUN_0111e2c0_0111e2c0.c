/* Module: vegas30k.dll
   Function: FUN_0111e2c0
   Address: 0111e2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0111e2c0(uint param_1,int param_2,int param_3,uint param_4)

{
  POINT pt;
  POINT pt_00;
  int iVar1;
  int iVar2;
  LONG LVar3;
  UINT_PTR UVar4;
  HWND pHVar5;
  uint uVar6;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  RECT *lprc;
  tagPOINT tStack_8;
  
  iVar8 = param_1;
  if (param_4 != 5) {
    if (param_4 == 8) {
      pHVar5 = GetCapture();
      if (pHVar5 != *(HWND *)(param_1 + 0x28)) {
        return;
      }
      ReleaseCapture();
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffdffff;
      if (*(int *)(param_1 + 0xc0) == 5) {
        (**(code **)(param_1 + 200))
                  (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),4,
                   *(undefined4 *)(param_1 + 0xb8));
      }
      if (*(int *)(param_1 + 0xbc) != 0) {
        KillTimer(*(HWND *)(param_1 + 0x28),0x2a);
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
      (**(code **)(param_1 + 200))
                (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),8,0);
      ShowCaret(*(HWND *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
      FUN_0111e1f0(param_1,0xffffffff,1);
      FUN_0111e080(param_1,*(undefined4 *)(param_1 + 0x1c),1);
      return;
    }
    if (param_4 != 9) {
      return;
    }
    if ((*(byte *)(param_1 + 0xc) & 0x40) != 0) {
      return;
    }
    iVar1 = FUN_0111e100(param_1,param_2,param_3);
    if (iVar1 == -1) {
      return;
    }
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x1c);
    if (iVar1 == 5) {
      iVar2 = FUN_0111bfe0(param_1,*(undefined4 *)(param_1 + 0x1c));
      *(int *)(param_1 + 0xa4) = iVar2 - param_3;
      *(int *)(param_1 + 0xa0) = iVar2 - param_2;
      *(int *)(param_1 + 0xa8) = param_2;
      *(int *)(param_1 + 0xac) = param_3;
      LVar3 = GetMessageTime();
      *(LONG *)(param_1 + 0xb0) = LVar3;
    }
    HideCaret(*(HWND *)(param_1 + 0x28));
    SetCapture(*(HWND *)(param_1 + 0x28));
    *(int *)(param_1 + 0xc0) = iVar1;
    *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
    (**(code **)(param_1 + 200))
              (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),9,0);
    FUN_0111e1f0(param_1,iVar1,1);
    if (iVar1 != 5) {
      UVar4 = SetTimer(*(HWND *)(param_1 + 0x28),0x2a,0xfa,(TIMERPROC)0x0);
      *(UINT_PTR *)(param_1 + 0xbc) = UVar4;
    }
  }
  if (*(int *)(param_1 + 0xc0) == 5) {
    lprc = (RECT *)&DAT_01206bb0;
    param_4 = DAT_01206ba8;
    if ((*(uint *)(param_1 + 0xc) & 0x20000) != 0) {
      lprc = (RECT *)&DAT_01206bc0;
      param_4 = DAT_01206bac;
    }
    uVar6 = (int)(*(uint *)(param_1 + 0xc) << 0xf) >> 0x1f;
    tStack_8.x = param_2 - *(int *)(param_1 + 0xa8);
    tStack_8.y = param_3 - *(int *)(param_1 + 0xac);
    if ((((*(uint *)(param_1 + 0xc) & 0x8000) == 0) &&
        (pt.y = tStack_8.y, pt.x = tStack_8.x, BVar7 = PtInRect(lprc,pt), BVar7 != 0)) &&
       (LVar3 = GetMessageTime(), param_4 < (uint)(LVar3 - *(int *)(param_1 + 0xb0)))) {
      param_1 = 1;
      uVar6 = param_1;
    }
    param_1 = uVar6;
    tStack_8.x = param_2;
    tStack_8.y = param_3;
    pt_00.y = param_3;
    pt_00.x = param_2;
    BVar7 = PtInRect((RECT *)(iVar8 + 0x68),pt_00);
    if (BVar7 == 0) {
      param_1 = (*(int *)(iVar8 + 0xc) << 0xf) >> 0x1f;
    }
    uVar6 = *(uint *)(iVar8 + 0xc);
    iVar1 = *(int *)(iVar8 + 0x1c);
    *(uint *)(iVar8 + 0xc) = (param_1 & 1) << 0x11 | uVar6 & 0xfffdffff;
    if ((uVar6 & 8) == 0) {
      if (*(int *)(iVar8 + 0xa8) != param_2) {
        if (param_1 == 0) {
          iVar1 = FUN_0111c1f0(iVar8,*(int *)(iVar8 + 0xa0) + param_2);
        }
        else {
          iVar2 = param_2 - *(int *)(iVar8 + 0xa8);
          if (iVar2 < 0) {
            iVar2 = iVar2 + -1;
          }
          else {
            iVar2 = iVar2 + 1;
          }
          iVar9 = *(int *)(iVar8 + 0x10);
          iVar2 = iVar2 / 2 + iVar1;
          if ((iVar9 <= iVar2) && (iVar9 = *(int *)(iVar8 + 0x14), iVar2 <= *(int *)(iVar8 + 0x14)))
          {
            iVar9 = iVar2;
          }
          if (iVar9 != iVar1) {
            tStack_8.x = FUN_0111bfe0(iVar8,iVar9);
            iVar2 = *(int *)(iVar8 + 0x6c);
            tStack_8.x = tStack_8.x - *(int *)(iVar8 + 0xa0);
            iVar1 = iVar9;
            if ((tStack_8.y < iVar2) || (iVar2 = *(int *)(iVar8 + 0x74), iVar2 < tStack_8.y)) {
              tStack_8.y = iVar2;
            }
          }
        }
      }
    }
    else if (*(int *)(iVar8 + 0xac) != param_3) {
      if (param_1 == 0) {
        iVar1 = FUN_0111c1f0(iVar8,*(int *)(iVar8 + 0xa4) + param_3);
      }
      else {
        iVar2 = param_3 - *(int *)(iVar8 + 0xac);
        if (iVar2 < 0) {
          iVar2 = iVar2 + -1;
        }
        else {
          iVar2 = iVar2 + 1;
        }
        iVar9 = iVar1 - iVar2 / 2;
        iVar2 = *(int *)(iVar8 + 0x10);
        if ((iVar2 <= iVar9) && (iVar2 = *(int *)(iVar8 + 0x14), iVar9 <= *(int *)(iVar8 + 0x14))) {
          iVar2 = iVar9;
        }
        if (iVar2 != iVar1) {
          iVar1 = FUN_0111bfe0(iVar8,iVar2);
          iVar9 = ((RECT *)(iVar8 + 0x68))->left;
          tStack_8.y = iVar1 - *(int *)(iVar8 + 0xa4);
          iVar1 = iVar2;
          if ((tStack_8.x < iVar9) || (iVar9 = *(int *)(iVar8 + 0x70), iVar9 < tStack_8.x)) {
            tStack_8.x = iVar9;
          }
        }
      }
    }
    *(LONG *)(iVar8 + 0xa8) = tStack_8.x;
    *(LONG *)(iVar8 + 0xac) = tStack_8.y;
    LVar3 = GetMessageTime();
    *(LONG *)(iVar8 + 0xb0) = LVar3;
    if ((param_1 != 0) && ((tStack_8.x != param_2 || (tStack_8.y != param_3)))) {
      *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 0x40000;
      ClientToScreen(*(HWND *)(iVar8 + 0x28),&tStack_8);
      SetCursorPos(tStack_8.x,tStack_8.y);
      *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) & 0xfffbffff;
    }
    if (iVar1 != *(int *)(iVar8 + 0xb8)) {
      *(int *)(iVar8 + 0xb8) = iVar1;
      FUN_0111e080(iVar8,iVar1,1);
      (**(code **)(iVar8 + 200))
                (iVar8,*(undefined4 *)(iVar8 + 0x2c),*(undefined4 *)(iVar8 + 0xc4),5,iVar1);
      return;
    }
  }
  else {
    iVar8 = FUN_0111e100(param_1,param_2,param_3);
    FUN_0111e1f0(param_1,iVar8,0);
    if (*(int *)(param_1 + 0xc0) == iVar8) {
      (**(code **)(param_1 + 200))
                (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),
                 *(int *)(param_1 + 0xc0),0);
    }
  }
  return;
}


