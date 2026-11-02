/* Module: pngu3266.dll
   Function: operator=
   Address: 605f2598
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNTimer & __thiscall CPNTimer::operator=(class CPNTimer const &) */

CPNTimer * __thiscall CPNTimer::operator=(CPNTimer *this,CPNTimer *param_1)

{
                    /* 0x2598  498  ??4CPNTimer@@QAEAAV0@ABV0@@Z */
  XPNTimer::operator=((XPNTimer *)this,(XPNTimer *)param_1);
  return this;
}


