/* Module: sftrkfx1.dll
   Function: FUN_5cbae750
   Address: 5cbae750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbae750(HWND param_1,HDC param_2,byte *param_3)

{
  HDC hdc;
  HBITMAP h;
  HGDIOBJ h_00;
  HWND pHVar1;
  LRESULT LVar2;
  DWORD DVar3;
  COLORREF CVar4;
  UINT UVar5;
  WPARAM WVar6;
  HWND *ppHVar7;
  tagPOINT local_6c;
  tagRECT local_64;
  tagRECT local_54;
  RECT local_44;
  tagRECT local_34;
  int local_24;
  int local_20;
  HWND local_1c;
  WPARAM local_18;
  undefined4 local_14;
  HDC local_10;
  tagRECT *local_c;
  int local_8;
  int local_4;
  
  GetClientRect(param_1,&local_64);
  hdc = CreateCompatibleDC(param_2);
  h = CreateCompatibleBitmap(param_2,local_64.right,local_64.bottom);
  if ((hdc == (HDC)0x0) || (h == (HBITMAP)0x0)) {
    pHVar1 = GetParent(param_1);
    local_20 = 0;
    local_24 = 0;
    GetClientRect(param_1,&local_34);
    MapWindowPoints(param_1,pHVar1,(LPPOINT)&local_34,3);
    local_1c = param_1;
    local_18 = GetDlgCtrlID(param_1);
    local_c = &local_34;
    local_14 = 0x1003;
    local_4 = local_20;
    local_8 = local_24;
    local_10 = param_2;
    OffsetViewportOrgEx(param_2,-local_24,-local_20,&local_6c);
    ppHVar7 = &local_1c;
    UVar5 = 0x4e;
    WVar6 = local_18;
    pHVar1 = GetParent(param_1);
    LVar2 = SendMessageA(pHVar1,UVar5,WVar6,(LPARAM)ppHVar7);
    SetViewportOrgEx(param_2,local_6c.x,local_6c.y,(LPPOINT)0x0);
    if (LVar2 == 0) {
      GetClientRect(param_1,&local_44);
      DVar3 = GetSysColor(0xf);
      CVar4 = SetBkColor(param_2,DVar3);
      local_54.top = local_44.top;
      local_54.left = local_44.left;
      local_54.right = local_44.right;
      local_54.bottom = local_44.bottom;
      ExtTextOutA(param_2,0,0,2,&local_54,(LPCSTR)0x0,0,(INT *)0x0);
      SetBkColor(param_2,CVar4);
    }
    FUN_5cbac110(param_1,param_2,param_3);
  }
  else {
    h_00 = SelectObject(hdc,h);
    pHVar1 = GetParent(param_1);
    local_20 = 0;
    local_24 = 0;
    GetClientRect(param_1,&local_34);
    MapWindowPoints(param_1,pHVar1,(LPPOINT)&local_34,3);
    local_1c = param_1;
    local_18 = GetDlgCtrlID(param_1);
    local_14 = 0x1003;
    local_c = &local_34;
    local_4 = local_20;
    local_8 = local_24;
    local_10 = hdc;
    OffsetViewportOrgEx(hdc,-local_24,-local_20,&local_6c);
    ppHVar7 = &local_1c;
    UVar5 = 0x4e;
    WVar6 = local_18;
    pHVar1 = GetParent(param_1);
    LVar2 = SendMessageA(pHVar1,UVar5,WVar6,(LPARAM)ppHVar7);
    SetViewportOrgEx(hdc,local_6c.x,local_6c.y,(LPPOINT)0x0);
    if (LVar2 == 0) {
      GetClientRect(param_1,&local_54);
      DVar3 = GetSysColor(0xf);
      CVar4 = SetBkColor(hdc,DVar3);
      local_44.top = local_54.top;
      local_44.left = local_54.left;
      local_44.right = local_54.right;
      local_44.bottom = local_54.bottom;
      ExtTextOutA(hdc,0,0,2,&local_44,(LPCSTR)0x0,0,(INT *)0x0);
      SetBkColor(hdc,CVar4);
    }
    FUN_5cbac110(param_1,hdc,param_3);
    BitBlt(param_2,local_64.left,local_64.top,local_64.right,local_64.bottom,hdc,0,0,0xcc0020);
    SelectObject(hdc,h_00);
  }
  if (h != (HBITMAP)0x0) {
    DeleteObject(h);
  }
  if (hdc != (HDC)0x0) {
    DeleteDC(hdc);
  }
  return;
}


