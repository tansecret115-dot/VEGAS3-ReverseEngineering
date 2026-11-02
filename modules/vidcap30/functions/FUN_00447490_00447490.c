/* Module: vidcap30.exe
   Function: FUN_00447490
   Address: 00447490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00447490(int param_1)

{
  HDC hdc;
  HGDIOBJ h;
  HDC hdc_00;
  HBITMAP h_00;
  tagRECT local_50;
  tagPAINTSTRUCT local_40;
  
  hdc = BeginPaint(*(HWND *)(param_1 + 8),&local_40);
  GetClientRect(*(HWND *)(param_1 + 8),&local_50);
  if (DAT_005bb7b4 == 0) {
    hdc_00 = CreateCompatibleDC(hdc);
  }
  else {
    hdc_00 = (HDC)0x0;
  }
  if (DAT_005bb7b4 == 0) {
    h_00 = CreateCompatibleBitmap(hdc,local_50.right,local_50.bottom);
  }
  else {
    h_00 = (HBITMAP)0x0;
  }
  if ((hdc_00 == (HDC)0x0) || (h_00 == (HBITMAP)0x0)) {
    FUN_0044be40(param_1,hdc,0,&local_50);
  }
  else {
    h = SelectObject(hdc_00,h_00);
    FUN_0044be40(param_1,hdc_00,0,&local_50);
    BitBlt(hdc,0,0,local_50.right,local_50.bottom,hdc_00,0,0,0xcc0020);
    h_00 = SelectObject(hdc_00,h);
  }
  if (h_00 != (HBITMAP)0x0) {
    DeleteObject(h_00);
  }
  if (hdc_00 != (HDC)0x0) {
    DeleteDC(hdc_00);
  }
  EndPaint(*(HWND *)(param_1 + 8),&local_40);
  return;
}


