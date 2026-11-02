/* Module: pngu3266.dll
   Function: XPNArrowButton
   Address: 6061570f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNArrowButton::XPNArrowButton(void) */

XPNArrowButton * __thiscall XPNArrowButton::XPNArrowButton(XPNArrowButton *this)

{
                    /* 0x2570f  179  ??0XPNArrowButton@@IAE@XZ */
  CPNButton::CPNButton((CPNButton *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}


