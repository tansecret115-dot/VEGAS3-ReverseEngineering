/* Module: pngu3266.dll
   Function: operator=
   Address: 6060571b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNBrowseDialog & __thiscall XPNBrowseDialog::operator=(class XPNBrowseDialog const
   &) */

XPNBrowseDialog * __thiscall
XPNBrowseDialog::operator=(XPNBrowseDialog *this,XPNBrowseDialog *param_1)

{
                    /* 0x1571b  511  ??4XPNBrowseDialog@@QAEAAV0@ABV0@@Z */
  CPNDialog::operator=((CPNDialog *)this,(CPNDialog *)param_1);
  FUN_60618e60(this + 0xd0,(int *)(param_1 + 0xd0));
  FUN_60618e60(this + 0xdc,(int *)(param_1 + 0xdc));
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  return this;
}


