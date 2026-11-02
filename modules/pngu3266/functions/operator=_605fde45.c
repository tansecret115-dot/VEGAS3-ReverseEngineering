/* Module: pngu3266.dll
   Function: operator=
   Address: 605fde45
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNEdit & __thiscall CPNEdit::operator=(class CPNEdit const &) */

CPNEdit * __thiscall CPNEdit::operator=(CPNEdit *this,CPNEdit *param_1)

{
                    /* 0xde45  454  ??4CPNEdit@@QAEAAV0@ABV0@@Z */
  CPNWindow::operator=((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  CPNColor::operator=((CPNColor *)(this + 0xc0),(CPNColor *)(param_1 + 0xc0));
  CPNColor::operator=((CPNColor *)(this + 0xdf),(CPNColor *)(param_1 + 0xdf));
  *(undefined4 *)(this + 0xfe) = *(undefined4 *)(param_1 + 0xfe);
  *(undefined4 *)(this + 0x102) = *(undefined4 *)(param_1 + 0x102);
  *(undefined4 *)(this + 0x106) = *(undefined4 *)(param_1 + 0x106);
  *(undefined4 *)(this + 0x10a) = *(undefined4 *)(param_1 + 0x10a);
  *(undefined4 *)(this + 0x10e) = *(undefined4 *)(param_1 + 0x10e);
  this[0x112] = param_1[0x112];
  return this;
}


