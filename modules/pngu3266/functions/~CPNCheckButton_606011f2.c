/* Module: pngu3266.dll
   Function: ~CPNCheckButton
   Address: 606011f2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNCheckButton::~CPNCheckButton(void) */

void __thiscall CPNCheckButton::~CPNCheckButton(CPNCheckButton *this)

{
                    /* 0x111f2  313  ??1CPNCheckButton@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNCheckButton::~XPNCheckButton((XPNCheckButton *)this);
  return;
}


