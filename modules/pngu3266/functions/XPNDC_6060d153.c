/* Module: pngu3266.dll
   Function: XPNDC
   Address: 6060d153
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: __thiscall XPNDC::XPNDC(void * &) */

XPNDC * __thiscall XPNDC::XPNDC(XPNDC *this,void **param_1)

{
                    /* 0x1d153  208  ??0XPNDC@@AAE@AAPAX@Z */
  CPNObject::CPNObject((CPNObject *)this);
  CPNPen::CPNPen((CPNPen *)(this + 0x2c));
  CPNBrush::CPNBrush((CPNBrush *)(this + 0x97));
  CPNBitmapImage::CPNBitmapImage((CPNBitmapImage *)(this + 0xce));
  CPNFont::CPNFont((CPNFont *)(this + 0x101));
  CPNRegion::CPNRegion((CPNRegion *)(this + 0x135));
  CPNColor::CPNColor((CPNColor *)(this + 0x149));
  CPNColor::CPNColor((CPNColor *)(this + 0x168));
  *(undefined ***)this = &_vftable_;
  return this;
}


