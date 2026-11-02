/* Module: pngu3266.dll
   Function: OnHelpBtn
   Address: 60614a63
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNWizardManager::OnHelpBtn(void) */

void __thiscall XPNWizardManager::OnHelpBtn(XPNWizardManager *this)

{
  int *piVar1;
  
                    /* 0x24a63  1636  ?OnHelpBtn@XPNWizardManager@@MAEXXZ */
  piVar1 = *(int **)(*(int *)(this + 0xd4) + *(int *)(this + 0x100) * 4);
  (**(code **)(*piVar1 + 0x4c))(piVar1);
  return;
}


