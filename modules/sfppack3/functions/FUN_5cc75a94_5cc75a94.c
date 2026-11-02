/* Module: sfppack3.dll
   Function: FUN_5cc75a94
   Address: 5cc75a94
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cc75a94(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x29];
  *param_1 = &PTR_FUN_5cc8ec10;
  param_1[3] = &PTR_LAB_5cc8ebc8;
  param_1[4] = &PTR_LAB_5cc8ebb0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_5cc734f6((int)param_1);
  return;
}


