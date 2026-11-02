/* Module: pngu3266.dll
   Function: operator=
   Address: 60606c01
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNImageSlider & __thiscall CPNImageSlider::operator=(class CPNImageSlider &) */

CPNImageSlider * __thiscall CPNImageSlider::operator=(CPNImageSlider *this,CPNImageSlider *param_1)

{
                    /* 0x16c01  466  ??4CPNImageSlider@@QAEAAV0@AAV0@@Z */
  XPNImageSlider::operator=((XPNImageSlider *)this,(XPNImageSlider *)param_1);
  return this;
}


