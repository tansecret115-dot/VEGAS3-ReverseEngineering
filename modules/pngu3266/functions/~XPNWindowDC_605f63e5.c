/* Module: pngu3266.dll
   Function: ~XPNWindowDC
   Address: 605f63e5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNWindowDC::~XPNWindowDC(void) */

void __thiscall XPNWindowDC::~XPNWindowDC(XPNWindowDC *this)

{
                    /* 0x63e5  427  ??1XPNWindowDC@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNDC::~CPNDC((CPNDC *)this);
  return;
}


