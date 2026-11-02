/* Module: pngu3266.dll
   Function: ChangeBtnStates
   Address: 606146de
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNWizardManager::ChangeBtnStates(void) */

void __thiscall XPNWizardManager::ChangeBtnStates(XPNWizardManager *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
                    /* 0x246de  842  ?ChangeBtnStates@XPNWizardManager@@IAEXXZ */
  piVar2 = (int *)0x0;
  iVar1 = (**(code **)(**(int **)(this + 0xf0) + 0x94))();
  if (iVar1 != 0) {
    piVar2 = *(int **)(this + 0xf0);
  }
  iVar1 = (**(code **)(**(int **)(this + 0xec) + 0x94))();
  if (iVar1 != 0) {
    piVar2 = *(int **)(this + 0xec);
  }
  iVar1 = (**(code **)(**(int **)(this + 0xe8) + 0x94))();
  if (iVar1 != 0) {
    piVar2 = *(int **)(this + 0xe8);
  }
  (**(code **)(**(int **)(this + 0xf0) + 0xac))(*(int *)(this + 0x100) != 0);
  (**(code **)(**(int **)(this + 0xec) + 0xac))
            (*(int *)(this + 0x100) != *(int *)(this + 0xd8) + -1);
  (**(code **)(**(int **)(this + 0xe8) + 0xac))(*(uint *)(this + 0x104) <= *(uint *)(this + 0x100));
  iVar1 = (**(code **)(**(int **)(this + 0xec) + 0xb0))();
  if (iVar1 == 0) {
    uVar3 = 0x68;
  }
  else {
    uVar3 = 0x66;
  }
  (**(code **)(*(int *)this + 0x140))(uVar3);
  if (piVar2 == (int *)0x0) {
LAB_606147c6:
    iVar1 = (**(code **)(**(int **)(this + 0xe8) + 0xb0))();
    if (iVar1 == 0) {
      iVar1 = (**(code **)(**(int **)(this + 0xec) + 0xb0))();
      if (iVar1 == 0) {
LAB_60614882:
        piVar2 = *(int **)(this + 0xe4);
      }
      else {
LAB_60614860:
        piVar2 = *(int **)(this + 0xec);
      }
    }
    else {
LAB_6061481c:
      piVar2 = *(int **)(this + 0xe8);
    }
  }
  else {
    if (piVar2 == *(int **)(this + 0xf0)) {
      iVar1 = (**(code **)(**(int **)(this + 0xf0) + 0xb0))();
      if (iVar1 != 0) goto LAB_60614890;
      goto LAB_606147c6;
    }
    if (piVar2 == *(int **)(this + 0xec)) {
      iVar1 = (**(code **)(**(int **)(this + 0xec) + 0xb0))();
      if (iVar1 != 0) goto LAB_60614890;
      iVar1 = (**(code **)(**(int **)(this + 0xe8) + 0xb0))();
      if (iVar1 == 0) {
        iVar1 = (**(code **)(**(int **)(this + 0xf0) + 0xb0))();
        if (iVar1 != 0) goto LAB_6061487a;
        goto LAB_60614882;
      }
      goto LAB_6061481c;
    }
    if ((piVar2 != *(int **)(this + 0xe8)) ||
       (iVar1 = (**(code **)(**(int **)(this + 0xe8) + 0xb0))(), iVar1 != 0)) goto LAB_60614890;
    iVar1 = (**(code **)(**(int **)(this + 0xec) + 0xb0))();
    if (iVar1 != 0) goto LAB_60614860;
    iVar1 = (**(code **)(**(int **)(this + 0xf0) + 0xb0))();
    if (iVar1 == 0) goto LAB_60614882;
LAB_6061487a:
    piVar2 = *(int **)(this + 0xf0);
  }
  (**(code **)(*piVar2 + 0x90))();
LAB_60614890:
  if ((*(int **)(this + 0xf8) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(this + 0xf8) + 0x10))(), iVar1 != 0)) {
    (**(code **)(**(int **)(this + 0xf8) + 0xac))(*(undefined4 *)(this + 0xfc));
  }
  return;
}


