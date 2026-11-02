/* Module: pngu3266.dll
   Function: ~CPNSlider
   Address: 605fc59b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNSlider::~CPNSlider(void) */

void __thiscall CPNSlider::~CPNSlider(CPNSlider *this)

{
                    /* 0xc59b  364  ??1CPNSlider@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNSlider::~XPNSlider((XPNSlider *)this);
  return;
}


