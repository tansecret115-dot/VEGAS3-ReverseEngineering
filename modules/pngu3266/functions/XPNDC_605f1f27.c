/* Module: pngu3266.dll
   Function: XPNDC
   Address: 605f1f27
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNDC::XPNDC(class XPNDC const &) */

XPNDC * __thiscall XPNDC::XPNDC(XPNDC *this,XPNDC *param_1)

{
  undefined4 uVar1;
  
                    /* 0x1f27  209  ??0XPNDC@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &CPNObject::_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  CPNPen::CPNPen((CPNPen *)(this + 0x2c),(CPNPen *)(param_1 + 0x2c));
  XPNBrush::XPNBrush((XPNBrush *)(this + 0x97),(XPNBrush *)(param_1 + 0x97));
  *(undefined4 *)(this + 0xc6) = *(undefined4 *)(param_1 + 0xc6);
  *(undefined4 *)(this + 0xca) = *(undefined4 *)(param_1 + 0xca);
  *(undefined ***)(this + 0x97) = &CPNBrush::_vftable_;
  CPNBitmapImage::CPNBitmapImage((CPNBitmapImage *)(this + 0xce),(CPNBitmapImage *)(param_1 + 0xce))
  ;
  XPNFont::XPNFont((XPNFont *)(this + 0x101),(XPNFont *)(param_1 + 0x101));
  *(undefined4 *)(this + 0x12d) = *(undefined4 *)(param_1 + 0x12d);
  *(undefined4 *)(this + 0x131) = *(undefined4 *)(param_1 + 0x131);
  *(undefined ***)(this + 0x101) = &CPNFont::_vftable_;
  CPNRegion::CPNRegion((CPNRegion *)(this + 0x135),(CPNRegion *)(param_1 + 0x135));
  CPNColor::CPNColor((CPNColor *)(this + 0x149),(CPNColor *)(param_1 + 0x149));
  CPNColor::CPNColor((CPNColor *)(this + 0x168),(CPNColor *)(param_1 + 0x168));
  *(undefined4 *)(this + 0x187) = *(undefined4 *)(param_1 + 0x187);
  *(undefined4 *)(this + 0x18b) = *(undefined4 *)(param_1 + 0x18b);
  *(undefined4 *)(this + 399) = *(undefined4 *)(param_1 + 399);
  *(undefined4 *)(this + 0x193) = *(undefined4 *)(param_1 + 0x193);
  *(undefined4 *)(this + 0x197) = *(undefined4 *)(param_1 + 0x197);
  *(undefined4 *)(this + 0x19b) = *(undefined4 *)(param_1 + 0x19b);
  *(undefined4 *)(this + 0x19f) = *(undefined4 *)(param_1 + 0x19f);
  *(undefined4 *)(this + 0x1a3) = *(undefined4 *)(param_1 + 0x1a3);
  *(undefined4 *)(this + 0x1a7) = *(undefined4 *)(param_1 + 0x1a7);
  *(undefined4 *)(this + 0x1ab) = *(undefined4 *)(param_1 + 0x1ab);
  *(undefined4 *)(this + 0x1af) = *(undefined4 *)(param_1 + 0x1af);
  *(undefined4 *)(this + 0x1b3) = *(undefined4 *)(param_1 + 0x1b3);
  *(undefined ***)this = &_vftable_;
  return this;
}


