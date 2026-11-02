/* Module: pngu3266.dll
   Function: ~CPNScrollButton
   Address: 6060a6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNScrollButton::~CPNScrollButton(void) */

void __thiscall CPNScrollButton::~CPNScrollButton(CPNScrollButton *this)

{
                    /* 0x1a6f0  361  ??1CPNScrollButton@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNScrollButton::~XPNScrollButton((XPNScrollButton *)this);
  return;
}


