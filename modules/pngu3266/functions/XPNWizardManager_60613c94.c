/* Module: pngu3266.dll
   Function: XPNWizardManager
   Address: 60613c94
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNWizardManager::XPNWizardManager(void) */

XPNWizardManager * __thiscall XPNWizardManager::XPNWizardManager(XPNWizardManager *this)

{
                    /* 0x23c94  297  ??0XPNWizardManager@@IAE@XZ */
  CPNDialog::CPNDialog((CPNDialog *)this);
  *(undefined ***)(this + 0xd0) = &PTR_LAB_6062ba60;
  FUN_6061a4b0((undefined4 *)(this + 0xd4));
  *(undefined ***)this = &_vftable__for__CPNDialog__;
  *(undefined ***)(this + 0xd0) = &_vftable__for__IPNWizardManager__;
  Initialize(this);
  return this;
}


