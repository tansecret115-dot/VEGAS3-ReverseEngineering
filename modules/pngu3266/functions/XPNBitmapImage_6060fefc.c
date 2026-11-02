/* Module: pngu3266.dll
   Function: XPNBitmapImage
   Address: 6060fefc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNBitmapImage::XPNBitmapImage(void) */

XPNBitmapImage * __thiscall XPNBitmapImage::XPNBitmapImage(XPNBitmapImage *this)

{
                    /* 0x1fefc  184  ??0XPNBitmapImage@@IAE@XZ */
  CPNImage::CPNImage((CPNImage *)this);
  this[0x2a] = (XPNBitmapImage)0x0;
  *(undefined ***)this = &_vftable_;
  return this;
}


