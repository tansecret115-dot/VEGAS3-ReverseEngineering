/* Module: pngu3266.dll
   Function: Release
   Address: 60613f42
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __stdcall XPNWizardManager::Release(void) */

ulong XPNWizardManager::Release(void)

{
  LONG LVar1;
  ulong uVar2;
  int in_stack_00000004;
  
                    /* 0x23f42  1745  ?Release@XPNWizardManager@@UAGKXZ */
  LVar1 = InterlockedDecrement((LONG *)(in_stack_00000004 + 0x3c));
  if (LVar1 < 1) {
    if ((undefined4 *)(in_stack_00000004 + -0xd0) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(in_stack_00000004 + -0xd0))(1);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulong *)(in_stack_00000004 + 0x3c);
  }
  return uVar2;
}


