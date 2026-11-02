/* Module: pngu3266.dll
   Function: operator=
   Address: 60614d6b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNWizardPage & __thiscall XPNWizardPage::operator=(class XPNWizardPage const &) */

XPNWizardPage * __thiscall XPNWizardPage::operator=(XPNWizardPage *this,XPNWizardPage *param_1)

{
                    /* 0x24d6b  561  ??4XPNWizardPage@@QAEAAV0@ABV0@@Z */
  CPNDialog::operator=((CPNDialog *)this,(CPNDialog *)param_1);
  FUN_60618e60(this + 0xd8,(int *)(param_1 + 0xd8));
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  return this;
}


