/* Module: pngu3266.dll
   Function: CPNMessageBox
   Address: 605fee27
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNMessageBox::CPNMessageBox(void) */

CPNMessageBox * __thiscall CPNMessageBox::CPNMessageBox(CPNMessageBox *this)

{
                    /* 0xee27  99  ??0CPNMessageBox@@QAE@XZ */
  CPNDialog::CPNDialog((CPNDialog *)this);
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


