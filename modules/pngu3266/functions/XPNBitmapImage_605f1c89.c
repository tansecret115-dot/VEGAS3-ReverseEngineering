/* Module: pngu3266.dll
   Function: XPNBitmapImage
   Address: 605f1c89
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNBitmapImage::XPNBitmapImage(class XPNBitmapImage const &) */

XPNBitmapImage * __thiscall
XPNBitmapImage::XPNBitmapImage(XPNBitmapImage *this,XPNBitmapImage *param_1)

{
                    /* 0x1c89  185  ??0XPNBitmapImage@@QAE@ABV0@@Z */
  XPNImage::XPNImage((XPNImage *)this,(XPNImage *)param_1);
  *(undefined ***)this = &CPNImage::_vftable_;
  this[0x2a] = param_1[0x2a];
  *(undefined ***)this = &_vftable_;
  return this;
}


