/* Module: pngu3266.dll
   Function: CPNGifImage
   Address: 60605acc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNGifImage::CPNGifImage(class CPNGifImage const &) */

CPNGifImage * __thiscall CPNGifImage::CPNGifImage(CPNGifImage *this,CPNGifImage *param_1)

{
                    /* 0x15acc  70  ??0CPNGifImage@@QAE@ABV0@@Z */
  XPNGifImage::XPNGifImage((XPNGifImage *)this,(XPNGifImage *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


