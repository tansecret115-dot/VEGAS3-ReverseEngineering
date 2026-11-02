/* Module: pngu3266.dll
   Function: ~XPNBrowseDialog
   Address: 606056a8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNBrowseDialog::~XPNBrowseDialog(void) */

void __thiscall XPNBrowseDialog::~XPNBrowseDialog(XPNBrowseDialog *this)

{
                    /* 0x156a8  379  ??1XPNBrowseDialog@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  FUN_60618cd0((int *)(this + 0xdc));
  FUN_60618cd0((int *)(this + 0xd0));
  CPNDialog::~CPNDialog((CPNDialog *)this);
  return;
}


