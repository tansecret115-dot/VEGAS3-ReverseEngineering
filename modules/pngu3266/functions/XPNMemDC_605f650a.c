/* Module: pngu3266.dll
   Function: XPNMemDC
   Address: 605f650a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNMemDC::XPNMemDC(void) */

XPNMemDC * __thiscall XPNMemDC::XPNMemDC(XPNMemDC *this)

{
                    /* 0x650a  236  ??0XPNMemDC@@QAE@XZ */
  CPNDC::CPNDC((CPNDC *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}


