/* Module: pngu3266.dll
   Function: ~CPNWindowDC
   Address: 605fbc33
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNWindowDC::~CPNWindowDC(void) */

void __thiscall CPNWindowDC::~CPNWindowDC(CPNWindowDC *this)

{
                    /* 0xbc33  373  ??1CPNWindowDC@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNDC::CleanupDefaultTools((CPNDC *)this);
  ReleaseDC(*(HWND *)(this + 0x1df),*(HDC *)(this + 0x1cf));
  *(undefined ***)this = &XPNWindowDC::_vftable_;
  CPNDC::~CPNDC((CPNDC *)this);
  return;
}


