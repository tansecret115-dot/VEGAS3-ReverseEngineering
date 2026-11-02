/* Module: pngu3266.dll
   Function: XPNBrush
   Address: 6060d0f1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNBrush::XPNBrush(void) */

XPNBrush * __thiscall XPNBrush::XPNBrush(XPNBrush *this)

{
                    /* 0x1d0f1  190  ??0XPNBrush@@IAE@XZ */
  CPNGraphicResource::CPNGraphicResource((CPNGraphicResource *)this);
  *(undefined4 *)(this + 0xc) = 8;
  CPNColor::CPNColor((CPNColor *)(this + 0x10));
  *(undefined ***)this = &_vftable_;
  return this;
}


