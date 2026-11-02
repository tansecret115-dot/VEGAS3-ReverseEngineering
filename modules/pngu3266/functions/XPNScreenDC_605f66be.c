/* Module: pngu3266.dll
   Function: XPNScreenDC
   Address: 605f66be
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNScreenDC::XPNScreenDC(class XPNScreenDC const &) */

XPNScreenDC * __thiscall XPNScreenDC::XPNScreenDC(XPNScreenDC *this,XPNScreenDC *param_1)

{
                    /* 0x66be  266  ??0XPNScreenDC@@QAE@ABV0@@Z */
  CPNDC::CPNDC((CPNDC *)this,(CPNDC *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


