/* Module: pngu3266.dll
   Function: CPNListBox
   Address: 60600308
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNListBox::CPNListBox(void) */

CPNListBox * __thiscall CPNListBox::CPNListBox(CPNListBox *this)

{
                    /* 0x10308  89  ??0CPNListBox@@QAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}


