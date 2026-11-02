/* Module: vidcap30.exe
   Function: FUN_00503bd0
   Address: 00503bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00503bd0(HWND param_1,HDC param_2)

{
  int cx;
  int cy;
  LONG LVar1;
  HDC hdc;
  HBITMAP h;
  HGDIOBJ h_00;
  tagPAINTSTRUCT local_40;
  
  LVar1 = GetWindowLongA(param_1,0);
  if (*(HWND *)(LVar1 + 8) != (HWND)0x0) {
    if (param_2 == (HDC)0x0) {
      param_2 = BeginPaint(*(HWND *)(LVar1 + 8),&local_40);
    }
    else {
      local_40.hdc = (HDC)0x0;
      local_40.fErase = 1;
    }
    cx = *(int *)(LVar1 + 0x180);
    cy = *(int *)(LVar1 + 0x184);
    hdc = CreateCompatibleDC(param_2);
    h = CreateCompatibleBitmap(param_2,cx,cy);
    if ((hdc == (HDC)0x0) || (h == (HBITMAP)0x0)) {
      if (param_2 != (HDC)0x0) {
        FUN_00501e60(LVar1,param_2);
        FUN_005033c0(LVar1,param_2);
      }
    }
    else {
      h_00 = SelectObject(hdc,h);
      FUN_00501e60(LVar1,hdc);
      FUN_005033c0(LVar1,hdc);
      BitBlt(param_2,0,0,cx,cy,hdc,0,0,0xcc0020);
      SelectObject(hdc,h_00);
    }
    if (h != (HBITMAP)0x0) {
      DeleteObject(h);
    }
    if (hdc != (HDC)0x0) {
      DeleteDC(hdc);
    }
    if (local_40.hdc != (HDC)0x0) {
      EndPaint(*(HWND *)(LVar1 + 8),&local_40);
    }
  }
  return;
}


