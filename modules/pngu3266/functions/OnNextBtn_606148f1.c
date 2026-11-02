/* Module: pngu3266.dll
   Function: OnNextBtn
   Address: 606148f1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNWizardManager::OnNextBtn(void) */

void __thiscall XPNWizardManager::OnNextBtn(XPNWizardManager *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* 0x248f1  1663  ?OnNextBtn@XPNWizardManager@@MAEXXZ */
  piVar1 = *(int **)(*(int *)(this + 0xd4) + *(int *)(this + 0x100) * 4);
  iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1);
  if (iVar2 != 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,0);
    (**(code **)(*piVar1 + 0x48))(piVar1);
    *(int *)(this + 0x100) = *(int *)(this + 0x100) + 1;
    piVar1 = *(int **)(*(int *)(this + 0xd4) + *(int *)(this + 0x100) * 4);
    ChangeBtnStates(this);
    (**(code **)(*piVar1 + 0x10))(piVar1,1);
    (**(code **)(*piVar1 + 0x44))(piVar1);
    (**(code **)(*(int *)this + 0x78))(0,1);
    iVar2 = *(int *)this;
    uVar3 = (**(code **)(*piVar1 + 0x18))(piVar1);
    (**(code **)(iVar2 + 0x20))(uVar3);
  }
  return;
}


