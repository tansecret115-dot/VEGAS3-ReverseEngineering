/* Module: vfplugs.dll
   Function: FUN_00421510
   Address: 00421510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421510(int param_1,HDC param_2)

{
  byte bVar1;
  HDC pHVar2;
  BOOL BVar3;
  HGDIOBJ pvVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 ***pppuVar7;
  int iVar8;
  tagRECT local_90;
  HDC local_80;
  tagRECT local_7c;
  tagRECT local_6c;
  POINT local_5c;
  int local_54;
  int local_50;
  undefined4 **local_4c;
  int local_48;
  undefined4 **local_44;
  int local_40;
  undefined4 **local_3c;
  int local_38;
  undefined4 **local_34;
  int local_30;
  tagRECT local_2c;
  undefined1 local_1c [4];
  uint local_18;
  int local_14;
  HGDIOBJ pvStack_10;
  short local_c;
  short local_a;
  HGDIOBJ local_4;
  
  BVar3 = IsWindowEnabled(*(HWND *)(param_1 + 0x38));
  bVar6 = BVar3 != 0;
  local_2c.left = *(int *)(param_1 + 0x98);
  local_2c.top = *(int *)(param_1 + 0x9c);
  local_2c.right = *(int *)(param_1 + 0xa0);
  local_2c.bottom = *(int *)(param_1 + 0xa4);
  if (*(int *)(param_1 + 0x30) != 0) {
    DrawEdge(param_2,&local_2c,10,0xf);
    InflateRect(&local_2c,-1,-1);
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    local_7c.left = *(int *)(param_1 + 0xb4) + -1;
    local_6c.right = *(int *)(param_1 + 0xac) + 1;
    local_7c.bottom = local_2c.bottom;
    local_6c.top = local_2c.top;
  }
  else {
    local_7c.bottom = *(int *)(param_1 + 0xb0) + 1;
    local_6c.top = *(int *)(param_1 + 0xb8) + -1;
    local_7c.left = local_2c.left;
    local_6c.right = local_2c.right;
  }
  local_7c.top = local_2c.top;
  local_7c.right = local_2c.right;
  local_6c.left = local_2c.left;
  local_6c.bottom = local_2c.bottom;
  FUN_00421390(param_1,param_2,&local_7c.left,*(int *)(param_1 + 0x10));
  FUN_00421390(param_1,param_2,&local_6c.left,*(int *)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x20) == 0) {
    local_90.left = *(LONG *)(param_1 + 0xac);
    local_90.top = *(undefined4 *)(param_1 + 0xb0);
    local_90.right = *(LONG *)(param_1 + 0xb4);
    local_90.bottom = *(LONG *)(param_1 + 0xb8);
    if (*(int *)(param_1 + 0x30) != 0) {
      InflateRect(&local_90,-1,-1);
    }
    FUN_00421390(param_1,param_2,&local_90.left,(uint)(*(int *)(param_1 + 0x90) == 5));
  }
  local_7c.right = local_7c.right + -1;
  local_7c.bottom = local_7c.bottom + -1;
  if (*(int *)(param_1 + 0x10) != 0) {
    OffsetRect(&local_7c,1,1);
  }
  local_6c.right = local_6c.right + -1;
  local_6c.bottom = local_6c.bottom + -1;
  if (*(int *)(param_1 + 0x14) != 0) {
    OffsetRect(&local_6c,1,1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    SaveDC(param_2);
    local_90.top = local_7c.top;
    local_90.left = local_7c.left;
    local_90.right = local_7c.right;
    local_90.bottom = local_7c.bottom;
    InflateRect(&local_90,-2,-2);
    IntersectClipRect(param_2,local_90.left,local_90.top,local_90.right,local_90.bottom);
    local_80 = CreateCompatibleDC(param_2);
    SelectObject(local_80,DAT_00494d34);
    GetObjectA(DAT_00494d34,0x18,local_1c);
    bVar1 = 1;
    if ((local_c != 1) || (local_a != 1)) {
      bVar1 = 0;
    }
    SetStretchBltMode(param_2,(-(uint)bVar1 & 0xfffffffe) + 3);
    pHVar2 = local_80;
    local_18 = (int)local_18 / 2;
    local_90.left = local_90.left + (int)((local_90.right - local_18) - local_90.left) / 2;
    local_14 = local_14 / 2;
    local_90.right = local_18 + local_90.left;
    local_90.top = local_90.top + ((local_90.bottom - local_14) - local_90.top) / 2;
    local_90.bottom = local_14 + local_90.top;
    StretchBlt(param_2,local_90.left,local_90.top,local_90.right - local_90.left,
               local_90.bottom - local_90.top,local_80,-(uint)!bVar6 & local_18,0,local_18,local_14,
               0xcc0020);
    DeleteDC(pHVar2);
    RestoreDC(param_2,-1);
    SaveDC(param_2);
    local_90.left = local_6c.left;
    local_90.top = local_6c.top;
    local_90.right = local_6c.right;
    local_90.bottom = local_6c.bottom;
    InflateRect(&local_90,-2,-2);
    IntersectClipRect(param_2,local_90.left,local_90.top,local_90.right,local_90.bottom);
    local_80 = CreateCompatibleDC(param_2);
    SelectObject(local_80,DAT_00494d34);
    GetObjectA(DAT_00494d34,0x18,local_1c);
    bVar1 = 1;
    if ((local_c != 1) || (local_a != 1)) {
      bVar1 = 0;
    }
    SetStretchBltMode(param_2,(-(uint)bVar1 & 0xfffffffe) + 3);
    pHVar2 = local_80;
    local_18 = (int)local_18 / 2;
    local_90.left = local_90.left + (int)(local_90.right + (-local_90.left - local_18)) / 2;
    local_14 = local_14 / 2;
    local_90.right = local_18 + local_90.left;
    local_90.top = local_90.top + ((local_90.bottom - local_14) - local_90.top) / 2;
    local_90.bottom = local_14 + local_90.top;
    StretchBlt(param_2,local_90.left,local_90.top,local_90.right - local_90.left,
               local_90.bottom - local_90.top,local_80,-(uint)!bVar6 & local_18,local_14,local_18,
               local_14,0xcc0020);
    DeleteDC(pHVar2);
    RestoreDC(param_2,-1);
    return;
  }
  local_80 = GetStockObject(4);
  if (bVar6) {
    pvVar4 = GetStockObject(7);
  }
  else {
    pvVar4 = (HGDIOBJ)FUN_0044e170(0x10,0);
  }
  local_4 = SelectObject(param_2,pvVar4);
  local_80 = SelectObject(param_2,local_80);
  if (*(int *)(param_1 + 0x1c) == 0) {
    InflateRect(&local_7c,-2,-3);
    if (*(int *)(param_1 + 0x30) == 0) {
      local_7c.left = local_7c.left + 1;
    }
    local_5c.x = local_7c.left;
    local_54 = local_7c.right;
    local_5c.y = local_7c.top;
    local_50 = (local_7c.bottom + local_7c.top) / 2;
    local_48 = local_50 * 2 - local_7c.top;
    local_4c = (undefined4 **)local_7c.left;
    InflateRect(&local_6c,-2,-3);
    pcVar5 = Polygon_exref;
    if (*(int *)(param_1 + 0x30) == 0) {
      local_6c.right = local_6c.right + -1;
    }
    local_3c = (undefined4 **)local_6c.left;
    local_44 = (undefined4 **)local_6c.right;
    local_38 = (local_6c.bottom + local_6c.top) / 2;
    local_40 = local_6c.top;
    local_34 = (undefined4 **)local_6c.right;
    local_30 = local_38 * 2 - local_6c.top;
    if (bVar6) {
      Polygon(param_2,&local_5c,3);
      pppuVar7 = &local_44;
      iVar8 = 3;
    }
    else {
      MoveToEx(param_2,local_54,local_50,(LPPOINT)0x0);
      pcVar5 = LineTo_exref;
      LineTo(param_2,local_5c.x,local_5c.y);
      LineTo(param_2,(int)local_4c,local_48 + 1);
      MoveToEx(param_2,(int)local_44,local_40,(LPPOINT)0x0);
      LineTo(param_2,(int)local_3c + -1,local_38 + 1);
      pvVar4 = (HGDIOBJ)FUN_0044e170(0x14,0);
      SelectObject(param_2,pvVar4);
      MoveToEx(param_2,local_54 + -1,local_50 + 1,(LPPOINT)0x0);
      LineTo(param_2,(int)local_4c,local_48);
      MoveToEx(param_2,(int)local_44,local_40 + 1,(LPPOINT)0x0);
      LineTo(param_2,(int)local_34,local_30);
      pppuVar7 = (undefined4 ***)local_3c;
      iVar8 = local_38;
    }
  }
  else {
    InflateRect(&local_7c,-3,-2);
    if (*(int *)(param_1 + 0x30) == 0) {
      local_7c.bottom = local_7c.bottom + -1;
    }
    local_5c.y = local_7c.bottom;
    local_5c.x = local_7c.left;
    local_54 = (local_7c.right + local_7c.left) / 2;
    local_50 = local_7c.top;
    local_4c = (undefined4 **)(local_54 * 2 - local_7c.left);
    local_48 = local_7c.bottom;
    InflateRect(&local_6c,-3,-2);
    pcVar5 = Polygon_exref;
    if (*(int *)(param_1 + 0x30) == 0) {
      local_6c.top = local_6c.top + 1;
    }
    local_3c = (undefined4 **)((local_6c.right + local_6c.left) / 2);
    local_34 = (undefined4 **)((int)local_3c * 2 - local_6c.left);
    local_44 = (undefined4 **)local_6c.left;
    local_40 = local_6c.top;
    local_38 = local_6c.bottom;
    local_30 = local_6c.top;
    if (bVar6) {
      Polygon(param_2,&local_5c,3);
      pppuVar7 = &local_44;
      iVar8 = 3;
    }
    else {
      MoveToEx(param_2,local_5c.x,local_5c.y,(LPPOINT)0x0);
      pcVar5 = LineTo_exref;
      LineTo(param_2,local_54 + 1,local_50 + -1);
      MoveToEx(param_2,(int)local_3c,local_38,(LPPOINT)0x0);
      LineTo(param_2,(int)local_44,local_40);
      LineTo(param_2,(int)local_34 + 1,local_30);
      pvVar4 = (HGDIOBJ)FUN_0044e170(0x14,0);
      SelectObject(param_2,pvVar4);
      MoveToEx(param_2,local_5c.x + 1,local_5c.y,(LPPOINT)0x0);
      LineTo(param_2,(int)local_4c,local_48);
      LineTo(param_2,local_54,local_50);
      MoveToEx(param_2,(int)local_3c + 1,local_38 + -1,(LPPOINT)0x0);
      pppuVar7 = (undefined4 ***)local_34;
      iVar8 = local_30;
    }
  }
  (*pcVar5)(param_2,pppuVar7,iVar8);
  SelectObject(param_2,(HGDIOBJ)local_90.top);
  SelectObject(param_2,pvStack_10);
  return;
}


