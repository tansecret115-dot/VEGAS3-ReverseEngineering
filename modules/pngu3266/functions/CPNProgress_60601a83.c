/* Module: pngu3266.dll
   Function: CPNProgress
   Address: 60601a83
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNProgress::CPNProgress(void) */

CPNProgress * __thiscall CPNProgress::CPNProgress(CPNProgress *this)

{
                    /* 0x11a83  116  ??0CPNProgress@@QAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}


