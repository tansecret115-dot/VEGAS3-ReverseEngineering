/* Module: pngu3266.dll
   Function: XPNCustomText
   Address: 6060bca3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNCustomText::XPNCustomText(void) */

XPNCustomText * __thiscall XPNCustomText::XPNCustomText(XPNCustomText *this)

{
                    /* 0x1bca3  207  ??0XPNCustomText@@QAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined4 *)(this + 0xc0) = 0;
  FUN_60618d40(this + 0xc4,&DAT_60649ac0);
  CPNColor::CPNColor((CPNColor *)(this + 0xd0),0x12);
  CPNColor::CPNColor((CPNColor *)(this + 0xef),0xf);
  *(undefined4 *)(this + 0x10e) = 0;
  CPNColor::CPNColor((CPNColor *)(this + 0x112));
  *(undefined4 *)(this + 0x131) = 0;
  *(undefined4 *)(this + 0x135) = 0;
  *(undefined4 *)(this + 0x139) = 0;
  *(undefined4 *)(this + 0x13d) = 0;
  *(undefined4 *)(this + 0x141) = 0;
  *(undefined4 *)(this + 0x145) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


