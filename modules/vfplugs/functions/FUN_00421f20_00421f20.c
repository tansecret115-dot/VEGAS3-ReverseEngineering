/* Module: vfplugs.dll
   Function: FUN_00421f20
   Address: 00421f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421f20(byte *param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  POINT pt;
  byte *pbVar2;
  int iVar3;
  HWND pHVar4;
  LONG LVar5;
  UINT_PTR UVar6;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  RECT *lprc;
  uint uVar10;
  tagPOINT tStack_8;
  
  pbVar2 = param_1;
  if (param_4 != 5) {
    if (param_4 == 8) {
      pHVar4 = GetCapture();
      if (pHVar4 != *(HWND *)(param_1 + 0x38)) {
        return;
      }
      ReleaseCapture();
      if ((*(int *)(param_1 + 0x24) != 0) && (*(HWND *)(param_1 + 0x94) != (HWND)0x0)) {
        BVar7 = IsWindow(*(HWND *)(param_1 + 0x94));
        if (BVar7 != 0) {
          SetFocus(*(HWND *)(param_1 + 0x94));
        }
        pbVar2[0x94] = 0;
        pbVar2[0x95] = 0;
        pbVar2[0x96] = 0;
        pbVar2[0x97] = 0;
      }
      iVar3 = *(int *)(param_1 + 0x90);
      pbVar2[0x80] = 0;
      pbVar2[0x81] = 0;
      pbVar2[0x82] = 0;
      pbVar2[0x83] = 0;
      if (iVar3 == 5) {
        (**(code **)(param_1 + 0xc0))
                  (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),4,
                   *(undefined4 *)(param_1 + 0x84));
      }
      if (*(int *)(param_1 + 0x8c) != 0) {
        KillTimer(*(HWND *)(param_1 + 0x38),0x2a);
        pbVar2[0x8c] = 0;
        pbVar2[0x8d] = 0;
        pbVar2[0x8e] = 0;
        pbVar2[0x8f] = 0;
      }
      (**(code **)(param_1 + 0xc0))
                (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),8,0);
      if (*(int *)(param_1 + 0x24) == 0) {
        ShowCaret(*(HWND *)(param_1 + 0x38));
      }
      pbVar2[0x90] = 0xff;
      pbVar2[0x91] = 0xff;
      pbVar2[0x92] = 0xff;
      pbVar2[0x93] = 0xff;
      FUN_00421ea0((int)param_1,-1,1);
      FUN_00421db0((int)param_1,*(int *)(param_1 + 0x4c));
      return;
    }
    if (param_4 != 9) {
      return;
    }
    iVar3 = FUN_00421de0((int)param_1,param_2,param_3);
    if (iVar3 == -1) {
      return;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      HideCaret(*(HWND *)(param_1 + 0x38));
    }
    (**(code **)(param_1 + 0xc0))
              (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),9,0);
    SetCapture(*(HWND *)(param_1 + 0x38));
    if (*(int *)(param_1 + 0x24) != 0) {
      pHVar4 = SetFocus(*(HWND *)(param_1 + 0x38));
      *(HWND *)(param_1 + 0x94) = pHVar4;
    }
    *(int *)(param_1 + 0x90) = iVar3;
    pbVar2[0x84] = 0xff;
    pbVar2[0x85] = 0xff;
    pbVar2[0x86] = 0xff;
    pbVar2[0x87] = 0xff;
    FUN_00421ea0((int)param_1,iVar3,1);
    iVar8 = param_3;
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar8 = param_2;
    }
    *(int *)(param_1 + 0x88) = iVar8;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x4c);
    if (iVar3 == 5) {
      iVar3 = FUN_00420f80(param_1,*(int *)(param_1 + 0x4c));
      *(int *)(param_1 + 100) = iVar3 - param_3;
      *(int *)(param_1 + 0x60) = iVar3 - param_2;
      *(int *)(param_1 + 0x68) = param_2;
      *(int *)(param_1 + 0x6c) = param_3;
      LVar5 = GetMessageTime();
      *(LONG *)(param_1 + 0x74) = LVar5;
    }
    else {
      UVar6 = SetTimer(*(HWND *)(param_1 + 0x38),0x2a,0xfa,(TIMERPROC)0x0);
      *(UINT_PTR *)(param_1 + 0x8c) = UVar6;
    }
  }
  if (*(int *)(param_1 + 0x90) == 5) {
    lprc = (RECT *)&DAT_00493a98;
    uVar10 = DAT_00493a90;
    if (*(int *)(param_1 + 0x80) != 0) {
      lprc = (RECT *)&DAT_00493aa8;
      uVar10 = DAT_00493a94;
    }
    pbVar1 = *(byte **)(param_1 + 0x7c);
    tStack_8.x = param_2 - *(int *)(param_1 + 0x68);
    tStack_8.y = param_3 - *(int *)(param_1 + 0x6c);
    if (((*(int *)(param_1 + 0x78) == 0) &&
        (pt.y = tStack_8.y, pt.x = tStack_8.x, BVar7 = PtInRect(lprc,pt), BVar7 != 0)) &&
       (LVar5 = GetMessageTime(), uVar10 <= (uint)(LVar5 - *(int *)(param_1 + 0x74)))) {
      param_1 = (byte *)0x1;
      pbVar1 = param_1;
    }
    param_1 = pbVar1;
    iVar3 = *(int *)(pbVar2 + 0x4c);
    tStack_8.x = param_2;
    tStack_8.y = param_3;
    *(byte **)(pbVar2 + 0x80) = param_1;
    if (*(int *)(pbVar2 + 0x1c) == 0) {
      if (*(int *)(pbVar2 + 0x68) != param_2) {
        if (param_1 == (byte *)0x0) {
          iVar3 = FUN_00421100(pbVar2,param_2);
        }
        else {
          iVar8 = param_2 - *(int *)(pbVar2 + 0x68);
          if (iVar8 < 0) {
            iVar8 = iVar8 + -1;
          }
          else {
            iVar8 = iVar8 + 1;
          }
          iVar9 = iVar8 / 2 + iVar3;
          iVar8 = *(int *)(pbVar2 + 0x44);
          if ((*(int *)(pbVar2 + 0x44) <= iVar9) &&
             (iVar8 = *(int *)(pbVar2 + 0x48), iVar9 <= *(int *)(pbVar2 + 0x48))) {
            iVar8 = iVar9;
          }
          if (iVar8 != iVar3) {
            tStack_8.x = FUN_00420f80(pbVar2,iVar8);
            tStack_8.x = tStack_8.x - *(int *)(pbVar2 + 0x60);
            iVar3 = iVar8;
          }
        }
      }
    }
    else if (*(int *)(pbVar2 + 0x6c) != param_3) {
      if (param_1 == (byte *)0x0) {
        iVar3 = FUN_00421100(pbVar2,param_3);
      }
      else {
        iVar8 = param_3 - *(int *)(pbVar2 + 0x6c);
        if (iVar8 < 0) {
          iVar8 = iVar8 + -1;
        }
        else {
          iVar8 = iVar8 + 1;
        }
        iVar9 = iVar3 - iVar8 / 2;
        iVar8 = *(int *)(pbVar2 + 0x44);
        if ((*(int *)(pbVar2 + 0x44) <= iVar9) &&
           (iVar8 = *(int *)(pbVar2 + 0x48), iVar9 <= *(int *)(pbVar2 + 0x48))) {
          iVar8 = iVar9;
        }
        if (iVar8 != iVar3) {
          tStack_8.y = FUN_00420f80(pbVar2,iVar8);
          tStack_8.y = tStack_8.y - *(int *)(pbVar2 + 100);
          iVar3 = iVar8;
        }
      }
    }
    *(LONG *)(pbVar2 + 0x68) = tStack_8.x;
    *(LONG *)(pbVar2 + 0x6c) = tStack_8.y;
    LVar5 = GetMessageTime();
    *(LONG *)(pbVar2 + 0x74) = LVar5;
    if ((param_1 != (byte *)0x0) && ((tStack_8.x != param_2 || (tStack_8.y != param_3)))) {
      pbVar2[0x70] = 1;
      pbVar2[0x71] = 0;
      pbVar2[0x72] = 0;
      pbVar2[0x73] = 0;
      ClientToScreen(*(HWND *)(pbVar2 + 0x38),&tStack_8);
      SetCursorPos(tStack_8.x,tStack_8.y);
      pbVar2[0x70] = 0;
      pbVar2[0x71] = 0;
      pbVar2[0x72] = 0;
      pbVar2[0x73] = 0;
    }
    if (iVar3 != *(int *)(pbVar2 + 0x84)) {
      *(int *)(pbVar2 + 0x84) = iVar3;
      FUN_00421db0((int)pbVar2,iVar3);
      (**(code **)(pbVar2 + 0xc0))
                (pbVar2,*(undefined4 *)(pbVar2 + 0x3c),*(undefined4 *)(pbVar2 + 0xbc),5,iVar3);
      return;
    }
  }
  else {
    iVar3 = FUN_00421de0((int)param_1,param_2,param_3);
    FUN_00421ea0((int)param_1,iVar3,0);
    if (*(int *)(param_1 + 0x90) == iVar3) {
      (**(code **)(param_1 + 0xc0))
                (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),
                 *(int *)(param_1 + 0x90),0);
    }
  }
  return;
}


