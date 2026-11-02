/* Module: pngu3266.dll
   Function: XPNWindowDC
   Address: 605f63f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNWindowDC::XPNWindowDC(class XPNWindowDC const &) */

XPNWindowDC * __thiscall XPNWindowDC::XPNWindowDC(XPNWindowDC *this,XPNWindowDC *param_1)

{
                    /* 0x63f0  293  ??0XPNWindowDC@@QAE@ABV0@@Z */
  CPNDC::CPNDC((CPNDC *)this,(CPNDC *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


