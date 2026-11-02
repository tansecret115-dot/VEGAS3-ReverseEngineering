/* Module: pngu3266.dll
   Function: XPNClientDC
   Address: 605fc5a6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNClientDC::XPNClientDC(void) */

XPNClientDC * __thiscall XPNClientDC::XPNClientDC(XPNClientDC *this)

{
                    /* 0xc5a6  197  ??0XPNClientDC@@QAE@XZ */
  CPNDC::CPNDC((CPNDC *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}


