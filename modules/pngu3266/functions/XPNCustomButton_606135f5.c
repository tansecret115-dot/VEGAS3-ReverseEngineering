/* Module: pngu3266.dll
   Function: XPNCustomButton
   Address: 606135f5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNCustomButton::XPNCustomButton(void) */

XPNCustomButton * __thiscall XPNCustomButton::XPNCustomButton(XPNCustomButton *this)

{
                    /* 0x235f5  205  ??0XPNCustomButton@@QAE@XZ */
  CPNButton::CPNButton((CPNButton *)this);
  FUN_60618bb0((undefined4 *)(this + 0xfb));
  *(undefined4 *)(this + 0x107) = 0;
  *(undefined4 *)(this + 0x10b) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


