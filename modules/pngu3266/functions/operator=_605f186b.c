/* Module: pngu3266.dll
   Function: operator=
   Address: 605f186b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNPen & __thiscall CPNPen::operator=(class CPNPen const &) */

CPNPen * __thiscall CPNPen::operator=(CPNPen *this,CPNPen *param_1)

{
                    /* 0x186b  478  ??4CPNPen@@QAEAAV0@ABV0@@Z */
  XPNPen::operator=((XPNPen *)this,(XPNPen *)param_1);
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
  return this;
}


