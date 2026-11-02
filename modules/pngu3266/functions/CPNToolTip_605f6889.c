/* Module: pngu3266.dll
   Function: CPNToolTip
   Address: 605f6889
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNToolTip::CPNToolTip(class CPNToolTip const &) */

CPNToolTip * __thiscall CPNToolTip::CPNToolTip(CPNToolTip *this,CPNToolTip *param_1)

{
                    /* 0x6889  155  ??0CPNToolTip@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined ***)this = &_vftable_;
  return this;
}


