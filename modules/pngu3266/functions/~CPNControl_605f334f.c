/* Module: pngu3266.dll
   Function: ~CPNControl
   Address: 605f334f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNControl::~CPNControl(void) */

void __thiscall CPNControl::~CPNControl(CPNControl *this)

{
                    /* 0x334f  320  ??1CPNControl@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNControl::~XPNControl((XPNControl *)this);
  return;
}


