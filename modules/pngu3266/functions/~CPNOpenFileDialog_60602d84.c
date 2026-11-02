/* Module: pngu3266.dll
   Function: ~CPNOpenFileDialog
   Address: 60602d84
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNOpenFileDialog::~CPNOpenFileDialog(void) */

void __thiscall CPNOpenFileDialog::~CPNOpenFileDialog(CPNOpenFileDialog *this)

{
                    /* 0x12d84  348  ??1CPNOpenFileDialog@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNOpenFileDialog::~XPNOpenFileDialog((XPNOpenFileDialog *)this);
  return;
}


