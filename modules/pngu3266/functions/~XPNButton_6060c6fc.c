/* Module: pngu3266.dll
   Function: ~XPNButton
   Address: 6060c6fc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNButton::~XPNButton(void) */

void __thiscall XPNButton::~XPNButton(XPNButton *this)

{
                    /* 0x1c6fc  381  ??1XPNButton@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0xd0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xd0))(1);
  }
  if (*(undefined4 **)(this + 0xd4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xd4))(1);
  }
  CPNColor::~CPNColor((CPNColor *)(this + 0xd8));
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


