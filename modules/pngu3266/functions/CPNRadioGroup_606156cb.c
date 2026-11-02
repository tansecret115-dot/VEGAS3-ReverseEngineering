/* Module: pngu3266.dll
   Function: CPNRadioGroup
   Address: 606156cb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNRadioGroup::CPNRadioGroup(void) */

CPNRadioGroup * __thiscall CPNRadioGroup::CPNRadioGroup(CPNRadioGroup *this)

{
                    /* 0x256cb  126  ??0CPNRadioGroup@@QAE@XZ */
  CPNRouter::CPNRouter((CPNRouter *)this);
  FUN_6061ff50(this + 8,10);
  *(undefined ***)this = &_vftable_;
  return this;
}


