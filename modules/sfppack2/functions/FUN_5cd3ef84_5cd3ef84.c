/* Module: sfppack2.dll
   Function: FUN_5cd3ef84
   Address: 5cd3ef84
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cd3ef84(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x29];
  *param_1 = &PTR_FUN_5cd5a4a8;
  param_1[3] = &PTR_LAB_5cd5a460;
  param_1[4] = &PTR_LAB_5cd5a448;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_5cd3c9e6((int)param_1);
  return;
}


