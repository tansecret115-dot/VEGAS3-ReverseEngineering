/* Module: pngu3266.dll
   Function: XPNBrush
   Address: 605f190a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNBrush::XPNBrush(class XPNBrush const &) */

XPNBrush * __thiscall XPNBrush::XPNBrush(XPNBrush *this,XPNBrush *param_1)

{
  undefined4 uVar1;
  
                    /* 0x190a  191  ??0XPNBrush@@QAE@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &CPNObject::_vftable_;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &CPNGraphicResource::_vftable_;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  CPNColor::CPNColor((CPNColor *)(this + 0x10),(CPNColor *)(param_1 + 0x10));
  *(undefined ***)this = &_vftable_;
  return this;
}


