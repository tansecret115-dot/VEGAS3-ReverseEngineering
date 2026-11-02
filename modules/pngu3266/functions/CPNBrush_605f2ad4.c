/* Module: pngu3266.dll
   Function: CPNBrush
   Address: 605f2ad4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNBrush::CPNBrush(void) */

CPNBrush * __thiscall CPNBrush::CPNBrush(CPNBrush *this)

{
                    /* 0x2ad4  17  ??0CPNBrush@@QAE@XZ */
  XPNBrush::XPNBrush((XPNBrush *)this);
  *(undefined4 *)(this + 0x2f) = 0;
  *(undefined4 *)(this + 0x33) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


