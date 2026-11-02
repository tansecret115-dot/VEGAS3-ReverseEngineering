/* Module: pngu3266.dll
   Function: ~XPNImage
   Address: 606101a8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNImage::~XPNImage(void) */

void __thiscall XPNImage::~XPNImage(XPNImage *this)

{
                    /* 0x201a8  397  ??1XPNImage@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNGraphicResource::~CPNGraphicResource((CPNGraphicResource *)this);
  return;
}


