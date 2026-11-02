/* Module: pngu3266.dll
   Function: InitDialog
   Address: 6061501d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall XPNWizardPage::InitDialog(void) */

int __thiscall XPNWizardPage::InitDialog(XPNWizardPage *this)

{
                    /* 0x2501d  1462  ?InitDialog@XPNWizardPage@@MAEHXZ */
  (**(code **)(*(int *)this + 0x44))(this + 0xe4);
  (**(code **)(*(int *)(this + 0xd0) + 0x28))(this + 0xd0);
  return 1;
}


