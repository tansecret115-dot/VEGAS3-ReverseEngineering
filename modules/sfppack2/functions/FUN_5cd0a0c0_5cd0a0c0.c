/* Module: sfppack2.dll
   Function: FUN_5cd0a0c0
   Address: 5cd0a0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd0a0c0(HWND param_1,HDC param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  HDC hdc;
  HBITMAP h;
  HWND pHVar3;
  int cy;
  HDC hDC;
  HGDIOBJ local_54;
  RECT local_50;
  tagPAINTSTRUCT local_40;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,0);
  if (param_2 == (HDC)0x0) {
    param_2 = BeginPaint((HWND)*puVar1,&local_40);
  }
  else {
    local_40.hdc = (HDC)0x0;
    local_40.fErase = 1;
  }
  local_50.left = puVar1[0x1e];
  local_50.top = puVar1[0x1f];
  local_50.right = puVar1[0x20];
  local_50.bottom = puVar1[0x21];
  uVar2 = GetWindowLongA(param_1,-0x10);
  hdc = CreateCompatibleDC(param_2);
  h = CreateCompatibleBitmap(param_2,local_50.right,local_50.bottom);
  hDC = param_2;
  if (h != (HBITMAP)0x0) {
    local_54 = SelectObject(hdc,h);
    hDC = hdc;
  }
  if ((HANDLE)puVar1[0xc] == (HANDLE)0x0) {
    if (local_40.fErase != 0) {
      DefWindowProcA(param_1,0x14,(WPARAM)hDC,0);
    }
  }
  else {
    FUN_5cd0d2d0(hDC,(HANDLE)puVar1[0xc],local_50.right,local_50.bottom,1);
  }
  FUN_5cd09d10((int)puVar1,hDC,uVar2);
  pHVar3 = GetFocus();
  if (pHVar3 == param_1) {
    DrawFocusRect(hDC,&local_50);
  }
  if (h != (HBITMAP)0x0) {
    if (local_40.hdc == (HDC)0x0) {
      cy = local_50.bottom - local_50.top;
      local_40.rcPaint.right = local_50.right;
      local_40.rcPaint.left = local_50.left;
      local_40.rcPaint.top = local_50.top;
    }
    else {
      cy = local_40.rcPaint.bottom - local_40.rcPaint.top;
    }
    BitBlt(param_2,local_40.rcPaint.left,local_40.rcPaint.top,
           local_40.rcPaint.right - local_40.rcPaint.left,cy,hDC,local_40.rcPaint.left,
           local_40.rcPaint.top,0xcc0020);
    SelectObject(hDC,local_54);
    DeleteObject(h);
  }
  if (puVar1[0x1a] != 0) {
    FUN_5cd09b60(puVar1,param_2,0,puVar1[0x28] + -1);
  }
  if (hDC != (HDC)0x0) {
    DeleteDC(hDC);
  }
  if (local_40.hdc != (HDC)0x0) {
    EndPaint((HWND)*puVar1,&local_40);
  }
  return;
}


