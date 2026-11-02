/* Module: pngu3266.dll
   Function: CPNCheckedListbox
   Address: 60603c30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNCheckedListbox::CPNCheckedListbox(class CPNCheckedListbox const &) */

CPNCheckedListbox * __thiscall
CPNCheckedListbox::CPNCheckedListbox(CPNCheckedListbox *this,CPNCheckedListbox *param_1)

{
                    /* 0x13c30  24  ??0CPNCheckedListbox@@QAE@ABV0@@Z */
  XPNListBox::XPNListBox((XPNListBox *)this,(XPNListBox *)param_1);
  *(undefined ***)this = &CPNListBox::_vftable_;
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined ***)this = &_vftable_;
  return this;
}


