/* Module: pngu3266.dll
   Function: ~XPNPaintDC
   Address: 605fca16
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNPaintDC::~XPNPaintDC(void) */

void __thiscall XPNPaintDC::~XPNPaintDC(XPNPaintDC *this)

{
                    /* 0xca16  407  ??1XPNPaintDC@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNDC::~CPNDC((CPNDC *)this);
  return;
}


