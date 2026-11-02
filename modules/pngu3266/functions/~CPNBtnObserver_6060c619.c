/* Module: pngu3266.dll
   Function: ~CPNBtnObserver
   Address: 6060c619
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNBtnObserver::~CPNBtnObserver(void) */

void __thiscall CPNBtnObserver::~CPNBtnObserver(CPNBtnObserver *this)

{
                    /* 0x1c619  311  ??1CPNBtnObserver@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNRouter::~CPNRouter((CPNRouter *)this);
  return;
}


