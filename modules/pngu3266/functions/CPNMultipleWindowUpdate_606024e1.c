/* Module: pngu3266.dll
   Function: CPNMultipleWindowUpdate
   Address: 606024e1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNMultipleWindowUpdate::CPNMultipleWindowUpdate(void) */

CPNMultipleWindowUpdate * __thiscall
CPNMultipleWindowUpdate::CPNMultipleWindowUpdate(CPNMultipleWindowUpdate *this)

{
                    /* 0x124e1  101  ??0CPNMultipleWindowUpdate@@QAE@XZ */
  XPNMultipleWindowUpdate::XPNMultipleWindowUpdate((XPNMultipleWindowUpdate *)this);
  CMap<>(this + 4,10);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


