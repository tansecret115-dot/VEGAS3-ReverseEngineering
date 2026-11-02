/* Module: pngu3266.dll
   Function: ~XPNAnimButton
   Address: 60605c32
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNAnimButton::~XPNAnimButton(void) */

void __thiscall XPNAnimButton::~XPNAnimButton(XPNAnimButton *this)

{
                    /* 0x15c32  374  ??1XPNAnimButton@@MAE@XZ */
  *(undefined ***)this = &_vftable_;
  AnimDestructor(this);
  CPNColor::~CPNColor((CPNColor *)(this + 0xff));
  CPNButton::~CPNButton((CPNButton *)this);
  return;
}


