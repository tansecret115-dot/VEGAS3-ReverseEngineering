/* Module: pngu3266.dll
   Function: OnCancel
   Address: 606149d7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNWizardManager::OnCancel(void) */

void __thiscall XPNWizardManager::OnCancel(XPNWizardManager *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x249d7  1594  ?OnCancel@XPNWizardManager@@MAEXXZ */
  iVar4 = 0;
  iVar1 = *(int *)(this + 0xd8);
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(*(int *)(this + 0xd4) + iVar4 * 4);
      if (((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x20))(piVar2), iVar3 != 0)) &&
         (iVar3 = (**(code **)(*piVar2 + 0x34))(piVar2), iVar3 == 0)) {
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  StopWizard(this,0);
  return;
}


