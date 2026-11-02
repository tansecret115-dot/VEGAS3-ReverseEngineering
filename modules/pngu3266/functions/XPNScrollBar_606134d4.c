/* Module: pngu3266.dll
   Function: XPNScrollBar
   Address: 606134d4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNScrollBar::XPNScrollBar(void) */

XPNScrollBar * __thiscall XPNScrollBar::XPNScrollBar(XPNScrollBar *this)

{
                    /* 0x234d4  269  ??0XPNScrollBar@@QAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}


