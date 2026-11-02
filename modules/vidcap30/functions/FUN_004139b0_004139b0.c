/* Module: vidcap30.exe
   Function: FUN_004139b0
   Address: 004139b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004139b0(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  BITMAPINFO *lpbmi;
  int cy;
  int cx;
  COLORREF color;
  HBRUSH pHVar2;
  HDC hdc;
  HDC hdc_00;
  BYTE *pBVar3;
  DWORD DVar4;
  HBITMAP pHVar5;
  HGDIOBJ h;
  
  if ((HGDIOBJ)param_1[3] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[3]);
  }
  lpbmi = (BITMAPINFO *)*param_1;
  param_1[3] = 0;
  if (lpbmi == (BITMAPINFO *)0x0) {
    if (param_2 == 3) {
      color = FUN_00413810();
    }
    else {
      color = GetSysColor(0xf);
    }
    param_1[2] = param_1[2] | 0x20;
    pHVar2 = CreateSolidBrush(color);
    param_1[3] = pHVar2;
    return;
  }
  if ((*(byte *)(param_1 + 2) & 0x20) != 0) {
    pHVar2 = CreateDIBPatternBrushPt(lpbmi,0);
    param_1[3] = pHVar2;
    return;
  }
  cy = (lpbmi->bmiHeader).biHeight;
  cx = (lpbmi->bmiHeader).biWidth;
  hdc = GetDC((HWND)0x0);
  hdc_00 = CreateCompatibleDC(hdc);
  if (((byte)DAT_005ba9b4 & 1) == 0) {
    pHVar5 = CreateCompatibleBitmap(hdc,cx,cy);
    param_1[3] = pHVar5;
    h = SelectObject(hdc_00,pHVar5);
    if (lpbmi == (BITMAPINFO *)0x0) {
      pBVar3 = (BYTE *)0x0;
    }
    else {
      DVar4 = (lpbmi->bmiHeader).biClrUsed;
      if ((DVar4 == 0) && (uVar1 = (lpbmi->bmiHeader).biBitCount, uVar1 < 9)) {
        DVar4 = 1 << ((byte)uVar1 & 0x1f);
      }
      pBVar3 = &lpbmi->bmiColors[DVar4 - 10].rgbBlue + (lpbmi->bmiHeader).biSize;
    }
    StretchDIBits(hdc_00,0,0,cx,cy,0,0,cx,cy,pBVar3,lpbmi,0,0xcc0020);
  }
  else {
    if (lpbmi == (BITMAPINFO *)0x0) {
      pBVar3 = (BYTE *)0x0;
    }
    else {
      DVar4 = (lpbmi->bmiHeader).biClrUsed;
      if ((DVar4 == 0) && (uVar1 = (lpbmi->bmiHeader).biBitCount, uVar1 < 9)) {
        DVar4 = 1 << ((byte)uVar1 & 0x1f);
      }
      pBVar3 = &lpbmi->bmiColors[DVar4 - 10].rgbBlue + (lpbmi->bmiHeader).biSize;
    }
    pHVar5 = CreateDIBitmap(hdc,(BITMAPINFOHEADER *)lpbmi,4,pBVar3,lpbmi,0);
    param_1[3] = pHVar5;
    h = SelectObject(hdc_00,pHVar5);
  }
  param_1[2] = param_1[2] & 0xffffffdf;
  SelectObject(hdc_00,h);
  DeleteDC(hdc_00);
  ReleaseDC((HWND)0x0,hdc);
  return;
}


