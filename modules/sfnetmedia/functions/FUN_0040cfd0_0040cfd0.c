/* Module: sfnetmedia.dll
   Function: FUN_0040cfd0
   Address: 0040cfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040cfd0(void *param_1)

{
  HDWP hWinPosInfo;
  int iVar1;
  int cy;
  int iVar2;
  HWND pHVar3;
  LRESULT LVar4;
  HWND pHVar5;
  tagRECT *ptVar6;
  LONG LVar7;
  int iVar8;
  WPARAM wParam;
  UINT UVar9;
  int local_78;
  tagRECT local_60;
  tagRECT local_50;
  tagRECT local_40;
  tagRECT local_30;
  tagRECT local_20;
  tagRECT local_10;
  
  GetClientRect(*(HWND *)((int)param_1 + 4),&local_20);
  hWinPosInfo = BeginDeferWindowPos(0x14);
  local_50.left = 0;
  local_50.top = 0;
  local_50.right = 0;
  local_50.bottom = 0;
  iVar1 = GetSystemMetrics(2);
  cy = GetSystemMetrics(3);
  FUN_0040cf00(param_1,&local_30.left);
  InflateRect(&local_30,4,4);
  iVar2 = GetSystemMetrics(2);
  local_30.bottom = local_30.bottom + iVar2;
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x3ee);
  if (pHVar3 != (HWND)0x0) {
    GetWindowRect(pHVar3,&local_50);
    ptVar6 = &local_50;
    UVar9 = 2;
    pHVar3 = GetParent(pHVar3);
    MapWindowPoints((HWND)0x0,pHVar3,(LPPOINT)ptVar6,UVar9);
  }
  local_78 = 0x259;
  do {
    pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),local_78);
    if (pHVar3 != (HWND)0x0) {
      ShowWindow(pHVar3,-(uint)(*(int *)((int)param_1 + 0xa0) != 0) & 5);
    }
    local_78 = local_78 + 1;
  } while (local_78 < 0x262);
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),600);
  if (pHVar3 != (HWND)0x0) {
    ShowWindow(pHVar3,-(uint)(*(int *)((int)param_1 + 0xa0) != 0) & 5);
  }
  if (*(int *)((int)param_1 + 0xa0) == 0) {
    iVar2 = (((local_20.bottom - local_20.top) - cy) - local_50.bottom) + -0xc;
  }
  else {
    iVar2 = (((local_30.top - local_20.top) - local_30.bottom) - local_50.bottom) + local_20.bottom
            + -4;
  }
  iVar2 = iVar2 + local_50.top;
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x3e9);
  if (pHVar3 != (HWND)0x0) {
    LVar4 = SendMessageA(pHVar3,0x1004,0,0);
    if (LVar4 < 2) {
      ShowWindow(pHVar3,0);
      local_50.left = 0;
      local_50.top = 0;
      local_50.right = 0;
      local_50.bottom = 0;
    }
    else {
      ShowWindow(pHVar3,5);
      GetWindowRect(pHVar3,&local_50);
      ptVar6 = &local_50;
      UVar9 = 2;
      pHVar5 = GetParent(pHVar3);
      MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
      local_50.right = DAT_0043f3c8 + local_50.left;
      local_50.bottom = iVar2 + local_50.top;
      DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,local_50.left,local_50.top,
                     local_50.right - local_50.left,local_50.bottom - local_50.top,4);
    }
  }
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x1f5);
  if (pHVar3 != (HWND)0x0) {
    GetWindowRect(pHVar3,&local_40);
    ptVar6 = &local_40;
    UVar9 = 2;
    pHVar5 = GetParent(pHVar3);
    MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
    local_40.left = local_50.right + 4;
    LVar7 = local_50.top;
    if (local_50.top == 0) {
      LVar7 = local_40.top;
    }
    local_40.right = local_20.right + -4;
    local_40.bottom = local_50.bottom;
    if (local_50.bottom == 0) {
      local_40.bottom = iVar2 + LVar7;
    }
    local_40.top = LVar7;
    DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,local_40.left,LVar7,local_40.right - local_40.left,
                   local_40.bottom - LVar7,4);
  }
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x3ee);
  if (pHVar3 != (HWND)0x0) {
    GetWindowRect(pHVar3,&local_50);
    ptVar6 = &local_50;
    UVar9 = 2;
    pHVar5 = GetParent(pHVar3);
    MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
    iVar2 = (local_40.right - local_50.right) + local_50.left;
    iVar8 = local_40.bottom + 4;
    DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,iVar2,iVar8,local_50.right - local_50.left,
                   local_50.bottom - local_50.top,4);
    local_50.left = iVar2;
    local_50.top = iVar8;
  }
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x20c);
  if (pHVar3 != (HWND)0x0) {
    GetWindowRect(pHVar3,&local_60);
    ptVar6 = &local_60;
    UVar9 = 2;
    pHVar5 = GetParent(pHVar3);
    MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
    LVar7 = local_50.top;
    iVar2 = (local_60.left - local_60.right) + -4 + local_50.left;
    DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,iVar2,local_50.top,local_60.right - local_60.left,
                   local_60.bottom - local_60.top,4);
    local_50.left = iVar2;
    local_50.top = LVar7;
  }
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x201);
  if (pHVar3 != (HWND)0x0) {
    GetWindowRect(pHVar3,&local_60);
    ptVar6 = &local_60;
    UVar9 = 2;
    pHVar5 = GetParent(pHVar3);
    MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
    local_60.bottom = local_60.bottom - local_60.top;
    local_60.left = local_40.left;
    local_60.right = local_50.left + -4;
    local_60.top = local_40.bottom + 4;
    local_60.bottom = local_60.bottom + local_60.top;
    DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,local_40.left,local_60.top,
                   local_60.right - local_40.left,local_60.bottom - local_60.top,4);
  }
  if (*(int *)((int)param_1 + 0xa0) != 0) {
    local_60.top = local_20.bottom - local_30.bottom;
    pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x260);
    if (pHVar3 != (HWND)0x0) {
      GetWindowRect(pHVar3,&local_50);
      ptVar6 = &local_50;
      UVar9 = 2;
      pHVar5 = GetParent(pHVar3);
      MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
      LVar7 = local_50.left;
      iVar2 = local_50.top + local_60.top;
      DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,local_50.left,iVar2,local_50.right - local_50.left
                     ,local_50.bottom - local_50.top,4);
      local_50.right = local_50.right + (LVar7 - local_50.left);
      local_50.left = LVar7;
      local_50.top = iVar2;
    }
    pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x261);
    LVar7 = local_50.right;
    if (pHVar3 != (HWND)0x0) {
      GetWindowRect(pHVar3,&local_50);
      ptVar6 = &local_50;
      UVar9 = 2;
      pHVar5 = GetParent(pHVar3);
      MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
      iVar2 = local_60.top + local_50.top;
      DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,LVar7,iVar2,
                     (local_30.right - local_30.left) - LVar7,local_50.bottom - local_50.top,4);
      local_50.left = LVar7;
      local_50.top = iVar2;
    }
    pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x259);
    if (pHVar3 != (HWND)0x0) {
      GetWindowRect(pHVar3,&local_50);
      ptVar6 = &local_50;
      UVar9 = 2;
      pHVar5 = GetParent(pHVar3);
      MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
      LVar7 = local_50.left;
      iVar2 = local_50.top + local_60.top;
      DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,local_50.left,iVar2,
                     (local_30.right - local_30.left) - local_50.left,local_50.bottom - local_50.top
                     ,4);
      local_50.left = LVar7;
      local_50.top = iVar2;
    }
    pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x25b);
    if (pHVar3 != (HWND)0x0) {
      GetWindowRect(pHVar3,&local_50);
      ptVar6 = &local_50;
      UVar9 = 2;
      pHVar5 = GetParent(pHVar3);
      MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
      LVar7 = local_50.left;
      iVar2 = local_50.top + local_60.top;
      DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,local_50.left,iVar2,
                     (local_30.right - local_30.left) - local_50.left,local_50.bottom - local_50.top
                     ,4);
      local_50.left = LVar7;
      local_50.top = iVar2;
    }
    pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x25c);
    if (pHVar3 != (HWND)0x0) {
      GetWindowRect(pHVar3,&local_50);
      ptVar6 = &local_50;
      UVar9 = 2;
      pHVar5 = GetParent(pHVar3);
      MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
      iVar2 = (local_40.right - local_50.right) + local_50.left;
      iVar8 = local_60.top + local_50.top;
      DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,iVar2,iVar8,local_50.right - local_50.left,
                     local_50.bottom - local_50.top,4);
      local_50.left = iVar2;
      local_50.top = iVar8;
    }
    pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x25a);
    if (pHVar3 != (HWND)0x0) {
      iVar2 = local_50.left + -8;
      GetWindowRect(pHVar3,&local_50);
      ptVar6 = &local_50;
      UVar9 = 2;
      pHVar5 = GetParent(pHVar3);
      MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
      local_50.right = iVar2;
      DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,local_50.left,local_60.top + local_50.top,
                     iVar2 - local_50.left,local_50.bottom - local_50.top,4);
    }
    pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x25d);
    if (pHVar3 != (HWND)0x0) {
      GetWindowRect(pHVar3,&local_50);
      ptVar6 = &local_50;
      UVar9 = 2;
      pHVar5 = GetParent(pHVar3);
      MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
      DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,(local_40.right - local_50.right) + local_50.left,
                     local_60.top + local_50.top,local_50.right - local_50.left,
                     local_50.bottom - local_50.top,4);
    }
    pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x25f);
    if (pHVar3 != (HWND)0x0) {
      GetWindowRect(pHVar3,&local_50);
      ptVar6 = &local_50;
      UVar9 = 2;
      pHVar5 = GetParent(pHVar3);
      MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
      DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,(local_40.right - local_50.right) + local_50.left,
                     local_60.top + local_50.top,local_50.right - local_50.left,
                     local_50.bottom - local_50.top,4);
    }
    pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x25e);
    if (pHVar3 != (HWND)0x0) {
      GetWindowRect(pHVar3,&local_50);
      ptVar6 = &local_50;
      UVar9 = 2;
      pHVar5 = GetParent(pHVar3);
      MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
      iVar2 = (local_40.right - local_50.right) + local_50.left;
      iVar8 = local_60.top + local_50.top;
      DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,iVar2,iVar8,local_50.right - local_50.left,
                     local_50.bottom - local_50.top,4);
      local_50.left = iVar2;
      local_50.top = iVar8;
    }
    pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),600);
    if (pHVar3 != (HWND)0x0) {
      iVar2 = local_50.left + -8;
      iVar8 = local_20.bottom + -4;
      GetWindowRect(pHVar3,&local_50);
      ptVar6 = &local_50;
      UVar9 = 2;
      pHVar5 = GetParent(pHVar3);
      MapWindowPoints((HWND)0x0,pHVar5,(LPPOINT)ptVar6,UVar9);
      local_50.right = iVar2;
      local_50.bottom = iVar8;
      DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,local_50.left,local_60.top + local_50.top,
                     iVar2 - local_50.left,iVar8 - local_50.top,4);
    }
  }
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x1fd);
  if (pHVar3 != (HWND)0x0) {
    DeferWindowPos(hWinPosInfo,pHVar3,(HWND)0x0,local_20.right - iVar1,local_20.bottom - cy,iVar1,cy
                   ,4);
  }
  EndDeferWindowPos(hWinPosInfo);
  InvalidateRect(*(HWND *)((int)param_1 + 4),(RECT *)0x0,0);
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 4),0x3e9);
  if (pHVar3 != (HWND)0x0) {
    LVar4 = SendMessageA(pHVar3,0x1004,0,0);
    GetClientRect(pHVar3,&local_10);
    wParam = 0;
    iVar1 = 4;
    if (0 < LVar4) {
      do {
        SendMessageA(pHVar3,0x100f,wParam,
                     iVar1 << 0x10 | ((local_10.right - local_10.left) + -0x30) / 2 & 0xffffU);
        SendMessageA(pHVar3,0x102a,wParam,0);
        if (&stack0x00000000 == (undefined1 *)0x60) {
          ptVar6 = (tagRECT *)0x0;
        }
        else {
          local_60.left = 0;
          ptVar6 = &local_60;
        }
        SendMessageA(pHVar3,0x100e,wParam,(LPARAM)ptVar6);
        iVar1 = local_60.bottom + 4;
        wParam = wParam + 1;
      } while ((int)wParam < LVar4);
    }
  }
  FUN_0040cdd0((int)param_1);
  return 0;
}


