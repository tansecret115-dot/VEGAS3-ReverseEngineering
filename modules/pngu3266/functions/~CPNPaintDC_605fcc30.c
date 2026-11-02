/* Module: pngu3266.dll
   Function: ~CPNPaintDC
   Address: 605fcc30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNPaintDC::~CPNPaintDC(void) */

void __thiscall CPNPaintDC::~CPNPaintDC(CPNPaintDC *this)

{
                    /* 0xcc30  349  ??1CPNPaintDC@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNDC::CleanupDefaultTools((CPNDC *)this);
  EndPaint(*(HWND *)(this + 0x1d3),(PAINTSTRUCT *)(this + 0x1df));
  *(undefined ***)this = &XPNPaintDC::_vftable_;
  CPNDC::~CPNDC((CPNDC *)this);
  return;
}


