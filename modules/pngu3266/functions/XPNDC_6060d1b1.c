/* Module: pngu3266.dll
   Function: XPNDC
   Address: 6060d1b1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNDC::XPNDC(void) */

XPNDC * __thiscall XPNDC::XPNDC(XPNDC *this)

{
                    /* 0x1d1b1  210  ??0XPNDC@@QAE@XZ */
  CPNObject::CPNObject((CPNObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  CPNPen::CPNPen((CPNPen *)(this + 0x2c));
  CPNBrush::CPNBrush((CPNBrush *)(this + 0x97));
  CPNBitmapImage::CPNBitmapImage((CPNBitmapImage *)(this + 0xce));
  CPNFont::CPNFont((CPNFont *)(this + 0x101));
  CPNRegion::CPNRegion((CPNRegion *)(this + 0x135));
  CPNColor::CPNColor((CPNColor *)(this + 0x149));
  CPNColor::CPNColor((CPNColor *)(this + 0x168));
  *(undefined4 *)(this + 0x193) = 0xffffffff;
  *(undefined4 *)(this + 0x187) = 0;
  *(undefined4 *)(this + 0x18b) = 0;
  *(undefined4 *)(this + 399) = 0;
  *(undefined4 *)(this + 0x197) = 0;
  *(undefined4 *)(this + 0x19b) = 0;
  *(undefined4 *)(this + 0x19f) = 0;
  *(undefined4 *)(this + 0x1a3) = 0;
  *(undefined4 *)(this + 0x1ab) = 0;
  *(undefined4 *)(this + 0x1a7) = 2;
  *(undefined4 *)(this + 0x1af) = 1;
  *(undefined ***)this = &_vftable_;
  return this;
}


