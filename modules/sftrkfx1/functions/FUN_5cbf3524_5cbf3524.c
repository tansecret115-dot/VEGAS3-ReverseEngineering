/* Module: sftrkfx1.dll
   Function: FUN_5cbf3524
   Address: 5cbf3524
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cbf3524(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x29];
  *param_1 = &PTR_FUN_5cc0aa18;
  param_1[3] = &PTR_LAB_5cc0a9d0;
  param_1[4] = &PTR_LAB_5cc0a9b8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_5cbf0f86((int)param_1);
  return;
}


