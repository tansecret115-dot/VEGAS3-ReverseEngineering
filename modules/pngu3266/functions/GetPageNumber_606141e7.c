/* Module: pngu3266.dll
   Function: GetPageNumber
   Address: 606141e7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __stdcall XPNWizardManager::GetPageNumber(struct IPNWizardPage const
   *,unsigned long &) */

long XPNWizardManager::GetPageNumber(IPNWizardPage *param_1,ulong *param_2)

{
  int *piVar1;
  uint uVar2;
  uint *in_stack_0000000c;
  
                    /* 0x241e7  1290  ?GetPageNumber@XPNWizardManager@@UAGJPBUIPNWizardPage@@AAK@Z
                        */
  uVar2 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    piVar1 = *(int **)(param_1 + 4);
    do {
      if ((ulong *)*piVar1 == param_2) {
        *in_stack_0000000c = uVar2;
        return 0;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  return -0x7ff8ffa9;
}


