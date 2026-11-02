/* Module: pngu3266.dll
   Function: XPNImageSlider
   Address: 60606a63
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNImageSlider::XPNImageSlider(class XPNImageSlider const &) */

XPNImageSlider * __thiscall
XPNImageSlider::XPNImageSlider(XPNImageSlider *this,XPNImageSlider *param_1)

{
                    /* 0x16a63  231  ??0XPNImageSlider@@QAE@ABV0@@Z */
  XPNSlider::XPNSlider((XPNSlider *)this,(XPNSlider *)param_1);
  *(undefined4 *)(this + 0x183) = *(undefined4 *)(param_1 + 0x183);
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
  *(undefined ***)this = &_vftable_;
  return this;
}


