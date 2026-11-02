/* Module: pngu3266.dll
   Function: CPNCustomFrame
   Address: 605f3a15
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNCustomFrame::CPNCustomFrame(class CPNCustomFrame const &) */

void __thiscall CPNCustomFrame::CPNCustomFrame(CPNCustomFrame *this,CPNCustomFrame *param_1)

{
  undefined4 uVar1;
  
                    /* 0x3a15  45  ??0CPNCustomFrame@@QAE@ABV0@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined ***)this = &CPNObject::_vftable_;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined ***)this = &_vftable_;
  return;
}


