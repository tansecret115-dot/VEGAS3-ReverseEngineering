/* Module: pngu3266.dll
   Function: XPNGifImage
   Address: 60615e59
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNGifImage::XPNGifImage(void) */

XPNGifImage * __thiscall XPNGifImage::XPNGifImage(XPNGifImage *this)

{
                    /* 0x25e59  221  ??0XPNGifImage@@IAE@XZ */
  CPNImage::CPNImage((CPNImage *)this);
  *(undefined4 *)(this + 0x2a) = 0;
  *(undefined4 *)(this + 0x2e) = 0;
  this[0x432] = (XPNGifImage)0x0;
  *(undefined4 *)(this + 0x433) = 0;
  *(undefined ***)this = &_vftable_;
  memset(this + 0x32,0,0x400);
  return this;
}


