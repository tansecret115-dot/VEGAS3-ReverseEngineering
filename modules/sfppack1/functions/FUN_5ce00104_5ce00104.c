/* Module: sfppack1.dll
   Function: FUN_5ce00104
   Address: 5ce00104
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5ce00104(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x29];
  *param_1 = &PTR_FUN_5ce1a780;
  param_1[3] = &PTR_LAB_5ce1a738;
  param_1[4] = &PTR_LAB_5ce1a720;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_5cdfdb66((int)param_1);
  return;
}


