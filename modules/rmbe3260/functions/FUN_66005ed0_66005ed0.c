/* Module: rmbe3260.dll
   Function: FUN_66005ed0
   Address: 66005ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66005ed0(CPNPropertyPage *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x134);
  *(undefined ***)param_1 = &PTR_FUN_660633f8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  FUN_6605b770((int *)(param_1 + 0x104));
  CPNPropertyPage::~CPNPropertyPage(param_1);
  return;
}


