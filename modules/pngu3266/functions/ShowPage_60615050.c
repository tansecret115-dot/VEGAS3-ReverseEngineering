/* Module: pngu3266.dll
   Function: ShowPage
   Address: 60615050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __stdcall XPNWizardPage::ShowPage(int) */

long XPNWizardPage::ShowPage(int param_1)

{
  int iVar1;
  
                    /* 0x25050  2067  ?ShowPage@XPNWizardPage@@UAGJH@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0x20))(param_1);
  if (iVar1 == 0) {
    if (param_1 != 0) {
      (**(code **)(*(int *)(param_1 + -0xd0) + 0x120))();
      (**(code **)(*(int *)param_1 + 0x10))(param_1,param_1);
    }
  }
  else {
    (**(code **)(*(int *)(param_1 + -0xd0) + 0x98))(param_1);
  }
  return 0;
}


