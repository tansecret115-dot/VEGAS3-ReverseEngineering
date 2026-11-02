/* Module: pngu3266.dll
   Function: XPNImageButton
   Address: 605fd107
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNImageButton::XPNImageButton(class XPNImageButton const &) */

XPNImageButton * __thiscall
XPNImageButton::XPNImageButton(XPNImageButton *this,XPNImageButton *param_1)

{
                    /* 0xd107  230  ??0XPNImageButton@@QAE@ABV0@@Z */
  XPNButton::XPNButton((XPNButton *)this,(XPNButton *)param_1);
  *(undefined ***)this = &CPNButton::_vftable_;
  *(undefined4 *)(this + 0xfb) = *(undefined4 *)(param_1 + 0xfb);
  *(undefined4 *)(this + 0xff) = *(undefined4 *)(param_1 + 0xff);
  *(undefined4 *)(this + 0x103) = *(undefined4 *)(param_1 + 0x103);
  *(undefined ***)this = &_vftable_;
  return this;
}


