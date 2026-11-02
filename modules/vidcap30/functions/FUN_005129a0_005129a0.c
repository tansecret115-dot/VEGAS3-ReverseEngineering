/* Module: vidcap30.exe
   Function: FUN_005129a0
   Address: 005129a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005129a0(HWND param_1,WPARAM param_2,int param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  SHORT SVar4;
  LONG LVar5;
  int iVar6;
  HWND pHVar7;
  uint lParam;
  HDC pHVar8;
  HGLOBAL pvVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UINT UVar13;
  WPARAM wParam;
  LPARAM lParam_00;
  tagPOINT local_20;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  LVar5 = GetWindowLongA(param_1,0);
  if (*(int *)(LVar5 + 0x60) != 0) {
    MessageBeep(0);
    return;
  }
  if (param_3 == 0) {
    if (param_2 == 0x1b) {
      FUN_00511f90(param_1,0,0,0);
      FUN_00512480(param_1,0,0,0);
    }
  }
  else {
    switch(param_2) {
    case 9:
      SVar4 = GetAsyncKeyState(0x11);
      if (-1 < SVar4) {
        SVar4 = GetAsyncKeyState(0x10);
        lParam_00 = 0;
        wParam = (WPARAM)(SVar4 < 0);
        UVar13 = 0x28;
        pHVar7 = GetParent(param_1);
        SendMessageA(pHVar7,UVar13,wParam,lParam_00);
        return;
      }
      *(undefined4 *)(LVar5 + 0x54) = 0;
      SVar4 = GetAsyncKeyState(0x10);
      iVar11 = *(int *)(LVar5 + 0x34);
      if (-1 < SVar4) {
        if (iVar11 == -1) {
          *(undefined4 *)(LVar5 + 0x34) = 0;
          *(undefined4 *)(LVar5 + 0x38) = 0;
          InvalidateRect(param_1,(RECT *)0x0,0);
          return;
        }
        *(int *)(LVar5 + 0x34) = iVar11 + 1;
        if (*(int *)(LVar5 + 0xa0) <= iVar11 + 1) {
          *(undefined4 *)(LVar5 + 0x34) = 0;
        }
        *(undefined4 *)(LVar5 + 0x38) = *(undefined4 *)(LVar5 + 0x34);
        InvalidateRect(param_1,(RECT *)0x0,0);
        return;
      }
      if (iVar11 == -1) {
        iVar11 = *(int *)(LVar5 + 0xa0) + -1;
        *(int *)(LVar5 + 0x34) = iVar11;
        *(int *)(LVar5 + 0x38) = iVar11;
        InvalidateRect(param_1,(RECT *)0x0,0);
        return;
      }
      *(int *)(LVar5 + 0x34) = iVar11 + -1;
      if (iVar11 + -1 < 0) {
        *(int *)(LVar5 + 0x34) = *(int *)(LVar5 + 0xa0) + -1;
      }
      *(undefined4 *)(LVar5 + 0x38) = *(undefined4 *)(LVar5 + 0x34);
      InvalidateRect(param_1,(RECT *)0x0,0);
      return;
    case 0x1b:
      pHVar7 = GetCapture();
      if (pHVar7 != param_1) {
        lParam = param_5 << 0x10 | param_4 & 0xffff;
        UVar13 = 0x100;
        pHVar7 = GetParent(param_1);
        PostMessageA(pHVar7,UVar13,param_2,lParam);
        return;
      }
      if ((*(int *)(LVar5 + 0x4c) != 0) && (-1 < *(int *)(LVar5 + 0x44))) {
        pHVar8 = GetDC(param_1);
        local_20.y = *(int *)(LVar5 + 0x40);
        local_20.x = *(int *)(LVar5 + 0x3c);
        iVar11 = *(int *)(LVar5 + 0x44);
        if (iVar11 < 0) {
          local_18 = 0;
        }
        else {
          local_18 = (*(int *)(LVar5 + 0x80) - *(int *)(LVar5 + 0x78)) + -1;
          if (iVar11 <= local_18) {
            local_18 = iVar11;
          }
        }
        iVar11 = *(int *)(LVar5 + 0x48);
        if (iVar11 < 0) {
          local_14 = 0;
        }
        else {
          local_14 = (*(int *)(LVar5 + 0x84) - *(int *)(LVar5 + 0x7c)) + -1;
          if (iVar11 <= local_14) {
            local_14 = iVar11;
          }
        }
        FUN_005123e0(pHVar8,&local_20);
        ReleaseDC(param_1,pHVar8);
      }
      if (*(int *)(LVar5 + 0x1c) != 0) {
        InvalidateRect(param_1,(RECT *)0x0,1);
      }
      iVar11 = *(int *)(LVar5 + 0x24);
      *(undefined4 *)(LVar5 + 0x44) = 0xffffffff;
      *(undefined4 *)(LVar5 + 0x24) = 0xffffffff;
      *(undefined4 *)(LVar5 + 0x4c) = 0;
      *(undefined4 *)(LVar5 + 0x50) = 0;
      *(undefined4 *)(LVar5 + 0x1c) = 0;
      if (*(int *)(LVar5 + 0x28) != 0) {
        pHVar8 = GetDC(param_1);
        if ((iVar11 < *(int *)(LVar5 + 0x34)) || (*(int *)(LVar5 + 0x38) < iVar11)) {
          puVar3 = *(undefined4 **)(LVar5 + 0x28);
          iVar6 = *(int *)(LVar5 + 0xb4);
          *(undefined4 *)(iVar6 + iVar11 * 8) = *puVar3;
          *(undefined4 *)(iVar6 + 4 + iVar11 * 8) = puVar3[1];
        }
        else {
          iVar11 = 0;
          if (0 < *(int *)(LVar5 + 0x2c)) {
            do {
              iVar10 = *(int *)(LVar5 + 0x28);
              iVar2 = *(int *)(LVar5 + 0xb4);
              iVar12 = *(int *)(LVar5 + 0x34) + iVar11;
              iVar6 = iVar11 * 8;
              iVar11 = iVar11 + 1;
              *(undefined4 *)(iVar2 + iVar12 * 8) = *(undefined4 *)(iVar10 + iVar6);
              *(undefined4 *)(iVar2 + 4 + iVar12 * 8) = *(undefined4 *)(iVar10 + -4 + iVar11 * 8);
            } while (iVar11 < *(int *)(LVar5 + 0x2c));
          }
        }
        ReleaseDC(param_1,pHVar8);
        pvVar9 = GlobalHandle(*(LPCVOID *)(LVar5 + 0x28));
        GlobalUnlock(pvVar9);
        pvVar9 = GlobalHandle(*(LPCVOID *)(LVar5 + 0x28));
        GlobalFree(pvVar9);
        *(undefined4 *)(LVar5 + 0x28) = 0;
        *(undefined4 *)(LVar5 + 0x2c) = 0;
        InvalidateRect(param_1,(RECT *)0x0,0);
        if (*(HWND *)(LVar5 + 0x6c) != (HWND)0x0) {
          PostMessageA(*(HWND *)(LVar5 + 0x6c),0x612,0,-1);
          return;
        }
      }
      break;
    case 0x23:
      SVar4 = GetAsyncKeyState(0x10);
      if ((SVar4 < 0) && (*(int *)(LVar5 + 0x34) != -1)) {
        *(int *)(LVar5 + 0x38) = *(int *)(LVar5 + 0xa0) + -1;
        InvalidateRect(param_1,(RECT *)0x0,0);
        return;
      }
      break;
    case 0x24:
      SVar4 = GetAsyncKeyState(0x10);
      if ((SVar4 < 0) && (*(int *)(LVar5 + 0x34) != -1)) {
        *(undefined4 *)(LVar5 + 0x34) = 0;
        InvalidateRect(param_1,(RECT *)0x0,0);
        return;
      }
      break;
    case 0x25:
    case 0x27:
      iVar11 = (-(uint)(param_2 != 0x25) & 2) - 1;
      SVar4 = GetAsyncKeyState(0x11);
      if (SVar4 < 0) {
        if (*(int *)(LVar5 + 0x34) != -1) {
          iVar11 = FUN_00514870(LVar5,iVar11,0);
          if (iVar11 == 0) {
            return;
          }
          InvalidateRect(param_1,(RECT *)0x0,0);
          if (*(HWND *)(LVar5 + 0x6c) == (HWND)0x0) {
            return;
          }
          PostMessageA(*(HWND *)(LVar5 + 0x6c),0x612,0,
                       CONCAT22(*(undefined2 *)(LVar5 + 0x38),*(undefined2 *)(LVar5 + 0x34)));
          return;
        }
      }
      else if (*(int *)(LVar5 + 0x24) != -1) {
        GetWindowRect(param_1,&local_10);
        GetCursorPos(&local_20);
        local_20.x = local_20.x + iVar11;
        if (local_10.right <= local_20.x) {
          return;
        }
        if (local_20.x < local_10.left) {
          return;
        }
        SetCursorPos(local_20.x,local_20.y);
        return;
      }
      SVar4 = GetAsyncKeyState(0x10);
      if (SVar4 < 0) {
        iVar6 = *(int *)(LVar5 + 0x34);
        if (iVar11 < 1) {
          if (iVar6 == -1) {
            iVar11 = *(int *)(LVar5 + 0xa0) + -1;
            *(int *)(LVar5 + 0x34) = iVar11;
            *(int *)(LVar5 + 0x38) = iVar11;
          }
          else {
            if (iVar6 == *(int *)(LVar5 + 0x38)) {
              *(undefined4 *)(LVar5 + 0x54) = 1;
            }
            if (*(int *)(LVar5 + 0x54) == 0) {
              iVar11 = *(int *)(LVar5 + 0x38) + -1;
              *(int *)(LVar5 + 0x38) = iVar11;
              if (iVar11 < iVar6) {
                if (iVar11 < 0) {
                  *(undefined4 *)(LVar5 + 0x38) = 0;
                }
                *(undefined4 *)(LVar5 + 0x54) = 1;
                InvalidateRect(param_1,(RECT *)0x0,0);
                return;
              }
            }
            else {
              *(int *)(LVar5 + 0x34) = iVar6 + -1;
              if (iVar6 + -1 < 0) {
                *(undefined4 *)(LVar5 + 0x34) = 0;
                InvalidateRect(param_1,(RECT *)0x0,0);
                return;
              }
            }
          }
        }
        else {
          if (iVar6 == -1) {
            *(undefined4 *)(LVar5 + 0x34) = 0;
            *(undefined4 *)(LVar5 + 0x38) = 0;
            InvalidateRect(param_1,(RECT *)0x0,0);
            return;
          }
          if ((*(int *)(LVar5 + 0x54) == 0) || (iVar11 = *(int *)(LVar5 + 0x38), iVar11 == iVar6)) {
            iVar11 = *(int *)(LVar5 + 0x38) + 1;
            iVar6 = *(int *)(LVar5 + 0xa0) + -1;
            *(int *)(LVar5 + 0x38) = iVar11;
            if (iVar6 <= iVar11) {
              iVar11 = iVar6;
            }
            *(int *)(LVar5 + 0x38) = iVar11;
            *(undefined4 *)(LVar5 + 0x54) = 0;
            InvalidateRect(param_1,(RECT *)0x0,0);
            return;
          }
          iVar6 = iVar6 + 1;
          *(int *)(LVar5 + 0x34) = iVar6;
          if (iVar11 < iVar6) {
            iVar10 = *(int *)(LVar5 + 0xa0) + -1;
            if (iVar10 < iVar6) {
              *(int *)(LVar5 + 0x34) = iVar10;
            }
            uVar1 = *(undefined4 *)(LVar5 + 0x34);
            *(int *)(LVar5 + 0x34) = iVar11;
            *(undefined4 *)(LVar5 + 0x38) = uVar1;
            *(undefined4 *)(LVar5 + 0x54) = 0;
            InvalidateRect(param_1,(RECT *)0x0,0);
            return;
          }
        }
        InvalidateRect(param_1,(RECT *)0x0,0);
        return;
      }
      break;
    case 0x26:
    case 0x28:
      iVar11 = (-(uint)(param_2 != 0x26) & 2) - 1;
      SVar4 = GetAsyncKeyState(0x11);
      if (SVar4 < 0) {
        if ((*(int *)(LVar5 + 0x34) != -1) && (iVar11 = FUN_00514870(LVar5,0,iVar11), iVar11 != 0))
        {
          InvalidateRect(param_1,(RECT *)0x0,0);
          if (*(HWND *)(LVar5 + 0x6c) != (HWND)0x0) {
            PostMessageA(*(HWND *)(LVar5 + 0x6c),0x612,0,
                         CONCAT22(*(undefined2 *)(LVar5 + 0x38),*(undefined2 *)(LVar5 + 0x34)));
            return;
          }
        }
      }
      else if (*(int *)(LVar5 + 0x24) != -1) {
        GetWindowRect(param_1,&local_10);
        GetCursorPos(&local_20);
        local_20.y = local_20.y + iVar11;
        if ((local_20.y < local_10.bottom) && (local_10.top <= local_20.y)) {
          SetCursorPos(local_20.x,local_20.y);
          return;
        }
      }
      break;
    case 0x2d:
      FUN_00513140(LVar5);
      return;
    case 0x2e:
      FUN_005130b0(LVar5);
      return;
    case 0x41:
      SVar4 = GetAsyncKeyState(0x11);
      if (SVar4 < 0) {
        SVar4 = GetAsyncKeyState(0x10);
        if (-1 < SVar4) {
          *(undefined4 *)(LVar5 + 0x34) = 0;
          *(int *)(LVar5 + 0x38) = *(int *)(LVar5 + 0xa0) + -1;
          InvalidateRect(param_1,(RECT *)0x0,0);
          return;
        }
        *(undefined4 *)(LVar5 + 0x34) = 0xffffffff;
        *(undefined4 *)(LVar5 + 0x38) = 0xffffffff;
        InvalidateRect(param_1,(RECT *)0x0,0);
        return;
      }
    }
  }
  return;
}


