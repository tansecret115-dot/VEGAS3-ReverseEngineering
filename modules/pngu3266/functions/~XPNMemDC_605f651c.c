/* Module: pngu3266.dll
   Function: ~XPNMemDC
   Address: 605f651c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNMemDC::~XPNMemDC(void) */

void __thiscall XPNMemDC::~XPNMemDC(XPNMemDC *this)

{
                    /* 0x651c  401  ??1XPNMemDC@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNDC::~CPNDC((CPNDC *)this);
  return;
}


