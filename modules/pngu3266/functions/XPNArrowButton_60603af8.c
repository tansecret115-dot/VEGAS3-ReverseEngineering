/* Module: pngu3266.dll
   Function: XPNArrowButton
   Address: 60603af8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNArrowButton::XPNArrowButton(class XPNArrowButton const &) */

XPNArrowButton * __thiscall
XPNArrowButton::XPNArrowButton(XPNArrowButton *this,XPNArrowButton *param_1)

{
                    /* 0x13af8  180  ??0XPNArrowButton@@QAE@ABV0@@Z */
  XPNButton::XPNButton((XPNButton *)this,(XPNButton *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


