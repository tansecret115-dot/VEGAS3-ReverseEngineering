/* Module: pngu3266.dll
   Function: CPNColor
   Address: 605f3f3a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNColor::CPNColor(void) */

CPNColor * __thiscall CPNColor::CPNColor(CPNColor *this)

{
                    /* 0x3f3a  32  ??0CPNColor@@QAE@XZ */
  CPNObject::CPNObject((CPNObject *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x1e] = (CPNColor)0x0;
  this[0x1d] = (CPNColor)0x0;
  this[0x1c] = (CPNColor)0x0;
  return this;
}


