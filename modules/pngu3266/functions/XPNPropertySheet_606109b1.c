/* Module: pngu3266.dll
   Function: XPNPropertySheet
   Address: 606109b1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNPropertySheet::XPNPropertySheet(unsigned long) */

XPNPropertySheet * __thiscall
XPNPropertySheet::XPNPropertySheet(XPNPropertySheet *this,ulong param_1)

{
                    /* 0x209b1  262  ??0XPNPropertySheet@@IAE@K@Z */
  CPNDialog::CPNDialog((CPNDialog *)this);
  FUN_6061a4b0((undefined4 *)(this + 0xd0));
  FUN_60618bb0((undefined4 *)(this + 0xe0));
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(ulong *)(this + 0x104) = param_1;
  return this;
}


