/* Module: pngu3266.dll
   Function: CPNOpenFileDialog
   Address: 60602d6c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNOpenFileDialog::CPNOpenFileDialog(class CPNWindow *) */

CPNOpenFileDialog * __thiscall
CPNOpenFileDialog::CPNOpenFileDialog(CPNOpenFileDialog *this,CPNWindow *param_1)

{
                    /* 0x12d6c  105  ??0CPNOpenFileDialog@@QAE@PAVCPNWindow@@@Z */
  XPNOpenFileDialog::XPNOpenFileDialog((XPNOpenFileDialog *)this,param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


