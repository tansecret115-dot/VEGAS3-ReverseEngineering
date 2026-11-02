/* Module: pngu3266.dll
   Function: CPNImageSlider
   Address: 60606be9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNImageSlider::CPNImageSlider(class CPNImageSlider const &) */

CPNImageSlider * __thiscall
CPNImageSlider::CPNImageSlider(CPNImageSlider *this,CPNImageSlider *param_1)

{
                    /* 0x16be9  86  ??0CPNImageSlider@@QAE@ABV0@@Z */
  XPNImageSlider::XPNImageSlider((XPNImageSlider *)this,(XPNImageSlider *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


