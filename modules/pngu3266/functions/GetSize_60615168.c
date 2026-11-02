/* Module: pngu3266.dll
   Function: GetSize
   Address: 60615168
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __stdcall XPNWizardPage::GetSize(struct _PNxSize &) */

long XPNWizardPage::GetSize(_PNxSize *param_1)

{
  undefined4 *in_stack_00000008;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x25168  1356  ?GetSize@XPNWizardPage@@UAGJAAU_PNxSize@@@Z */
  CPNWindow::GetSize((CPNWindow *)(param_1 + -0xd0),(CPNxSize *)&local_c);
  *in_stack_00000008 = local_c;
  in_stack_00000008[1] = local_8;
  return 0;
}


