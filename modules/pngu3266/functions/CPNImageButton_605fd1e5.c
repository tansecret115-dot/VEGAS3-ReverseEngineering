/* Module: pngu3266.dll
   Function: CPNImageButton
   Address: 605fd1e5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNImageButton::CPNImageButton(class CPNImageButton const &) */

CPNImageButton * __thiscall
CPNImageButton::CPNImageButton(CPNImageButton *this,CPNImageButton *param_1)

{
                    /* 0xd1e5  82  ??0CPNImageButton@@QAE@ABV0@@Z */
  XPNButton::XPNButton((XPNButton *)this,(XPNButton *)param_1);
  *(undefined ***)this = &CPNButton::_vftable_;
  *(undefined4 *)(this + 0xfb) = *(undefined4 *)(param_1 + 0xfb);
  *(undefined4 *)(this + 0xff) = *(undefined4 *)(param_1 + 0xff);
  *(undefined4 *)(this + 0x103) = *(undefined4 *)(param_1 + 0x103);
  *(undefined ***)this = &XPNImageButton::_vftable_;
  *(undefined4 *)(this + 0x107) = *(undefined4 *)(param_1 + 0x107);
  *(undefined4 *)(this + 0x10b) = *(undefined4 *)(param_1 + 0x10b);
  *(undefined4 *)(this + 0x10f) = *(undefined4 *)(param_1 + 0x10f);
  *(undefined4 *)(this + 0x113) = *(undefined4 *)(param_1 + 0x113);
  *(undefined4 *)(this + 0x117) = *(undefined4 *)(param_1 + 0x117);
  *(undefined4 *)(this + 0x11b) = *(undefined4 *)(param_1 + 0x11b);
  *(undefined4 *)(this + 0x11f) = *(undefined4 *)(param_1 + 0x11f);
  *(undefined4 *)(this + 0x123) = *(undefined4 *)(param_1 + 0x123);
  *(undefined ***)this = &_vftable_;
  return this;
}


