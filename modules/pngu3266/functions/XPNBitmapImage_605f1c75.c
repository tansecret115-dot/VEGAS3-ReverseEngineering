/* Module: pngu3266.dll
   Function: XPNBitmapImage
   Address: 605f1c75
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNBitmapImage::XPNBitmapImage(struct tagPN_BITMAPINFO &) */

XPNBitmapImage * __thiscall
XPNBitmapImage::XPNBitmapImage(XPNBitmapImage *this,tagPN_BITMAPINFO *param_1)

{
                    /* 0x1c75  183  ??0XPNBitmapImage@@IAE@AAUtagPN_BITMAPINFO@@@Z */
  CPNImage::CPNImage((CPNImage *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}


