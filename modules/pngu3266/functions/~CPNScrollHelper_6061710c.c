/* Module: pngu3266.dll
   Function: ~CPNScrollHelper
   Address: 6061710c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNScrollHelper::~CPNScrollHelper(void) */

void __thiscall CPNScrollHelper::~CPNScrollHelper(CPNScrollHelper *this)

{
                    /* 0x2710c  362  ??1CPNScrollHelper@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(XPNTimer **)(this + 0x3c) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0x3c),0);
  }
  CPNRouter::~CPNRouter((CPNRouter *)this);
  return;
}


