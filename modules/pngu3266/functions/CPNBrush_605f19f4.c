/* Module: pngu3266.dll
   Function: CPNBrush
   Address: 605f19f4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNBrush::CPNBrush(class CPNBrush const &) */

CPNBrush * __thiscall CPNBrush::CPNBrush(CPNBrush *this,CPNBrush *param_1)

{
                    /* 0x19f4  16  ??0CPNBrush@@QAE@ABV0@@Z */
  XPNBrush::XPNBrush((XPNBrush *)this,(XPNBrush *)param_1);
  *(undefined4 *)(this + 0x2f) = *(undefined4 *)(param_1 + 0x2f);
  *(undefined4 *)(this + 0x33) = *(undefined4 *)(param_1 + 0x33);
  *(undefined ***)this = &_vftable_;
  return this;
}


