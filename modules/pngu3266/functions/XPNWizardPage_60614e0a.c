/* Module: pngu3266.dll
   Function: XPNWizardPage
   Address: 60614e0a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNWizardPage::XPNWizardPage(void) */

XPNWizardPage * __thiscall XPNWizardPage::XPNWizardPage(XPNWizardPage *this)

{
                    /* 0x24e0a  300  ??0XPNWizardPage@@IAE@XZ */
  CPNDialog::CPNDialog((CPNDialog *)this);
  *(undefined ***)(this + 0xd0) = &PTR_LAB_6062bc58;
  *(undefined ***)(this + 0xd4) = &PTR_LAB_6062bc40;
  FUN_60618bb0((undefined4 *)(this + 0xd8));
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined ***)this = &_vftable__for__CPNDialog__;
  *(undefined ***)(this + 0xd0) = &_vftable__for__IPNWizardPage__;
  *(undefined ***)(this + 0xd4) = &_vftable__for__IRNStreamableObj__;
  return this;
}


