/* Module: pngu3266.dll
   Function: operator=
   Address: 60603c81
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNCheckedListbox & __thiscall CPNCheckedListbox::operator=(class CPNCheckedListbox
   const &) */

CPNCheckedListbox * __thiscall
CPNCheckedListbox::operator=(CPNCheckedListbox *this,CPNCheckedListbox *param_1)

{
                    /* 0x13c81  440  ??4CPNCheckedListbox@@QAEAAV0@ABV0@@Z */
  CPNWindow::operator=((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  return this;
}


