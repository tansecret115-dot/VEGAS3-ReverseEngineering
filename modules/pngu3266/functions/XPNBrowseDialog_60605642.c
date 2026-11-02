/* Module: pngu3266.dll
   Function: XPNBrowseDialog
   Address: 60605642
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNBrowseDialog::XPNBrowseDialog(void) */

XPNBrowseDialog * __thiscall XPNBrowseDialog::XPNBrowseDialog(XPNBrowseDialog *this)

{
                    /* 0x15642  188  ??0XPNBrowseDialog@@QAE@XZ */
  CPNDialog::CPNDialog((CPNDialog *)this);
  FUN_60618bb0((undefined4 *)(this + 0xd0));
  FUN_60618bb0((undefined4 *)(this + 0xdc));
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


