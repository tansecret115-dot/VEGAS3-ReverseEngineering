/* Module: sftrans1.dll
   Function: FUN_0048a1c0
   Address: 0048a1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0048a1c0(int param_1,HDC param_2,RECT *param_3)

{
  RECT *lprcSrc1;
  int y;
  HGDIOBJ h;
  HDC hdc;
  int cy;
  DWORD DVar1;
  int iVar2;
  HDC local_7c;
  HGDIOBJ local_78;
  HBITMAP local_74;
  tagRECT local_60;
  tagRECT local_50;
  RECT local_40;
  tagRECT local_30;
  tagRECT local_20;
  int local_4;
  
  GetClientRect(*(HWND *)(param_1 + 4),&local_30);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 == 0) {
    iVar2 = param_1 + 8;
  }
  h = SelectObject(param_2,*(HGDIOBJ *)(iVar2 + 0x18));
  iVar2 = *(int *)(param_1 + 0x38);
  hdc = CreateCompatibleDC(param_2);
  lprcSrc1 = (RECT *)(param_1 + 0x94);
  local_74 = (HBITMAP)0x0;
  local_78 = (HGDIOBJ)0x0;
  if (hdc == (HDC)0x0) {
    SetWindowOrgEx(param_2,-lprcSrc1->left,-*(int *)(param_1 + 0x98),(LPPOINT)0x0);
    local_7c = param_2;
  }
  else {
    local_74 = CreateCompatibleBitmap
                         (param_2,*(int *)(param_1 + 0x9c) - lprcSrc1->left,
                          *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x98));
    local_78 = SelectObject(hdc,local_74);
    local_7c = hdc;
  }
  IntersectRect(&local_20,lprcSrc1,param_3);
  OffsetRect(&local_20,-lprcSrc1->left,-*(int *)(param_1 + 0x98));
  FUN_00489f50(local_7c,&local_20);
  if (hdc == (HDC)0x0) {
    SetWindowOrgEx(param_2,0,0,(LPPOINT)0x0);
  }
  else {
    if (*(int *)(param_1 + 0x108) == 0) {
      BitBlt(param_2,lprcSrc1->left,*(int *)(param_1 + 0x98),
             *(int *)(param_1 + 0x9c) - lprcSrc1->left,
             *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x98),hdc,0,0,0xcc0020);
    }
    else {
      local_40.left = *(int *)(param_1 + 0x84);
      y = *(int *)(param_1 + 0x88);
      local_40.right = *(int *)(param_1 + 0x8c);
      local_40.bottom = *(int *)(param_1 + 0x90);
      BitBlt(param_2,lprcSrc1->left,*(int *)(param_1 + 0x98),
             *(int *)(param_1 + 0x9c) - lprcSrc1->left,y - *(int *)(param_1 + 0x98),hdc,0,0,0xcc0020
            );
      BitBlt(param_2,lprcSrc1->left,local_40.bottom,*(int *)(param_1 + 0x9c) - lprcSrc1->left,
             *(int *)(param_1 + 0xa0) - local_40.bottom,hdc,0,
             local_40.bottom - *(int *)(param_1 + 0x98),0xcc0020);
      cy = local_40.bottom - y;
      BitBlt(param_2,lprcSrc1->left,y,local_40.left - lprcSrc1->left,cy,hdc,0,
             y - *(int *)(param_1 + 0x98),0xcc0020);
      BitBlt(param_2,local_40.right,y,*(int *)(param_1 + 0x9c) - local_40.right,cy,hdc,
             local_40.right - lprcSrc1->left,y - *(int *)(param_1 + 0x98),0xcc0020);
    }
    if (hdc != (HDC)0x0) {
      SelectObject(hdc,local_78);
      DeleteDC(hdc);
    }
    if (local_74 != (HBITMAP)0x0) {
      DeleteObject(local_74);
    }
  }
  DrawEdge(param_2,&local_30,10,0xf);
  InflateRect(&local_30,-2,-2);
  local_4 = local_30.top + iVar2;
  DVar1 = GetSysColor(0xf);
  SetBkColor(param_2,DVar1);
  local_60.left = *(int *)(param_1 + 0x44);
  local_60.top = *(int *)(param_1 + 0x48);
  local_60.right = *(int *)(param_1 + 0x4c);
  local_60.bottom = *(int *)(param_1 + 0x50);
  DrawEdge(param_2,&local_60,5,0x100f);
  InflateRect(&local_60,-2,-2);
  local_40.top = local_60.top;
  local_40.left = local_60.left;
  local_40.right = local_60.right;
  local_40.bottom = local_60.bottom;
  ExtTextOutA(param_2,0,0,2,&local_40,(LPCSTR)0x0,0,(INT *)0x0);
  local_60.left = *(int *)(param_1 + 0x54);
  local_60.top = *(int *)(param_1 + 0x58);
  local_60.right = *(int *)(param_1 + 0x5c);
  local_60.bottom = *(int *)(param_1 + 0x60);
  DrawEdge(param_2,&local_60,5,0x100f);
  InflateRect(&local_60,-2,-2);
  local_50.top = local_60.top;
  local_50.left = local_60.left;
  local_50.right = local_60.right;
  local_50.bottom = local_60.bottom;
  InflateRect(&local_50,-2,0);
  if (local_60.left <= local_50.left) {
    if (((local_60.top <= local_50.top) && (local_50.right <= local_60.right)) &&
       (local_50.bottom <= local_60.bottom)) {
      local_40.left = local_60.left;
      local_40.right = local_60.right;
      local_40.top = local_60.top;
      local_40.bottom = local_50.top;
      ExtTextOutA(param_2,0,0,2,&local_40,(LPCSTR)0x0,0,(INT *)0x0);
      local_40.top = local_50.bottom;
      local_40.left = local_60.left;
      local_40.right = local_60.right;
      local_40.bottom = local_60.bottom;
      ExtTextOutA(param_2,0,0,2,&local_40,(LPCSTR)0x0,0,(INT *)0x0);
      local_40.top = local_50.top;
      local_40.left = local_60.left;
      local_40.right = local_50.left;
      local_40.bottom = local_50.bottom;
      ExtTextOutA(param_2,0,0,2,&local_40,(LPCSTR)0x0,0,(INT *)0x0);
      local_40.top = local_50.top;
      local_40.left = local_50.right;
      local_40.right = local_60.right;
      local_40.bottom = local_50.bottom;
      ExtTextOutA(param_2,0,0,2,&local_40,(LPCSTR)0x0,0,(INT *)0x0);
    }
  }
  DVar1 = GetSysColor(0xf);
  SetBkColor(param_2,DVar1);
  DVar1 = GetSysColor(8);
  SetTextColor(param_2,DVar1);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 == 0) {
    iVar2 = param_1 + 8;
  }
  FUN_00489ed0(param_2,*(undefined4 *)(iVar2 + 0x18),&local_50,L"Item Text");
  local_30.top = local_4;
  SelectObject(param_2,h);
  return;
}


