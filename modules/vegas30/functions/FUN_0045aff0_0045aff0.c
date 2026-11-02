/* Module: vegas30.exe
   Function: FUN_0045aff0
   Address: 0045aff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045aff0(void)

{
  HDC pHVar1;
  
  DAT_0064be08 = 0xc;
  DAT_0064be0c = 10;
  DAT_0064be10 = 0;
  DAT_0064be14 = 0x10;
  DAT_0064be18 = 0x20;
  DAT_0064be00 = CreateBitmapIndirect((BITMAP *)&DAT_0063e0b8);
  if (DAT_0064be00 != (HBITMAP)0x0) {
    pHVar1 = GetDC((HWND)0x0);
    DAT_0064be04 = CreateCompatibleDC(pHVar1);
    if (DAT_0064be04 == (HDC)0x0) {
      DeleteObject(DAT_0064be00);
      DAT_0064be00 = (HBITMAP)0x0;
    }
    else {
      DAT_0064be00 = SelectObject(DAT_0064be04,DAT_0064be00);
    }
    ReleaseDC((HWND)0x0,pHVar1);
  }
  DAT_0064bdf8 = 0xb;
  DAT_0064bdfc = 10;
  DAT_0064bdf0 = CreateBitmapIndirect((BITMAP *)&DAT_0063e120);
  if (DAT_0064bdf0 != (HBITMAP)0x0) {
    pHVar1 = GetDC((HWND)0x0);
    DAT_0064bdf4 = CreateCompatibleDC(pHVar1);
    if (DAT_0064bdf4 != (HDC)0x0) {
      DAT_0064bdf0 = SelectObject(DAT_0064bdf4,DAT_0064bdf0);
      ReleaseDC((HWND)0x0,pHVar1);
      return;
    }
    DeleteObject(DAT_0064bdf0);
    DAT_0064bdf0 = (HBITMAP)0x0;
    ReleaseDC((HWND)0x0,pHVar1);
  }
  return;
}


