/* Module: pngu3266.dll
   Function: ~XPNDialog
   Address: 6060bb67
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNDialog::~XPNDialog(void) */

void __thiscall XPNDialog::~XPNDialog(XPNDialog *this)

{
                    /* 0x1bb67  390  ??1XPNDialog@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNWindow::~CPNWindow((CPNWindow *)this);
  return;
}


