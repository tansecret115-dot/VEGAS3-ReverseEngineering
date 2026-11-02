/* Module: pngu3266.dll
   Function: XPNClientDC
   Address: 605fc5c3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNClientDC::XPNClientDC(class XPNClientDC const &) */

XPNClientDC * __thiscall XPNClientDC::XPNClientDC(XPNClientDC *this,XPNClientDC *param_1)

{
                    /* 0xc5c3  196  ??0XPNClientDC@@QAE@ABV0@@Z */
  CPNDC::CPNDC((CPNDC *)this,(CPNDC *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


