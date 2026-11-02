/* Module: pngu3266.dll
   Function: XPNButton
   Address: 6060c6aa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNButton::XPNButton(void) */

XPNButton * __thiscall XPNButton::XPNButton(XPNButton *this)

{
                    /* 0x1c6aa  193  ??0XPNButton@@QAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined4 *)(this + 0xc0) = 0;
  *(int *)(this + 0xc4) = g_bMouseOnlyBorder;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  CPNColor::CPNColor((CPNColor *)(this + 0xd8),0xf);
  *(undefined4 *)(this + 0xf7) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


