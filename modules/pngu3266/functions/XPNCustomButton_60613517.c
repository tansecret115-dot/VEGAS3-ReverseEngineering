/* Module: pngu3266.dll
   Function: XPNCustomButton
   Address: 60613517
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNCustomButton::XPNCustomButton(class XPNCustomButton const &) */

XPNCustomButton * __thiscall
XPNCustomButton::XPNCustomButton(XPNCustomButton *this,XPNCustomButton *param_1)

{
                    /* 0x23517  204  ??0XPNCustomButton@@QAE@ABV0@@Z */
  XPNButton::XPNButton((XPNButton *)this,(XPNButton *)param_1);
  *(undefined ***)this = &CPNButton::_vftable_;
  FUN_60618bd0(this + 0xfb,(int *)(param_1 + 0xfb));
  *(undefined4 *)(this + 0x107) = *(undefined4 *)(param_1 + 0x107);
  *(undefined4 *)(this + 0x10b) = *(undefined4 *)(param_1 + 0x10b);
  *(undefined ***)this = &_vftable_;
  return this;
}


