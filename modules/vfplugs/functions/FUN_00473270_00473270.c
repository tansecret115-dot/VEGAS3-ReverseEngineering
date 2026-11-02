/* Module: vfplugs.dll
   Function: FUN_00473270
   Address: 00473270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00473270(HWND param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  HWND hWnd;
  LONG lParam;
  HMENU hMenu;
  BOOL BVar2;
  HGLOBAL pvVar3;
  double *pMem;
  UINT uPosition;
  HMENU hMenu_00;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  double *local_180;
  int local_17c;
  tagPOINT local_170;
  int local_168;
  int local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined2 local_134;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  lParam = GetWindowLongA(param_1,0);
  local_20 = 0;
  local_1c = 0;
  local_14c = 1;
  local_18 = 0;
  local_10 = 1;
  local_14 = 0;
  local_160._0_4_ = 0;
  local_160._4_4_ = 0x3fe00000;
  local_158 = 0;
  local_154 = 0x3fe00000;
  local_150 = 2;
  local_148 = 0xffffffff;
  local_144 = 0x3f800000;
  local_140 = 0x3f000000;
  local_13c = 0x3f000000;
  local_138 = 0;
  local_134 = 0;
  local_30 = 0;
  local_2c = 0xffffff;
  local_28 = 0;
  local_24 = 0x3f800000;
  local_c = 0;
  local_170.x = param_3;
  local_170.y = param_4;
  local_168 = param_3;
  local_164 = param_4;
  ClientToScreen(*(HWND *)(lParam + 0x2c0),&local_170);
  if (lParam == 0) {
    return;
  }
  *(undefined4 *)(lParam + 0x2f8) = 0;
  if (*(int *)(lParam + 0x2ec) == 0) {
    return;
  }
  iVar4 = **(int **)(lParam + 0x308);
  hMenu = CreatePopupMenu();
  CreatePopupMenu();
  CreatePopupMenu();
  AppendMenuA(hMenu,0,0x867,"Reset");
  BVar2 = TrackPopupMenu(hMenu,0x102,local_170.x,local_170.y,0,*(HWND *)(lParam + 0x2c0),(RECT *)0x0
                        );
  FUN_00471320(&local_168,(int *)(lParam + 0x2cc),(double *)&local_160);
  switch(BVar2) {
  case 0x865:
    FUN_004714c0(lParam,(double *)&local_160);
    iVar4 = **(int **)(lParam + 0x308);
    *(undefined4 *)(lParam + 8) = 0x835;
    *(int *)(lParam + 0xc) = iVar4 + -1;
    *(undefined4 *)(lParam + 0x10) = 0;
    *(undefined4 *)(lParam + 0x18) = 0;
    *(undefined4 *)(lParam + 0x14) = 0x3fe00000;
    *(undefined4 *)(lParam + 0x1c) = 0x3fe00000;
    *(undefined4 *)(lParam + 0x2c) = 0x3f800000;
    *(undefined4 *)(lParam + 0x30) = 0x3f000000;
    *(undefined4 *)(lParam + 0x34) = 0x3f000000;
    *(undefined4 *)(lParam + 0x14c) = 0x3f800000;
    *(undefined4 *)(lParam + 0x20) = 2;
    *(undefined4 *)(lParam + 0x24) = 1;
    *(undefined4 *)(lParam + 0x28) = 0xffffffff;
    *(undefined4 *)(lParam + 0x38) = 0;
    *(undefined2 *)(lParam + 0x3c) = 0;
    *(undefined4 *)(lParam + 0x140) = 0;
    *(undefined4 *)(lParam + 0x144) = 0xffffff;
    *(undefined4 *)(lParam + 0x148) = 0;
    *(undefined4 *)(lParam + 0x150) = 0;
    *(undefined4 *)(lParam + 0x154) = 0;
    *(undefined4 *)(lParam + 0x158) = 0;
    *(undefined4 *)(lParam + 0x15c) = 0;
    *(undefined4 *)(lParam + 0x160) = 1;
    *(undefined4 *)(lParam + 0x164) = 0;
    goto LAB_0047378d;
  case 0x866:
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_160._0_4_ = 0;
    local_160._4_4_ = 0x3fe00000;
    local_158 = 0;
    local_154 = 0x3fe00000;
    local_150 = 2;
    local_14c = 1;
    local_148 = 0xffffffff;
    local_144 = 0x3f800000;
    local_140 = 0x3f000000;
    local_13c = 0x3f000000;
    local_138 = 0;
    local_134 = 0;
    local_30 = 0;
    local_2c = 0xffffff;
    local_28 = 0;
    local_24 = 0x3f800000;
    local_14 = 0;
    local_10 = 1;
    local_c = 0;
    FUN_004714c0(lParam,(double *)&local_160);
    uVar1 = **(undefined4 **)(lParam + 0x308);
    *(undefined4 *)(lParam + 8) = 0x835;
    *(undefined4 *)(lParam + 0xc) = uVar1;
    puVar5 = &local_160;
    puVar6 = (undefined4 *)(lParam + 0x10);
    for (iVar4 = 0x56; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)puVar5;
      puVar5 = (undefined8 *)((int)puVar5 + 4);
      puVar6 = puVar6 + 1;
    }
LAB_0047378d:
    hWnd = *(HWND *)(lParam + 0x2c8);
    puVar5 = &local_160;
    puVar6 = (undefined4 *)(lParam + 0x168);
    for (iVar4 = 0x56; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)puVar5;
      puVar5 = (undefined8 *)((int)puVar5 + 4);
      puVar6 = puVar6 + 1;
    }
    SendMessageA(hWnd,0x4e,*(WPARAM *)(lParam + 4),lParam);
    InvalidateRect(*(HWND *)(lParam + 0x2c0),(RECT *)0x0,0);
    goto switchD_00473400_caseD_86b;
  case 0x867:
    FUN_004728f0(lParam);
    *(undefined4 *)(lParam + 8) = 0x837;
    break;
  case 0x868:
    FUN_00472b20(lParam);
    *(undefined4 *)(lParam + 8) = 0x83a;
    break;
  case 0x869:
    FUN_00472ba0(lParam);
    goto LAB_004737f6;
  case 0x86a:
    FUN_00472990(lParam);
LAB_004737f6:
    *(undefined4 *)(lParam + 8) = 0x839;
    break;
  default:
    goto switchD_00473400_caseD_86b;
  case 0x879:
    pvVar3 = GlobalAlloc(2,iVar4 * 0x158);
    pMem = GlobalLock(pvVar3);
    if (pMem != (double *)0x0) {
      local_17c = 0;
      local_180 = pMem;
      if (0 < iVar4) {
        do {
          FUN_00471730(lParam,local_17c,(undefined4 *)local_180);
          local_17c = local_17c + 1;
          local_180 = local_180 + 0x2b;
        } while (local_17c < iVar4);
      }
      FUN_004711d0(iVar4,pMem,(int *)0xffffffff);
      local_17c = 0;
      local_180 = pMem;
      if (0 < iVar4) {
        do {
          FUN_00471780(lParam,local_17c,(undefined4 *)local_180);
          local_17c = local_17c + 1;
          local_180 = local_180 + 0x2b;
        } while (local_17c < iVar4);
      }
      *(undefined4 *)(lParam + 8) = 0x839;
      *(undefined4 *)(lParam + 0xc) = 0;
      *(undefined4 *)(lParam + 0x10) = 0;
      *(undefined4 *)(lParam + 0x18) = 0;
      *(undefined4 *)(lParam + 0x14) = 0x3fe00000;
      *(undefined4 *)(lParam + 0x1c) = 0x3fe00000;
      *(undefined4 *)(lParam + 0x20) = 2;
      *(undefined4 *)(lParam + 0x24) = 1;
      *(undefined4 *)(lParam + 0x28) = 0xffffffff;
      *(undefined4 *)(lParam + 0x2c) = 0x3f800000;
      *(undefined4 *)(lParam + 0x30) = 0x3f000000;
      *(undefined4 *)(lParam + 0x34) = 0x3f000000;
      *(undefined4 *)(lParam + 0x38) = 0;
      *(undefined2 *)(lParam + 0x3c) = 0;
      *(undefined4 *)(lParam + 0x140) = 0;
      *(undefined4 *)(lParam + 0x144) = 0xffffff;
      *(undefined4 *)(lParam + 0x148) = 0;
      *(undefined4 *)(lParam + 0x14c) = 0x3f800000;
      *(undefined4 *)(lParam + 0x150) = 0;
      *(undefined4 *)(lParam + 0x154) = 0;
      *(undefined4 *)(lParam + 0x158) = 0;
      *(undefined4 *)(lParam + 0x15c) = 0;
      *(undefined4 *)(lParam + 0x160) = 1;
      *(undefined4 *)(lParam + 0x164) = 0;
      *(undefined4 *)(lParam + 0x184) = 0x3f800000;
      *(undefined4 *)(lParam + 0x2a4) = 0x3f800000;
      *(undefined4 *)(lParam + 0x188) = 0x3f000000;
      *(undefined4 *)(lParam + 0x18c) = 0x3f000000;
      *(undefined4 *)(lParam + 0x168) = 0;
      *(undefined4 *)(lParam + 0x170) = 0;
      *(undefined4 *)(lParam + 0x16c) = 0x3fe00000;
      *(undefined4 *)(lParam + 0x174) = 0x3fe00000;
      *(undefined4 *)(lParam + 0x178) = 2;
      *(undefined4 *)(lParam + 0x17c) = 1;
      *(undefined4 *)(lParam + 0x180) = 0xffffffff;
      *(undefined4 *)(lParam + 400) = 0;
      *(undefined2 *)(lParam + 0x194) = 0;
      *(undefined4 *)(lParam + 0x298) = 0;
      *(undefined4 *)(lParam + 0x29c) = 0xffffff;
      *(undefined4 *)(lParam + 0x2a0) = 0;
      *(undefined4 *)(lParam + 0x2a8) = 0;
      *(undefined4 *)(lParam + 0x2ac) = 0;
      *(undefined4 *)(lParam + 0x2b0) = 0;
      *(undefined4 *)(lParam + 0x2b4) = 0;
      *(undefined4 *)(lParam + 0x2b8) = 1;
      *(undefined4 *)(lParam + 700) = 0;
      SendMessageA(*(HWND *)(lParam + 0x2c8),0x4e,*(WPARAM *)(lParam + 4),lParam);
      InvalidateRect(*(HWND *)(lParam + 0x2c0),(RECT *)0x0,0);
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
    }
    goto switchD_00473400_caseD_86b;
  }
  *(undefined4 *)(lParam + 0xc) = 0;
  *(undefined4 *)(lParam + 0x10) = 0;
  *(undefined4 *)(lParam + 0x14) = 0x3fe00000;
  *(undefined4 *)(lParam + 0x18) = 0;
  *(undefined4 *)(lParam + 0x1c) = 0x3fe00000;
  *(undefined4 *)(lParam + 0x20) = 2;
  *(undefined4 *)(lParam + 0x24) = 1;
  *(undefined4 *)(lParam + 0x28) = 0xffffffff;
  *(undefined4 *)(lParam + 0x2c) = 0x3f800000;
  *(undefined4 *)(lParam + 0x30) = 0x3f000000;
  *(undefined4 *)(lParam + 0x34) = 0x3f000000;
  *(undefined4 *)(lParam + 0x38) = 0;
  *(undefined2 *)(lParam + 0x3c) = 0;
  *(undefined4 *)(lParam + 0x140) = 0;
  *(undefined4 *)(lParam + 0x144) = 0xffffff;
  *(undefined4 *)(lParam + 0x148) = 0;
  *(undefined4 *)(lParam + 0x14c) = 0x3f800000;
  *(undefined4 *)(lParam + 0x150) = 0;
  *(undefined4 *)(lParam + 0x154) = 0;
  *(undefined4 *)(lParam + 0x158) = 0;
  *(undefined4 *)(lParam + 0x15c) = 0;
  *(undefined4 *)(lParam + 0x160) = 1;
  *(undefined4 *)(lParam + 0x164) = 0;
  *(undefined4 *)(lParam + 0x168) = 0;
  *(undefined4 *)(lParam + 0x16c) = 0x3fe00000;
  *(undefined4 *)(lParam + 0x170) = 0;
  *(undefined4 *)(lParam + 0x174) = 0x3fe00000;
  *(undefined4 *)(lParam + 0x178) = 2;
  *(undefined4 *)(lParam + 0x17c) = 1;
  *(undefined4 *)(lParam + 0x180) = 0xffffffff;
  *(undefined4 *)(lParam + 0x184) = 0x3f800000;
  *(undefined4 *)(lParam + 0x188) = 0x3f000000;
  *(undefined4 *)(lParam + 0x18c) = 0x3f000000;
  *(undefined4 *)(lParam + 400) = 0;
  *(undefined2 *)(lParam + 0x194) = 0;
  *(undefined4 *)(lParam + 0x298) = 0;
  *(undefined4 *)(lParam + 0x29c) = 0xffffff;
  *(undefined4 *)(lParam + 0x2a0) = 0;
  *(undefined4 *)(lParam + 0x2a4) = 0x3f800000;
  *(undefined4 *)(lParam + 0x2a8) = 0;
  *(undefined4 *)(lParam + 0x2ac) = 0;
  *(undefined4 *)(lParam + 0x2b0) = 0;
  *(undefined4 *)(lParam + 0x2b4) = 0;
  *(undefined4 *)(lParam + 0x2b8) = 1;
  *(undefined4 *)(lParam + 700) = 0;
  SendMessageA(*(HWND *)(lParam + 0x2c8),0x4e,*(WPARAM *)(lParam + 4),lParam);
switchD_00473400_caseD_86b:
  uPosition = GetMenuItemCount(hMenu);
  while (uPosition = uPosition - 1, -1 < (int)uPosition) {
    hMenu_00 = GetSubMenu(hMenu,uPosition);
    if (hMenu_00 != (HMENU)0x0) {
      RemoveMenu(hMenu,uPosition,0x400);
      DestroyMenu(hMenu_00);
    }
  }
  DestroyMenu(hMenu);
  return;
}


