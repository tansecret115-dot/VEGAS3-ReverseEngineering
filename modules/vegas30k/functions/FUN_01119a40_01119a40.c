/* Module: vegas30k.dll
   Function: FUN_01119a40
   Address: 01119a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01119a40(HWND param_1,HDC param_2,undefined4 param_3)

{
  HDC hdc;
  HBITMAP h;
  HGDIOBJ pvVar1;
  DWORD color;
  COLORREF color_00;
  tagRECT local_20;
  RECT local_10;
  
  GetClientRect(param_1,&local_20);
  hdc = CreateCompatibleDC(param_2);
  if (hdc != (HDC)0x0) {
    h = CreateCompatibleBitmap(param_2,local_20.right,local_20.bottom);
    if (h != (HBITMAP)0x0) {
      pvVar1 = SelectObject(hdc,h);
      color = GetSysColor(0xf);
      color_00 = SetBkColor(hdc,color);
      local_10.top = local_20.top;
      local_10.left = local_20.left;
      local_10.right = local_20.right;
      local_10.bottom = local_20.bottom;
      ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      SetBkColor(hdc,color_00);
      FUN_011189b0(param_1,hdc,param_3);
      BitBlt(param_2,local_20.left,local_20.top,local_20.right - local_20.left,
             local_20.bottom - local_20.top,hdc,local_20.left,local_20.top,0xcc0020);
      pvVar1 = SelectObject(hdc,pvVar1);
      DeleteObject(pvVar1);
      DeleteDC(hdc);
      return;
    }
    DeleteDC(hdc);
  }
  FUN_011189b0(param_1,param_2,param_3);
  return;
}


