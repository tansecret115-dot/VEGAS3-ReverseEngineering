/* Module: pngu3266.dll
   Function: AddRef
   Address: 60613f31
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __stdcall XPNWizardManager::AddRef(void) */

ulong XPNWizardManager::AddRef(void)

{
  ulong uVar1;
  int in_stack_00000004;
  
                    /* 0x23f31  769  ?AddRef@XPNWizardManager@@UAGKXZ */
  uVar1 = InterlockedIncrement((LONG *)(in_stack_00000004 + 0x3c));
  return uVar1;
}


