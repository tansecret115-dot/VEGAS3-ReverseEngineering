/* Module: pngu3266.dll
   Function: ~XPNGifImage
   Address: 60615e91
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNGifImage::~XPNGifImage(void) */

void __thiscall XPNGifImage::~XPNGifImage(XPNGifImage *this)

{
                    /* 0x25e91  394  ??1XPNGifImage@@MAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(void **)(this + 0x2a) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x2a));
    *(undefined4 *)(this + 0x2a) = 0;
  }
  if (*(void **)(this + 0x2e) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x2e));
    *(undefined4 *)(this + 0x2e) = 0;
  }
  CPNImage::~CPNImage((CPNImage *)this);
  return;
}


