/* Module: pngu3266.dll
   Function: XPNWizardPage
   Address: 60614e62
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNWizardPage::XPNWizardPage(unsigned long,char const *) */

XPNWizardPage * __thiscall
XPNWizardPage::XPNWizardPage(XPNWizardPage *this,ulong param_1,char *param_2)

{
                    /* 0x24e62  299  ??0XPNWizardPage@@IAE@KPBD@Z */
  CPNDialog::CPNDialog((CPNDialog *)this,param_1,(CPNWindow *)0x0);
  *(undefined ***)(this + 0xd0) = &PTR_LAB_6062bc58;
  *(undefined ***)(this + 0xd4) = &PTR_LAB_6062bc40;
  FUN_60618d40(this + 0xd8,param_2);
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined ***)this = &_vftable__for__CPNDialog__;
  *(undefined ***)(this + 0xd0) = &_vftable__for__IPNWizardPage__;
  *(undefined ***)(this + 0xd4) = &_vftable__for__IRNStreamableObj__;
  return this;
}


