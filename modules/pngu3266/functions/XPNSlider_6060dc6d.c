/* Module: pngu3266.dll
   Function: XPNSlider
   Address: 6060dc6d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNSlider::XPNSlider(void) */

XPNSlider * __thiscall XPNSlider::XPNSlider(XPNSlider *this)

{
                    /* 0x1dc6d  275  ??0XPNSlider@@QAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 1;
  CPNColor::CPNColor((CPNColor *)(this + 0xf8),0xf);
  CPNRegion::CPNRegion((CPNRegion *)(this + 0x117));
  *(undefined4 *)(this + 0x13b) = 0;
  *(undefined4 *)(this + 0x13f) = 0;
  *(undefined4 *)(this + 0x143) = 0;
  *(undefined4 *)(this + 0x147) = 0;
  *(undefined4 *)(this + 0x14b) = 0;
  *(undefined4 *)(this + 0x14f) = 0;
  CPNRegion::CPNRegion((CPNRegion *)(this + 0x153));
  CPNRegion::CPNRegion((CPNRegion *)(this + 0x167));
  *(undefined4 *)(this + 0x17f) = 0;
  *(undefined4 *)(this + 0x17b) = 3;
  *(undefined ***)this = &_vftable_;
  return this;
}


