/* Module: rmbe3260.dll
   Function: FUN_660054a0
   Address: 660054a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660054a0(CPNPropertyPage *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x130);
  *(undefined ***)param_1 = &PTR_FUN_66063278;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x134);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  FUN_6605b770((int *)(param_1 + 0x104));
  CPNPropertyPage::~CPNPropertyPage(param_1);
  return;
}


