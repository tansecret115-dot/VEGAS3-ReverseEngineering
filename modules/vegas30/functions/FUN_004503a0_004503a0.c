/* Module: vegas30.exe
   Function: FUN_004503a0
   Address: 004503a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004503a0(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  BITMAPINFO *lpbmi;
  int cy;
  int cx;
  DWORD DVar2;
  HBRUSH pHVar3;
  HDC hdc;
  HDC hdc_00;
  BYTE *pBVar4;
  HBITMAP pHVar5;
  HGDIOBJ h;
  
  if ((HGDIOBJ)param_1[3] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[3]);
  }
  lpbmi = (BITMAPINFO *)*param_1;
  param_1[3] = 0;
  if (lpbmi != (BITMAPINFO *)0x0) {
    if ((*(byte *)(param_1 + 2) & 0x20) == 0) {
      cy = (lpbmi->bmiHeader).biHeight;
      cx = (lpbmi->bmiHeader).biWidth;
      hdc = GetDC((HWND)0x0);
      hdc_00 = CreateCompatibleDC(hdc);
      if (((byte)DAT_00648570 & 1) == 0) {
        pHVar5 = CreateCompatibleBitmap(hdc,cx,cy);
        param_1[3] = pHVar5;
        h = SelectObject(hdc_00,pHVar5);
        if (lpbmi == (BITMAPINFO *)0x0) {
          pBVar4 = (BYTE *)0x0;
        }
        else {
          DVar2 = (lpbmi->bmiHeader).biClrUsed;
          if ((DVar2 == 0) && (uVar1 = (lpbmi->bmiHeader).biBitCount, uVar1 < 9)) {
            DVar2 = 1 << ((byte)uVar1 & 0x1f);
          }
          pBVar4 = &lpbmi->bmiColors[DVar2 - 10].rgbBlue + (lpbmi->bmiHeader).biSize;
        }
        StretchDIBits(hdc_00,0,0,cx,cy,0,0,cx,cy,pBVar4,lpbmi,0,0xcc0020);
      }
      else {
        if (lpbmi == (BITMAPINFO *)0x0) {
          pBVar4 = (BYTE *)0x0;
        }
        else {
          DVar2 = (lpbmi->bmiHeader).biClrUsed;
          if ((DVar2 == 0) && (uVar1 = (lpbmi->bmiHeader).biBitCount, uVar1 < 9)) {
            DVar2 = 1 << ((byte)uVar1 & 0x1f);
          }
          pBVar4 = &lpbmi->bmiColors[DVar2 - 10].rgbBlue + (lpbmi->bmiHeader).biSize;
        }
        pHVar5 = CreateDIBitmap(hdc,(BITMAPINFOHEADER *)lpbmi,4,pBVar4,lpbmi,0);
        param_1[3] = pHVar5;
        h = SelectObject(hdc_00,pHVar5);
      }
      param_1[2] = param_1[2] & 0xffffffdf;
      SelectObject(hdc_00,h);
      DeleteDC(hdc_00);
      ReleaseDC((HWND)0x0,hdc);
      return;
    }
    pHVar3 = CreateDIBPatternBrushPt(lpbmi,0);
    param_1[3] = pHVar3;
    return;
  }
  DVar2 = DAT_0064b52c;
  if (param_2 != 3) {
    DVar2 = GetSysColor(0xf);
  }
  param_1[2] = param_1[2] | 0x20;
  pHVar3 = CreateSolidBrush(DVar2);
  param_1[3] = pHVar3;
  return;
}


