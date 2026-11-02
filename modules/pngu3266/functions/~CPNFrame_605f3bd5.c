/* Module: pngu3266.dll
   Function: ~CPNFrame
   Address: 605f3bd5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNFrame::~CPNFrame(void) */

void __thiscall CPNFrame::~CPNFrame(CPNFrame *this)

{
                    /* 0x3bd5  331  ??1CPNFrame@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNFrame::~XPNFrame((XPNFrame *)this);
  return;
}


