/* Module: pngu3266.dll
   Function: SetPagePosition
   Address: 6061511b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __stdcall XPNWizardPage::SetPagePosition(struct _PNxPoint &) */

long XPNWizardPage::SetPagePosition(_PNxPoint *param_1)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000008;
  
                    /* 0x2511b  1956  ?SetPagePosition@XPNWizardPage@@UAGJAAU_PNxPoint@@@Z */
  uVar1 = in_stack_00000008[1];
  *(undefined4 *)(param_1 + 0x14) = *in_stack_00000008;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return 0;
}


