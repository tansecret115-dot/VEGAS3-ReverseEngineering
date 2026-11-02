/* Module: pngu3266.dll
   Function: SetSliderRange
   Address: 6060dd60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNSlider::SetSliderRange(long,long) */

void __thiscall XPNSlider::SetSliderRange(XPNSlider *this,long param_1,long param_2)

{
  long lVar1;
  
                    /* 0x1dd60  2005  ?SetSliderRange@XPNSlider@@QAEXJJ@Z */
  *(undefined4 *)(this + 0xc4) = 0;
  *(long *)(this + 0xcc) = param_1;
  *(long *)(this + 200) = param_2 - param_1;
  lVar1 = GetSlidableDistance(this);
  *(double *)(this + 0xe0) = (double)(param_2 - param_1) / (double)lVar1;
  return;
}


