/* Module: pngu3266.dll
   Function: ~XPNBrush
   Address: 6060d112
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNBrush::~XPNBrush(void) */

void __thiscall XPNBrush::~XPNBrush(XPNBrush *this)

{
                    /* 0x1d112  380  ??1XPNBrush@@MAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNColor::~CPNColor((CPNColor *)(this + 0x10));
  CPNGraphicResource::~CPNGraphicResource((CPNGraphicResource *)this);
  return;
}


