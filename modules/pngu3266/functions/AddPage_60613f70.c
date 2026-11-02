/* Module: pngu3266.dll
   Function: AddPage
   Address: 60613f70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __stdcall XPNWizardManager::AddPage(struct IPNWizardPage *,int,int) */

int XPNWizardManager::AddPage(IPNWizardPage *param_1,int param_2,int param_3)

{
  int iVar1;
  
                    /* 0x23f70  765  ?AddPage@XPNWizardManager@@UAGHPAUIPNWizardPage@@HH@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0x10))
                    (param_1,param_2,*(undefined4 *)(param_1 + 8),param_3);
  return iVar1;
}


