/* Module: rmbe3260.dll
   Function: FUN_660066a0
   Address: 660066a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660066a0(CPNPropertyPage *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x120);
  *(undefined ***)param_1 = &PTR_FUN_66063578;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  FUN_6605b770((int *)(param_1 + 0x104));
  CPNPropertyPage::~CPNPropertyPage(param_1);
  return;
}


