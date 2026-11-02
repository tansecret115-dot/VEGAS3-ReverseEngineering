/* Module: vidpcore.dll
   Function: FUN_5deacf30
   Address: 5deacf30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5deacf30(int param_1,int param_2,int param_3,int param_4)

{
  POINT pt;
  int iVar1;
  HWND pHVar2;
  LONG LVar3;
  UINT_PTR UVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  RECT *lprc;
  uint uVar9;
  tagPOINT tStack_8;
  
  iVar7 = param_1;
  if (param_4 != 5) {
    if (param_4 == 8) {
      pHVar2 = GetCapture();
      if (pHVar2 != *(HWND *)(param_1 + 0x38)) {
        return;
      }
      ReleaseCapture();
      if ((*(int *)(param_1 + 0x24) != 0) && (*(HWND *)(param_1 + 0x94) != (HWND)0x0)) {
        BVar5 = IsWindow(*(HWND *)(param_1 + 0x94));
        if (BVar5 != 0) {
          SetFocus(*(HWND *)(param_1 + 0x94));
        }
        *(undefined4 *)(param_1 + 0x94) = 0;
      }
      *(undefined4 *)(param_1 + 0x80) = 0;
      if (*(int *)(param_1 + 0x90) == 5) {
        (**(code **)(param_1 + 0xc0))
                  (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),4,
                   *(undefined4 *)(param_1 + 0x84));
      }
      if (*(int *)(param_1 + 0x8c) != 0) {
        KillTimer(*(HWND *)(param_1 + 0x38),0x2a);
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
      (**(code **)(param_1 + 0xc0))
                (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),8,0);
      if (*(int *)(param_1 + 0x24) == 0) {
        ShowCaret(*(HWND *)(param_1 + 0x38));
      }
      *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
      FUN_5deaceb0(param_1,0xffffffff,1);
      FUN_5deacdc0(param_1,*(undefined4 *)(param_1 + 0x4c),1);
      return;
    }
    if (param_4 != 9) {
      return;
    }
    iVar1 = FUN_5deacdf0(param_1,param_2,param_3);
    if (iVar1 == -1) {
      return;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      HideCaret(*(HWND *)(param_1 + 0x38));
    }
    (**(code **)(param_1 + 0xc0))
              (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),9,0);
    SetCapture(*(HWND *)(param_1 + 0x38));
    if (*(int *)(param_1 + 0x24) != 0) {
      pHVar2 = SetFocus(*(HWND *)(param_1 + 0x38));
      *(HWND *)(param_1 + 0x94) = pHVar2;
    }
    *(int *)(param_1 + 0x90) = iVar1;
    *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
    FUN_5deaceb0(param_1,iVar1,1);
    iVar6 = param_3;
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar6 = param_2;
    }
    *(int *)(param_1 + 0x88) = iVar6;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
    if (iVar1 == 5) {
      iVar1 = FUN_5deabf90(param_1,*(undefined4 *)(param_1 + 0x4c));
      *(int *)(param_1 + 100) = iVar1 - param_3;
      *(int *)(param_1 + 0x60) = iVar1 - param_2;
      *(int *)(param_1 + 0x68) = param_2;
      *(int *)(param_1 + 0x6c) = param_3;
      LVar3 = GetMessageTime();
      *(LONG *)(param_1 + 0x74) = LVar3;
    }
    else {
      UVar4 = SetTimer(*(HWND *)(param_1 + 0x38),0x2a,0xfa,(TIMERPROC)0x0);
      *(UINT_PTR *)(param_1 + 0x8c) = UVar4;
    }
  }
  if (*(int *)(param_1 + 0x90) == 5) {
    lprc = (RECT *)&DAT_5df3e090;
    uVar9 = DAT_5df3e088;
    if (*(int *)(param_1 + 0x80) != 0) {
      lprc = (RECT *)&DAT_5df3e0a0;
      uVar9 = DAT_5df3e08c;
    }
    iVar1 = *(int *)(param_1 + 0x7c);
    tStack_8.x = param_2 - *(int *)(param_1 + 0x68);
    tStack_8.y = param_3 - *(int *)(param_1 + 0x6c);
    if (((*(int *)(param_1 + 0x78) == 0) &&
        (pt.y = tStack_8.y, pt.x = tStack_8.x, BVar5 = PtInRect(lprc,pt), BVar5 != 0)) &&
       (LVar3 = GetMessageTime(), uVar9 <= (uint)(LVar3 - *(int *)(param_1 + 0x74)))) {
      param_1 = 1;
      iVar1 = param_1;
    }
    param_1 = iVar1;
    iVar1 = *(int *)(iVar7 + 0x4c);
    tStack_8.x = param_2;
    tStack_8.y = param_3;
    *(int *)(iVar7 + 0x80) = param_1;
    if (*(int *)(iVar7 + 0x1c) == 0) {
      if (*(int *)(iVar7 + 0x68) != param_2) {
        if (param_1 == 0) {
          iVar1 = FUN_5deac110(iVar7,param_2);
        }
        else {
          iVar6 = param_2 - *(int *)(iVar7 + 0x68);
          if (iVar6 < 0) {
            iVar6 = iVar6 + -1;
          }
          else {
            iVar6 = iVar6 + 1;
          }
          iVar8 = iVar6 / 2 + iVar1;
          iVar6 = *(int *)(iVar7 + 0x44);
          if ((*(int *)(iVar7 + 0x44) <= iVar8) &&
             (iVar6 = *(int *)(iVar7 + 0x48), iVar8 <= *(int *)(iVar7 + 0x48))) {
            iVar6 = iVar8;
          }
          if (iVar6 != iVar1) {
            tStack_8.x = FUN_5deabf90(iVar7,iVar6);
            tStack_8.x = tStack_8.x - *(int *)(iVar7 + 0x60);
            iVar1 = iVar6;
          }
        }
      }
    }
    else if (*(int *)(iVar7 + 0x6c) != param_3) {
      if (param_1 == 0) {
        iVar1 = FUN_5deac110(iVar7,param_3);
      }
      else {
        iVar6 = param_3 - *(int *)(iVar7 + 0x6c);
        if (iVar6 < 0) {
          iVar6 = iVar6 + -1;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        iVar8 = iVar1 - iVar6 / 2;
        iVar6 = *(int *)(iVar7 + 0x44);
        if ((*(int *)(iVar7 + 0x44) <= iVar8) &&
           (iVar6 = *(int *)(iVar7 + 0x48), iVar8 <= *(int *)(iVar7 + 0x48))) {
          iVar6 = iVar8;
        }
        if (iVar6 != iVar1) {
          tStack_8.y = FUN_5deabf90(iVar7,iVar6);
          tStack_8.y = tStack_8.y - *(int *)(iVar7 + 100);
          iVar1 = iVar6;
        }
      }
    }
    *(LONG *)(iVar7 + 0x68) = tStack_8.x;
    *(LONG *)(iVar7 + 0x6c) = tStack_8.y;
    LVar3 = GetMessageTime();
    *(LONG *)(iVar7 + 0x74) = LVar3;
    if ((param_1 != 0) && ((tStack_8.x != param_2 || (tStack_8.y != param_3)))) {
      *(undefined4 *)(iVar7 + 0x70) = 1;
      ClientToScreen(*(HWND *)(iVar7 + 0x38),&tStack_8);
      SetCursorPos(tStack_8.x,tStack_8.y);
      *(undefined4 *)(iVar7 + 0x70) = 0;
    }
    if (iVar1 != *(int *)(iVar7 + 0x84)) {
      *(int *)(iVar7 + 0x84) = iVar1;
      FUN_5deacdc0(iVar7,iVar1,1);
      (**(code **)(iVar7 + 0xc0))
                (iVar7,*(undefined4 *)(iVar7 + 0x3c),*(undefined4 *)(iVar7 + 0xbc),5,iVar1);
      return;
    }
  }
  else {
    iVar7 = FUN_5deacdf0(param_1,param_2,param_3);
    FUN_5deaceb0(param_1,iVar7,0);
    if (*(int *)(param_1 + 0x90) == iVar7) {
      (**(code **)(param_1 + 0xc0))
                (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),
                 *(int *)(param_1 + 0x90),0);
    }
  }
  return;
}


