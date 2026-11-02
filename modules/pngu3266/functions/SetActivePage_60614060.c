/* Module: pngu3266.dll
   Function: SetActivePage
   Address: 60614060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __stdcall XPNWizardManager::SetActivePage(unsigned long) */

int XPNWizardManager::SetActivePage(ulong param_1)

{
  bool bVar1;
  uint in_stack_00000008;
  
                    /* 0x24060  1813  ?SetActivePage@XPNWizardManager@@UAGHK@Z */
  bVar1 = in_stack_00000008 < *(uint *)(param_1 + 8);
  if (bVar1) {
    *(uint *)(param_1 + 0x30) = in_stack_00000008;
  }
  return (uint)bVar1;
}


