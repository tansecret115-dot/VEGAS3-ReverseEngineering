/* Module: pngu3266.dll
   Function: CPNSlider
   Address: 605fc50b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNSlider::CPNSlider(class CPNSlider const &) */

CPNSlider * __thiscall CPNSlider::CPNSlider(CPNSlider *this,CPNSlider *param_1)

{
                    /* 0xc50b  141  ??0CPNSlider@@QAE@ABV0@@Z */
  XPNSlider::XPNSlider((XPNSlider *)this,(XPNSlider *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


