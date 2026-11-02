/* Module: pngu3266.dll
   Function: ~CPNBrowseDialog
   Address: 606057fd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNBrowseDialog::~CPNBrowseDialog(void) */

void __thiscall CPNBrowseDialog::~CPNBrowseDialog(CPNBrowseDialog *this)

{
                    /* 0x157fd  309  ??1CPNBrowseDialog@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNBrowseDialog::~XPNBrowseDialog((XPNBrowseDialog *)this);
  return;
}


