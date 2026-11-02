/* Module: pngu3266.dll
   Function: ~CPNCheckedListbox
   Address: 60603d68
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNCheckedListbox::~CPNCheckedListbox(void) */

void __thiscall CPNCheckedListbox::~CPNCheckedListbox(CPNCheckedListbox *this)

{
                    /* 0x13d68  314  ??1CPNCheckedListbox@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(int *)(this + 0xc0) != 0) {
    ClearItemList(this);
    if (*(undefined4 **)(this + 0xc0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0xc0))(1);
    }
    *(undefined4 *)(this + 0xc0) = 0;
  }
  *(undefined ***)this = &XPNListBox::_vftable_;
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


