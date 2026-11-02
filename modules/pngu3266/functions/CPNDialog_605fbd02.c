/* Module: pngu3266.dll
   Function: CPNDialog
   Address: 605fbd02
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNDialog::CPNDialog(unsigned long,class CPNWindow *) */

CPNDialog * __thiscall CPNDialog::CPNDialog(CPNDialog *this,ulong param_1,CPNWindow *param_2)

{
                    /* 0xbd02  56  ??0CPNDialog@@QAE@KPAVCPNWindow@@@Z */
  XPNDialog::XPNDialog((XPNDialog *)this,param_1,param_2);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  return this;
}


