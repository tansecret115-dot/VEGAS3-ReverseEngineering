/* Module: pngu3266.dll
   Function: ~XPNCustomButton
   Address: 60613620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNCustomButton::~XPNCustomButton(void) */

void __thiscall XPNCustomButton::~XPNCustomButton(XPNCustomButton *this)

{
                    /* 0x23620  387  ??1XPNCustomButton@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  FUN_60618cd0((int *)(this + 0xfb));
  CPNButton::~CPNButton((CPNButton *)this);
  return;
}


