/* Module: pngu3266.dll
   Function: operator=
   Address: 60602b55
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNOpenFileDialog & __thiscall XPNOpenFileDialog::operator=(class XPNOpenFileDialog
   const &) */

XPNOpenFileDialog * __thiscall
XPNOpenFileDialog::operator=(XPNOpenFileDialog *this,XPNOpenFileDialog *param_1)

{
                    /* 0x12b55  538  ??4XPNOpenFileDialog@@QAEAAV0@ABV0@@Z */
  CPNDialog::operator=((CPNDialog *)this,(CPNDialog *)param_1);
  FUN_60618e60(this + 0xd0,(int *)(param_1 + 0xd0));
  FUN_60618e60(this + 0xdc,(int *)(param_1 + 0xdc));
  FUN_60618e60(this + 0xe8,(int *)(param_1 + 0xe8));
  FUN_60618e60(this + 0xf4,(int *)(param_1 + 0xf4));
  FUN_60618e60(this + 0x100,(int *)(param_1 + 0x100));
  *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  return this;
}


