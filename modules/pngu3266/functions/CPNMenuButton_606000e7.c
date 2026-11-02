/* Module: pngu3266.dll
   Function: CPNMenuButton
   Address: 606000e7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNMenuButton::CPNMenuButton(class CPNMenuButton const &) */

CPNMenuButton * __thiscall CPNMenuButton::CPNMenuButton(CPNMenuButton *this,CPNMenuButton *param_1)

{
                    /* 0x100e7  96  ??0CPNMenuButton@@QAE@ABV0@@Z */
  XPNMenuButton::XPNMenuButton((XPNMenuButton *)this,(XPNMenuButton *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


