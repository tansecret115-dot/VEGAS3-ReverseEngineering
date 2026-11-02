/* Module: pngu3266.dll
   Function: ReplaceColorAtPoint
   Address: 605f4ede
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNBitmapImage::ReplaceColorAtPoint(long,long,long,long) */

int __thiscall
CPNBitmapImage::ReplaceColorAtPoint
          (CPNBitmapImage *this,long param_1,long param_2,long param_3,long param_4)

{
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  COLORREF color;
  long lVar1;
  
                    /* 0x4ede  1783  ?ReplaceColorAtPoint@CPNBitmapImage@@UAEHJJJJ@Z */
  if (*(int *)(this + 0x20) == 0) {
    lVar1 = GetColorTableIndex(this,param_1,param_2);
    if (lVar1 != -1) {
      SetColorTableIndex(this,param_3,param_4,lVar1);
    }
  }
  else {
    if (*(int *)(this + 0x14) == 0) {
      return 0;
    }
    hdc = CreateDCA(s_DISPLAY_60649188,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
    hdc_00 = CreateCompatibleDC(hdc);
    h = SelectObject(hdc_00,*(HGDIOBJ *)(this + 0x14));
    color = GetPixel(hdc_00,param_1,param_2);
    SetPixel(hdc_00,param_3,param_4,color);
    SelectObject(hdc_00,h);
    DeleteDC(hdc_00);
    DeleteDC(hdc);
  }
  return 1;
}


