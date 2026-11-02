/* Module: pngu3266.dll
   Function: OnFinish
   Address: 60614a1d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNWizardManager::OnFinish(void) */

void __thiscall XPNWizardManager::OnFinish(XPNWizardManager *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x24a1d  1630  ?OnFinish@XPNWizardManager@@MAEXXZ */
  iVar4 = 0;
  iVar1 = *(int *)(this + 0xd8);
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(*(int *)(this + 0xd4) + iVar4 * 4);
      if (((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x20))(piVar2), iVar3 != 0)) &&
         (iVar3 = (**(code **)(*piVar2 + 0x30))(piVar2), iVar3 == 0)) {
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  StopWizard(this,1);
  return;
}


