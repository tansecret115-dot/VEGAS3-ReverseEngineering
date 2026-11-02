/* Module: pngu3266.dll
   Function: ~XPNBitmapDC
   Address: 6060394e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNBitmapDC::~XPNBitmapDC(void) */

void __thiscall XPNBitmapDC::~XPNBitmapDC(XPNBitmapDC *this)

{
                    /* 0x1394e  377  ??1XPNBitmapDC@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNDC::~CPNDC((CPNDC *)this);
  return;
}


