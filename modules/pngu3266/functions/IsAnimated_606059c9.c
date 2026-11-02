/* Module: pngu3266.dll
   Function: IsAnimated
   Address: 606059c9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall XPNGifImage::IsAnimated(void) */

int __thiscall XPNGifImage::IsAnimated(XPNGifImage *this)

{
                    /* 0x159c9  1492  ?IsAnimated@XPNGifImage@@QAEHXZ */
  return *(int *)(this + 0x433);
}


