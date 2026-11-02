/* Module: rmbe3260.dll
   Function: FUN_6602aa70
   Address: 6602aa70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6602aa70(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x15];
  *param_1 = &PTR_FUN_660677f0;
  param_1[4] = &PTR_LAB_660677a8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x15] = 0;
  }
  FUN_6602a710(param_1 + 0xb);
  *param_1 = &PTR_FUN_66063e30;
  return;
}


