/* Module: pngu3266.dll
   Function: ~XPNDC
   Address: 6060d277
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNDC::~XPNDC(void) */

void __thiscall XPNDC::~XPNDC(XPNDC *this)

{
                    /* 0x1d277  389  ??1XPNDC@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNColor::~CPNColor((CPNColor *)(this + 0x168));
  CPNColor::~CPNColor((CPNColor *)(this + 0x149));
  CPNRegion::~CPNRegion((CPNRegion *)(this + 0x135));
  CPNFont::~CPNFont((CPNFont *)(this + 0x101));
  CPNBitmapImage::~CPNBitmapImage((CPNBitmapImage *)(this + 0xce));
  CPNBrush::~CPNBrush((CPNBrush *)(this + 0x97));
  CPNPen::~CPNPen((CPNPen *)(this + 0x2c));
  CPNObject::~CPNObject((CPNObject *)this);
  return;
}


