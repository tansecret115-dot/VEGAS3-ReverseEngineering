/* Module: pngu3266.dll
   Function: CPNBitmapImage
   Address: 605f45d1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNBitmapImage::CPNBitmapImage(void) */

CPNBitmapImage * __thiscall CPNBitmapImage::CPNBitmapImage(CPNBitmapImage *this)

{
                    /* 0x45d1  11  ??0CPNBitmapImage@@QAE@XZ */
  XPNBitmapImage::XPNBitmapImage((XPNBitmapImage *)this);
  *(undefined4 *)(this + 0x2b) = 0;
  *(undefined4 *)(this + 0x2f) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


