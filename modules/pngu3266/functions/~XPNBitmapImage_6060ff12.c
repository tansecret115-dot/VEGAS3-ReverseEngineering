/* Module: pngu3266.dll
   Function: ~XPNBitmapImage
   Address: 6060ff12
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNBitmapImage::~XPNBitmapImage(void) */

void __thiscall XPNBitmapImage::~XPNBitmapImage(XPNBitmapImage *this)

{
                    /* 0x1ff12  378  ??1XPNBitmapImage@@MAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNImage::~CPNImage((CPNImage *)this);
  return;
}


