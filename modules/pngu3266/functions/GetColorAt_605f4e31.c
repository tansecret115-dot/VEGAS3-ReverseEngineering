/* Module: pngu3266.dll
   Function: GetColorAt
   Address: 605f4e31
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNBitmapImage::GetColorAt(long,long,class CPNColor &) */

int __thiscall
CPNBitmapImage::GetColorAt(CPNBitmapImage *this,long param_1,long param_2,CPNColor *param_3)

{
  int iVar1;
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  COLORREF CVar2;
  long lVar3;
  
                    /* 0x4e31  1136  ?GetColorAt@CPNBitmapImage@@UAEHJJAAVCPNColor@@@Z */
  if (*(int *)(this + 0x20) == 0) {
    lVar3 = GetColorTableIndex(this,param_1,param_2);
    if (lVar3 != -1) {
      iVar1 = *(int *)(this + 0x2b) + lVar3 * 4;
      CPNColor::Set(param_3,*(uchar *)(iVar1 + 0x2a),*(uchar *)(iVar1 + 0x29),
                    *(uchar *)(*(int *)(this + 0x2b) + 0x28 + lVar3 * 4));
    }
  }
  else {
    if (*(int *)(this + 0x14) == 0) {
      return 0;
    }
    hdc = CreateDCA(s_DISPLAY_60649188,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
    hdc_00 = CreateCompatibleDC(hdc);
    h = SelectObject(hdc_00,*(HGDIOBJ *)(this + 0x14));
    CVar2 = GetPixel(hdc_00,param_1,param_2);
    CPNColor::Set(param_3,(uchar)CVar2,(uchar)(CVar2 >> 8),(uchar)(CVar2 >> 0x10));
    SelectObject(hdc_00,h);
    DeleteDC(hdc_00);
    DeleteDC(hdc);
  }
  return 1;
}


