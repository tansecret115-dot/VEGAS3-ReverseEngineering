/* Module: rmbe3260.dll
   Function: FUN_660018b0
   Address: 660018b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660018b0(CPNPropertyPage *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x40e);
  *(undefined ***)param_1 = &PTR_FUN_66062688;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x40e) = 0;
  }
  FUN_66001220(param_1);
  return;
}


