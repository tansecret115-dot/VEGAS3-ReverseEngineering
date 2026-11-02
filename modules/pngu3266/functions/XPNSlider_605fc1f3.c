/* Module: pngu3266.dll
   Function: XPNSlider
   Address: 605fc1f3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNSlider::XPNSlider(class XPNSlider const &) */

XPNSlider * __thiscall XPNSlider::XPNSlider(XPNSlider *this,XPNSlider *param_1)

{
  undefined4 uVar1;
  
                    /* 0xc1f3  274  ??0XPNSlider@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNControl::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined ***)this = &CPNControl::_vftable_;
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(this + 0xe8) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  CPNColor::CPNColor((CPNColor *)(this + 0xf8),(CPNColor *)(param_1 + 0xf8));
  CPNRegion::CPNRegion((CPNRegion *)(this + 0x117),(CPNRegion *)(param_1 + 0x117));
  *(undefined4 *)(this + 299) = *(undefined4 *)(param_1 + 299);
  *(undefined4 *)(this + 0x12f) = *(undefined4 *)(param_1 + 0x12f);
  *(undefined4 *)(this + 0x133) = *(undefined4 *)(param_1 + 0x133);
  *(undefined4 *)(this + 0x137) = *(undefined4 *)(param_1 + 0x137);
  *(undefined4 *)(this + 0x13b) = *(undefined4 *)(param_1 + 0x13b);
  *(undefined4 *)(this + 0x13f) = *(undefined4 *)(param_1 + 0x13f);
  *(undefined4 *)(this + 0x143) = *(undefined4 *)(param_1 + 0x143);
  *(undefined4 *)(this + 0x147) = *(undefined4 *)(param_1 + 0x147);
  *(undefined4 *)(this + 0x14b) = *(undefined4 *)(param_1 + 0x14b);
  *(undefined4 *)(this + 0x14f) = *(undefined4 *)(param_1 + 0x14f);
  CPNRegion::CPNRegion((CPNRegion *)(this + 0x153),(CPNRegion *)(param_1 + 0x153));
  CPNRegion::CPNRegion((CPNRegion *)(this + 0x167),(CPNRegion *)(param_1 + 0x167));
  *(undefined4 *)(this + 0x17b) = *(undefined4 *)(param_1 + 0x17b);
  *(undefined4 *)(this + 0x17f) = *(undefined4 *)(param_1 + 0x17f);
  *(undefined ***)this = &_vftable_;
  return this;
}


