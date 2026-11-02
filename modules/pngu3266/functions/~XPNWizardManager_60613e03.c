/* Module: pngu3266.dll
   Function: ~XPNWizardManager
   Address: 60613e03
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNWizardManager::~XPNWizardManager(void) */

void __thiscall XPNWizardManager::~XPNWizardManager(XPNWizardManager *this)

{
                    /* 0x23e03  428  ??1XPNWizardManager@@MAE@XZ */
  *(undefined ***)this = &_vftable__for__CPNDialog__;
  *(undefined ***)(this + 0xd0) = &_vftable__for__IPNWizardManager__;
  FUN_6061a4d0(this + 0xd4,0,0xffffffff);
  if (*(undefined4 **)(this + 0x108) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x108))(1);
  }
  FUN_6061a4c0((undefined4 *)(this + 0xd4));
  CPNDialog::~CPNDialog((CPNDialog *)this);
  return;
}


