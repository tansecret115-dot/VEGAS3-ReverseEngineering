/* Module: pngu3266.dll
   Function: operator=
   Address: 605f3ff5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNColor & __thiscall CPNColor::operator=(class CPNColor const &) */

CPNColor * __thiscall CPNColor::operator=(CPNColor *this,CPNColor *param_1)

{
                    /* 0x3ff5  442  ??4CPNColor@@QAEAAV0@ABV0@@Z */
  this[0x1c] = param_1[0x1c];
  this[0x1e] = param_1[0x1e];
  this[0x1d] = param_1[0x1d];
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


