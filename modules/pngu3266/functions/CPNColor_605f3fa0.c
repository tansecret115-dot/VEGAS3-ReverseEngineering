/* Module: pngu3266.dll
   Function: CPNColor
   Address: 605f3fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNColor::CPNColor(int) */

CPNColor * __thiscall CPNColor::CPNColor(CPNColor *this,int param_1)

{
                    /* 0x3fa0  31  ??0CPNColor@@QAE@H@Z */
  CPNObject::CPNObject((CPNObject *)this);
  *(undefined ***)this = &_vftable_;
  SetToSystemColor(this,param_1);
  return this;
}


