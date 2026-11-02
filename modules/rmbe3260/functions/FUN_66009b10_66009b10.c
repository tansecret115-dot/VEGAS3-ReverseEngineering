/* Module: rmbe3260.dll
   Function: FUN_66009b10
   Address: 66009b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66009b10(XPNWizardPage *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x108);
  *(undefined ***)param_1 = &PTR_FUN_66064050;
  *(undefined ***)(param_1 + 0xd0) = &PTR_LAB_66064000;
  *(undefined ***)(param_1 + 0xd4) = &PTR_LAB_66063fe8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  FUN_6605b770((int *)(param_1 + 0xfc));
  *(undefined ***)param_1 = &PTR_FUN_66064208;
  *(undefined ***)(param_1 + 0xd0) = &PTR_LAB_660641b8;
  *(undefined ***)(param_1 + 0xd4) = &PTR_LAB_660641a0;
  XPNWizardPage::~XPNWizardPage(param_1);
  return;
}


