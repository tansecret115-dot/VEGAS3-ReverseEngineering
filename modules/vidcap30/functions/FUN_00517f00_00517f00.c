/* Module: vidcap30.exe
   Function: FUN_00517f00
   Address: 00517f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00517f00(int param_1)

{
  int iVar1;
  int *piVar2;
  HDC pHVar3;
  HBITMAP pHVar4;
  HGDIOBJ pvVar5;
  HBITMAP hbmMask;
  HDC hdc;
  HPEN h;
  HGDIOBJ h_00;
  HGDIOBJ pvVar6;
  HGDIOBJ pvVar7;
  HGDIOBJ pvVar8;
  HGDIOBJ h_01;
  HGDIOBJ pvVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_64;
  tagRECT local_30;
  POINT local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = param_1;
  if (*(HGDIOBJ *)(param_1 + 0xf8) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  local_64 = *(int *)(param_1 + 0x110);
  if (local_64 < 1) {
    local_64 = 1;
  }
  piVar2 = (int *)(param_1 + 0x114);
  param_1 = 1;
  if (0 < *piVar2) {
    param_1 = *piVar2;
  }
  piVar2 = (int *)(iVar1 + 0x198);
  iVar12 = 8;
  iVar13 = local_64;
  do {
    iVar10 = piVar2[-1];
    if (iVar13 <= iVar10) {
      iVar13 = iVar10;
      local_64 = iVar10;
    }
    if (param_1 <= *piVar2) {
      param_1 = *piVar2;
    }
    piVar2 = piVar2 + 8;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  ImageList_SetIconSize(*(HIMAGELIST *)(iVar1 + 0xfc),iVar13,param_1);
  if (((*(int *)(iVar1 + 0x100) == 0) || (*(int *)(iVar1 + 0x104) == 0)) ||
     ((*(byte *)(iVar1 + 4) & 0xc0) != 0)) {
    pHVar3 = GetDC((HWND)0x0);
    pHVar4 = CreateCompatibleBitmap
                       (pHVar3,*(int *)(iVar1 + 0x60) - *(int *)(iVar1 + 0x58),
                        *(int *)(iVar1 + 100) - *(int *)(iVar1 + 0x5c));
    *(HBITMAP *)(iVar1 + 0xf8) = pHVar4;
    ReleaseDC((HWND)0x0,pHVar3);
    pHVar3 = DAT_005b81f8;
    pvVar5 = SelectObject(DAT_005b81f8,*(HGDIOBJ *)(iVar1 + 0xf8));
    local_30.top = *(int *)(iVar1 + 0x5c);
    local_30.right = *(LONG *)(iVar1 + 0x60);
    local_30.left = *(int *)(iVar1 + 0x58);
    local_30.bottom = *(LONG *)(iVar1 + 100);
    OffsetRect(&local_30,-local_30.left,-local_30.top);
    FUN_00518870(iVar1,pHVar3,&local_30);
    SelectObject(pHVar3,pvVar5);
  }
  if ((*(byte *)(iVar1 + 4) & 0x20) == 0) {
    pHVar3 = GetDC((HWND)0x0);
    iVar13 = iVar13 * 10;
    pHVar4 = CreateCompatibleBitmap(pHVar3,iVar13,param_1);
    hbmMask = CreateBitmap(iVar13,param_1,1,1,(void *)0x0);
    ReleaseDC((HWND)0x0,pHVar3);
    hdc = CreateCompatibleDC((HDC)0x0);
    h = CreatePen(5,0,0);
    pHVar3 = DAT_005b81f8;
    pvVar5 = SelectObject(hdc,pHVar4);
    h_00 = SelectObject(pHVar3,hbmMask);
    pvVar6 = (HGDIOBJ)_SfGetUIBrush_4(0xd);
    pvVar6 = SelectObject(hdc,pvVar6);
    pvVar7 = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
    pvVar7 = SelectObject(pHVar3,pvVar7);
    pvVar8 = (HGDIOBJ)_SfGetUIPenWithStyle_8(6,0);
    pvVar8 = SelectObject(hdc,pvVar8);
    h_01 = SelectObject(pHVar3,h);
    local_30.bottom = param_1;
    local_30.left = 0;
    local_30.top = 0;
    local_30.right = local_64;
    PatBlt(hdc,0,0,iVar13,param_1,0xff0062);
    PatBlt(pHVar3,0,0,iVar13,param_1,0xff0062);
    Ellipse(hdc,local_30.left,local_30.top,*(int *)(iVar1 + 0x110) + local_30.left,
            *(int *)(iVar1 + 0x114) + local_30.top);
    Ellipse(pHVar3,local_30.left,local_30.top,*(int *)(iVar1 + 0x110) + 1 + local_30.left,
            *(int *)(iVar1 + 0x114) + 1 + local_30.top);
    OffsetRect(&local_30,local_64,0);
    pvVar9 = GetStockObject(7);
    SelectObject(pHVar3,pvVar9);
    pvVar9 = (HGDIOBJ)_SfGetUIBrush_4(0x2713);
    SelectObject(pHVar3,pvVar9);
    Ellipse(hdc,local_30.left,local_30.top,*(int *)(iVar1 + 0x110) + local_30.left,
            *(int *)(iVar1 + 0x114) + local_30.top);
    Ellipse(pHVar3,local_30.left,local_30.top,*(int *)(iVar1 + 0x110) + local_30.left,
            *(int *)(iVar1 + 0x114) + local_30.top);
    pvVar9 = (HGDIOBJ)_SfGetUIBrush_4(0x10);
    SelectObject(hdc,pvVar9);
    OffsetRect(&local_30,local_64,0);
    Rectangle(hdc,local_30.left,local_30.top,*(int *)(iVar1 + 0x1b4) + local_30.left,
              *(int *)(iVar1 + 0x1b8) + local_30.top);
    Rectangle(pHVar3,local_30.left,local_30.top,*(int *)(iVar1 + 0x1b4) + local_30.left,
              *(int *)(iVar1 + 0x1b8) + local_30.top);
    OffsetRect(&local_30,local_64,0);
    Rectangle(hdc,local_30.left,local_30.top,*(int *)(iVar1 + 500) + local_30.left,
              *(int *)(iVar1 + 0x1f8) + local_30.top);
    Rectangle(pHVar3,local_30.left,local_30.top,*(int *)(iVar1 + 500) + local_30.left,
              *(int *)(iVar1 + 0x1f8) + local_30.top);
    OffsetRect(&local_30,local_64,0);
    iVar13 = *(int *)(iVar1 + 0x194);
    iVar10 = ftol();
    iVar12 = *(int *)(iVar1 + 0x198);
    iVar11 = ftol();
    local_20.x = (iVar13 - iVar10) + -1 + local_30.left;
    local_18 = iVar13 + -1 + local_30.left;
    local_8 = local_30.left;
    local_14 = iVar11 + local_30.top;
    local_20.y = local_30.top;
    local_10 = iVar10 + local_30.left;
    local_c = iVar12 + -1 + local_30.top;
    local_4 = (iVar12 - iVar11) + -1 + local_30.top;
    Polygon(hdc,&local_20,4);
    Polygon(pHVar3,&local_20,4);
    OffsetRect(&local_30,local_64,0);
    iVar13 = *(int *)(iVar1 + 0x1d4);
    iVar10 = ftol();
    iVar12 = *(int *)(iVar1 + 0x1d8);
    local_4 = ftol();
    local_20.x = iVar10 + local_30.left;
    local_20.y = local_30.top;
    local_8 = local_30.left;
    local_18 = iVar13 + -1 + local_30.left;
    local_14 = (iVar12 - local_4) + -1 + local_30.top;
    local_10 = (iVar13 - iVar10) + -1 + local_30.left;
    local_4 = local_4 + local_30.top;
    local_c = iVar12 + -1 + local_30.top;
    Polygon(hdc,&local_20,4);
    Polygon(pHVar3,&local_20,4);
    pvVar9 = (HGDIOBJ)_SfGetUIBrush_4(0xf);
    SelectObject(hdc,pvVar9);
    OffsetRect(&local_30,local_64,0);
    Rectangle(hdc,local_30.left,local_30.top,*(int *)(iVar1 + 0x1b4) + local_30.left,
              *(int *)(iVar1 + 0x1b8) + local_30.top);
    Rectangle(pHVar3,local_30.left,local_30.top,*(int *)(iVar1 + 0x1b4) + local_30.left,
              *(int *)(iVar1 + 0x1b8) + local_30.top);
    OffsetRect(&local_30,local_64,0);
    Rectangle(hdc,local_30.left,local_30.top,*(int *)(iVar1 + 500) + local_30.left,
              *(int *)(iVar1 + 0x1f8) + local_30.top);
    Rectangle(pHVar3,local_30.left,local_30.top,*(int *)(iVar1 + 500) + local_30.left,
              *(int *)(iVar1 + 0x1f8) + local_30.top);
    OffsetRect(&local_30,local_64,0);
    iVar13 = *(int *)(iVar1 + 0x194);
    iVar10 = ftol();
    iVar12 = *(int *)(iVar1 + 0x198);
    iVar11 = ftol();
    local_8 = local_30.left;
    local_20.x = (iVar13 - iVar10) + -1 + local_30.left;
    local_18 = iVar13 + -1 + local_30.left;
    local_14 = iVar11 + local_30.top;
    local_20.y = local_30.top;
    local_10 = iVar10 + local_30.left;
    local_c = iVar12 + -1 + local_30.top;
    local_4 = (iVar12 - iVar11) + -1 + local_30.top;
    Polygon(hdc,&local_20,4);
    Polygon(pHVar3,&local_20,4);
    OffsetRect(&local_30,local_64,0);
    iVar13 = *(int *)(iVar1 + 0x1d4);
    iVar10 = ftol();
    iVar12 = *(int *)(iVar1 + 0x1d8);
    local_4 = ftol();
    local_20.x = iVar10 + local_30.left;
    local_20.y = local_30.top;
    local_18 = iVar13 + -1 + local_30.left;
    local_14 = (iVar12 - local_4) + -1 + local_30.top;
    local_10 = (iVar13 - iVar10) + -1 + local_30.left;
    local_c = iVar12 + -1 + local_30.top;
    local_8 = local_30.left;
    local_4 = local_4 + local_30.top;
    Polygon(hdc,&local_20,4);
    Polygon(pHVar3,&local_20,4);
    SelectObject(hdc,pvVar5);
    SelectObject(pHVar3,h_00);
    iVar13 = ImageList_Add(*(HIMAGELIST *)(iVar1 + 0xfc),pHVar4,hbmMask);
    *(int *)(iVar1 + 0x158) = iVar13;
    *(int *)(iVar1 + 0x154) = iVar13 + 1;
    *(int *)(iVar1 + 0x1cc) = iVar13 + 2;
    *(int *)(iVar1 + 0x24c) = iVar13 + 2;
    *(int *)(iVar1 + 0x20c) = iVar13 + 3;
    *(int *)(iVar1 + 0x28c) = iVar13 + 3;
    *(int *)(iVar1 + 0x1ac) = iVar13 + 4;
    *(int *)(iVar1 + 0x22c) = iVar13 + 4;
    *(int *)(iVar1 + 0x1ec) = iVar13 + 5;
    *(int *)(iVar1 + 0x26c) = iVar13 + 5;
    *(int *)(iVar1 + 0x1d0) = iVar13 + 6;
    *(int *)(iVar1 + 0x250) = iVar13 + 6;
    *(int *)(iVar1 + 0x210) = iVar13 + 7;
    *(int *)(iVar1 + 0x290) = iVar13 + 7;
    *(int *)(iVar1 + 0x1b0) = iVar13 + 8;
    *(int *)(iVar1 + 0x230) = iVar13 + 8;
    *(int *)(iVar1 + 0x1f0) = iVar13 + 9;
    *(int *)(iVar1 + 0x270) = iVar13 + 9;
    SelectObject(pHVar3,h_01);
    SelectObject(hdc,pvVar8);
    SelectObject(hdc,pvVar6);
    SelectObject(pHVar3,pvVar7);
    DeleteObject(pHVar4);
    DeleteObject(hbmMask);
    DeleteObject(h);
    DeleteDC(hdc);
    return;
  }
  *(undefined4 *)(iVar1 + 0x154) = 0;
  *(undefined4 *)(iVar1 + 0x158) = 1;
  *(undefined4 *)(iVar1 + 0x1b0) = 2;
  *(undefined4 *)(iVar1 + 0x1ac) = 3;
  *(undefined4 *)(iVar1 + 0x1d0) = 4;
  *(undefined4 *)(iVar1 + 0x1cc) = 5;
  *(undefined4 *)(iVar1 + 0x1f0) = 6;
  *(undefined4 *)(iVar1 + 0x1ec) = 7;
  *(undefined4 *)(iVar1 + 0x210) = 8;
  *(undefined4 *)(iVar1 + 0x20c) = 9;
  *(undefined4 *)(iVar1 + 0x230) = 10;
  *(undefined4 *)(iVar1 + 0x22c) = 0xb;
  *(undefined4 *)(iVar1 + 0x250) = 0xc;
  *(undefined4 *)(iVar1 + 0x24c) = 0xd;
  *(undefined4 *)(iVar1 + 0x270) = 0xe;
  *(undefined4 *)(iVar1 + 0x26c) = 0xf;
  *(undefined4 *)(iVar1 + 0x290) = 0x10;
  *(undefined4 *)(iVar1 + 0x28c) = 0x11;
  return;
}


