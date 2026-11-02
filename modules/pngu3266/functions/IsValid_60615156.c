/* Module: pngu3266.dll
   Function: IsValid
   Address: 60615156
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __stdcall XPNWizardPage::IsValid(void) */

int XPNWizardPage::IsValid(void)

{
  int iVar1;
  int in_stack_00000004;
  
                    /* 0x25156  1529  ?IsValid@XPNWizardPage@@UAGHXZ */
  iVar1 = CPNWindow::IsValid((CPNWindow *)(in_stack_00000004 + -0xd0));
  return iVar1;
}


