/* Module: pngu3266.dll
   Function: CPNControl
   Address: 605f3336
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNControl::CPNControl(void) */

CPNControl * __thiscall CPNControl::CPNControl(CPNControl *this)

{
                    /* 0x3336  42  ??0CPNControl@@QAE@XZ */
  XPNControl::XPNControl((XPNControl *)this);
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


