/* Module: pngu3266.dll
   Function: CPNDialog
   Address: 605f6024
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNDialog::CPNDialog(class CPNDialog const &) */

CPNDialog * __thiscall CPNDialog::CPNDialog(CPNDialog *this,CPNDialog *param_1)

{
  undefined4 uVar1;
  
                    /* 0x6024  55  ??0CPNDialog@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &XPNDialog::_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined ***)this = &_vftable_;
  return this;
}


