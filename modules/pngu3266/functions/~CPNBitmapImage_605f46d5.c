/* Module: pngu3266.dll
   Function: ~CPNBitmapImage
   Address: 605f46d5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNBitmapImage::~CPNBitmapImage(void) */

void __thiscall CPNBitmapImage::~CPNBitmapImage(CPNBitmapImage *this)

{
                    /* 0x46d5  308  ??1CPNBitmapImage@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  Free(this);
  XPNBitmapImage::~XPNBitmapImage((XPNBitmapImage *)this);
  return;
}


