/* Module: pngu3266.dll
   Function: CPNTimer
   Address: 60601f3e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNTimer::CPNTimer(void) */

CPNTimer * __thiscall CPNTimer::CPNTimer(CPNTimer *this)

{
                    /* 0x11f3e  152  ??0CPNTimer@@QAE@XZ */
  XPNTimer::XPNTimer((XPNTimer *)this);
  *(undefined ***)this = &_vftable__for__IRMACallback__;
  *(undefined ***)(this + 4) = &_vftable__for__CPNObject__;
  return this;
}


