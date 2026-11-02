/* Module: pngu3266.dll
   Function: ~XPNArrowButton
   Address: 60615721
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNArrowButton::~XPNArrowButton(void) */

void __thiscall XPNArrowButton::~XPNArrowButton(XPNArrowButton *this)

{
                    /* 0x25721  376  ??1XPNArrowButton@@MAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNButton::~CPNButton((CPNButton *)this);
  return;
}


