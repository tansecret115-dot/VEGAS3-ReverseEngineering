/* Module: pngu3266.dll
   Function: ~CPNProgress
   Address: 60601a95
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNProgress::~CPNProgress(void) */

void __thiscall CPNProgress::~CPNProgress(CPNProgress *this)

{
                    /* 0x11a95  352  ??1CPNProgress@@UAE@XZ
                       0x11a95  410  ??1XPNProgress@@MAE@XZ */
  *(undefined ***)this = &XPNProgress::_vftable_;
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


