/* Module: pngu3266.dll
   Function: GetSliderRange
   Address: 6060de13
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNSlider::GetSliderRange(long &,long &)const  */

void __thiscall XPNSlider::GetSliderRange(XPNSlider *this,long *param_1,long *param_2)

{
                    /* 0x1de13  1360  ?GetSliderRange@XPNSlider@@QBEXAAJ0@Z */
  *param_1 = *(int *)(this + 0xc4) + *(int *)(this + 0xcc);
  *param_2 = *(int *)(this + 200) + *(int *)(this + 0xcc);
  return;
}


