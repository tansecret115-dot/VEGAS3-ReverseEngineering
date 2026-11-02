/* Module: pngu3266.dll
   Function: ~CPNGifImage
   Address: 60605b5c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNGifImage::~CPNGifImage(void) */

void __thiscall CPNGifImage::~CPNGifImage(CPNGifImage *this)

{
                    /* 0x15b5c  332  ??1CPNGifImage@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (((*(int *)(this + 8) == 0) && (*(int *)(this + 0x18) == 0)) &&
     (*(HGDIOBJ *)(this + 0x14) != (HGDIOBJ)0x0)) {
    DeleteObject(*(HGDIOBJ *)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
  }
  XPNGifImage::~XPNGifImage((XPNGifImage *)this);
  return;
}


