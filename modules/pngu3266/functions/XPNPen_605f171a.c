/* Module: pngu3266.dll
   Function: XPNPen
   Address: 605f171a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNPen::XPNPen(class XPNPen const &) */

XPNPen * __thiscall XPNPen::XPNPen(XPNPen *this,XPNPen *param_1)

{
  undefined4 uVar1;
  
                    /* 0x171a  253  ??0XPNPen@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &CPNObject::_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &CPNGraphicResource::_vftable_;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  CPNColor::CPNColor((CPNColor *)(this + 0x14),(CPNColor *)(param_1 + 0x14));
  *(undefined4 *)(this + 0x33) = *(undefined4 *)(param_1 + 0x33);
  *(undefined4 *)(this + 0x37) = *(undefined4 *)(param_1 + 0x37);
  *(undefined4 *)(this + 0x3b) = *(undefined4 *)(param_1 + 0x3b);
  *(undefined4 *)(this + 0x3f) = *(undefined4 *)(param_1 + 0x3f);
  *(undefined ***)this = &_vftable_;
  return this;
}


