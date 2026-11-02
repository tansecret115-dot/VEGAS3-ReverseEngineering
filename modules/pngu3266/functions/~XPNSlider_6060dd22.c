/* Module: pngu3266.dll
   Function: ~XPNSlider
   Address: 6060dd22
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNSlider::~XPNSlider(void) */

void __thiscall XPNSlider::~XPNSlider(XPNSlider *this)

{
                    /* 0x1dd22  418  ??1XPNSlider@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNRegion::~CPNRegion((CPNRegion *)(this + 0x167));
  CPNRegion::~CPNRegion((CPNRegion *)(this + 0x153));
  CPNRegion::~CPNRegion((CPNRegion *)(this + 0x117));
  CPNColor::~CPNColor((CPNColor *)(this + 0xf8));
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


