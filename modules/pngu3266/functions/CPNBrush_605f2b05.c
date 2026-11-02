/* Module: pngu3266.dll
   Function: CPNBrush
   Address: 605f2b05
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNBrush::CPNBrush(class CPNColor &,long) */

CPNBrush * __thiscall CPNBrush::CPNBrush(CPNBrush *this,CPNColor *param_1,long param_2)

{
                    /* 0x2b05  15  ??0CPNBrush@@QAE@AAVCPNColor@@J@Z */
  XPNBrush::XPNBrush((XPNBrush *)this,param_1,param_2);
  *(undefined4 *)(this + 0x2f) = 0;
  *(undefined4 *)(this + 0x33) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


