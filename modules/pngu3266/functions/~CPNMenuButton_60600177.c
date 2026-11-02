/* Module: pngu3266.dll
   Function: ~CPNMenuButton
   Address: 60600177
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNMenuButton::~CPNMenuButton(void) */

void __thiscall CPNMenuButton::~CPNMenuButton(CPNMenuButton *this)

{
                    /* 0x10177  344  ??1CPNMenuButton@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNMenuButton::~XPNMenuButton((XPNMenuButton *)this);
  return;
}


