/* Module: pngu3266.dll
   Function: GetSliderRange
   Address: 605fc17f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall XPNSlider::GetSliderRange(void) */

long __thiscall XPNSlider::GetSliderRange(XPNSlider *this)

{
                    /* 0xc17f  1359  ?GetSliderRange@XPNSlider@@QAEJXZ */
  return *(int *)(this + 200) - *(int *)(this + 0xc4);
}


