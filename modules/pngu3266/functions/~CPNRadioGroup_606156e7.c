/* Module: pngu3266.dll
   Function: ~CPNRadioGroup
   Address: 606156e7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNRadioGroup::~CPNRadioGroup(void) */

void __thiscall CPNRadioGroup::~CPNRadioGroup(CPNRadioGroup *this)

{
                    /* 0x256e7  356  ??1CPNRadioGroup@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  FUN_60619a50((undefined4 *)(this + 8));
  thunk_FUN_60619a50((undefined4 *)(this + 8));
  CPNRouter::~CPNRouter((CPNRouter *)this);
  return;
}


