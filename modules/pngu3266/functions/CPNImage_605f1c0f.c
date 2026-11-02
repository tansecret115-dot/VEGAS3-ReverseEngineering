/* Module: pngu3266.dll
   Function: CPNImage
   Address: 605f1c0f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNImage::CPNImage(class CPNImage const &) */

CPNImage * __thiscall CPNImage::CPNImage(CPNImage *this,CPNImage *param_1)

{
                    /* 0x1c0f  78  ??0CPNImage@@QAE@ABV0@@Z */
  XPNImage::XPNImage((XPNImage *)this,(XPNImage *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


