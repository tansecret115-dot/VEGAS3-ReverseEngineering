/* Module: pngu3266.dll
   Function: XPNWizardPage
   Address: 60614cf2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNWizardPage::XPNWizardPage(class XPNWizardPage const &) */

XPNWizardPage * __thiscall XPNWizardPage::XPNWizardPage(XPNWizardPage *this,XPNWizardPage *param_1)

{
                    /* 0x24cf2  301  ??0XPNWizardPage@@QAE@ABV0@@Z */
  CPNDialog::CPNDialog((CPNDialog *)this,(CPNDialog *)param_1);
  *(undefined ***)(this + 0xd0) = &PTR_LAB_6062bc58;
  *(undefined ***)(this + 0xd4) = &PTR_LAB_6062bc40;
  FUN_60618bd0(this + 0xd8,(int *)(param_1 + 0xd8));
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined ***)this = &_vftable__for__CPNDialog__;
  *(undefined ***)(this + 0xd0) = &_vftable__for__IPNWizardPage__;
  *(undefined ***)(this + 0xd4) = &_vftable__for__IRNStreamableObj__;
  return this;
}


