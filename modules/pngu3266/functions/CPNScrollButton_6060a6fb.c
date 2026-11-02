/* Module: pngu3266.dll
   Function: CPNScrollButton
   Address: 6060a6fb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNScrollButton::CPNScrollButton(class CPNScrollButton const &) */

CPNScrollButton * __thiscall
CPNScrollButton::CPNScrollButton(CPNScrollButton *this,CPNScrollButton *param_1)

{
                    /* 0x1a6fb  135  ??0CPNScrollButton@@QAE@ABV0@@Z */
  XPNButton::XPNButton((XPNButton *)this,(XPNButton *)param_1);
  *(undefined ***)this = &CPNButton::_vftable_;
  *(undefined4 *)(this + 0xfb) = *(undefined4 *)(param_1 + 0xfb);
  *(undefined ***)this = &_vftable_;
  return this;
}


