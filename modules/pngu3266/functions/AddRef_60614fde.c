/* Module: pngu3266.dll
   Function: AddRef
   Address: 60614fde
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __stdcall XPNWizardPage::AddRef(void) */

ulong XPNWizardPage::AddRef(void)

{
  ulong uVar1;
  int in_stack_00000004;
  
                    /* 0x24fde  770  ?AddRef@XPNWizardPage@@UAGKXZ */
  uVar1 = InterlockedIncrement((LONG *)(in_stack_00000004 + 0x1c));
  return uVar1;
}


