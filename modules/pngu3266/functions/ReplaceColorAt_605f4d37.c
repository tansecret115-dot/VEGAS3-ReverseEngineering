/* Module: pngu3266.dll
   Function: ReplaceColorAt
   Address: 605f4d37
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNBitmapImage::ReplaceColorAt(long,long,class CPNColor const &)
    */

int __thiscall
CPNBitmapImage::ReplaceColorAt(CPNBitmapImage *this,long param_1,long param_2,CPNColor *param_3)

{
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  COLORREF CVar1;
  COLORREF CVar2;
  long lVar3;
  
                    /* 0x4d37  1780  ?ReplaceColorAt@CPNBitmapImage@@UAEHJJABVCPNColor@@@Z */
  if (*(int *)(this + 0x20) == 0) {
    lVar3 = GetColorTableIndex(this,param_1,param_2);
    if (lVar3 != -1) {
      *(CPNColor *)(*(int *)(this + 0x2b) + 0x2a + lVar3 * 4) = param_3[0x1c];
      *(CPNColor *)(*(int *)(this + 0x2b) + 0x29 + lVar3 * 4) = param_3[0x1e];
      *(CPNColor *)(*(int *)(this + 0x2b) + 0x28 + lVar3 * 4) = param_3[0x1d];
    }
  }
  else {
    if (*(int *)(this + 0x14) == 0) {
      return 0;
    }
    hdc = CreateDCA(s_DISPLAY_60649188,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
    hdc_00 = CreateCompatibleDC(hdc);
    h = SelectObject(hdc_00,*(HGDIOBJ *)(this + 0x14));
    CVar1 = GetPixel(hdc_00,param_1,param_2);
    param_1 = 0;
    if (0 < *(int *)(this + 0xc)) {
      do {
        param_2 = 0;
        if (0 < *(int *)(this + 0x10)) {
          do {
            CVar2 = GetPixel(hdc_00,param_1,param_2);
            if (CVar1 == CVar2) {
              SetPixel(hdc_00,param_1,param_2,*(COLORREF *)(param_3 + 8));
            }
            param_2 = param_2 + 1;
          } while (param_2 < *(int *)(this + 0x10));
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(this + 0xc));
    }
    SelectObject(hdc_00,h);
    DeleteDC(hdc_00);
    DeleteDC(hdc);
  }
  return 1;
}


