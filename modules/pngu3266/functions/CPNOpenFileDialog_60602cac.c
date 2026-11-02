/* Module: pngu3266.dll
   Function: CPNOpenFileDialog
   Address: 60602cac
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNOpenFileDialog::CPNOpenFileDialog(class CPNOpenFileDialog const &) */

CPNOpenFileDialog * __thiscall
CPNOpenFileDialog::CPNOpenFileDialog(CPNOpenFileDialog *this,CPNOpenFileDialog *param_1)

{
                    /* 0x12cac  104  ??0CPNOpenFileDialog@@QAE@ABV0@@Z */
  XPNOpenFileDialog::XPNOpenFileDialog((XPNOpenFileDialog *)this,(XPNOpenFileDialog *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


