/* Module: pngu3266.dll
   Function: XPNDialog
   Address: 6060bb25
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNDialog::XPNDialog(void) */

XPNDialog * __thiscall XPNDialog::XPNDialog(XPNDialog *this)

{
                    /* 0x1bb25  213  ??0XPNDialog@@QAE@XZ */
  CPNWindow::CPNWindow((CPNWindow *)this);
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


