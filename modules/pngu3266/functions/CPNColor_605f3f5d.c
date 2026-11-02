/* Module: pngu3266.dll
   Function: CPNColor
   Address: 605f3f5d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNColor::CPNColor(unsigned char,unsigned char,unsigned char) */

CPNColor * __thiscall CPNColor::CPNColor(CPNColor *this,uchar param_1,uchar param_2,uchar param_3)

{
                    /* 0x3f5d  30  ??0CPNColor@@QAE@EEE@Z */
  CPNObject::CPNObject((CPNObject *)this);
  this[0x1c] = (CPNColor)param_1;
  *(undefined ***)this = &_vftable_;
  this[0x1e] = (CPNColor)param_2;
  this[0x1d] = (CPNColor)param_3;
  *(undefined4 *)(this + 0xc) = 1;
  *(uint *)(this + 8) = (uint)CONCAT21(CONCAT11(param_3,param_2),param_1);
  return this;
}


