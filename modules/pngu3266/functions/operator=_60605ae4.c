/* Module: pngu3266.dll
   Function: operator=
   Address: 60605ae4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNGifImage & __thiscall CPNGifImage::operator=(class CPNGifImage const &) */

CPNGifImage * __thiscall CPNGifImage::operator=(CPNGifImage *this,CPNGifImage *param_1)

{
                    /* 0x15ae4  458  ??4CPNGifImage@@QAEAAV0@ABV0@@Z */
  XPNGifImage::operator=((XPNGifImage *)this,(XPNGifImage *)param_1);
  return this;
}


