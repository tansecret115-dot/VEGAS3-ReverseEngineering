/* Module: pngu3266.dll
   Function: XPNScrollButton
   Address: 6061024b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNScrollButton::XPNScrollButton(void) */

XPNScrollButton * __thiscall XPNScrollButton::XPNScrollButton(XPNScrollButton *this)

{
                    /* 0x2024b  270  ??0XPNScrollButton@@IAE@XZ */
  CPNButton::CPNButton((CPNButton *)this);
  *(undefined4 *)(this + 0xfb) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


