/* Module: pngu3266.dll
   Function: ~XPNText
   Address: 605f53ef
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNText::~XPNText(void) */

void __thiscall XPNText::~XPNText(XPNText *this)

{
                    /* 0x53ef  420  ??1XPNText@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


