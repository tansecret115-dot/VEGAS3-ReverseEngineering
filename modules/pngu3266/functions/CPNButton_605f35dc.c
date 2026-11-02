/* Module: pngu3266.dll
   Function: CPNButton
   Address: 605f35dc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNButton::CPNButton(class CPNButton const &) */

CPNButton * __thiscall CPNButton::CPNButton(CPNButton *this,CPNButton *param_1)

{
                    /* 0x35dc  20  ??0CPNButton@@QAE@ABV0@@Z */
  XPNButton::XPNButton((XPNButton *)this,(XPNButton *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


