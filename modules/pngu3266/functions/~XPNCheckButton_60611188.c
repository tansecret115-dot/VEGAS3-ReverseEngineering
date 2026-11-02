/* Module: pngu3266.dll
   Function: ~XPNCheckButton
   Address: 60611188
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNCheckButton::~XPNCheckButton(void) */

void __thiscall XPNCheckButton::~XPNCheckButton(XPNCheckButton *this)

{
                    /* 0x21188  382  ??1XPNCheckButton@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


