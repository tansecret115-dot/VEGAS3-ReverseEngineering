/* Module: pngu3266.dll
   Function: ~CPNImageSlider
   Address: 60606bde
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNImageSlider::~CPNImageSlider(void) */

void __thiscall CPNImageSlider::~CPNImageSlider(CPNImageSlider *this)

{
                    /* 0x16bde  340  ??1CPNImageSlider@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNImageSlider::~XPNImageSlider((XPNImageSlider *)this);
  return;
}


