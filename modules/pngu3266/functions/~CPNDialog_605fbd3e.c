/* Module: pngu3266.dll
   Function: ~CPNDialog
   Address: 605fbd3e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNDialog::~CPNDialog(void) */

void __thiscall CPNDialog::~CPNDialog(CPNDialog *this)

{
                    /* 0xbd3e  326  ??1CPNDialog@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNDialog::~XPNDialog((XPNDialog *)this);
  return;
}


