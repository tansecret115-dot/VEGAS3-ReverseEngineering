/* Module: pngu3266.dll
   Function: DestroyPage
   Address: 606150a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __stdcall XPNWizardPage::DestroyPage(void) */

long XPNWizardPage::DestroyPage(void)

{
  int iVar1;
  int *in_stack_00000004;
  
                    /* 0x250a0  945  ?DestroyPage@XPNWizardPage@@UAGJXZ */
  iVar1 = (**(code **)(*in_stack_00000004 + 0x20))();
  if (iVar1 != 0) {
    (**(code **)(in_stack_00000004[-0x34] + 300))(0);
  }
  return 0;
}


