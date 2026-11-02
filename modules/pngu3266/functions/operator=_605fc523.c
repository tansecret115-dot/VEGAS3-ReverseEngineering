/* Module: pngu3266.dll
   Function: operator=
   Address: 605fc523
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNSlider & __thiscall CPNSlider::operator=(class CPNSlider &) */

CPNSlider * __thiscall CPNSlider::operator=(CPNSlider *this,CPNSlider *param_1)

{
                    /* 0xc523  493  ??4CPNSlider@@QAEAAV0@AAV0@@Z */
  XPNSlider::operator=((XPNSlider *)this,(XPNSlider *)param_1);
  return this;
}


