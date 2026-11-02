/* Module: pngu3266.dll
   Function: XPNImageButton
   Address: 6060fd0d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNImageButton::XPNImageButton(void) */

XPNImageButton * __thiscall XPNImageButton::XPNImageButton(XPNImageButton *this)

{
                    /* 0x1fd0d  229  ??0XPNImageButton@@IAE@XZ */
  CPNButton::CPNButton((CPNButton *)this);
  *(undefined4 *)(this + 0xfb) = 0;
  *(undefined4 *)(this + 0xff) = 0;
  *(undefined4 *)(this + 0x103) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


