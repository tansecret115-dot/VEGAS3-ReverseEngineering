/* Module: pngu3266.dll
   Function: XPNMenuButton
   Address: 60610b85
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNMenuButton::XPNMenuButton(void) */

XPNMenuButton * __thiscall XPNMenuButton::XPNMenuButton(XPNMenuButton *this)

{
                    /* 0x20b85  240  ??0XPNMenuButton@@IAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 200) = 0xffff;
  return this;
}


