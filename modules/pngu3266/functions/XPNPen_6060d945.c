/* Module: pngu3266.dll
   Function: XPNPen
   Address: 6060d945
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNPen::XPNPen(void) */

XPNPen * __thiscall XPNPen::XPNPen(XPNPen *this)

{
                    /* 0x1d945  254  ??0XPNPen@@QAE@XZ */
  CPNGraphicResource::CPNGraphicResource((CPNGraphicResource *)this);
  CPNColor::CPNColor((CPNColor *)(this + 0x14));
  *(undefined ***)this = &_vftable_;
  return this;
}


