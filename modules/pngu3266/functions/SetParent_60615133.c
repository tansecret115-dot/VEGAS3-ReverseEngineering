/* Module: pngu3266.dll
   Function: SetParent
   Address: 60615133
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __stdcall XPNWizardPage::SetParent(void *) */

long XPNWizardPage::SetParent(void *param_1)

{
  CPNWindow *pCVar1;
  void *in_stack_00000008;
  
                    /* 0x25133  1958  ?SetParent@XPNWizardPage@@UAGJPAX@Z */
  pCVar1 = CPNWindow::GetPNWindow(in_stack_00000008);
  if (pCVar1 != (CPNWindow *)0x0) {
    CPNWindow::SetParent((CPNWindow *)((int)param_1 + -0xd0),pCVar1);
  }
  return 0;
}


