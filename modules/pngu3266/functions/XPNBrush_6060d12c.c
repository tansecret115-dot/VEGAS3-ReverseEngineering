/* Module: pngu3266.dll
   Function: XPNBrush
   Address: 6060d12c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNBrush::XPNBrush(class CPNColor &,long) */

XPNBrush * __thiscall XPNBrush::XPNBrush(XPNBrush *this,CPNColor *param_1,long param_2)

{
                    /* 0x1d12c  189  ??0XPNBrush@@IAE@AAVCPNColor@@J@Z */
  CPNGraphicResource::CPNGraphicResource((CPNGraphicResource *)this);
  *(long *)(this + 0xc) = param_2;
  CPNColor::CPNColor((CPNColor *)(this + 0x10),param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


