/* Module: vegas30.exe
   Function: FUN_00542680
   Address: 00542680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00542680(int *param_1,uint param_2,uint param_3,LPARAM param_4,undefined4 param_5)

{
  int iVar1;
  POINT pt;
  POINT Point;
  uint uVar2;
  BOOL BVar3;
  HCURSOR hCursor;
  HCURSOR pHVar4;
  HWND pHVar5;
  WPARAM wParam;
  HWND pHVar6;
  int iVar7;
  LRESULT LVar8;
  int *piVar9;
  UINT *pUVar10;
  undefined4 local_30;
  tagPOINT local_2c;
  tagPOINT local_24;
  tagMSG local_1c;
  
  pHVar6 = (HWND)*param_1;
  local_30 = 1;
  if (param_2 < 0x108) {
    if (0x103 < param_2) {
      DefWindowProcA(pHVar6,param_2,param_3,param_4);
      return 1;
    }
    switch(param_2) {
    case 0x10:
    case 0x1c:
    case 0x1f:
      FUN_00542610(param_1);
      return 0;
    default:
switchD_005426cb_caseD_11:
      return 0;
    case 0x20:
      hCursor = (HCURSOR)_SfGetUICursor_4(0x7f8b);
      pHVar4 = GetCursor();
      if (pHVar4 == hCursor) {
        return 1;
      }
      SetCursor(hCursor);
      return 1;
    case 0x4d:
    case 0x101:
      goto switchD_005426cb_caseD_4d;
    case 0xa1:
      if (param_3 == 2) {
        FUN_00542610(param_1);
        _SfHelp_ContextHelp_20(1,pHVar6,0,0,0);
      }
      else if ((param_3 < 10) || (0x11 < param_3)) {
        local_30 = 0;
      }
      else {
        FUN_00542610(param_1);
      }
switchD_00542821_caseD_112:
      uVar2 = param_3 & 0xfff0;
      if (uVar2 == 0xf090) {
        DefWindowProcA((HWND)*param_1,param_2,param_3,param_4);
        BVar3 = PeekMessageA(&local_1c,pHVar6,0x111,0x111,1);
        if (BVar3 != 0) {
          FUN_00542680(param_1,local_1c.message,local_1c.wParam,local_1c.lParam,param_5);
          return local_30;
        }
        iVar7 = PeekMessageA(&local_1c,pHVar6,0x112,0x112,1);
      }
      else {
        if (uVar2 != 0xf100) goto LAB_0054291d;
        pHVar5 = GetCapture();
        if ((HWND)*param_1 == pHVar5) {
          ReleaseCapture();
          param_1[0x45] = 0;
        }
        DefWindowProcA((HWND)*param_1,param_2,param_3,param_4);
        BVar3 = PeekMessageA(&local_1c,pHVar6,0x111,0x111,1);
        if (BVar3 != 0) {
          FUN_00542680(param_1,local_1c.message,local_1c.wParam,local_1c.lParam,param_5);
          return local_30;
        }
        iVar7 = PeekMessageA(&local_1c,pHVar6,0x112,0x112,1);
      }
      if (iVar7 != 0) {
        uVar2 = local_1c.wParam & 0xfff0;
LAB_0054291d:
        if (uVar2 == 0xf120) {
          uVar2 = 0x41a;
        }
        else if (uVar2 == 0xf010) {
          uVar2 = 0x41b;
        }
        else if (uVar2 == 0xf000) {
          uVar2 = 0x41c;
        }
        else if (uVar2 == 0xf020) {
          uVar2 = 0x41d;
        }
        else if (uVar2 == 0xf030) {
          uVar2 = 0x41e;
        }
        else if (uVar2 == 0xf160) {
          uVar2 = 0x41f;
        }
        else {
          uVar2 = (uVar2 != 0xf060) - 1 & 0x41f;
          if (uVar2 == 0) {
            return 0;
          }
        }
        FUN_00542610(param_1);
        _SfHelp_ContextHelp_20(0,pHVar6,uVar2,8,0);
        return local_30;
      }
      break;
    case 0x100:
      if (param_3 != 0x1b) {
        return 1;
      }
    }
  }
  else {
    if (param_2 < 0x201) {
      if (param_2 != 0x200) {
        switch(param_2) {
        case 0x111:
          FUN_00542610(param_1);
          if ((short)param_3 == -0x603b) {
            PeekMessageA(&local_1c,pHVar6,0x4d,0x4d,1);
            return 1;
          }
          _SfHelp_ContextPopupHelp_24(0,pHVar6,0,param_3 & 0xffff,param_5,0);
          return 1;
        case 0x112:
          goto switchD_00542821_caseD_112;
        default:
          goto switchD_005426cb_caseD_11;
        case 0x116:
        case 0x117:
          pHVar6 = GetCapture();
          if ((HWND)*param_1 == pHVar6) {
            ReleaseCapture();
            param_1[0x45] = 0;
          }
          return 0;
        }
      }
LAB_00542a65:
      if (param_1[0x45] != 0) {
        return 1;
      }
      return 0;
    }
    if (param_2 != 0x201) {
      if (param_2 != 0x202) {
        if (param_2 != 0x215) {
          return 0;
        }
        param_1[0x45] = 0;
        if (DAT_00647684 != &LAB_00542560) {
          return 1;
        }
        FUN_00404660(0,0);
        return 1;
      }
      goto LAB_00542a65;
    }
    if (param_1[0x45] == 0) {
      return 0;
    }
    local_2c.x = (LONG)(short)param_4;
    local_2c.y = (LONG)(short)((uint)param_4 >> 0x10);
    ClientToScreen(pHVar6,&local_2c);
    Point.y = local_2c.y;
    Point.x = local_2c.x;
    pHVar5 = WindowFromPoint(Point);
    if (pHVar5 == (HWND)*param_1) {
      wParam = DefWindowProcA((HWND)*param_1,0x84,0,local_2c.y << 0x10 | local_2c.x & 0xffffU);
      if (wParam == 1) {
        return 1;
      }
      pHVar6 = GetCapture();
      if ((HWND)*param_1 == pHVar6) {
        ReleaseCapture();
        param_1[0x45] = 0;
      }
      iVar7 = FUN_00542680(param_1,0xa1,wParam,local_2c.y << 0x10 | local_2c.x & 0xffffU,param_5);
      if (iVar7 != 0) {
        return 1;
      }
      DefWindowProcA(pHVar5,0xa1,wParam,local_2c.y << 0x10 | local_2c.x & 0xffffU);
      return 1;
    }
    if (pHVar5 == (HWND)param_1[0x30]) {
      FUN_00542610(param_1);
      _SfHelp_ContextHelp_20(0,pHVar6,0x424,8,0);
      return 1;
    }
    iVar7 = FUN_0040c090(pHVar5);
    if (iVar7 != 0) {
      pUVar10 = &local_1c.message;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pUVar10 = 0;
        pUVar10 = pUVar10 + 1;
      }
      local_1c.hwnd = (HWND)0x1c;
      local_1c.message = 1;
      local_1c.pt.x = local_2c.x;
      local_1c.pt.y = local_2c.y;
      local_24.x = local_2c.x;
      local_24.y = local_2c.y;
      ScreenToClient(pHVar5,&local_24);
      pt.y = local_24.y;
      pt.x = local_24.x;
      pHVar6 = ChildWindowFromPointEx(pHVar5,pt,1);
      if ((pHVar6 == (HWND)0x0) || (pHVar6 == pHVar5)) {
        local_1c.wParam = GetDlgCtrlID(pHVar5);
        local_1c.lParam = (LPARAM)pHVar5;
      }
      else {
        local_1c.lParam = (LPARAM)pHVar6;
        local_1c.wParam = GetDlgCtrlID(pHVar6);
      }
      FUN_00542610(param_1);
      if (((local_1c.wParam == 1) &&
          (iVar7 = _SfHelp_HitTestToolbar_8(pHVar5,&local_1c), iVar7 != 0)) &&
         (LVar8 = SendMessageA((HWND)*param_1,0x53,0,(LPARAM)&local_1c), LVar8 != 0)) {
        return 1;
      }
      if (((pHVar5 != (HWND)0x0) && (local_1c.wParam == 0)) &&
         ((pHVar6 == (HWND)0x0 || (pHVar6 == pHVar5)))) {
        iVar7 = 0;
        piVar9 = (int *)(DAT_0064762c + 0x68);
        while ((iVar1 = *piVar9, iVar1 == 0 || (*(HWND *)(iVar1 + 8) != pHVar5))) {
          iVar7 = iVar7 + 1;
          piVar9 = piVar9 + 1;
          if (0xb < iVar7) {
            SendMessageA(pHVar5,0x53,0,(LPARAM)&local_1c);
            return 1;
          }
        }
        if ((*(int *)(iVar1 + 0x1c) != 1) && (iVar7 = FUN_00414600(iVar1), iVar7 != 0)) {
          return 1;
        }
      }
      SendMessageA(pHVar5,0x53,0,(LPARAM)&local_1c);
      return 1;
    }
  }
  FUN_00542610(param_1);
switchD_005426cb_caseD_4d:
  return local_30;
}


