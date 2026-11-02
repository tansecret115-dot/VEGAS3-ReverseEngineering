/* Module: pngu3266.dll
   Function: XPNPen
   Address: 6060d979
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNPen::XPNPen(class CPNColor &,long,long) */

XPNPen * __thiscall XPNPen::XPNPen(XPNPen *this,CPNColor *param_1,long param_2,long param_3)

{
                    /* 0x1d979  252  ??0XPNPen@@QAE@AAVCPNColor@@JJ@Z */
  CPNGraphicResource::CPNGraphicResource((CPNGraphicResource *)this);
  CPNColor::CPNColor((CPNColor *)(this + 0x14));
  *(undefined ***)this = &_vftable_;
  return this;
}


