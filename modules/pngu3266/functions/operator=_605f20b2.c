/* Module: pngu3266.dll
   Function: operator=
   Address: 605f20b2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNDC & __thiscall XPNDC::operator=(class XPNDC &) */

XPNDC * __thiscall XPNDC::operator=(XPNDC *this,XPNDC *param_1)

{
                    /* 0x20b2  521  ??4XPNDC@@QAEAAV0@AAV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  CPNPen::operator=((CPNPen *)(this + 0x2c),(CPNPen *)(param_1 + 0x2c));
  XPNBrush::operator=((XPNBrush *)(this + 0x97),(XPNBrush *)(param_1 + 0x97));
  *(undefined4 *)(this + 0xc6) = *(undefined4 *)(param_1 + 0xc6);
  *(undefined4 *)(this + 0xca) = *(undefined4 *)(param_1 + 0xca);
  CPNBitmapImage::operator=((CPNBitmapImage *)(this + 0xce),(CPNBitmapImage *)(param_1 + 0xce));
  (**(code **)(*(int *)(this + 0x101) + 0x28))(param_1 + 0x101);
  CPNRegion::operator=((CPNRegion *)(this + 0x135),(CPNRegion *)(param_1 + 0x135));
  CPNColor::operator=((CPNColor *)(this + 0x149),(CPNColor *)(param_1 + 0x149));
  CPNColor::operator=((CPNColor *)(this + 0x168),(CPNColor *)(param_1 + 0x168));
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
  return this;
}


