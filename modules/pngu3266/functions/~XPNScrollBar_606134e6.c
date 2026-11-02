/* Module: pngu3266.dll
   Function: ~XPNScrollBar
   Address: 606134e6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNScrollBar::~XPNScrollBar(void) */

void __thiscall XPNScrollBar::~XPNScrollBar(XPNScrollBar *this)

{
                    /* 0x234e6  415  ??1XPNScrollBar@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


