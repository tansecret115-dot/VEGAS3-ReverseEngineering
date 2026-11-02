/* Module: rmbe3260.dll
   Function: FUN_66001220
   Address: 66001220
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66001220(CPNPropertyPage *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x104);
  *(undefined ***)param_1 = &PTR_FUN_660624f8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  FUN_6605b770((int *)(param_1 + 0x11e));
  CPNPropertyPage::~CPNPropertyPage(param_1);
  return;
}


