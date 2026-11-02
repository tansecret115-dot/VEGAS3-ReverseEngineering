/* Module: pngu3266.dll
   Function: XPNOpenFileDialog
   Address: 606139c9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNOpenFileDialog::XPNOpenFileDialog(void) */

XPNOpenFileDialog * __thiscall XPNOpenFileDialog::XPNOpenFileDialog(XPNOpenFileDialog *this)

{
                    /* 0x239c9  248  ??0XPNOpenFileDialog@@QAE@XZ */
  CPNDialog::CPNDialog((CPNDialog *)this);
  FUN_60618bb0((undefined4 *)(this + 0xd0));
  FUN_60618bb0((undefined4 *)(this + 0xdc));
  FUN_60618bb0((undefined4 *)(this + 0xe8));
  FUN_60618bb0((undefined4 *)(this + 0xf4));
  FUN_60618bb0((undefined4 *)(this + 0x100));
  *(undefined ***)this = &_vftable_;
  Initialize(this);
  return this;
}


