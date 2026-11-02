/* Module: pngu3266.dll
   Function: ~CPNTimer
   Address: 60601f57
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall CPNTimer::~CPNTimer(void) */

void __thiscall CPNTimer::~CPNTimer(CPNTimer *this)

{
                    /* 0x11f57  368  ??1CPNTimer@@MAE@XZ */
  *(undefined ***)(this + -4) = &_vftable__for__IRMACallback__;
  *(undefined ***)this = &_vftable__for__CPNObject__;
  XPNTimer::~XPNTimer((XPNTimer *)this);
  return;
}


