/* Module: pngu3266.dll
   Function: RemovePage
   Address: 60614021
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __stdcall XPNWizardManager::RemovePage(struct IPNWizardPage *) */

int XPNWizardManager::RemovePage(IPNWizardPage *param_1)

{
  int *piVar1;
  int iVar2;
  int *in_stack_00000008;
  
                    /* 0x24021  1768  ?RemovePage@XPNWizardManager@@UAGHPAUIPNWizardPage@@@Z */
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = *(int **)(param_1 + 4);
    do {
      if ((int *)*piVar1 == in_stack_00000008) {
        FUN_6061a710(param_1 + 4,iVar2,1);
        (**(code **)(*in_stack_00000008 + 8))();
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return 0;
}


