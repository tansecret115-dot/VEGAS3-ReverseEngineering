/* Module: pngu3266.dll
   Function: XPNMemDC
   Address: 605f6527
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNMemDC::XPNMemDC(class XPNMemDC const &) */

XPNMemDC * __thiscall XPNMemDC::XPNMemDC(XPNMemDC *this,XPNMemDC *param_1)

{
                    /* 0x6527  235  ??0XPNMemDC@@QAE@ABV0@@Z */
  CPNDC::CPNDC((CPNDC *)this,(CPNDC *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


