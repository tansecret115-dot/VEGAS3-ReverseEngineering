/* Module: pngu3266.dll
   Function: ~CPNText
   Address: 605f550d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNText::~CPNText(void) */

void __thiscall CPNText::~CPNText(CPNText *this)

{
                    /* 0x550d  366  ??1CPNText@@UAE@XZ */
  *(undefined ***)this = &XPNText::_vftable_;
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


