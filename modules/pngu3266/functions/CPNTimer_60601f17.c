/* Module: pngu3266.dll
   Function: CPNTimer
   Address: 60601f17
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNTimer::CPNTimer(unsigned long,int,class CPNTimer * *) */

CPNTimer * __thiscall
CPNTimer::CPNTimer(CPNTimer *this,ulong param_1,int param_2,CPNTimer **param_3)

{
                    /* 0x11f17  151  ??0CPNTimer@@QAE@KHPAPAV0@@Z */
  XPNTimer::XPNTimer((XPNTimer *)this,param_1,param_2,(XPNTimer **)param_3);
  *(undefined ***)this = &_vftable__for__IRMACallback__;
  *(undefined ***)(this + 4) = &_vftable__for__CPNObject__;
  return this;
}


