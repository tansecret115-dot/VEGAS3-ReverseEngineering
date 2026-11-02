/* Module: pngu3266.dll
   Function: ~XPNClientDC
   Address: 605fc5b8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNClientDC::~XPNClientDC(void) */

void __thiscall XPNClientDC::~XPNClientDC(XPNClientDC *this)

{
                    /* 0xc5b8  383  ??1XPNClientDC@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNDC::~CPNDC((CPNDC *)this);
  return;
}


