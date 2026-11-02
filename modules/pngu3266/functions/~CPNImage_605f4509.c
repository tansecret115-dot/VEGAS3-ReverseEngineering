/* Module: pngu3266.dll
   Function: ~CPNImage
   Address: 605f4509
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNImage::~CPNImage(void) */

void __thiscall CPNImage::~CPNImage(CPNImage *this)

{
                    /* 0x4509  336  ??1CPNImage@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNImage::~XPNImage((XPNImage *)this);
  return;
}


