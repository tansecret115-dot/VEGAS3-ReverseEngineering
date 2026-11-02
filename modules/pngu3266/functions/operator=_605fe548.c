/* Module: pngu3266.dll
   Function: operator=
   Address: 605fe548
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNPropertyPage & __thiscall XPNPropertyPage::operator=(class XPNPropertyPage const
   &) */

XPNPropertyPage * __thiscall
XPNPropertyPage::operator=(XPNPropertyPage *this,XPNPropertyPage *param_1)

{
                    /* 0xe548  543  ??4XPNPropertyPage@@QAEAAV0@ABV0@@Z */
  CPNDialog::operator=((CPNDialog *)this,(CPNDialog *)param_1);
  FUN_60618e60(this + 0xd0,(int *)(param_1 + 0xd0));
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  return this;
}


