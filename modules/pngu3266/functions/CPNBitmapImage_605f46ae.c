/* Module: pngu3266.dll
   Function: CPNBitmapImage
   Address: 605f46ae
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNBitmapImage::CPNBitmapImage(class CPNBitmapImage const &) */

CPNBitmapImage * __thiscall
CPNBitmapImage::CPNBitmapImage(CPNBitmapImage *this,CPNBitmapImage *param_1)

{
                    /* 0x46ae  10  ??0CPNBitmapImage@@QAE@ABV0@@Z */
  XPNBitmapImage::XPNBitmapImage((XPNBitmapImage *)this);
  *(undefined4 *)(this + 0x2b) = 0;
  *(undefined4 *)(this + 0x2f) = 0;
  *(undefined ***)this = &_vftable_;
  CopyImage(this,param_1);
  return this;
}


