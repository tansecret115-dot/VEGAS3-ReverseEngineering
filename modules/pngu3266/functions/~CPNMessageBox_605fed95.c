/* Module: pngu3266.dll
   Function: ~CPNMessageBox
   Address: 605fed95
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNMessageBox::~CPNMessageBox(void) */

void __thiscall CPNMessageBox::~CPNMessageBox(CPNMessageBox *this)

{
                    /* 0xed95  345  ??1CPNMessageBox@@UAE@XZ
                       0xed95  404  ??1XPNMessageBox@@MAE@XZ */
  *(undefined ***)this = &XPNMessageBox::_vftable_;
  CPNDialog::~CPNDialog((CPNDialog *)this);
  return;
}


