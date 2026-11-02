/* Module: vegas30.exe
   Function: FUN_004fd740
   Address: 004fd740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004fd740(UINT *param_1,uint param_2,uint param_3,HWND param_4)

{
  UINT *pUVar1;
  uint Msg;
  uint wParam;
  int iVar2;
  HDC pHVar3;
  UINT UVar4;
  short sVar5;
  UINT UVar6;
  short sVar7;
  undefined4 uVar8;
  HWND hwnd;
  HWND pHVar9;
  int nBar;
  tagSCROLLINFO local_5c;
  tagPAINTSTRUCT local_40;
  
  hwnd = param_4;
  wParam = param_3;
  Msg = param_2;
  pUVar1 = param_1;
  pHVar9 = (HWND)*param_1;
  param_1 = (UINT *)0x0;
  iVar2 = FUN_00548c50(pHVar9,param_2,param_3,param_4,&param_1);
  if (iVar2 != 0) {
    return (int)param_1;
  }
  sVar7 = (short)hwnd;
  sVar5 = (short)((uint)hwnd >> 0x10);
  if ((0x1ff < Msg) && (Msg < 0x20b)) {
    if ((Msg == 0x201) || (Msg == 0x204)) {
      if (((pUVar1[3] & 0x400) != 0) && (pUVar1[0xd] == 0)) {
        FUN_004fc490(pUVar1,(int)sVar7,(int)sVar5);
      }
      if ((pUVar1[3] & 4) != 0) {
        pUVar1[3] = pUVar1[3] & 0xffffffdf;
        FUN_004fc5c0(pUVar1);
      }
      SetFocus(pHVar9);
    }
    if ((pUVar1[3] & 4) != 0) {
      local_5c.cbSize = *pUVar1;
      local_5c.nMax = (int)hwnd;
      local_5c.nMin = wParam;
      local_5c.fMask = Msg;
      SendMessageA((HWND)pUVar1[0x32],0x407,0,(LPARAM)&local_5c);
    }
    FUN_004fba10(pUVar1,Msg,wParam,hwnd);
    return (int)param_1;
  }
  if (Msg < 0x15) {
    if (Msg == 0x14) {
      return 1;
    }
    switch(Msg) {
    case 1:
      FUN_004fad00(pUVar1);
      return (int)param_1;
    case 2:
      KillTimer(pHVar9,99);
      return (int)param_1;
    case 5:
      FUN_004fa690(pUVar1);
      return (int)param_1;
    case 7:
      pUVar1[3] = pUVar1[3] | 2;
      InvalidateRect(pHVar9,(RECT *)0x0,0);
      FUN_004fa530(pUVar1,1);
      return (int)param_1;
    case 8:
      pUVar1[3] = pUVar1[3] & 0xfffffffd;
      InvalidateRect(pHVar9,(RECT *)0x0,0);
      FUN_004fa530(pUVar1,0);
      return (int)param_1;
    case 0xf:
      pHVar3 = BeginPaint(pHVar9,&local_40);
      FUN_004fd620(pUVar1,pHVar3,&local_40.rcPaint,1);
      EndPaint(pHVar9,&local_40);
      return (int)param_1;
    }
    goto switchD_004fd850_caseD_3;
  }
  if (Msg < 0x114) {
    if (Msg == 0x113) {
      if (wParam == 99) {
        FUN_004fd040(pUVar1);
        return (int)param_1;
      }
      if (wParam != 0x62) {
        return (int)param_1;
      }
      FUN_004fce80(pUVar1);
      return (int)param_1;
    }
    switch(Msg) {
    case 0x1f:
      FUN_004fba10(pUVar1,0x1f,wParam,hwnd);
      iVar2 = DefWindowProcA(pHVar9,Msg,wParam,(LPARAM)hwnd);
      return iVar2;
    case 0x20:
      param_1 = (UINT *)FUN_004fc6a0(pUVar1,wParam,(int)sVar7,(int)sVar5);
      if (param_1 != (UINT *)0x0) {
        return (int)param_1;
      }
      break;
    default:
      goto switchD_004fd850_caseD_3;
    case 0x53:
      if (hwnd[1].unused == 1) {
        iVar2 = _SfHelp_ContextPopupHelp_24(0,*pUVar1,0,1,&DAT_006431a0,0);
        return iVar2;
      }
      iVar2 = DefWindowProcA((HWND)*pUVar1,Msg,wParam,(LPARAM)hwnd);
      return iVar2;
    case 0x7b:
      UVar6 = pUVar1[0x1b];
      UVar4 = (UINT)sVar7;
      iVar2 = (int)sVar5;
      uVar8 = 1;
      if ((wParam == 0) || (hwnd == (HWND)0xffffffff)) {
        UVar6 = pUVar1[4];
        iVar2 = pUVar1[5] + 0x10;
        UVar4 = UVar6 + 0x10;
        if (((int)UVar4 < (int)UVar6) || (UVar6 = pUVar1[6], (int)pUVar1[6] < (int)UVar4)) {
          UVar4 = UVar6;
        }
        UVar6 = 0;
        uVar8 = 0;
      }
      FUN_004fac80(pUVar1,UVar4,iVar2,UVar6,uVar8);
      return (int)param_1;
    case 0x100:
    case 0x101:
      FUN_004fc050(pUVar1,Msg,wParam,hwnd);
      return (int)param_1;
    case 0x106:
      if (wParam == 8) {
        SendMessageA(pHVar9,0x304,0,0);
        return (int)param_1;
      }
      break;
    case 0x111:
      FUN_004fab30(pUVar1,wParam & 0xffff,0xffffffff);
      return (int)param_1;
    }
    iVar2 = DefWindowProcA(pHVar9,Msg,wParam,(LPARAM)hwnd);
    return iVar2;
  }
  if (0x2a3 < Msg) {
    if (Msg < 0x7f09) {
      if (0x7eff < Msg) {
        return (int)param_1;
      }
      if ((0x2ff < Msg) && (Msg < 0x308)) {
        return (int)param_1;
      }
    }
    else if (Msg == 0x7f09) {
      FUN_004fafb0(pUVar1,wParam == 0);
      return (int)param_1;
    }
switchD_004fd850_caseD_3:
    if ((0x3ff < Msg) && (Msg < 0x8001)) {
      iVar2 = FUN_004fd730(pUVar1,Msg,wParam,hwnd);
      return iVar2;
    }
    iVar2 = DefWindowProcA((HWND)*pUVar1,Msg,wParam,(LPARAM)hwnd);
    return iVar2;
  }
  if (Msg == 0x2a3) {
    return (int)param_1;
  }
  if (Msg != 0x115) {
    if ((Msg == 0x11f) || (Msg == 0x121)) {
      iVar2 = SendMessageA(DAT_00647624,Msg,wParam,(LPARAM)hwnd);
      return iVar2;
    }
    goto switchD_004fd850_caseD_3;
  }
  local_5c.nMin = 0;
  local_5c.cbSize = 0x1c;
  local_5c.nMax = 0;
  local_5c.fMask = 0x17;
  local_5c.nPage = 0;
  local_5c.nPos = 0;
  local_5c.nTrackPos = 0;
  if (hwnd == (HWND)0x0) {
    pHVar9 = (HWND)*pUVar1;
    iVar2 = 1;
  }
  else {
    iVar2 = 2;
    pHVar9 = hwnd;
  }
  GetScrollInfo(pHVar9,iVar2,&local_5c);
  iVar2 = local_5c.nPos;
  switch(wParam & 0xffff) {
  case 0:
  case 6:
    iVar2 = local_5c.nPos - pUVar1[0x5b];
    break;
  case 1:
  case 7:
    iVar2 = pUVar1[0x5b] + local_5c.nPos;
    break;
  case 2:
    iVar2 = local_5c.nPos - local_5c.nPage;
    goto LAB_004fdbb6;
  case 3:
    iVar2 = local_5c.nPage + local_5c.nPos;
    goto LAB_004fdbb6;
  case 5:
    iVar2 = local_5c.nTrackPos;
    goto LAB_004fdbcd;
  }
  if ((wParam & 0xffff) != 5) {
LAB_004fdbb6:
    UVar4 = pUVar1[0x5b];
    iVar2 = (((int)UVar4 / 2 + iVar2) / (int)UVar4) * UVar4;
  }
LAB_004fdbcd:
  if (iVar2 != local_5c.nPos) {
    local_5c.fMask = 4;
    if (hwnd == (HWND)0x0) {
      hwnd = (HWND)*pUVar1;
      nBar = 1;
    }
    else {
      nBar = 2;
    }
    local_5c.nPos = iVar2;
    SetScrollInfo(hwnd,nBar,&local_5c,1);
  }
  FUN_004fa690(pUVar1);
  InvalidateRect((HWND)*pUVar1,(RECT *)0x0,0);
  return (int)param_1;
}


