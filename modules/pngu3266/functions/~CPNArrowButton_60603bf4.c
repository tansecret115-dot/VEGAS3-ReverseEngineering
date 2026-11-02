/* Module: pngu3266.dll
   Function: ~CPNArrowButton
   Address: 60603bf4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNArrowButton::~CPNArrowButton(void) */

void __thiscall CPNArrowButton::~CPNArrowButton(CPNArrowButton *this)

{
                    /* 0x13bf4  306  ??1CPNArrowButton@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNArrowButton::~XPNArrowButton((XPNArrowButton *)this);
  return;
}


