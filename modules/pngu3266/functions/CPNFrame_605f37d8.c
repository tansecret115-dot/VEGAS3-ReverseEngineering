/* Module: pngu3266.dll
   Function: CPNFrame
   Address: 605f37d8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNFrame::CPNFrame(class CPNFrame const &) */

CPNFrame * __thiscall CPNFrame::CPNFrame(CPNFrame *this,CPNFrame *param_1)

{
                    /* 0x37d8  68  ??0CPNFrame@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined ***)this = &XPNFrame::_vftable_;
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined ***)this = &_vftable_;
  return this;
}


