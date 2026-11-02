/* Module: pngu3266.dll
   Function: ~CPNButton
   Address: 605f365a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNButton::~CPNButton(void) */

void __thiscall CPNButton::~CPNButton(CPNButton *this)

{
                    /* 0x365a  312  ??1CPNButton@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNButton::~XPNButton((XPNButton *)this);
  return;
}


