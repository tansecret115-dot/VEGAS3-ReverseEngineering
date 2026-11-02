/* Module: aifplug.dll
   Function: FUN_5fbe1290
   Address: 5fbe1290
   Source: Ghidra pseudocode (Stage 10 batch) */


HBITMAP FUN_5fbe1290(BITMAPINFO *param_1,HPALETTE param_2)

{
  HDC hdc;
  HPALETTE hPal;
  uint uVar1;
  HBITMAP pHVar2;
  BITMAPINFO *pbmi;
  UINT iUsage;
  
  hdc = GetDC((HWND)0x0);
  if (param_2 == (HPALETTE)0x0) {
    hPal = (HPALETTE)0x0;
  }
  else {
    hPal = SelectPalette(hdc,param_2,0);
    RealizePalette(hdc);
  }
  iUsage = 0;
  pbmi = param_1;
  uVar1 = FUN_5fbe1270((int *)param_1);
  pHVar2 = CreateDIBitmap(hdc,&param_1->bmiHeader,4,
                          (void *)((int)&(((BITMAPINFO *)(param_1->bmiColors + -10))->bmiHeader).
                                         biSize + (uVar1 & 0xffff) + (param_1->bmiHeader).biSize),
                          pbmi,iUsage);
  if (param_2 != (HPALETTE)0x0) {
    SelectPalette(hdc,hPal,0);
  }
  ReleaseDC((HWND)0x0,hdc);
  return pHVar2;
}


