/* Module: pngu3266.dll
   Function: CPNColor
   Address: 605f162c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNColor::CPNColor(unsigned long &) */

CPNColor * __thiscall CPNColor::CPNColor(CPNColor *this,ulong *param_1)

{
                    /* 0x162c  28  ??0CPNColor@@QAE@AAK@Z */
  CPNObject::CPNObject((CPNObject *)this);
  *(undefined ***)this = &_vftable_;
  *(ulong *)(this + 8) = *param_1;
  this[0x1c] = *(CPNColor *)param_1;
  this[0x1e] = *(CPNColor *)((int)param_1 + 1);
  this[0x1d] = SUB41(*param_1 >> 0x10,0);
  return this;
}


