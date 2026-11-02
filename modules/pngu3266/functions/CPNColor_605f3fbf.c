/* Module: pngu3266.dll
   Function: CPNColor
   Address: 605f3fbf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNColor::CPNColor(class CPNColor const &) */

CPNColor * __thiscall CPNColor::CPNColor(CPNColor *this,CPNColor *param_1)

{
                    /* 0x3fbf  29  ??0CPNColor@@QAE@ABV0@@Z */
  CPNObject::CPNObject((CPNObject *)this);
  *(undefined ***)this = &_vftable_;
  this[0x1c] = param_1[0x1c];
  this[0x1e] = param_1[0x1e];
  this[0x1d] = param_1[0x1d];
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


