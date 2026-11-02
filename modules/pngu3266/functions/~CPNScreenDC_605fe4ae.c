/* Module: pngu3266.dll
   Function: ~CPNScreenDC
   Address: 605fe4ae
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNScreenDC::~CPNScreenDC(void) */

void __thiscall CPNScreenDC::~CPNScreenDC(CPNScreenDC *this)

{
                    /* 0xe4ae  359  ??1CPNScreenDC@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNDC::CleanupDefaultTools((CPNDC *)this);
  DeleteDC(*(HDC *)(this + 0x1cf));
  *(undefined ***)this = &XPNScreenDC::_vftable_;
  CPNDC::~CPNDC((CPNDC *)this);
  return;
}


