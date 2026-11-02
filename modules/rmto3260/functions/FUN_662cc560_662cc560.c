/* Module: rmto3260.dll
   Function: FUN_662cc560
   Address: 662cc560
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662cc560(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[9];
  *param_1 = &PTR_FUN_66307020;
  param_1[4] = &PTR_LAB_66307000;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[9] = 0;
  }
  FUN_662cc5b0((int)param_1);
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[10] = 0;
  }
  *param_1 = &PTR_FUN_66306400;
  return;
}


