/* Module: pngu3266.dll
   Function: CPNBrowseDialog
   Address: 60605808
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNBrowseDialog::CPNBrowseDialog(class CPNBrowseDialog const &) */

CPNBrowseDialog * __thiscall
CPNBrowseDialog::CPNBrowseDialog(CPNBrowseDialog *this,CPNBrowseDialog *param_1)

{
                    /* 0x15808  12  ??0CPNBrowseDialog@@QAE@ABV0@@Z */
  XPNBrowseDialog::XPNBrowseDialog((XPNBrowseDialog *)this,(XPNBrowseDialog *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


