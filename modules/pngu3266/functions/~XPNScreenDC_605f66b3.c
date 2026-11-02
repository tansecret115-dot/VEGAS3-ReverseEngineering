/* Module: pngu3266.dll
   Function: ~XPNScreenDC
   Address: 605f66b3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNScreenDC::~XPNScreenDC(void) */

void __thiscall XPNScreenDC::~XPNScreenDC(XPNScreenDC *this)

{
                    /* 0x66b3  414  ??1XPNScreenDC@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNDC::~CPNDC((CPNDC *)this);
  return;
}


