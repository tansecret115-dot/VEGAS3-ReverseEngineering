/* Module: pngu3266.dll
   Function: CPNArrowButton
   Address: 60603b76
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNArrowButton::CPNArrowButton(class CPNArrowButton const &) */

CPNArrowButton * __thiscall
CPNArrowButton::CPNArrowButton(CPNArrowButton *this,CPNArrowButton *param_1)

{
                    /* 0x13b76  5  ??0CPNArrowButton@@QAE@ABV0@@Z */
  XPNButton::XPNButton((XPNButton *)this,(XPNButton *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


