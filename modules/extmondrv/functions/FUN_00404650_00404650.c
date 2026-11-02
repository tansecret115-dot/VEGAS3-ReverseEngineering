/* Module: extmondrv.dll
   Function: FUN_00404650
   Address: 00404650
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00404650(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_0044d84c;
  param_1[1] = &PTR_LAB_0044d83c;
  FUN_00404a50((int)param_1,param_1[5]);
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[9] = 0;
  }
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[10] = 0;
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0x48))(1);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(*(int *)(param_1[4] + 4) + 0x48))(1);
    param_1[4] = 0;
  }
  return;
}


