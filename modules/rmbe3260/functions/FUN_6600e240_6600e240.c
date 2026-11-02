/* Module: rmbe3260.dll
   Function: FUN_6600e240
   Address: 6600e240
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6600e240(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[9];
  *param_1 = &PTR_FUN_660647c0;
  param_1[4] = &PTR_LAB_660647a8;
  param_1[5] = &PTR_LAB_66064740;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[9] = 0;
  }
  FUN_6605b770(param_1 + 0x12);
  *param_1 = &PTR_FUN_66063e30;
  return;
}


