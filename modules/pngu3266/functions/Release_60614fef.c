/* Module: pngu3266.dll
   Function: Release
   Address: 60614fef
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __stdcall XPNWizardPage::Release(void) */

ulong XPNWizardPage::Release(void)

{
  LONG LVar1;
  ulong uVar2;
  int in_stack_00000004;
  
                    /* 0x24fef  1746  ?Release@XPNWizardPage@@UAGKXZ */
  LVar1 = InterlockedDecrement((LONG *)(in_stack_00000004 + 0x1c));
  if (LVar1 < 1) {
    if ((undefined4 *)(in_stack_00000004 + -0xd0) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(in_stack_00000004 + -0xd0))(1);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulong *)(in_stack_00000004 + 0x1c);
  }
  return uVar2;
}


