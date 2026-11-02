/* Module: pngu3266.dll
   Function: ~CPNScrollBar
   Address: 60602996
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNScrollBar::~CPNScrollBar(void) */

void __thiscall CPNScrollBar::~CPNScrollBar(CPNScrollBar *this)

{
                    /* 0x12996  360  ??1CPNScrollBar@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNScrollBar::~XPNScrollBar((XPNScrollBar *)this);
  return;
}


