/* Module: pngu3266.dll
   Function: CPNText
   Address: 605f5491
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNText::CPNText(class CPNText const &) */

CPNText * __thiscall CPNText::CPNText(CPNText *this,CPNText *param_1)

{
                    /* 0x5491  146  ??0CPNText@@QAE@ABV0@@Z */
  XPNText::XPNText((XPNText *)this,(XPNText *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


