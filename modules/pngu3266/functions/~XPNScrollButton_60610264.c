/* Module: pngu3266.dll
   Function: ~XPNScrollButton
   Address: 60610264
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNScrollButton::~XPNScrollButton(void) */

void __thiscall XPNScrollButton::~XPNScrollButton(XPNScrollButton *this)

{
                    /* 0x20264  416  ??1XPNScrollButton@@MAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0xfb) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xfb))(1);
    *(undefined4 *)(this + 0xfb) = 0;
  }
  CPNButton::~CPNButton((CPNButton *)this);
  return;
}


