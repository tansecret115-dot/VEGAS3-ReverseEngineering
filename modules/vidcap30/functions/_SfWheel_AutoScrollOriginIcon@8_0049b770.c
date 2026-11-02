/* Module: vidcap30.exe
   Function: _SfWheel_AutoScrollOriginIcon@8
   Address: 0049b770
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfWheel_AutoScrollOriginIcon_8(undefined4 *param_1,undefined4 param_2)

{
  HINSTANCE hInstance;
  BOOL BVar1;
  HWND pHVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  HDC pHVar5;
  HBITMAP pHVar6;
  HGDIOBJ pvVar7;
  HBRUSH h;
  HRGN hRgn;
  int iVar8;
  tagWNDCLASSA *ptVar9;
  tagPOINT local_4c;
  LOGBRUSH local_44;
  tagRECT local_38;
  tagWNDCLASSA local_28;
  
                    /* 0x9b770  673  _SfWheel_AutoScrollOriginIcon@8 */
  switch(param_2) {
  case 1:
    hInstance = (HINSTANCE)param_1[1];
    ptVar9 = &local_28;
    for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
      ptVar9->style = 0;
      ptVar9 = (tagWNDCLASSA *)&ptVar9->lpfnWndProc;
    }
    BVar1 = GetClassInfoA(hInstance,"SF.OriginIcon",&local_28);
    if (BVar1 == 0) {
      local_28.hInstance = (HINSTANCE)param_1[1];
      local_28.lpfnWndProc = (WNDPROC)&LAB_0049bb10;
      local_28.hbrBackground = GetStockObject(5);
      local_28.hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
      local_28.lpszClassName = "SF.OriginIcon";
      RegisterClassA(&local_28);
    }
    local_4c.x = param_1[2];
    local_4c.y = param_1[3];
    ClientToScreen((HWND)*param_1,&local_4c);
    pHVar2 = CreateWindowExA(0x18c,"SF.OriginIcon",(LPCSTR)0x0,0x80000000,local_4c.x + -0x10,
                             local_4c.y + -0x10,0x20,0x20,(HWND)*param_1,(HMENU)0x0,
                             (HINSTANCE)param_1[1],(LPVOID)0x0);
    param_1[0x16] = pHVar2;
    SetWindowLongA(pHVar2,-0x15,(LONG)param_1);
    if (param_1[4] == 0) {
LAB_0049b86f:
      puVar3 = (undefined4 *)0x32;
      if (param_1[5] == 0) {
        puVar3 = param_1;
      }
    }
    else if (param_1[5] == 0) {
      if (param_1[4] == 0) goto LAB_0049b86f;
      puVar3 = (undefined4 *)0x33;
    }
    else {
      puVar3 = (undefined4 *)0x34;
    }
    uVar4 = _SfLoadCursor_8(0,(uint)puVar3 & 0xffff);
    param_1[0x15] = uVar4;
    pHVar5 = GetDC((HWND)*param_1);
    param_1[0x12] = pHVar5;
    pHVar6 = CreateCompatibleBitmap(pHVar5,0x20,0x20);
    param_1[0x11] = pHVar6;
    pHVar5 = CreateCompatibleDC((HDC)param_1[0x12]);
    param_1[0x13] = pHVar5;
    pvVar7 = SelectObject(pHVar5,(HGDIOBJ)param_1[0x11]);
    param_1[0x14] = pvVar7;
    local_44.lbStyle = 0;
    local_44.lbColor = 0xff00ff;
    local_44.lbHatch = 0;
    h = CreateBrushIndirect(&local_44);
    pvVar7 = SelectObject((HDC)param_1[0x13],h);
    PatBlt((HDC)param_1[0x13],0,0,0x20,0x20,0xf00021);
    SelectObject((HDC)param_1[0x13],pvVar7);
    DeleteObject(h);
    DrawIconEx((HDC)param_1[0x13],0,0,(HICON)param_1[0x15],0x20,0x20,0,(HBRUSH)0x0,3);
    SelectObject((HDC)param_1[0x13],(HGDIOBJ)param_1[0x14]);
    SetBitmapDimensionEx((HBITMAP)param_1[0x11],0x20,0x20,(LPSIZE)0x0);
    hRgn = (HRGN)FUN_0049b180(param_1[0x11],0xff00ff);
    pvVar7 = SelectObject((HDC)param_1[0x13],(HGDIOBJ)param_1[0x11]);
    param_1[0x14] = pvVar7;
    if (hRgn == (HRGN)0x0) {
      PatBlt((HDC)param_1[0x13],0,0,0x20,0x20,0xff0062);
      pvVar7 = GetStockObject(7);
      pvVar7 = SelectObject((HDC)param_1[0x13],pvVar7);
      Ellipse((HDC)param_1[0x13],0,0,0x1f,0x1f);
      SelectObject((HDC)param_1[0x13],pvVar7);
      DrawIconEx((HDC)param_1[0x13],0,0,(HICON)param_1[0x15],0x20,0x20,0,(HBRUSH)0x0,3);
      GetWindowRect((HWND)param_1[0x16],&local_38);
      hRgn = CreateEllipticRgn(0,0,local_38.right - local_38.left,local_38.bottom - local_38.top);
      if (hRgn != (HRGN)0x0) {
        pHVar2 = (HWND)param_1[0x16];
        goto LAB_0049ba08;
      }
    }
    else {
      pHVar2 = (HWND)param_1[0x16];
LAB_0049ba08:
      SetWindowRgn(pHVar2,hRgn,0);
    }
    ShowWindow((HWND)param_1[0x16],8);
    UpdateWindow((HWND)param_1[0x16]);
    if (param_1[6] != 0) {
      pHVar2 = GetFocus();
      param_1[0x17] = pHVar2;
      SetFocus((HWND)param_1[0x16]);
      return;
    }
    break;
  case 2:
    if (param_1[6] != 0) {
      SetFocus((HWND)param_1[0x17]);
    }
    DestroyWindow((HWND)param_1[0x16]);
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    SelectObject((HDC)param_1[0x12],(HGDIOBJ)param_1[0x14]);
    DeleteObject((HGDIOBJ)param_1[0x11]);
    DeleteDC((HDC)param_1[0x13]);
    ReleaseDC((HWND)*param_1,(HDC)param_1[0x12]);
    param_1[0x15] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    return;
  case 3:
    ShowWindow((HWND)param_1[0x16],0);
    UpdateWindow((HWND)param_1[0x16]);
    return;
  case 4:
    ShowWindow((HWND)param_1[0x16],8);
    UpdateWindow((HWND)param_1[0x16]);
  }
  return;
}


