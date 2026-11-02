/* Module: pngu3266.dll
   Function: ~XPNOpenFileDialog
   Address: 60613a71
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNOpenFileDialog::~XPNOpenFileDialog(void) */

void __thiscall XPNOpenFileDialog::~XPNOpenFileDialog(XPNOpenFileDialog *this)

{
                    /* 0x23a71  406  ??1XPNOpenFileDialog@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  FUN_60618cd0((int *)(this + 0x100));
  FUN_60618cd0((int *)(this + 0xf4));
  FUN_60618cd0((int *)(this + 0xe8));
  FUN_60618cd0((int *)(this + 0xdc));
  FUN_60618cd0((int *)(this + 0xd0));
  CPNDialog::~CPNDialog((CPNDialog *)this);
  return;
}


