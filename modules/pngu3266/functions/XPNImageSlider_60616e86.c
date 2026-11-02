/* Module: pngu3266.dll
   Function: XPNImageSlider
   Address: 60616e86
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNImageSlider::XPNImageSlider(void) */

XPNImageSlider * __thiscall XPNImageSlider::XPNImageSlider(XPNImageSlider *this)

{
                    /* 0x26e86  232  ??0XPNImageSlider@@QAE@XZ */
  XPNSlider::XPNSlider((XPNSlider *)this);
  *(undefined4 *)(this + 0x183) = 0;
  *(undefined4 *)(this + 399) = 0;
  *(undefined ***)this = &_vftable_;
  InitTrackImageOffsetArray(this);
  InitThumbImageOffsetArray(this);
  return this;
}


