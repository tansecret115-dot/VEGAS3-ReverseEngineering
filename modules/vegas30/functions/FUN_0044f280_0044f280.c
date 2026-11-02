/* Module: vegas30.exe
   Function: FUN_0044f280
   Address: 0044f280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f280(undefined4 *param_1,LONG param_2,LONG param_3,undefined4 *param_4,
                 undefined4 param_5,int param_6)

{
  ushort uVar1;
  BITMAPINFO *lpbmi;
  HDC hdc;
  HDC hdc_00;
  HBITMAP pHVar2;
  HGDIOBJ pvVar3;
  DWORD DVar4;
  HDC hdc_01;
  HGDIOBJ pvVar5;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  FUN_0044f240(param_1);
  lpbmi = (BITMAPINFO *)*param_4;
  if (lpbmi != (BITMAPINFO *)0x0) {
    if (param_2 < 0) {
      param_2 = (lpbmi->bmiHeader).biWidth;
    }
    if (param_3 < 0) {
      param_3 = (lpbmi->bmiHeader).biHeight;
    }
    hdc = GetDC((HWND)0x0);
    hdc_00 = CreateCompatibleDC(hdc);
    pHVar2 = CreateCompatibleBitmap(hdc,param_2,param_3);
    pvVar3 = SelectObject(hdc_00,pHVar2);
    if ((param_2 == (lpbmi->bmiHeader).biWidth) && (param_3 == (lpbmi->bmiHeader).biHeight)) {
      DVar4 = (lpbmi->bmiHeader).biClrUsed;
      if ((DVar4 == 0) && (uVar1 = (lpbmi->bmiHeader).biBitCount, uVar1 < 9)) {
        DVar4 = 1 << ((byte)uVar1 & 0x1f);
      }
      StretchDIBits(hdc_00,0,0,param_2,param_3,0,0,param_2,param_3,
                    &lpbmi->bmiColors[DVar4 - 10].rgbBlue + (lpbmi->bmiHeader).biSize,lpbmi,0,
                    0xcc0020);
    }
    else {
      local_8 = param_2;
      local_4 = param_3;
      if (param_6 == 0) {
        local_10 = 0;
        local_c = 0;
        FUN_0044edc0(hdc_00,&local_10,lpbmi,param_5);
      }
      else {
        local_10 = 0;
        local_c = 0;
        FUN_0044ef30(hdc_00,&local_10,lpbmi,param_5);
      }
    }
    if ((*(byte *)(param_4 + 2) & 8) != 0) {
      hdc_01 = CreateCompatibleDC(hdc);
      pHVar2 = CreateBitmap(param_2,param_3,1,1,(void *)0x0);
      pvVar5 = SelectObject(hdc_01,pHVar2);
      SetBkColor(hdc_00,0xff00ff);
      BitBlt(hdc_01,0,0,param_2,param_3,hdc_00,0,0,0xcc0020);
      SetBkColor(hdc_00,0);
      SetTextColor(hdc_00,0xffffff);
      BitBlt(hdc_00,0,0,param_2,param_3,hdc_01,0,0,0x8800c6);
      pvVar5 = SelectObject(hdc_01,pvVar5);
      param_1[1] = pvVar5;
      DeleteDC(hdc_01);
    }
    pvVar3 = SelectObject(hdc_00,pvVar3);
    *param_1 = pvVar3;
    param_1[2] = param_2;
    param_1[3] = param_3;
    DeleteDC(hdc_00);
    ReleaseDC((HWND)0x0,hdc);
  }
  return;
}


