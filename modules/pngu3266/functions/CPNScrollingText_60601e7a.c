/* Module: pngu3266.dll
   Function: CPNScrollingText
   Address: 60601e7a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNScrollingText::CPNScrollingText(void) */

CPNScrollingText * __thiscall CPNScrollingText::CPNScrollingText(CPNScrollingText *this)

{
                    /* 0x11e7a  140  ??0CPNScrollingText@@QAE@XZ */
  XPNScrollingText::XPNScrollingText((XPNScrollingText *)this);
  *(undefined4 *)(this + 0x13e) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


