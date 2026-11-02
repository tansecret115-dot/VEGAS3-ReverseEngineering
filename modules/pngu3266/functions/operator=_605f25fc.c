/* Module: pngu3266.dll
   Function: operator=
   Address: 605f25fc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNEvent & __thiscall CPNEvent::operator=(class CPNEvent const &) */

CPNEvent * __thiscall CPNEvent::operator=(CPNEvent *this,CPNEvent *param_1)

{
                    /* 0x25fc  455  ??4CPNEvent@@QAEAAV0@ABV0@@Z
                       0x25fc  524  ??4XPNFont@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return this;
}


