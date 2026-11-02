/* Module: sfppack2.dll
   Function: FUN_5cd0b4b0
   Address: 5cd0b4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd0b4b0(HWND param_1,WPARAM param_2,int param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  SHORT SVar5;
  undefined4 *puVar6;
  int iVar7;
  HWND pHVar8;
  uint lParam;
  HDC pHVar9;
  HGLOBAL pvVar10;
  int iVar11;
  int iVar12;
  UINT UVar13;
  WPARAM wParam;
  LPARAM lParam_00;
  tagPOINT local_20;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  puVar6 = (undefined4 *)GetWindowLongA(param_1,0);
  if (puVar6[0x18] != 0) {
    MessageBeep(0);
    return;
  }
  if (param_3 == 0) {
    if (param_2 == 0x1b) {
      FUN_5cd0aaa0(param_1,0,0);
      FUN_5cd0af90();
    }
  }
  else {
    switch(param_2) {
    case 9:
      SVar5 = GetAsyncKeyState(0x11);
      if (-1 < SVar5) {
        SVar5 = GetAsyncKeyState(0x10);
        lParam_00 = 0;
        wParam = (WPARAM)(SVar5 < 0);
        UVar13 = 0x28;
        pHVar8 = GetParent(param_1);
        SendMessageA(pHVar8,UVar13,wParam,lParam_00);
        return;
      }
      puVar6[0x15] = 0;
      SVar5 = GetAsyncKeyState(0x10);
      iVar11 = puVar6[0xd];
      if (-1 < SVar5) {
        if (iVar11 == -1) {
          puVar6[0xd] = 0;
          puVar6[0xe] = 0;
          InvalidateRect(param_1,(RECT *)0x0,0);
          return;
        }
        puVar6[0xd] = iVar11 + 1;
        if ((int)puVar6[0x28] <= iVar11 + 1) {
          puVar6[0xd] = 0;
        }
        puVar6[0xe] = puVar6[0xd];
        InvalidateRect(param_1,(RECT *)0x0,0);
        return;
      }
      if (iVar11 == -1) {
        puVar6[0xd] = puVar6[0x28] + -1;
        puVar6[0xe] = puVar6[0x28] + -1;
        InvalidateRect(param_1,(RECT *)0x0,0);
        return;
      }
      puVar6[0xd] = iVar11 + -1;
      if (iVar11 + -1 < 0) {
        puVar6[0xd] = puVar6[0x28] + -1;
      }
      puVar6[0xe] = puVar6[0xd];
      InvalidateRect(param_1,(RECT *)0x0,0);
      return;
    case 0x1b:
      pHVar8 = GetCapture();
      if (pHVar8 != param_1) {
        lParam = param_5 << 0x10 | param_4 & 0xffff;
        UVar13 = 0x100;
        pHVar8 = GetParent(param_1);
        PostMessageA(pHVar8,UVar13,param_2,lParam);
        return;
      }
      if ((puVar6[0x13] != 0) && (-1 < (int)puVar6[0x11])) {
        pHVar9 = GetDC(param_1);
        local_20.y = puVar6[0x10];
        local_20.x = puVar6[0xf];
        iVar11 = puVar6[0x11];
        if (iVar11 < 0) {
          local_18 = 0;
        }
        else {
          local_18 = (puVar6[0x20] - puVar6[0x1e]) + -1;
          if (iVar11 <= local_18) {
            local_18 = iVar11;
          }
        }
        iVar11 = puVar6[0x12];
        if (iVar11 < 0) {
          local_14 = 0;
        }
        else {
          local_14 = (puVar6[0x21] - puVar6[0x1f]) + -1;
          if (iVar11 <= local_14) {
            local_14 = iVar11;
          }
        }
        FUN_5cd0aef0(pHVar9,&local_20.x);
        ReleaseDC(param_1,pHVar9);
      }
      if (puVar6[7] != 0) {
        InvalidateRect(param_1,(RECT *)0x0,1);
      }
      iVar11 = puVar6[9];
      puVar6[0x11] = 0xffffffff;
      puVar6[9] = 0xffffffff;
      puVar6[0x13] = 0;
      puVar6[0x14] = 0;
      puVar6[7] = 0;
      if (puVar6[10] != 0) {
        pHVar9 = GetDC(param_1);
        if ((iVar11 < (int)puVar6[0xd]) || ((int)puVar6[0xe] < iVar11)) {
          puVar4 = (undefined4 *)puVar6[10];
          iVar7 = puVar6[0x2d];
          *(undefined4 *)(iVar7 + iVar11 * 8) = *puVar4;
          *(undefined4 *)(iVar7 + 4 + iVar11 * 8) = puVar4[1];
        }
        else {
          iVar11 = 0;
          if (0 < (int)puVar6[0xb]) {
            do {
              iVar2 = puVar6[10];
              iVar3 = puVar6[0x2d];
              iVar12 = puVar6[0xd] + iVar11;
              iVar7 = iVar11 * 8;
              iVar11 = iVar11 + 1;
              *(undefined4 *)(iVar3 + iVar12 * 8) = *(undefined4 *)(iVar2 + iVar7);
              *(undefined4 *)(iVar3 + 4 + iVar12 * 8) = *(undefined4 *)(iVar2 + -4 + iVar11 * 8);
            } while (iVar11 < (int)puVar6[0xb]);
          }
        }
        ReleaseDC(param_1,pHVar9);
        pvVar10 = GlobalHandle((LPCVOID)puVar6[10]);
        GlobalUnlock(pvVar10);
        pvVar10 = GlobalHandle((LPCVOID)puVar6[10]);
        GlobalFree(pvVar10);
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        InvalidateRect(param_1,(RECT *)0x0,0);
        if ((HWND)puVar6[0x1b] != (HWND)0x0) {
          PostMessageA((HWND)puVar6[0x1b],0x612,0,-1);
          return;
        }
      }
      break;
    case 0x23:
      SVar5 = GetAsyncKeyState(0x10);
      if ((SVar5 < 0) && (puVar6[0xd] != -1)) {
        puVar6[0xe] = puVar6[0x28] + -1;
        InvalidateRect(param_1,(RECT *)0x0,0);
        return;
      }
      break;
    case 0x24:
      SVar5 = GetAsyncKeyState(0x10);
      if ((SVar5 < 0) && (puVar6[0xd] != -1)) {
        puVar6[0xd] = 0;
        InvalidateRect(param_1,(RECT *)0x0,0);
        return;
      }
      break;
    case 0x25:
    case 0x27:
      iVar11 = (-(uint)(param_2 != 0x25) & 2) - 1;
      SVar5 = GetAsyncKeyState(0x11);
      if (SVar5 < 0) {
        if (puVar6[0xd] != -1) {
          iVar11 = FUN_5cd0d380(puVar6,iVar11,0);
          if (iVar11 == 0) {
            return;
          }
          InvalidateRect(param_1,(RECT *)0x0,0);
          if ((HWND)puVar6[0x1b] == (HWND)0x0) {
            return;
          }
          PostMessageA((HWND)puVar6[0x1b],0x612,0,
                       CONCAT22(*(undefined2 *)(puVar6 + 0xe),*(undefined2 *)(puVar6 + 0xd)));
          return;
        }
      }
      else if (puVar6[9] != -1) {
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
      SVar5 = GetAsyncKeyState(0x10);
      if (SVar5 < 0) {
        iVar7 = puVar6[0xd];
        if (iVar11 < 1) {
          if (iVar7 == -1) {
            puVar6[0xd] = puVar6[0x28] + -1;
            puVar6[0xe] = puVar6[0x28] + -1;
          }
          else {
            if (iVar7 == puVar6[0xe]) {
              puVar6[0x15] = 1;
            }
            if (puVar6[0x15] == 0) {
              iVar11 = puVar6[0xe] + -1;
              puVar6[0xe] = iVar11;
              if (iVar11 < iVar7) {
                if (iVar11 < 0) {
                  puVar6[0xe] = 0;
                }
                puVar6[0x15] = 1;
                InvalidateRect(param_1,(RECT *)0x0,0);
                return;
              }
            }
            else {
              puVar6[0xd] = iVar7 + -1;
              if (iVar7 + -1 < 0) {
                puVar6[0xd] = 0;
                InvalidateRect(param_1,(RECT *)0x0,0);
                return;
              }
            }
          }
        }
        else {
          if (iVar7 == -1) {
            puVar6[0xd] = 0;
            puVar6[0xe] = 0;
            InvalidateRect(param_1,(RECT *)0x0,0);
            return;
          }
          if ((puVar6[0x15] == 0) || (iVar11 = puVar6[0xe], iVar11 == iVar7)) {
            iVar11 = puVar6[0xe] + 1;
            puVar6[0xe] = iVar11;
            if (puVar6[0x28] + -1 <= iVar11) {
              iVar11 = puVar6[0x28] + -1;
            }
            puVar6[0xe] = iVar11;
            puVar6[0x15] = 0;
            InvalidateRect(param_1,(RECT *)0x0,0);
            return;
          }
          iVar7 = iVar7 + 1;
          puVar6[0xd] = iVar7;
          if (iVar11 < iVar7) {
            if (puVar6[0x28] + -1 < iVar7) {
              puVar6[0xd] = puVar6[0x28] + -1;
            }
            uVar1 = puVar6[0xd];
            puVar6[0xd] = iVar11;
            puVar6[0xe] = uVar1;
            puVar6[0x15] = 0;
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
      SVar5 = GetAsyncKeyState(0x11);
      if (SVar5 < 0) {
        if ((puVar6[0xd] != -1) && (iVar11 = FUN_5cd0d380(puVar6,0,iVar11), iVar11 != 0)) {
          InvalidateRect(param_1,(RECT *)0x0,0);
          if ((HWND)puVar6[0x1b] != (HWND)0x0) {
            PostMessageA((HWND)puVar6[0x1b],0x612,0,
                         CONCAT22(*(undefined2 *)(puVar6 + 0xe),*(undefined2 *)(puVar6 + 0xd)));
            return;
          }
        }
      }
      else if (puVar6[9] != -1) {
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
      FUN_5cd0bc50(puVar6);
      return;
    case 0x2e:
      FUN_5cd0bbc0(puVar6);
      return;
    case 0x41:
      SVar5 = GetAsyncKeyState(0x11);
      if (SVar5 < 0) {
        SVar5 = GetAsyncKeyState(0x10);
        if (-1 < SVar5) {
          puVar6[0xd] = 0;
          puVar6[0xe] = puVar6[0x28] + -1;
          InvalidateRect(param_1,(RECT *)0x0,0);
          return;
        }
        puVar6[0xd] = 0xffffffff;
        puVar6[0xe] = 0xffffffff;
        InvalidateRect(param_1,(RECT *)0x0,0);
        return;
      }
    }
  }
  return;
}


