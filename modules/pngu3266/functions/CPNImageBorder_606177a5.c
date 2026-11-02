/* Module: pngu3266.dll
   Function: CPNImageBorder
   Address: 606177a5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNImageBorder::CPNImageBorder(class CPNImageBorder const &) */

CPNImageBorder * __thiscall
CPNImageBorder::CPNImageBorder(CPNImageBorder *this,CPNImageBorder *param_1)

{
                    /* 0x277a5  80  ??0CPNImageBorder@@QAE@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  CPNColor::CPNColor((CPNColor *)(this + 0x20),(CPNColor *)(param_1 + 0x20));
  *(undefined ***)this = &_vftable_;
  return this;
}


