/* Module: pngu3266.dll
   Function: ~XPNPen
   Address: 6060d95f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNPen::~XPNPen(void) */

void __thiscall XPNPen::~XPNPen(XPNPen *this)

{
                    /* 0x1d95f  408  ??1XPNPen@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNColor::~CPNColor((CPNColor *)(this + 0x14));
  CPNGraphicResource::~CPNGraphicResource((CPNGraphicResource *)this);
  return;
}


