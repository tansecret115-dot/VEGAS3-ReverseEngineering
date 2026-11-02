/* Module: pngu3266.dll
   Function: CPNBrowseDialog
   Address: 606057e5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNBrowseDialog::CPNBrowseDialog(class CPNWindow *) */

CPNBrowseDialog * __thiscall
CPNBrowseDialog::CPNBrowseDialog(CPNBrowseDialog *this,CPNWindow *param_1)

{
                    /* 0x157e5  13  ??0CPNBrowseDialog@@QAE@PAVCPNWindow@@@Z */
  XPNBrowseDialog::XPNBrowseDialog((XPNBrowseDialog *)this,param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


