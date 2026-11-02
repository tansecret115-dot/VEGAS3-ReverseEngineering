/* Module: pngu3266.dll
   Function: ~XPNRegion
   Address: 6060fce5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNRegion::~XPNRegion(void) */

void __thiscall XPNRegion::~XPNRegion(XPNRegion *this)

{
                    /* 0x1fce5  413  ??1XPNRegion@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNGraphicResource::~CPNGraphicResource((CPNGraphicResource *)this);
  return;
}


