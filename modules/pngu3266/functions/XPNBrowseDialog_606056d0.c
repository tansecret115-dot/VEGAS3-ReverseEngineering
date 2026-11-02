/* Module: pngu3266.dll
   Function: XPNBrowseDialog
   Address: 606056d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNBrowseDialog::XPNBrowseDialog(class XPNBrowseDialog const &) */

XPNBrowseDialog * __thiscall
XPNBrowseDialog::XPNBrowseDialog(XPNBrowseDialog *this,XPNBrowseDialog *param_1)

{
  undefined4 uVar1;
  
                    /* 0x156d0  186  ??0XPNBrowseDialog@@QAE@ABV0@@Z */
  CPNDialog::CPNDialog((CPNDialog *)this,(CPNDialog *)param_1);
  FUN_60618bd0(this + 0xd0,(int *)(param_1 + 0xd0));
  FUN_60618bd0(this + 0xdc,(int *)(param_1 + 0xdc));
  uVar1 = *(undefined4 *)(param_1 + 0xe8);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xe8) = uVar1;
  return this;
}


