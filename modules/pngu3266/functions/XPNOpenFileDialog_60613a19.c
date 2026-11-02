/* Module: pngu3266.dll
   Function: XPNOpenFileDialog
   Address: 60613a19
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNOpenFileDialog::XPNOpenFileDialog(class CPNWindow *) */

XPNOpenFileDialog * __thiscall
XPNOpenFileDialog::XPNOpenFileDialog(XPNOpenFileDialog *this,CPNWindow *param_1)

{
                    /* 0x23a19  247  ??0XPNOpenFileDialog@@QAE@PAVCPNWindow@@@Z */
  CPNDialog::CPNDialog((CPNDialog *)this,0,param_1);
  FUN_60618bb0((undefined4 *)(this + 0xd0));
  FUN_60618bb0((undefined4 *)(this + 0xdc));
  FUN_60618bb0((undefined4 *)(this + 0xe8));
  FUN_60618bb0((undefined4 *)(this + 0xf4));
  FUN_60618bb0((undefined4 *)(this + 0x100));
  *(undefined ***)this = &_vftable_;
  Initialize(this);
  return this;
}


