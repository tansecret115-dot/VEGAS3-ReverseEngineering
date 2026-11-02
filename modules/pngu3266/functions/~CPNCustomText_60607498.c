/* Module: pngu3266.dll
   Function: ~CPNCustomText
   Address: 60607498
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNCustomText::~CPNCustomText(void) */

void __thiscall CPNCustomText::~CPNCustomText(CPNCustomText *this)

{
                    /* 0x17498  324  ??1CPNCustomText@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNCustomText::~XPNCustomText((XPNCustomText *)this);
  return;
}


