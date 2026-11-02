/* Module: sfxpfx2.dll
   Function: FUN_5c8a8b40
   Address: 5c8a8b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8a8b40(HWND param_1,HDC param_2)

{
  undefined4 *puVar1;
  HDC hdc;
  HBITMAP h;
  HGDIOBJ h_00;
  tagRECT local_50;
  tagPAINTSTRUCT local_40;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,0);
  if (param_2 == (HDC)0x0) {
    param_2 = BeginPaint((HWND)*puVar1,&local_40);
  }
  else {
    local_40.hdc = (HDC)0x0;
    local_40.fErase = 1;
  }
  GetClientRect(param_1,&local_50);
  hdc = CreateCompatibleDC(param_2);
  h = CreateCompatibleBitmap(param_2,local_50.right - local_50.left,local_50.bottom - local_50.top);
  if ((hdc == (HDC)0x0) || (h == (HBITMAP)0x0)) {
    FUN_5c8a86b0(puVar1,param_2);
  }
  else {
    h_00 = SelectObject(hdc,h);
    FUN_5c8a86b0(puVar1,hdc);
    BitBlt(param_2,0,0,local_50.right - local_50.left,local_50.bottom - local_50.top,hdc,0,0,
           0xcc0020);
    SelectObject(hdc,h_00);
  }
  if (h != (HBITMAP)0x0) {
    DeleteObject(h);
  }
  if (hdc != (HDC)0x0) {
    DeleteDC(hdc);
  }
  if (local_40.hdc != (HDC)0x0) {
    EndPaint((HWND)*puVar1,&local_40);
  }
  return;
}


