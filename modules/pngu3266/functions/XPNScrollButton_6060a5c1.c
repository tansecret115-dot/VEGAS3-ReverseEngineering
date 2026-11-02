/* Module: pngu3266.dll
   Function: XPNScrollButton
   Address: 6060a5c1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNScrollButton::XPNScrollButton(class XPNScrollButton const &) */

XPNScrollButton * __thiscall
XPNScrollButton::XPNScrollButton(XPNScrollButton *this,XPNScrollButton *param_1)

{
                    /* 0x1a5c1  271  ??0XPNScrollButton@@QAE@ABV0@@Z */
  XPNButton::XPNButton((XPNButton *)this,(XPNButton *)param_1);
  *(undefined ***)this = &CPNButton::_vftable_;
  *(undefined4 *)(this + 0xfb) = *(undefined4 *)(param_1 + 0xfb);
  *(undefined ***)this = &_vftable_;
  return this;
}


