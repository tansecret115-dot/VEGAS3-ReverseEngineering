/* Module: pngu3266.dll
   Function: ~CPNClientDC
   Address: 605fc6fc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNClientDC::~CPNClientDC(void) */

void __thiscall CPNClientDC::~CPNClientDC(CPNClientDC *this)

{
                    /* 0xc6fc  315  ??1CPNClientDC@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNDC::CleanupDefaultTools((CPNDC *)this);
  ReleaseDC(*(HWND *)(this + 0x1df),*(HDC *)(this + 0x1cf));
  *(undefined ***)this = &XPNClientDC::_vftable_;
  CPNDC::~CPNDC((CPNDC *)this);
  return;
}


