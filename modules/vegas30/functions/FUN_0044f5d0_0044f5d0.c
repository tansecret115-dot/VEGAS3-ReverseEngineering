/* Module: vegas30.exe
   Function: FUN_0044f5d0
   Address: 0044f5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


HIMAGELIST FUN_0044f5d0(undefined4 *param_1,int *param_2,int param_3)

{
  ushort uVar1;
  BITMAPINFO *lpbmi;
  int cx;
  int iVar2;
  int cx_00;
  int iVar3;
  int cy;
  HDC hdc;
  HDC hdc_00;
  HBITMAP hbmImage;
  HGDIOBJ h;
  BYTE *lpBits;
  DWORD DVar4;
  HIMAGELIST himl;
  
  if (((param_1 != (undefined4 *)0x0) &&
      (lpbmi = (BITMAPINFO *)*param_1, lpbmi != (BITMAPINFO *)0x0)) &&
     ((*(byte *)(param_1 + 2) & 0x20) == 0)) {
    cx = (lpbmi->bmiHeader).biWidth;
    iVar2 = (lpbmi->bmiHeader).biHeight;
    cx_00 = *param_2;
    iVar3 = (cx_00 / 2 + iVar2) / cx_00;
    cy = iVar2 / iVar3;
    param_2[1] = cy;
    if (param_3 < iVar3) {
      hdc = GetDC((HWND)0x0);
      if (hdc == (HDC)0x0) {
        return (HIMAGELIST)0x0;
      }
      hdc_00 = CreateCompatibleDC(hdc);
      if (hdc_00 != (HDC)0x0) {
        hbmImage = CreateCompatibleBitmap(hdc,cx,cy);
        if (hbmImage != (HBITMAP)0x0) {
          h = SelectObject(hdc_00,hbmImage);
          if (lpbmi == (BITMAPINFO *)0x0) {
            lpBits = (BYTE *)0x0;
          }
          else {
            DVar4 = (lpbmi->bmiHeader).biClrUsed;
            if ((DVar4 == 0) && (uVar1 = (lpbmi->bmiHeader).biBitCount, uVar1 < 9)) {
              DVar4 = 1 << ((byte)uVar1 & 0x1f);
            }
            lpBits = &lpbmi->bmiColors[DVar4 - 10].rgbBlue + (lpbmi->bmiHeader).biSize;
          }
          StretchDIBits(hdc_00,0,0,cx,cy,0,iVar2 - (param_3 + 1) * cy,cx,cy,lpBits,lpbmi,0,0xcc0020)
          ;
          SelectObject(hdc_00,h);
          himl = ImageList_Create(cx_00,cy,0xff,cx / cx_00,0);
          if (himl != (HIMAGELIST)0x0) {
            ImageList_AddMasked(himl,hbmImage,0xff00ff);
          }
          DeleteObject(hbmImage);
          DeleteDC(hdc_00);
          ReleaseDC((HWND)0x0,hdc);
          return himl;
        }
        DeleteDC(hdc_00);
        ReleaseDC((HWND)0x0,hdc);
        return (HIMAGELIST)0x0;
      }
      ReleaseDC((HWND)0x0,hdc);
      return (HIMAGELIST)0x0;
    }
  }
  return (HIMAGELIST)0x0;
}


