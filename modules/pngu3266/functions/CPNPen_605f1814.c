/* Module: pngu3266.dll
   Function: CPNPen
   Address: 605f1814
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNPen::CPNPen(class CPNPen const &) */

CPNPen * __thiscall CPNPen::CPNPen(CPNPen *this,CPNPen *param_1)

{
                    /* 0x1814  111  ??0CPNPen@@QAE@ABV0@@Z */
  XPNPen::XPNPen((XPNPen *)this,(XPNPen *)param_1);
  *(undefined4 *)(this + 0x43) = *(undefined4 *)(param_1 + 0x43);
  *(undefined4 *)(this + 0x47) = *(undefined4 *)(param_1 + 0x47);
  *(undefined4 *)(this + 0x4b) = *(undefined4 *)(param_1 + 0x4b);
  *(undefined4 *)(this + 0x4f) = *(undefined4 *)(param_1 + 0x4f);
  *(undefined4 *)(this + 0x53) = *(undefined4 *)(param_1 + 0x53);
  *(undefined4 *)(this + 0x57) = *(undefined4 *)(param_1 + 0x57);
  *(undefined4 *)(this + 0x5b) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)(this + 0x5f) = *(undefined4 *)(param_1 + 0x5f);
  *(undefined4 *)(this + 99) = *(undefined4 *)(param_1 + 99);
  *(undefined4 *)(this + 0x67) = *(undefined4 *)(param_1 + 0x67);
  *(undefined ***)this = &_vftable_;
  return this;
}


