/* Module: pngu3266.dll
   Function: XPNBrowseDialog
   Address: 60605671
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNBrowseDialog::XPNBrowseDialog(class CPNWindow *) */

XPNBrowseDialog * __thiscall
XPNBrowseDialog::XPNBrowseDialog(XPNBrowseDialog *this,CPNWindow *param_1)

{
                    /* 0x15671  187  ??0XPNBrowseDialog@@QAE@PAVCPNWindow@@@Z */
  CPNDialog::CPNDialog((CPNDialog *)this,0,param_1);
  FUN_60618bb0((undefined4 *)(this + 0xd0));
  FUN_60618bb0((undefined4 *)(this + 0xdc));
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


