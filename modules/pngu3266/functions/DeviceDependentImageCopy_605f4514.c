/* Module: pngu3266.dll
   Function: DeviceDependentImageCopy
   Address: 605f4514
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall CPNImage::DeviceDependentImageCopy(unsigned long) */

int __thiscall CPNImage::DeviceDependentImageCopy(CPNImage *this,ulong param_1)

{
  uint uVar1;
  HDC hdc;
  HDC hdc_00;
  HDC hdc_01;
  HBITMAP h;
  HGDIOBJ h_00;
  HGDIOBJ h_01;
  
                    /* 0x4514  959  ?DeviceDependentImageCopy@CPNImage@@MAEHK@Z */
  uVar1 = 0;
  if (param_1 != 0) {
    hdc = CreateDCA(s_DISPLAY_60649188,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
    hdc_00 = CreateCompatibleDC(hdc);
    hdc_01 = CreateCompatibleDC(hdc);
    h = CreateCompatibleBitmap(hdc,*(int *)(this + 0xc),*(int *)(this + 0x10));
    h_00 = SelectObject(hdc_00,h);
    h_01 = SelectObject(hdc_01,(HGDIOBJ)param_1);
    BitBlt(hdc_00,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),hdc_01,0,0,0xcc0020);
    SelectObject(hdc_00,h_00);
    SelectObject(hdc_01,h_01);
    DeleteDC(hdc_00);
    DeleteDC(hdc_01);
    DeleteDC(hdc);
    uVar1 = (uint)(h != (HBITMAP)0x0);
    *(HBITMAP *)(this + 0x14) = h;
  }
  return uVar1;
}


