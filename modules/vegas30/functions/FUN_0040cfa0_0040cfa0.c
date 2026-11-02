/* Module: vegas30.exe
   Function: FUN_0040cfa0
   Address: 0040cfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040cfa0(undefined4 *param_1)

{
  HWND hWnd;
  HMENU pHVar1;
  undefined4 uVar2;
  HWND hWnd_00;
  HGDIOBJ wParam;
  HGLOBAL hMem;
  LPVOID pvVar3;
  int iVar4;
  MENUITEMINFOA *pMVar5;
  LPARAM lParam;
  MENUITEMINFOA local_ac [3];
  
  hWnd = (HWND)*param_1;
  DAT_00647624 = hWnd;
  if (((byte)DAT_0064761c & 0x10) == 0) {
    DAT_00647674 = (HMENU)_SfLoadMenu_8(DAT_00647204,100);
    pHVar1 = (HMENU)_SfGetSubmenuByID_12(DAT_00647674,0x9fc4,0);
    if (pHVar1 != (HMENU)0x0) {
      uVar2 = _SfGetString_8(DAT_00647204,0x8c);
      SfPrintF(&local_ac[0].hbmpItem,uVar2);
      pMVar5 = local_ac;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        pMVar5->cbSize = 0;
        pMVar5 = (MENUITEMINFOA *)&pMVar5->fMask;
      }
      local_ac[0].fType = 0;
      local_ac[0].dwTypeData = (LPSTR)&local_ac[0].hbmpItem;
      local_ac[0].fState = 0;
      local_ac[0].cbSize = 0x2c;
      local_ac[0].fMask = 0x13;
      local_ac[0].wID = 0x9fcd;
      InsertMenuItemA(pHVar1,0x9ffa,0,local_ac);
      pHVar1 = (HMENU)_SfGetSubmenuByID_12(pHVar1,0x9fc7,0);
      if (pHVar1 != (HMENU)0x0) {
        uVar2 = _SfGetString_8(DAT_00647204,0x94);
        SfPrintF(&local_ac[0].hbmpItem,uVar2);
        pMVar5 = local_ac;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          pMVar5->cbSize = 0;
          pMVar5 = (MENUITEMINFOA *)&pMVar5->fMask;
        }
        local_ac[0].dwTypeData = (LPSTR)&local_ac[0].hbmpItem;
        local_ac[0].cbSize = 0x2c;
        local_ac[0].fMask = 0x13;
        local_ac[0].fType = 0;
        local_ac[0].wID = 0x9fca;
        local_ac[0].fState = 0;
        InsertMenuItemA(pHVar1,0x9fcb,0,local_ac);
        uVar2 = _SfGetString_8(DAT_00647204,0x93);
        SfPrintF(&local_ac[0].hbmpItem,uVar2);
        pMVar5 = local_ac;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          pMVar5->cbSize = 0;
          pMVar5 = (MENUITEMINFOA *)&pMVar5->fMask;
        }
        local_ac[0].dwTypeData = (LPSTR)&local_ac[0].hbmpItem;
        local_ac[0].cbSize = 0x2c;
        local_ac[0].fMask = 0x13;
        local_ac[0].fType = 0;
        local_ac[0].wID = 0x9fd2;
        local_ac[0].fState = 0;
        InsertMenuItemA(pHVar1,0,1,local_ac);
      }
    }
    FUN_0040cc40(DAT_00647674);
    FUN_00507c00(7);
    SetMenu(hWnd,DAT_00647674);
  }
  hWnd_00 = CreateWindowExA(0,"tooltips_class32","",0x80000001,-0x80000000,-0x80000000,-0x80000000,
                            -0x80000000,(HWND)*param_1,(HMENU)0x0,DAT_006471fc,(LPVOID)0x0);
  param_1[0x2f] = hWnd_00;
  if (hWnd_00 != (HWND)0x0) {
    ShowWindow(hWnd_00,8);
    lParam = 0;
    wParam = GetStockObject(0x11);
    SendMessageA((HWND)param_1[0x2f],0x30,(WPARAM)wParam,lParam);
  }
  hMem = GlobalAlloc(0x40,0x54);
  pvVar3 = GlobalLock(hMem);
  if (pvVar3 == (LPVOID)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00548c20();
  }
  param_1[0x2c] = iVar4;
  if ((iVar4 != 0) && (iVar4 = FUN_00548d80(), -1 < iVar4)) {
    FUN_0040cf00(param_1);
    uVar2 = FUN_004e7850(hWnd,100);
    param_1[0x30] = uVar2;
    iVar4 = FUN_004176a0(param_1,0x61);
    param_1[0xd] = iVar4;
    if (iVar4 == 0) {
      return 0;
    }
    param_1[0xc] = *(undefined4 *)(iVar4 + 8);
    iVar4 = FUN_004a4510(param_1,99);
    param_1[0x2a] = iVar4;
    if (iVar4 != 0) {
      FUN_00439fe0(hWnd,0,1);
      param_1[6] = *(undefined4 *)(param_1[0x2a] + 8);
      uVar2 = _SfLoadIcon_8(DAT_00647204,0x36b);
      param_1[0x49] = uVar2;
      return 1;
    }
  }
  return 0;
}


