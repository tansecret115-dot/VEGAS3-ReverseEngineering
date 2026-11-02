/* Module: vidcap30.exe
   Function: FUN_0041ef10
   Address: 0041ef10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041ef10(int *param_1,uint param_2,uint param_3,LPARAM param_4,undefined4 param_5)

{
  POINT pt;
  POINT Point;
  HCURSOR hCursor;
  HCURSOR pHVar1;
  HWND pHVar2;
  WPARAM wParam;
  HWND pHVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  UINT *pUVar7;
  undefined4 local_30;
  tagPOINT local_2c;
  tagPOINT local_24;
  tagMSG local_1c;
  
  pHVar3 = (HWND)*param_1;
  local_30 = 1;
  if (0x107 < param_2) {
    if (param_2 < 0x201) {
      if (param_2 != 0x200) {
        switch(param_2) {
        case 0x111:
          FUN_0041eeb0(param_1);
          if ((short)param_3 == 0x43c) {
            PeekMessageA(&local_1c,pHVar3,0x4d,0x4d,1);
            return 1;
          }
          FUN_0041f690(0,pHVar3,0,param_3 & 0xffff,param_5,0);
          return 1;
        case 0x112:
          goto switchD_0041f0b1_caseD_112;
        default:
          goto switchD_0041ef5b_caseD_11;
        case 0x116:
        case 0x117:
          pHVar3 = GetCapture();
          if ((HWND)*param_1 == pHVar3) {
            ReleaseCapture();
            param_1[0x40] = 0;
          }
          return 0;
        }
      }
    }
    else {
      if (param_2 == 0x201) {
        if (param_1[0x40] == 0) {
          return 0;
        }
        local_2c.x = (LONG)(short)param_4;
        local_2c.y = (LONG)(short)((uint)param_4 >> 0x10);
        ClientToScreen(pHVar3,&local_2c);
        Point.y = local_2c.y;
        Point.x = local_2c.x;
        pHVar2 = WindowFromPoint(Point);
        if (pHVar2 != (HWND)*param_1) {
          BVar5 = IsChild(pHVar3,pHVar2);
          if (BVar5 == 0) {
            uVar6 = 0x6c;
            iVar4 = DAT_005ba4c0;
            while ((*(int *)(uVar6 + iVar4) == 0 ||
                   ((BVar5 = IsChild(*(HWND *)(*(int *)(uVar6 + iVar4) + 8),pHVar2), BVar5 == 0 &&
                    (iVar4 = DAT_005ba4c0, *(HWND *)(*(int *)(uVar6 + DAT_005ba4c0) + 8) != pHVar2))
                   ))) {
              uVar6 = uVar6 + 4;
              if (0x87 < uVar6) {
                FUN_0041eeb0(param_1);
                return 1;
              }
            }
          }
          pUVar7 = &local_1c.message;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pUVar7 = 0;
            pUVar7 = pUVar7 + 1;
          }
          local_1c.pt.y = local_2c.y;
          local_24.y = local_2c.y;
          local_1c.hwnd = (HWND)0x1c;
          local_1c.message = 1;
          local_1c.pt.x = local_2c.x;
          local_24.x = local_2c.x;
          ScreenToClient(pHVar2,&local_24);
          pt.y = local_24.y;
          pt.x = local_24.x;
          local_1c.lParam = (LPARAM)ChildWindowFromPointEx(pHVar2,pt,1);
          if (((HWND)local_1c.lParam == (HWND)0x0) || ((HWND)local_1c.lParam == pHVar2)) {
            local_1c.wParam = GetDlgCtrlID(pHVar2);
            local_1c.lParam = (LPARAM)pHVar2;
          }
          else {
            local_1c.wParam = GetDlgCtrlID((HWND)local_1c.lParam);
          }
          FUN_0041eeb0(param_1);
          SendMessageA(pHVar2,0x53,0,(LPARAM)&local_1c);
          return 1;
        }
        wParam = DefWindowProcA((HWND)*param_1,0x84,0,local_2c.y << 0x10 | local_2c.x & 0xffffU);
        if (wParam == 1) {
          return 1;
        }
        pHVar3 = GetCapture();
        if ((HWND)*param_1 == pHVar3) {
          ReleaseCapture();
          param_1[0x40] = 0;
        }
        iVar4 = FUN_0041ef10(param_1,0xa1,wParam,local_2c.y << 0x10 | local_2c.x & 0xffffU,param_5);
        if (iVar4 != 0) {
          return 1;
        }
        DefWindowProcA(pHVar2,0xa1,wParam,local_2c.y << 0x10 | local_2c.x & 0xffffU);
        return 1;
      }
      if (param_2 != 0x202) {
        if (param_2 != 0x215) {
          return 0;
        }
        param_1[0x40] = 0;
        if (DAT_005ba514 != &LAB_0041ee10) {
          return 1;
        }
        FUN_00404100(0,0);
        return 1;
      }
    }
    if (param_1[0x40] != 0) {
      return 1;
    }
    return 0;
  }
  if (0x103 < param_2) {
    DefWindowProcA(pHVar3,param_2,param_3,param_4);
    return 1;
  }
  switch(param_2) {
  case 0x10:
  case 0x1c:
  case 0x1f:
    FUN_0041eeb0(param_1);
    return 0;
  default:
switchD_0041ef5b_caseD_11:
    return 0;
  case 0x20:
    hCursor = (HCURSOR)_SfGetUICursor_4(0x7f8b);
    pHVar1 = GetCursor();
    if (pHVar1 == hCursor) {
      return 1;
    }
    SetCursor(hCursor);
    return 1;
  case 0x4d:
  case 0x101:
    goto switchD_0041ef5b_caseD_4d;
  case 0xa1:
    if (param_3 == 2) {
      FUN_0041eeb0(param_1);
      FUN_0041f650(1,pHVar3,0,0,0);
    }
    else if ((param_3 < 10) || (0x11 < param_3)) {
      local_30 = 0;
    }
    else {
      FUN_0041eeb0(param_1);
    }
switchD_0041f0b1_caseD_112:
    uVar6 = param_3 & 0xfff0;
    if (uVar6 == 0xf090) {
      DefWindowProcA((HWND)*param_1,param_2,param_3,param_4);
      BVar5 = PeekMessageA(&local_1c,pHVar3,0x111,0x111,1);
      if (BVar5 != 0) {
        FUN_0041ef10(param_1,local_1c.message,local_1c.wParam,local_1c.lParam,param_5);
        return local_30;
      }
      iVar4 = PeekMessageA(&local_1c,pHVar3,0x112,0x112,1);
    }
    else {
      if (uVar6 != 0xf100) goto LAB_0041f1ad;
      pHVar2 = GetCapture();
      if ((HWND)*param_1 == pHVar2) {
        ReleaseCapture();
        param_1[0x40] = 0;
      }
      DefWindowProcA((HWND)*param_1,param_2,param_3,param_4);
      BVar5 = PeekMessageA(&local_1c,pHVar3,0x111,0x111,1);
      if (BVar5 != 0) {
        FUN_0041ef10(param_1,local_1c.message,local_1c.wParam,local_1c.lParam,param_5);
        return local_30;
      }
      iVar4 = PeekMessageA(&local_1c,pHVar3,0x112,0x112,1);
    }
    if (iVar4 != 0) {
      uVar6 = local_1c.wParam & 0xfff0;
LAB_0041f1ad:
      if (uVar6 == 0xf120) {
        uVar6 = 0x41a;
      }
      else if (uVar6 == 0xf010) {
        uVar6 = 0x41b;
      }
      else if (uVar6 == 0xf000) {
        uVar6 = 0x41c;
      }
      else if (uVar6 == 0xf020) {
        uVar6 = 0x41d;
      }
      else if (uVar6 == 0xf030) {
        uVar6 = 0x41e;
      }
      else if (uVar6 == 0xf160) {
        uVar6 = 0x41f;
      }
      else {
        uVar6 = (uVar6 != 0xf060) - 1 & 0x41f;
        if (uVar6 == 0) {
          return 0;
        }
      }
      FUN_0041eeb0(param_1);
      FUN_0041f650(0,pHVar3,uVar6,8,0);
      return local_30;
    }
    break;
  case 0x100:
    if (param_3 != 0x1b) {
      return 1;
    }
  }
  FUN_0041eeb0(param_1);
switchD_0041ef5b_caseD_4d:
  return local_30;
}


