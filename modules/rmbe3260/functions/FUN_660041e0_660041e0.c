/* Module: rmbe3260.dll
   Function: FUN_660041e0
   Address: 660041e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660041e0(CPNPropertyPage *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x130);
  *(undefined ***)param_1 = &PTR_FUN_66062f58;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x134);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x138);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  FUN_6605b770((int *)(param_1 + 0x150));
  FUN_6605b770((int *)(param_1 + 0x144));
  CPNPropertyPage::~CPNPropertyPage(param_1);
  return;
}


