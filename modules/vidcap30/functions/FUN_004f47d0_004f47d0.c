/* Module: vidcap30.exe
   Function: FUN_004f47d0
   Address: 004f47d0
   Source: Ghidra pseudocode (Stage 10 batch) */


HIMAGELIST FUN_004f47d0(HWND param_1,undefined4 param_2,int *param_3)

{
  HDC hdc;
  LRESULT LVar1;
  tagRECT *ptVar2;
  HBITMAP h;
  HBITMAP h_00;
  HPEN h_01;
  HDC hdc_00;
  HDC hdc_01;
  HGDIOBJ pvVar3;
  HBRUSH pHVar4;
  RECT *pRVar5;
  HBITMAP h_02;
  HBITMAP h_03;
  HBITMAP hbmImage;
  HBITMAP hbmMask;
  HIMAGELIST himl;
  undefined4 uVar6;
  code *pcVar7;
  WPARAM wParam;
  int local_68;
  tagRECT local_50;
  RECT local_40;
  RECT local_30;
  tagRECT local_20;
  RECT local_10;
  
  hdc = GetDC(param_1);
  pcVar7 = SendMessageA_exref;
  uVar6 = 0xffffffff;
  LVar1 = SendMessageA(param_1,0x1032,0,0);
  local_68 = 0;
  if (0 < LVar1) {
    do {
      uVar6 = (*pcVar7)(param_1,0x100c,uVar6,2);
      if (&stack0x00000000 == (undefined1 *)0x20) {
        ptVar2 = (tagRECT *)0x0;
      }
      else {
        local_20.left = 2;
        ptVar2 = &local_20;
      }
      (*pcVar7)(param_1,0x100e,uVar6,ptVar2);
      if (&stack0x00000000 == (undefined1 *)0x50) {
        ptVar2 = (tagRECT *)0x0;
      }
      else {
        local_50.left = 1;
        ptVar2 = &local_50;
      }
      (*pcVar7)(param_1,0x100e,uVar6,ptVar2);
      UnionRect(&local_20,&local_10,&local_30);
      if (local_68 == 0) {
        local_40.left = local_20.left;
        local_40.top = local_20.top;
        local_40.right = local_20.right;
        local_40.bottom = local_20.bottom;
      }
      UnionRect(&local_50,&local_40,&local_20);
      local_40.left = local_50.left;
      local_40.top = local_50.top;
      local_40.right = local_50.right;
      local_40.bottom = local_50.bottom;
      local_68 = local_68 + 1;
      pcVar7 = SendMessageA_exref;
    } while (local_68 < LVar1);
  }
  *param_3 = local_50.left;
  param_3[1] = local_50.top;
  h = CreateCompatibleBitmap(hdc,local_50.right - local_50.left,local_50.bottom - local_50.top);
  h_00 = CreateCompatibleBitmap(hdc,local_50.right - local_50.left,local_50.bottom - local_50.top);
  h_01 = CreatePen(0,1,0x404040);
  hdc_00 = CreateCompatibleDC(hdc);
  hdc_01 = CreateCompatibleDC(hdc);
  SelectObject(hdc_00,h);
  SelectObject(hdc_01,h_00);
  pvVar3 = GetStockObject(4);
  SelectObject(hdc_00,pvVar3);
  pvVar3 = GetStockObject(0);
  SelectObject(hdc_01,pvVar3);
  SelectObject(hdc_00,h_01);
  pvVar3 = GetStockObject(7);
  SelectObject(hdc_01,pvVar3);
  local_40.left = local_40.left - local_50.left;
  local_40.right = local_40.right - local_50.left;
  local_40.top = local_40.top - local_50.top;
  local_40.bottom = local_40.bottom - local_50.top;
  pHVar4 = GetStockObject(4);
  FillRect(hdc_00,&local_40,pHVar4);
  pHVar4 = GetStockObject(0);
  FillRect(hdc_01,&local_40,pHVar4);
  wParam = 0xffffffff;
  param_3 = (int *)LVar1;
  if (0 < LVar1) {
    do {
      wParam = SendMessageA(param_1,0x100c,wParam,2);
      if (&stack0x00000000 == (undefined1 *)0x30) {
        pRVar5 = (RECT *)0x0;
      }
      else {
        local_30.left = 2;
        pRVar5 = &local_30;
      }
      SendMessageA(param_1,0x100e,wParam,(LPARAM)pRVar5);
      if (&stack0x00000000 == (undefined1 *)0x40) {
        pRVar5 = (RECT *)0x0;
      }
      else {
        local_40.left = 1;
        pRVar5 = &local_40;
      }
      SendMessageA(param_1,0x100e,wParam,(LPARAM)pRVar5);
      Rectangle(hdc_00,local_40.left - local_50.left,local_40.top - local_50.top,
                local_40.right - local_50.left,local_40.bottom - local_50.top);
      MoveToEx(hdc_00,local_30.left - local_50.left,
               ((local_30.bottom - local_30.top) / 2 - local_50.top) + local_30.top,(LPPOINT)0x0);
      LineTo(hdc_00,local_30.right - local_50.left,
             ((local_30.bottom - local_30.top) / 2 - local_50.top) + local_30.top);
      Rectangle(hdc_01,local_40.left - local_50.left,local_40.top - local_50.top,
                local_40.right - local_50.left,local_40.bottom - local_50.top);
      MoveToEx(hdc_01,local_30.left - local_50.left,
               ((local_30.bottom - local_30.top) / 2 - local_50.top) + local_30.top,(LPPOINT)0x0);
      LineTo(hdc_01,local_30.right - local_50.left,
             ((local_30.bottom - local_30.top) / 2 - local_50.top) + local_30.top);
      param_3 = (int *)((int)param_3 + -1);
    } while (param_3 != (int *)0x0);
  }
  h_02 = CreateCompatibleBitmap(hdc,1,1);
  h_03 = CreateCompatibleBitmap(hdc,1,1);
  hbmImage = SelectObject(hdc_00,h_02);
  hbmMask = SelectObject(hdc_01,h_03);
  himl = ImageList_Create(local_50.right - local_50.left,local_50.bottom - local_50.top,1,1,1);
  ImageList_Add(himl,hbmImage,hbmMask);
  ReleaseDC(param_1,hdc);
  DeleteDC(hdc_00);
  DeleteDC(hdc_01);
  DeleteObject(h);
  DeleteObject(h_00);
  DeleteObject(h_02);
  DeleteObject(h_03);
  DeleteObject(h_01);
  return himl;
}


