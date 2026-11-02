/* Module: pngu3266.dll
   Function: CPNGifImage
   Address: 60605b4a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNGifImage::CPNGifImage(void) */

CPNGifImage * __thiscall CPNGifImage::CPNGifImage(CPNGifImage *this)

{
                    /* 0x15b4a  71  ??0CPNGifImage@@QAE@XZ */
  XPNGifImage::XPNGifImage((XPNGifImage *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}


