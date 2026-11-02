/* Module: pngu3266.dll
   Function: HandleEvent
   Address: 60614bdd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNWizardManager::HandleEvent(class CPNEvent &) */

void __thiscall XPNWizardManager::HandleEvent(XPNWizardManager *this,CPNEvent *param_1)

{
  int iVar1;
  
                    /* 0x24bdd  1443  ?HandleEvent@XPNWizardManager@@MAEXAAVCPNEvent@@@Z */
  if ((*(int *)(param_1 + 8) == -0x80000000) && (*(int *)(param_1 + 0xc) == 1)) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 2) {
      (**(code **)(*(int *)this + 0x154))();
    }
    else if (iVar1 == 0x66) {
      (**(code **)(*(int *)this + 0x14c))();
    }
    else if (iVar1 == 0x67) {
      (**(code **)(*(int *)this + 0x150))();
    }
    else if (iVar1 == 0x68) {
      (**(code **)(*(int *)this + 0x158))();
    }
    else if (iVar1 == 0x69) {
      (**(code **)(*(int *)this + 0x15c))();
    }
  }
  return;
}


