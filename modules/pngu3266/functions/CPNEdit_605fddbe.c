/* Module: pngu3266.dll
   Function: CPNEdit
   Address: 605fddbe
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNEdit::CPNEdit(class CPNEdit const &) */

CPNEdit * __thiscall CPNEdit::CPNEdit(CPNEdit *this,CPNEdit *param_1)

{
                    /* 0xddbe  60  ??0CPNEdit@@QAE@ABV0@@Z */
  XPNEdit::XPNEdit((XPNEdit *)this,(XPNEdit *)param_1);
  CPNColor::CPNColor((CPNColor *)(this + 0xc0),(CPNColor *)(param_1 + 0xc0));
  CPNColor::CPNColor((CPNColor *)(this + 0xdf),(CPNColor *)(param_1 + 0xdf));
  *(undefined4 *)(this + 0xfe) = *(undefined4 *)(param_1 + 0xfe);
  *(undefined4 *)(this + 0x102) = *(undefined4 *)(param_1 + 0x102);
  *(undefined4 *)(this + 0x106) = *(undefined4 *)(param_1 + 0x106);
  *(undefined4 *)(this + 0x10a) = *(undefined4 *)(param_1 + 0x10a);
  *(undefined4 *)(this + 0x10e) = *(undefined4 *)(param_1 + 0x10e);
  this[0x112] = param_1[0x112];
  *(undefined ***)this = &_vftable_;
  return this;
}


