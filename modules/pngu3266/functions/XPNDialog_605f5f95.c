/* Module: pngu3266.dll
   Function: XPNDialog
   Address: 605f5f95
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNDialog::XPNDialog(class XPNDialog const &) */

XPNDialog * __thiscall XPNDialog::XPNDialog(XPNDialog *this,XPNDialog *param_1)

{
  undefined4 uVar1;
  
                    /* 0x5f95  211  ??0XPNDialog@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xb8) = uVar1;
  return this;
}


