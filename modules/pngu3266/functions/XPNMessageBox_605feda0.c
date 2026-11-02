/* Module: pngu3266.dll
   Function: XPNMessageBox
   Address: 605feda0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNMessageBox::XPNMessageBox(class XPNMessageBox const &) */

XPNMessageBox * __thiscall XPNMessageBox::XPNMessageBox(XPNMessageBox *this,XPNMessageBox *param_1)

{
  undefined4 uVar1;
  
                    /* 0xeda0  243  ??0XPNMessageBox@@QAE@ABV0@@Z */
  CPNDialog::CPNDialog((CPNDialog *)this,(CPNDialog *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xd0);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xd0) = uVar1;
  return this;
}


