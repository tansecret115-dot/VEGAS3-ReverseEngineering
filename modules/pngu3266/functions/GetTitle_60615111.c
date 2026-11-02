/* Module: pngu3266.dll
   Function: GetTitle
   Address: 60615111
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual char const * __stdcall XPNWizardPage::GetTitle(void) */

char * XPNWizardPage::GetTitle(void)

{
  int in_stack_00000004;
  
                    /* 0x25111  1397  ?GetTitle@XPNWizardPage@@UAGPBDXZ */
  return *(char **)(in_stack_00000004 + 8);
}


