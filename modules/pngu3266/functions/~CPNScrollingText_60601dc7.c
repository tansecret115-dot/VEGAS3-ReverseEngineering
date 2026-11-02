/* Module: pngu3266.dll
   Function: ~CPNScrollingText
   Address: 60601dc7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNScrollingText::~CPNScrollingText(void) */

void __thiscall CPNScrollingText::~CPNScrollingText(CPNScrollingText *this)

{
                    /* 0x11dc7  363  ??1CPNScrollingText@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNScrollingText::~XPNScrollingText((XPNScrollingText *)this);
  return;
}


