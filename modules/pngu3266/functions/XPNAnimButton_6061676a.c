/* Module: pngu3266.dll
   Function: XPNAnimButton
   Address: 6061676a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNAnimButton::XPNAnimButton(void) */

XPNAnimButton * __thiscall XPNAnimButton::XPNAnimButton(XPNAnimButton *this)

{
                    /* 0x2676a  175  ??0XPNAnimButton@@IAE@XZ */
  CPNButton::CPNButton((CPNButton *)this);
  *(undefined4 *)(this + 0xfb) = 0;
  CPNColor::CPNColor((CPNColor *)(this + 0xff),0xf);
  *(undefined4 *)(this + 0x11e) = 0;
  *(undefined4 *)(this + 0x122) = 0;
  *(undefined4 *)(this + 0x126) = 0;
  *(undefined4 *)(this + 0x12a) = 0;
  *(undefined4 *)(this + 0x12e) = 0;
  *(undefined4 *)(this + 0x132) = 0;
  *(undefined4 *)(this + 0x136) = 0;
  *(undefined4 *)(this + 0x13a) = 0;
  *(undefined4 *)(this + 0x13e) = 0;
  *(undefined4 *)(this + 0x142) = 0;
  *(undefined4 *)(this + 0x146) = 0;
  *(undefined4 *)(this + 0x14a) = 0;
  *(undefined4 *)(this + 0x14e) = 0;
  *(undefined4 *)(this + 0x152) = 0;
  *(undefined4 *)(this + 0x156) = 0;
  *(undefined4 *)(this + 0x15a) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


