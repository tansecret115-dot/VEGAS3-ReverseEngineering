/* Module: pngu3266.dll
   Function: CleanupPages
   Address: 606148bd
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNWizardManager::CleanupPages(void) */

void __thiscall XPNWizardManager::CleanupPages(XPNWizardManager *this)

{
  int *piVar1;
  int iVar2;
  
                    /* 0x248bd  856  ?CleanupPages@XPNWizardManager@@IAEXXZ */
  iVar2 = *(int *)(this + 0xd8) + -1;
  if (-1 < iVar2) {
    do {
      piVar1 = *(int **)(*(int *)(this + 0xd4) + iVar2 * 4);
      (**(code **)(*piVar1 + 0xc))(piVar1);
      FUN_6061a710(this + 0xd4,iVar2,1);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return;
}


