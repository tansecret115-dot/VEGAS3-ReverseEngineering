/* Module: pngu3266.dll
   Function: XPNPropertyPage
   Address: 605fe4eb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNPropertyPage::XPNPropertyPage(class XPNPropertyPage const &) */

XPNPropertyPage * __thiscall
XPNPropertyPage::XPNPropertyPage(XPNPropertyPage *this,XPNPropertyPage *param_1)

{
                    /* 0xe4eb  261  ??0XPNPropertyPage@@QAE@ABV0@@Z */
  CPNDialog::CPNDialog((CPNDialog *)this,(CPNDialog *)param_1);
  FUN_60618bd0(this + 0xd0,(int *)(param_1 + 0xd0));
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined ***)this = &_vftable_;
  return this;
}


