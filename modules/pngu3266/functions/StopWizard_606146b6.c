/* Module: pngu3266.dll
   Function: StopWizard
   Address: 606146b6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNWizardManager::StopWizard(unsigned long) */

void __thiscall XPNWizardManager::StopWizard(XPNWizardManager *this,ulong param_1)

{
                    /* 0x246b6  2081  ?StopWizard@XPNWizardManager@@IAEXK@Z */
  CleanupPages(this);
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  (**(code **)(*(int *)this + 300))(param_1);
  return;
}


