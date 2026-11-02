/* Module: pngu3266.dll
   Function: CPNEvent
   Address: 60607803
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNEvent::CPNEvent(class CPNEvent const &) */

CPNEvent * __thiscall CPNEvent::CPNEvent(CPNEvent *this,CPNEvent *param_1)

{
                    /* 0x17803  62  ??0CPNEvent@@QAE@ABV0@@Z */
  CPNObject::CPNObject((CPNObject *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return this;
}


