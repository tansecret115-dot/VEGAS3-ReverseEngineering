/* Module: pngu3266.dll
   Function: SetWizardButton
   Address: 60614c91
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __stdcall XPNWizardManager::SetWizardButton(unsigned long,int) */

int XPNWizardManager::SetWizardButton(ulong param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_stack_0000000c;
  
                    /* 0x24c91  2046  ?SetWizardButton@XPNWizardManager@@UAGHKH@Z */
  iVar3 = 0;
  if (param_2 == 2) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  else if (param_2 == 0x66) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
  }
  else if (param_2 == 0x67) {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
  }
  else if (param_2 == 0x68) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    if (param_2 != 0x69) goto LAB_60614cd3;
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = in_stack_0000000c;
  iVar3 = 1;
LAB_60614cd3:
  iVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
  if (iVar2 != 0) {
    ChangeBtnStates((XPNWizardManager *)(param_1 - 0xd0));
  }
  return iVar3;
}


