/* Module: pngu3266.dll
   Function: CPNBtnObserver
   Address: 6060c5fa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNBtnObserver::CPNBtnObserver(class XPNButton *) */

CPNBtnObserver * __thiscall CPNBtnObserver::CPNBtnObserver(CPNBtnObserver *this,XPNButton *param_1)

{
                    /* 0x1c5fa  19  ??0CPNBtnObserver@@QAE@PAVXPNButton@@@Z */
  CPNRouter::CPNRouter((CPNRouter *)this);
  *(undefined4 *)(this + 0x10) = 0;
  *(XPNButton **)(this + 8) = param_1;
  *(undefined ***)this = &_vftable_;
  return this;
}


