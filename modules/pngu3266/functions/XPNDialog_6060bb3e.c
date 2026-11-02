/* Module: pngu3266.dll
   Function: XPNDialog
   Address: 6060bb3e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNDialog::XPNDialog(unsigned long,class CPNWindow *) */

XPNDialog * __thiscall XPNDialog::XPNDialog(XPNDialog *this,ulong param_1,CPNWindow *param_2)

{
                    /* 0x1bb3e  212  ??0XPNDialog@@QAE@KPAVCPNWindow@@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this);
  *(ulong *)(this + 0xb8) = param_1;
  *(undefined ***)this = &_vftable_;
  CPNWindow::SetParent((CPNWindow *)this,param_2);
  return this;
}


