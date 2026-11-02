/* Module: pngu3266.dll
   Function: XPNOpenFileDialog
   Address: 60602abc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNOpenFileDialog::XPNOpenFileDialog(class XPNOpenFileDialog const &) */

XPNOpenFileDialog * __thiscall
XPNOpenFileDialog::XPNOpenFileDialog(XPNOpenFileDialog *this,XPNOpenFileDialog *param_1)

{
                    /* 0x12abc  246  ??0XPNOpenFileDialog@@QAE@ABV0@@Z */
  CPNDialog::CPNDialog((CPNDialog *)this,(CPNDialog *)param_1);
  FUN_60618bd0(this + 0xd0,(int *)(param_1 + 0xd0));
  FUN_60618bd0(this + 0xdc,(int *)(param_1 + 0xdc));
  FUN_60618bd0(this + 0xe8,(int *)(param_1 + 0xe8));
  FUN_60618bd0(this + 0xf4,(int *)(param_1 + 0xf4));
  FUN_60618bd0(this + 0x100,(int *)(param_1 + 0x100));
  *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined ***)this = &_vftable_;
  return this;
}


