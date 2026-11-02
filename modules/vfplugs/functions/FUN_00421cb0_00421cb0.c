/* Module: vfplugs.dll
   Function: FUN_00421cb0
   Address: 00421cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421cb0(int param_1,HDC param_2)

{
  HDC hdc;
  HBITMAP h;
  HGDIOBJ h_00;
  tagRECT local_50;
  tagPAINTSTRUCT local_40;
  
  if (param_2 == (HDC)0x0) {
    param_2 = BeginPaint(*(HWND *)(param_1 + 0x38),&local_40);
  }
  else {
    local_40.hdc = (HDC)0x0;
    local_40.fErase = 1;
  }
  GetClientRect(*(HWND *)(param_1 + 0x38),&local_50);
  hdc = CreateCompatibleDC(param_2);
  h = CreateCompatibleBitmap(param_2,local_50.right,local_50.bottom);
  if ((hdc == (HDC)0x0) || (h == (HBITMAP)0x0)) {
    FUN_00421510(param_1,hdc);
  }
  else {
    h_00 = SelectObject(hdc,h);
    FUN_00421510(param_1,hdc);
    BitBlt(param_2,local_50.left,local_50.top,local_50.right,local_50.bottom,hdc,0,0,0xcc0020);
    SelectObject(hdc,h_00);
  }
  if (h != (HBITMAP)0x0) {
    DeleteObject(h);
  }
  if (hdc != (HDC)0x0) {
    DeleteDC(hdc);
  }
  FUN_00421300(param_1,0);
  if (local_40.hdc != (HDC)0x0) {
    EndPaint(*(HWND *)(param_1 + 0x38),&local_40);
  }
  return;
}


