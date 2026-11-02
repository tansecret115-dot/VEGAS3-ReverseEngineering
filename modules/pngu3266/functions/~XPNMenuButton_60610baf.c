/* Module: pngu3266.dll
   Function: ~XPNMenuButton
   Address: 60610baf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNMenuButton::~XPNMenuButton(void) */

void __thiscall XPNMenuButton::~XPNMenuButton(XPNMenuButton *this)

{
                    /* 0x20baf  403  ??1XPNMenuButton@@MAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0xc0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xc0))(1);
  }
  *(undefined4 *)(this + 0xc0) = 0;
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


