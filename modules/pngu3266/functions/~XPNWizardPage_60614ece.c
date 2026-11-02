/* Module: pngu3266.dll
   Function: ~XPNWizardPage
   Address: 60614ece
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNWizardPage::~XPNWizardPage(void) */

void __thiscall XPNWizardPage::~XPNWizardPage(XPNWizardPage *this)

{
                    /* 0x24ece  429  ??1XPNWizardPage@@MAE@XZ */
  *(undefined ***)this = &_vftable__for__CPNDialog__;
  *(undefined ***)(this + 0xd0) = &_vftable__for__IPNWizardPage__;
  *(undefined ***)(this + 0xd4) = &_vftable__for__IRNStreamableObj__;
  FUN_60618cd0((int *)(this + 0xd8));
  CPNDialog::~CPNDialog((CPNDialog *)this);
  return;
}


