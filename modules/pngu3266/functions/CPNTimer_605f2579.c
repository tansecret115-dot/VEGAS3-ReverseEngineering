/* Module: pngu3266.dll
   Function: CPNTimer
   Address: 605f2579
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNTimer::CPNTimer(class CPNTimer const &) */

CPNTimer * __thiscall CPNTimer::CPNTimer(CPNTimer *this,CPNTimer *param_1)

{
                    /* 0x2579  150  ??0CPNTimer@@QAE@ABV0@@Z */
  XPNTimer::XPNTimer((XPNTimer *)this,(XPNTimer *)param_1);
  *(undefined ***)this = &_vftable__for__IRMACallback__;
  *(undefined ***)(this + 4) = &_vftable__for__CPNObject__;
  return this;
}


